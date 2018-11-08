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
#include "Headers/Zmumu2Jets_Analysis.h"
#include "Headers/Zee_Analysis.h"
#include "Headers/Zmumu_Analysis.h"
#include "Headers/AddChainFriend.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h> 

void MC_Analysis::Loop() {

   ///------------------------------- DATA EXISTANCE CHECKS ---------------------------///

   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntries();
   Long64_t nbytes = 0, nb = 0;

   ///---------------------------------- ACTUAL FOR LOOP ------------------------------///


   cout << endl << "-------------------- " << AnalysisType << endl;
   int current_indicator = 0;

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

      if (jentry % 500 == 0) { // 1st IF
	
	if (current_indicator == 0) {cout << "                     " << "|"; current_indicator = 1;}
	else if (current_indicator == 1) {cout << "                     " << "/"; current_indicator = 2;}
	else if (current_indicator == 2) {cout << "                     " << "—"; current_indicator = 3;}
	else if (current_indicator == 3) {cout << "                     " << "\\"; current_indicator = 0;}
	cout << " " << setprecision(3) << fixed << (entry_count / max_entries) * 100 << "%\r";
	cout.flush();

      }
	///------------------- ACTUAL ANALYSIS -----------------///
	// EW
 	/// Zee2Jets
	if (AnalysisType == "Zee2Jets") {
		if (Zee2Jets_InitialCut() == false) { // if we're not cutting
			Zee2Jets_GenerateVariables();
			Zee2Jets_FillAllData_PreCut();
			Zee2Jets_CutAndFill();
		}
	}
	/// Zmumu2Jets
	if (AnalysisType == "Zmumu2Jets") {
		if (Zmumu2Jets_InitialCut() == false) { // if we're not cutting
			Zmumu2Jets_GenerateVariables();
			Zmumu2Jets_FillAllData_PreCut();
			Zmumu2Jets_CutAndFill();
		}
	}
   
	// QCD
	/// Zee
	if (AnalysisType == "Zee") {
		if (Zee_InitialCut() == false) { // if we're not cutting
			Zee_GenerateVariables();
			Zee_FillAllData_PreCut();
			Zee_CutAndFill();
		}
	}
   

	/// Zmumu
	if (AnalysisType == "Zmumu") {
		if (Zmumu_InitialCut() == false) { // if we're not cutting
			Zmumu_GenerateVariables();
			Zmumu_FillAllData_PreCut();
			Zmumu_CutAndFill();
		}
	}



	
      } // END of 1st IF
   cout << "                     * 100.0%" << endl;
   cout << "-------------------- Complete" << endl << endl;
   cout << "Number of Entries = " << nentries << endl << endl;    //Output the number of entries

}
