//   In a ROOT session, you can do:
//      root> .L MC_Analysis.C
//      root> MC_Analysis t
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


#define MC_Analysis_cxx
#include "Headers/MC_Analysis.h"
#include "Headers/Zee2Jets_Analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void MC_Analysis::Loop() {

   ///------------------------------- DATA EXISTANCE CHECKS ---------------------------///

   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   ///---------------------------------- ACTUAL FOR LOOP ------------------------------///

   //Loop over all the entries in jentry
   for (Long64_t jentry=0; jentry<nentries;jentry++) {

      ///------------------------------- DATA EXISTANCE CHECKS ------------------------///

      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      ///-----------------------USER INFORMATION ABOUT ITERATION ----------------------///

      //Let the user know the program is working, and not just frozen
      double entry_count = jentry;
      double max_entries = nentries;
      if (jentry % 10000 == 0) cout << setprecision(1) << fixed << (entry_count / max_entries) * 100 << "%" << endl << endl;
 
	     
 
   }

   cout << "100.0%" << endl;
   cout << "Number of Entries = " << nentries << endl;    //Output the number of entries

}
