///////////////////////////////////////////////////////////////////////////////////////////
///											///
///	This file, MC_Analysis.C, is the file which should be called to run the 	///
///	main program. Included in this file is the main loop where all user 		///
///	defined functions are called in order to perform the analysis.			///
///											///
///////////////////////////////////////////////////////////////////////////////////////////

#define MC_Analysis_cxx

///------ HEADER INCLUDES ------///

#include "Headers/MC_Analysis.h"
#include "Headers/Analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h> 

///------ MAIN PROGRAM BEGINS ---///

void MC_Analysis::Loop() {

   ////////////////////////////////////////////////////////////////////////////////////////
   ///------------------------------- INITIAL VARIABLE SETUP ---------------------------///
   ////////////////////////////////////////////////////////////////////////////////////////
   
   if (fChain == 0) return;			//If the chain is empty, end the loop

   Long64_t nentries = fChain->GetEntries();	//Get the number of entries
   Long64_t nbytes = 0, nb = 0;			//Set the number of bytes to zero

   //--- Clock Setup ---//

   clock_t start;				//Used to store the start time of the program
   clock_t one_second_in;			//Used to store the time one second into a loop
   clock_t finished;				//Used to store the end time of the program
   clock_t completion_time;			//Used to store the calculated completion time for the program (time program will finish)

   double entries_per_second;			//Used to store the number of entries per second
   double completion_time_double;		//Used to store the completion time as a double (time program will finish)
   double prev_entries = 0;			//Used to store the previous number of entries since the last loop
   double remaining_entries = 0;		//Used to store the remaining number of entries
   int second_ticker = 5;			//Time when the average should be calculated

   start = clock();				//Initialise the Start Time
   completion_time = clock();			//Initialise the Completion Time

   time_t now = time(0);			//Get the current time
   char* time = ctime(&now);			//Turn the current time into a Char to be cout-able

   //--- Loop Running Indicator ---//

   int current_indicator = 0;

   ////////////////////////////////////////////////////////////////////////////////////////////////
   ///---------------------------------- INITIAL USER INFORMATION ------------------------------///
   ////////////////////////////////////////////////////////////////////////////////////////////////

   //--- Generic User Information ---//

   cout << endl << "-------------------- " << AnalysisType << " analysis of " << ChainName << endl << endl;
   cout << "Number of Entries:   " << nentries << endl;
   cout << "Analysis Type:       " << AnalysisType << endl;
   cout << "Chain Name:          " << ChainName << endl;
   cout << "Luminosity Weight:   " << Luminosity_Weight << endl;
   cout << "Start Time:          " << start/CLOCKS_PER_SEC << endl;
   cout << endl << "-------------- " << AnalysisType << endl;

   //--- Status File Output ---//

   //String that stores the location of the status file
   string status_file = "../../WWW/" + AnalysisType + "_status.txt";
	
   fstream output(status_file, output.out | output.app);  //Open the output file either creating it, or appending to it

   //Output information to the status file
   output << endl << "\"" << AnalysisType << "\" Analysis of " << ChainName << " begun at " << time << endl << endl;
   output.close();

   /////////////////////////////////////////////////////////////////////////////////////////////
   ///------------------------------- FOR LOOP USED IN ANALYSIS -----------------------------///
   /////////////////////////////////////////////////////////////////////////////////////////////

   for (Long64_t jentry=0; jentry<nentries;jentry++) {

      ////////////////////////////////////////////////////////////////////////////////////
      ///------------------------------- DATA EXISTANCE CHECKS ------------------------///
      ////////////////////////////////////////////////////////////////////////////////////

      Long64_t ientry = LoadTree(jentry);		//Load the entry in the tree with number jentry
      if (ientry < 0) break;				//If there is no entry, break the loop
      nb = fChain->GetEntry(jentry);   nbytes += nb;	//Add the position in bytes to nbytes

      ////////////////////////////////////////////////////////////////////////////////////
      ///-----------------------USER INFORMATION ABOUT ITERATION ----------------------///
      ////////////////////////////////////////////////////////////////////////////////////

      double entry_count = jentry;	//Current entry number
      double max_entries = nentries;	//Total number of entries

	//If the current time minus the start time is greater than the averaging time
	if ((clock() - start)/CLOCKS_PER_SEC >= second_ticker) {
		second_ticker += 5;							//Add 5 seconds to the second ticker
		entries_per_second = entry_count - prev_entries;			//Work out how many entries passed in the time interval
		prev_entries = entry_count;						//Set the previous number of entries to the current entry count
		completion_time_double = max_entries/(entries_per_second/5);		//Work out the completion time as a double
		completion_time = start + completion_time_double*CLOCKS_PER_SEC;	//Work out the completion time (time program will finish)
	}

	//If the current entry is divisible by 500
	if (jentry % 500 == 0) {

		//Loop between 0 and 76 (Progress bar runs from 26 to 76)
		for (int i = 0; i < 77; i++) {
			double percentage = (entry_count / max_entries) * 100;	//Work out completion as a percentrage
			int percentageint = (int)(percentage/2 + 27);		//Turn the number into an integer
			if (i < 26) cout << " ";				//If not at the progress bar yet, print a space
			if (i == 26) cout << "[";				//If beginning, print [
			if (i > 26 && i < percentageint) cout << "=";		//If completed section, print =
			if (i == percentageint) cout << "|";			//If at completion level, print |
			if (i > percentageint && i < 77) cout << "-";		//If not yet completed section, print -
			if (i == 76) cout << "]";				//If end, print ]
		}

		cout << "\r";	//Rewind to the beginning of the line
	
		//Print a rotating symbol
		if (current_indicator == 0)      {cout << "               " << "|"; current_indicator = 1;}
		else if (current_indicator == 1) {cout << "               " << "/"; current_indicator = 2;}
		else if (current_indicator == 2) {cout << "               " << "—"; current_indicator = 3;}
		else if (current_indicator == 3) {cout << "               " << "\\"; current_indicator = 0;}

		//Print the completion percentage and the eta
		cout << " " << setprecision(3) << fixed << (entry_count / max_entries) * 100 << "%\r" << " ETA: " << completion_time/CLOCKS_PER_SEC - clock()/CLOCKS_PER_SEC << "\r";		
		
		cout.flush();	//Flush cout, pushing it to the terminal

		//If the current entry is divisible by 200,000
		if (jentry % 200000 == 0) {

			//Open the status file, and output the current completion and eta to it
			output.open(status_file, output.out | output.app);
			output << "\"" << AnalysisType << "\" Analysis of " << ChainName << " Completion Information: " << setprecision(3) << fixed << (entry_count / max_entries) * 100 << "%  " << " ETA: " << completion_time/CLOCKS_PER_SEC - clock()/CLOCKS_PER_SEC << endl;
			output.close();
		}

	}

	////////////////////////////////////////////////////////////
	///------------------- PERFORM ANALYSIS -----------------///
	////////////////////////////////////////////////////////////

	ParticleSelection();	//The particle selection function, selecting the desired particles
	if (InitialCut(false) == false) {
		JetSet(false);
		GenerateVariables();	//Generate all variables
		FillAllData_PreCut();	//Fill all the pre-cut data
		Fill();			//Fill all the post-cut data



	}
	else if (InitialCut(true) == false) {
		JetSet(true);
		GenerateVariables();	//Generate all variables
		Fill();			//Fill all the post-cut data
		//if (n_jets < n_bjets) cout << endl << endl << "LESS JETS THAN BJETS" << endl << endl;
		//if (bjet_0_p4->Pt() < ljet_0_p4->Pt()) cout << endl << endl << "BJET PT LESS THAN LJET PT" << endl << endl;

	}
	
   }

   ////////////////////////////////////////////////////////////////////////////////////
   ///------------------- FINAL USER INFORMATION ABOUT ITERATION -------------------///
   ////////////////////////////////////////////////////////////////////////////////////

   cout << "               * 100.000% [==================================================]" << endl;
   cout << "-------------- Complete" << endl << endl;	

   finished = clock();  //Final clock to determine the time of completion

   output.open(status_file, output.out | output.app);  //Open the status file

   ///Output the time it took to complete the analysis to the status file
   output << endl << "\"" << AnalysisType << "\" Analysis of " << ChainName << " Complete: finished in " << (finished - start)/CLOCKS_PER_SEC << " seconds" << endl << endl;

   output.close();

   //String that stores the location of the status file
   string timing_file = "../../WWW/" + AnalysisType + "_timing.txt";
	
   fstream timing(timing_file, timing.out | timing.app);  //Open the output file either creating it, or appending to it
   timing << ChainName << "," << (finished - start)/CLOCKS_PER_SEC << endl;

}

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
