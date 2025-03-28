#include "plot_hvector.h"
#include <TFile.h>
#include <TTree.h>
#include <TCanvas.h>
#include <TH1F.h>
#include <TLegend.h>
#include <TStyle.h>
#include <TSystem.h>
#include <TMultiGraph.h>
#include <TGraph.h>
#include <TText.h>
#include <iostream>
#include <filesystem>

void plotHVectorFile(const std::string& filename) {
    TFile* file = TFile::Open(filename.c_str(), "READ");
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    TTree* tree = dynamic_cast<TTree*>(file->Get("tvec"));
    if (!tree) {
        std::cerr << "Error: Could not find tree 'tvec' in file: " << filename << std::endl;
        file->Close();
        return;
    }

    std::vector<std::string> branches = {"vint", "vpt", "vpx", "vpy", "vpz"};

    // Setup canvas with 3 rows x 2 columns
    TCanvas* canvas = new TCanvas("canvas", "HVector Plots", 1200, 800);
    canvas->Divide(3, 2);

    int plotIndex = 1;
    for (const auto& br : branches) {
        if (tree->FindBranch(br.c_str())) {
            canvas->cd(plotIndex);
            std::string histname = "hist_" + br;
            TH1F* hist = new TH1F(histname.c_str(), br.c_str(), 100, -100, 100); // Adjust range if needed
            tree->Draw((br + ">>" + histname).c_str());
            gPad->SetLogy(1);
            hist->GetXaxis()->SetTitle(br.c_str());
            hist->GetYaxis()->SetTitle("Counts");
            plotIndex++;
        } else {
            std::cerr << "Branch " << br << " not found in file " << filename << std::endl;
        }
    }

    // Save canvas
    std::filesystem::create_directory("plots");
    std::string base = filename.substr(filename.find_last_of("/\\") + 1);
    std::string outname = "plots/plot_" + base + ".png";
    canvas->SaveAs(outname.c_str());

    file->Close();
    delete canvas;
}

#include <vector>
#include <string>

void plotHVectorFile(const std::string& filename); // forward declaration

void plotMultipleFiles(const std::vector<std::string>& filenames) {
    for (const auto& file : filenames) {
        plotHVectorFile(file);
    }
}

