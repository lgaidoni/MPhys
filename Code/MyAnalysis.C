#define MyAnalysis_cxx
#include "Headers/MyAnalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

/////////////////////////////////////////////////////////////////////////////////////////////
///------------------------------- HISTOGRAM FUNCTIONS -----------------------------------///
/////////////////////////////////////////////////////////////////////////////////////////////

//This function will book all the histograms that will be written to by Loop function
///MUST CALL THIS BEFORE LOOP
void MyAnalysis::BookHistos() {

  h_e0_pT = new TH1F("h_e0_pT", "", 100, 0, 100); //Electron 0 pT
  h_e1_pT = new TH1F("h_e1_pT", "", 100, 0, 100); //Electron 1 pT
  h_e0e1_MX = new TH1F("h_e0e1_MX", "", 100, 0, 500); //Invariant mass of e+/e- pair

  h_u0_pT = new TH1F("h_u0_pT", "", 100, 0, 100); //Muon 0 pT
  h_u1_pT = new TH1F("h_u1_pT", "", 100, 0, 100); //Muon 1 pT
  h_u0u1_MX = new TH1F("h_u0u1_MX", "", 100, 0, 500); //Invariant mass of u+/u- pair

}

//This function will draw (crudely) all the histrograms that have been written to by Loop function
///MUST CALL THIS AFTER LOOP
void MyAnalysis::DrawHistos() {

  TFile *Histograms;

  if (gSystem->AccessPathName("../Root-Files/Histograms.root") == 1) TFile *Histograms = new TFile("../Root-Files/Histograms.root","NEW");
  else if (gSystem->AccessPathName("../Root-Files/Histograms.root") == 0) TFile *Histograms = new TFile("../Root-Files/Histograms.root","RECREATE");
  else cout << "Something's gone horribly wrong" << endl;

  //Create a canvas with an appropriate name, of size wxh 600x400
  TCanvas *c_e0_pT = new TCanvas("c_e0_pT", "", 600, 400);
  //Draw the histogram in the most recent canvas
  h_e0_pT->Draw();
  c_e0_pT->Write("Electron_0_Momentum");

  //Create a canvas with an appropriate name
  TCanvas *c_e1_pT = new TCanvas("c_e1_pT", "", 600, 400);
  //Draw the histogram in the most recent canvas
  h_e1_pT->Draw();
  c_e1_pT->Write("Electron_1_Momentum");

  //Create a canvas with an appropriate name
  TCanvas *c_e0e1_MX = new TCanvas("c_e0e1_MX", "", 600, 400);
  //Draw the histogram in the most recent canvas
  h_e0e1_MX->Draw();
  c_e0e1_MX->Write("Electron_0-Electron_1-Invariant_Mass");

  //Create a canvas with an appropriate name, of size wxh 600x400
  TCanvas *c_u0_pT = new TCanvas("c_u0_pT", "", 600, 400);
  //Draw the histogram in the most recent canvas
  h_u0_pT->Draw();
  c_u0_pT->Write("Muon_0_Momentum");

  //Create a canvas with an appropriate name
  TCanvas *c_u1_pT = new TCanvas("c_u1_pT", "", 600, 400);
  //Draw the histogram in the most recent canvas
  h_u1_pT->Draw();
  c_u1_pT->Write("Muon_1_Momentum");

  //Create a canvas with an appropriate name
  TCanvas *c_u0u1_MX = new TCanvas("c_u0u1_MX", "", 600, 400);
  //Draw the histogram in the most recent canvas
  h_u0u1_MX->Draw();
  c_u0u1_MX->Write("Muon_0-Muon_1-Invariant_Mass");


  cout << "Histograms finished now!" << endl;

  Histograms->Close();

}

/////////////////////////////////////////////////////////////////////////////////////////////
///-------------------------- END OF HISTOGRAM FUNCTIONS ---------------------------------///
/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
///---------------------------------- OTHER FUNCTIONS ------------------------------------///
/////////////////////////////////////////////////////////////////////////////////////////////

//This function will search through a folder and output all the root file names
//This might come in handy later 
void list_files(const char *dirname, const char *ext) { 
  TSystemDirectory dir(dirname, dirname); 
  TList *files = dir.GetListOfFiles(); 
  if (files) { 
    TSystemFile *file; 
    TString fname; 
    TIter next(files); 
    while ((file=(TSystemFile*)next())) { 
      fname = file->GetName(); 
      if (!file->IsDirectory() && fname.EndsWith(ext)) { 
        cout << fname.Data() << endl; 
      } 
    } 
  } 
}

/////////////////////////////////////////////////////////////////////////////////////////////
///------------------------------- END OF OTHER FUNCTIONS --------------------------------///
/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
///----------------------------------MAIN LOOP FUNCTION ----------------------------------///
/////////////////////////////////////////////////////////////////////////////////////////////

void MyAnalysis::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MyAnalysis.C
//      root> MyAnalysis t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   ///------------------------------- DATA EXISTANCE CHECKS ----------------------------///

   //If there are no data points, end this function
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();  //Get the number of entries in fchain
   cout << "Number of Entries = " << nentries << endl;    //Output the number of entries
   Long64_t nbytes = 0, nb = 0;

   ///------------------------------------ CONSTANTS ----------------------------------///

   double eMass = 0.511; //MeV
   double uMass = 105.658; //MeV

   ///---------------------------------- ACTUAL FOR LOOP ------------------------------///

   //Loop over the entries in nentries
   for (Long64_t jentry=0; jentry<nentries;jentry++) {

      Long64_t ientry = LoadTree(jentry);  //Load the specific entry
      if (ientry < 0) break;  //Find out what this means
      nb = fChain->GetEntry(jentry);   nbytes += nb;  //Find out what this means
      // if (Cut(ientry) < 0) continue; // Find out what this means
      
      ///-----------------------USER INFORMATION ABOUT ITERATION ----------------------///

      //Let the user know the program is working, and not just frozen
      double entry_count = jentry;
      double max_entries = nentries;
      if (jentry % 10000 == 0) cout << setprecision(1) << fixed << (entry_count / max_entries) * 100 << "%" << endl << endl;

      ///------------------------------ PRE SELECTION CUTS ----------------------------///

      if (elec_0 != 0 && elec_1 != 0) {

         if (elec_0_q == elec_1_q) {

            h_e0_pT->Fill(elec_0_p4->Pt());
            h_e1_pT->Fill(elec_1_p4->Pt());

            double e0e1_MX = ((*elec_0_p4)+(*elec_1_p4)).M();

            h_e0e1_MX->Fill(e0e1_MX);

         }

         else continue;

      }
       
      else if (muon_0 != 0 && muon_1 != 0) {

         if (muon_0_q == muon_1_q) {

            h_u0_pT->Fill(muon_0_p4->Pt());
            h_u1_pT->Fill(muon_1_p4->Pt());

            double u0u1_MX = ((*muon_0_p4)+(*muon_1_p4)).M();

            h_u0u1_MX->Fill(u0u1_MX);

         }

         else continue;

      }


      else continue;



      ///-------------------------------- SEELCTION CUTS ------------------------------///

   }

   cout << "100.0%" << endl;

   cout << "Number of Entries = " << nentries << endl;    //Output the number of entries

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///----------------------------------------- END OF MAIN LOOP FUNCTION -------------------------------------------///
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
