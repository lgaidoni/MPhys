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
#include "Headers/Analysis.h"
#include "Headers/Analysis_Start_Functions.h"
#include "Headers/Run_All_Analyses_Functions.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h> 

void MC_Analysis::Loop() {

   ///------------------------------- INITIAL VARIABLE SETUP ---------------------------///

   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntries();
   Long64_t nbytes = 0, nb = 0;

   clock_t start;
   clock_t one_second_in;
   clock_t finished;
   double entries_per_second;
   double completion_time_double;
   double prev_entries = 0;
   double remaining_entries = 0;
   clock_t completion_time;
   int second_ticker = 5;

   start = clock();
   completion_time = clock();
   int current_indicator = 0;

   ///---------------------------------- ACTUAL FOR LOOP ------------------------------///

   cout << endl << "-------------------- " << AnalysisType << " analysis of " << ChainName << endl << endl;
   cout << "Number of Entries:   " << nentries << endl;
   cout << "Analysis Type:       " << AnalysisType << endl;
   cout << "Chain Name:          " << ChainName << endl;
   cout << "Luminosity Weight:   " << Luminosity_Weight << endl;
   cout << "Start Time:          " << start/CLOCKS_PER_SEC << endl;
   cout << endl << "-------------- " << AnalysisType << endl;
	
   fstream output("../../WWW/status.txt", output.out | output.app);
   time_t now = time(0);
   char* time = ctime(&now);
   output << time << endl;
   output << "\"" << desired_particles << "\" Analysis of " << ChainName << " in progress..." << endl << endl;
   output.close();

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

	if ((clock() - start)/CLOCKS_PER_SEC >= second_ticker) {
		second_ticker += 5;
		entries_per_second = entry_count - prev_entries;
		prev_entries = entry_count;
		completion_time_double = max_entries/(entries_per_second/5);
		completion_time = start + completion_time_double*CLOCKS_PER_SEC;
		//cout << "CTD: " << completion_time_double << " CT: " << completion_time/CLOCKS_PER_SEC <<  " REMENT: " << remaining_entries <<  " EP5: " << entries_per_second << endl;
	}

	if (jentry % 500 == 0) {

		for (int i = 0; i < 77; i++) {
			double percentage = (entry_count / max_entries) * 100;
			int percentageint = (int)(percentage/2 + 27);
			if (i < 26) cout << " ";
			if (i == 26) cout << "[";
			if (i > 26 && i < percentageint) cout << "=";
			if (i == percentageint) cout << "|";
			if (i > percentageint && i < 77) cout << "-";
			if (i == 76) cout << "]";
		}

		cout << "\r";
	
		if (current_indicator == 0)      {cout << "               " << "|"; current_indicator = 1;}
		else if (current_indicator == 1) {cout << "               " << "/"; current_indicator = 2;}
		else if (current_indicator == 2) {cout << "               " << "—"; current_indicator = 3;}
		else if (current_indicator == 3) {cout << "               " << "\\"; current_indicator = 0;}

		cout << " " << setprecision(3) << fixed << (entry_count / max_entries) * 100 << "%\r" << " ETA: " << completion_time/CLOCKS_PER_SEC - clock()/CLOCKS_PER_SEC << "\r";		
		
		cout.flush();

		if (jentry % 100000 == 0) {

			output.open("../../WWW/status.txt", output.out | output.app);
			output << " " << setprecision(3) << fixed << (entry_count / max_entries) * 100 << "%  " << " ETA: " << completion_time/CLOCKS_PER_SEC - clock()/CLOCKS_PER_SEC << endl;
			output.close();
			

		}

	}

	///------------------- ACTUAL ANALYSIS -----------------///

	ParticleSelection();
	if (InitialCut() == false) { // if we're not cutting
		GenerateVariables();
		FillAllData_PreCut();
		CutAndFill();
	}
	
      }
   cout << "               * 100.000% [==================================================]" << endl;
   cout << "-------------- Complete" << endl << endl;	

   finished = clock();

   output.open("../../WWW/status.txt", output.out | output.app);
   output << "Analysis Complete: finished in " << (finished - start)/CLOCKS_PER_SEC << endl << endl;
   output.close();

}
