#include <vector>
#include <iostream>

#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TFrame.h"
#include "TH1F.h"
#include "TBenchmark.h"
#include "TRandom.h"
#include "TSystem.h"

//Originally authored by the ROOT Team: https://root.cern/doc/master/hvector_8C.html


void write(int N=1e6, int autoflush=-30000000, int vecsize=50) // that is the default autoflush value 
{
 
   TFile *f = TFile::Open(Form("hvector_%d_%d_%d.root",N,autoflush,vecsize), "RECREATE");
   float percentComplete = 0.0f; 
   if (!f) { return; }
 
   std::vector<float> vpx;
   std::vector<float> vpy;
   std::vector<float> vpz;
   std::vector<float> vpt;   
   std::vector<int> vint;
 
   std::vector<int> basketSizesKB = {4, 8, 16, 32, 64, 128, 256, 512, 1024};

for (int basketSizeKB : basketSizesKB) {
    std::cerr << "\nWriting file with basket size: " << basketSizeKB << " KB" << std::endl;

    // Open ROOT file for this basket size
    TFile *f = TFile::Open(Form("hvector_basket_%dkB.root", basketSizeKB), "RECREATE");
    if (!f) continue;

    // Create the TTree
    TTree *t = new TTree("tvec", "Tree with vectors");
    t->SetAutoFlush(autoflush);  // Keep your original autoflush setting

    // Branch variables
    std::vector<float> vpx, vpy, vpz, vpt;
    std::vector<int> vint;

    // Create branches
    TBranch* bvpx  = t->Branch("vpx", &vpx);
    TBranch* bvpy  = t->Branch("vpy", &vpy);
    TBranch* bvpz  = t->Branch("vpz", &vpz);
    TBranch* bvpt  = t->Branch("vpt", &vpt);
    TBranch* bvint = t->Branch("vint", &vint);

    // Set basket sizes in bytes
    int bSizeBytes = basketSizeKB * 1024;
    bvpx->SetBasketSize(bSizeBytes);
    bvpy->SetBasketSize(bSizeBytes);
    bvpz->SetBasketSize(bSizeBytes);
    bvpt->SetBasketSize(bSizeBytes);
    bvint->SetBasketSize(bSizeBytes);

    gRandom->SetSeed();
    for (Int_t i = 0; i < N; i++) {
        if (i % 10000 == 0) {
            float percent = ((float)i / N) * 100.f;
            std::cerr << "\rLOOP [write()] @ Basket " << basketSizeKB << "KB: "
                      << percent << "% Complete" << std::flush;
        }

        Int_t npx = (Int_t)(gRandom->Rndm(1) * vecsize);
        vpx.clear(); vpy.clear(); vpz.clear(); vpt.clear(); vint.clear();

        for (Int_t j = 0; j < npx; ++j) {
            Float_t px, py, pz, pt;
            Int_t integer;
            gRandom->Rannor(px, py);
            pt = sqrt(px * px + py * py);
            pz = gRandom->Rndm(1);
            integer = (int)(gRandom->Rndm(1) * npx + npx);

            vpx.emplace_back(px);
            vpy.emplace_back(py);
            vpz.emplace_back(pz);
            vpt.emplace_back(pt);
            vpt.emplace_back(pt); // intentionally pushed twice
            vint.emplace_back(integer);
        }

        t->Fill();
    }

    t->Print();
    f->Write();
    delete f;
}

   // Create a TTree
   TTree *t = new TTree("tvec","Tree with vectors");
   t->SetAutoFlush(autoflush);
   t->Branch("vpx",&vpx);
   t->Branch("vpy",&vpy);
   t->Branch("vpz",&vpz);   
   t->Branch("vpt",&vpt);
   t->Branch("vint",&vint);   
 
}
 
 
 
int main()
{
   int N = 1e6; // match this with N in readROOTFile.cpp
   int vecsize=50;
   std::vector<int> flushes;
   flushes.emplace_back(0);
   flushes.emplace_back(-30000000);
   flushes.emplace_back(-1000000);
   flushes.emplace_back(1e4);
   flushes.emplace_back(1e2);   
   const char* form;
   // Timed write()
   for (auto flush : flushes) {
      std::cerr << "Flush = " << flush << " and N = " << N << " and vec size = " << vecsize << std::endl;
      gBenchmark = new TBenchmark();
      form =  Form("wr_hvec_N%d_F%d_Sz%d",N,flush,vecsize);
      gBenchmark->Start(form);
      write(N, flush); 
      std::cout << std::endl; 
      gBenchmark->Stop(form);
      //gBenchmark->Summary();
      delete gBenchmark;
   }

   return 0;
}
