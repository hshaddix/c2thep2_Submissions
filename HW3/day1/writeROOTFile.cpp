#include <vector>
#include <iostream>
#include <cmath>

#include "TFile.h"
#include "TTree.h"
#include "TH1F.h"
#include "TBenchmark.h"
#include "TRandom.h"

void writeWithBasketSize(int N, int autoflush, int vecsize, int basketSizeKB)
{
   std::string fileName = Form("hvector_N%d_F%d_Sz%d_B%d.root", N, autoflush, vecsize, basketSizeKB);
   TFile *f = TFile::Open(fileName.c_str(), "RECREATE");
   if (!f) return;

   std::vector<float> vpx, vpy, vpz, vpt;
   std::vector<int> vint;

   TTree *t = new TTree("tvec", "Tree with vectors");
   t->SetAutoFlush(autoflush);

   TBranch *bvpx  = t->Branch("vpx",  &vpx);
   TBranch *bvpy  = t->Branch("vpy",  &vpy);
   TBranch *bvpz  = t->Branch("vpz",  &vpz);
   TBranch *bvpt  = t->Branch("vpt",  &vpt);
   TBranch *bvint = t->Branch("vint", &vint);

   int basketSizeBytes = basketSizeKB * 1024;
   bvpx->SetBasketSize(basketSizeBytes);
   bvpy->SetBasketSize(basketSizeBytes);
   bvpz->SetBasketSize(basketSizeBytes);
   bvpt->SetBasketSize(basketSizeBytes);
   bvint->SetBasketSize(basketSizeBytes);

   TRandom rand;

for (int i = 0; i < N; ++i)
{
   if (i % 10000 == 0)
   {
      float pct = ((float)i / N) * 100.f;
      std::cerr << "\rWriting [Basket " << basketSizeKB << "kB]: " << pct << "% complete" << std::flush;
   }

   int n = rand.Integer(vecsize) + 1;
   vpx.clear(); vpy.clear(); vpz.clear(); vpt.clear(); vint.clear();

   for (int j = 0; j < n; ++j)
   {
      float px, py, pt, pz;
      int val;

      if (j < n / 2) {
         // Easily compressible (e.g., fixed pattern)
         px = py = 0.0;
         pz = 1.0;
         pt = 1.0;
         val = 42;  // any constant
      } else {
         // Random, hard-to-compress
         rand.Rannor(px, py);
         pt = std::sqrt(px * px + py * py);
         pz = rand.Rndm();
         val = rand.Integer(n * 2);
      }

      vpx.push_back(px);
      vpy.push_back(py);
      vpz.push_back(pz);
      vpt.push_back(pt);
      vint.push_back(val);
   }

   t->Fill();

   /*
   // Original purely random version (commented out)
   for (int j = 0; j < n; ++j)
   {
      float px, py;
      rand.Rannor(px, py);
      float pt = std::sqrt(px * px + py * py);
      float pz = rand.Rndm();
      int val = rand.Integer(n * 2);  // or: float val = rand.Gaus(0, 1);

      vpx.push_back(px);
      vpy.push_back(py);
      vpz.push_back(pz);
      vpt.push_back(pt);
      vint.push_back(val);  // or static_cast<int>(val);
   }
   */
}

   std::cerr << std::endl;
   t->Print();  // Print tree summary for compression analysis
   f->Write();
   delete f;
}

int main()
{
   int N = 1e6;
   int autoflush = 0;
   int vecsize = 100;

   std::vector<int> basketSizesKB = {4, 8, 16, 32, 64, 128, 256, 512, 1024};

   for (int bsize : basketSizesKB)
   {
      std::cerr << "Generating file with basket size = " << bsize << " kB" << std::endl;
      gBenchmark = new TBenchmark();
      gBenchmark->Start(Form("write_basket_%dkB", bsize));
      writeWithBasketSize(N, autoflush, vecsize, bsize);
      gBenchmark->Show(Form("write_basket_%dkB", bsize));
      delete gBenchmark;
   }

   return 0;
}

