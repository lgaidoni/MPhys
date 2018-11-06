// This is the analysis file for VBF process for a Z boson decaying to mu mu 
#ifndef Zmumu_Analysis_h
#define Zmumu_Analysis_h


///--------------------- ORDER OF OPERATIONS ---------------------------///

///	1. Book Histograms
///	2. Initial Smuontion Cut
///	3. Generate Variables
///	4. Fill Histograms Pre Smuontion Cut
///	5. Smuontion Cut
///	6. Fill Histograms Post Smuontion Cut
///	7. Draw/Save Histograms

// This function will book all relevant histograms

void MC_Analysis::Zmumu_BookHistos() {

	double cone_min = -11.5;
	double cone_max = -10.5;
	// for autogenerated stuff
	int bins = 100;
	int PtMin = 0; //GeV/c
	int PtMax = 500; //GeV/c
	int PhiMin = -4;
	int PhiMax = 4;
	int RapidityMin = -4;
	int RapidityMax = 4;
	int EtaMin = -4;
	int EtaMax = 4;

	/////----------------------------------BOOKINGS------------------------------------/////

	#include "_BookHistos.h"

	///------------------------------------ muon_0 --------------------------------------///
	//et cone histograms
	//Book_muon_0_iso_etcone20(bins, -12, 1); commented out as have peak at -11: warning not to use data
	//Book_muon_0_iso_etcone30(bins, -12, 1); commented out as have peak at -11: warning not to use data
	//Book_muon_0_iso_etcone40(bins, -12, 1); commented out as have peak at -11: warning not to use data

	//pt cone histograms
	Book_muon_0_iso_ptcone20(bins, 0, 800000);
	Book_muon_0_iso_ptcone30(bins, 0, 800000);
	Book_muon_0_iso_ptcone40(bins, 0, 800000);

	//ptvar cone histograms
	Book_muon_0_iso_ptvarcone20(bins, 0, 800000);
	Book_muon_0_iso_ptvarcone30(bins, 0, 800000);
	Book_muon_0_iso_ptvarcone40(bins, 0, 800000);

	//topoet cone histograms
	Book_muon_0_iso_topoetcone20(bins, 0, 800000);
	Book_muon_0_iso_topoetcone30(bins, 0, 800000);
	Book_muon_0_iso_topoetcone40(bins, 0, 800000);

	///-------------------------------- muon_0 & muon_1 ----------------------------------///
	//dilepton invariant mass
	Book_muon_0_muon_1_mass_EXCEPT(bins, 0, 200);
	Book_muon_0_muon_1_mass_CONTROL(bins, 0, 200);
	Book_muon_0_muon_1_mass_PRE(bins, 0, 200);
	Book_muon_0_muon_1_mass(bins, 0, 200);

	//dilepton pt
	Book_muon_0_muon_1_pt_EXCEPT(bins, 0, 200);
	Book_muon_0_muon_1_pt_CONTROL(bins, 0, 200);
	Book_muon_0_muon_1_pt_PRE(bins, 0, 200);
	Book_muon_0_muon_1_pt(bins, 0, 200);

	///---------------------------------- Delta R ----------------------------------------///
	//Delta R
	Book_DeltaR(bins, 0, 10);
	Book_DeltaR_PRE(bins, 0, 10);
	Book_DeltaR_CONTROL(bins, 0, 10);

	///---------------------------------ljet_0 & ljet_1-----------------------------------///
	Book_ljet_0_ljet_1_mass_EXCEPT(bins, 0, 1500);
	Book_ljet_0_ljet_1_mass_CONTROL(bins, 0, 1500);
	Book_ljet_0_ljet_1_mass_PRE(bins, 0, 1500);
	Book_ljet_0_ljet_1_mass(bins, 0, 1500);

	///------------------ pT balance for muon_0 & muon_1 and ljet_0 & ljet_1-----------------///

	Book_pT_balance_PRE(bins, 0, 1);
	Book_pT_balance(bins, 0, 1);
	Book_pT_balance_CONTROL(bins, 0, 1);

	///------------------ pT balance 3 for muon_0 & muon_1 and ljet_0 & ljet_1 & ljet_2 -----------------///

	Book_pT_balance_3_CONTROL(bins, 0, 1);

}

// Pre-Smuontion cut functions (dummy cuts)
// Cuts return bool, for ease in if statements
bool MC_Analysis::Zmumu_InitialCut() {

	// Set conditions
	bool two_muons = false;
	bool two_or_more_jets = false;
	bool muons_opposite_charges = false;
	bool no_bjets = false;
	bool Pt_threshold = false;
	
	// Event reconstruction checking
	
	//Condition Checking
	if(n_muons == 2 ){ // if two muons or anti-muons, or one of each are found
		two_muons = true;
		if (muon_0_q != muon_1_q) muons_opposite_charges = true;  // if muon anti-muon pair found
	}
	
	// bjet cuts
	if (n_bjets == 0) no_bjets = true;  //If there are no bjets
	if (n_jets >= 2) two_or_more_jets = true;  //If two or more jets were found

	// If the conditions are met, don't cut
	if (two_muons && two_or_more_jets && muons_opposite_charges && no_bjets) return false;
	//Otherwise, cut
	return true;


}

// This function will generate physics variables, put them in a vector, and return said vector
void MC_Analysis::Zmumu_GenerateVariables() {

	// Invariant Mass
	muon_0_muon_1_mass = InvariantMass(muon_0_p4, muon_1_p4);
	ljet_0_ljet_1_mass = InvariantMass(ljet_0_p4, ljet_1_p4);

	//Delta R
	DeltaR = DeltaRCalc(muon_0_p4, muon_1_p4);

	// Combined muon transverse momentum
	muon_0_muon_1_pt = CombinedTransverseMomentum(muon_0_p4, muon_1_p4);

	// p_T_Balance 
	pT_balance = pTBalanceCalc(muon_0_p4, muon_1_p4, ljet_0_p4, ljet_1_p4);

	// p_T_Balance_Three 
	pT_balance_3 = pTBalanceThreeCalc(muon_0_p4, muon_1_p4, ljet_0_p4, ljet_1_p4, ljet_2_p4);


}

// This function will fill the histograms that need to be filled BEFORE initial cuts are made
void MC_Analysis::Zmumu_FillAllData_PreCut() {

	#include "_FillAllData_PreCut.h"

	//Invariant mass
	h_muon_0_muon_1_mass_PRE->Fill(muon_0_muon_1_mass); // 2 muons
	h_ljet_0_ljet_1_mass_PRE->Fill(ljet_0_ljet_1_mass); // 2 jets

	// Combined muon transverse momentum
	h_muon_0_muon_1_pt_PRE->Fill(muon_0_muon_1_pt);

	// Delta R
	h_DeltaR_PRE->Fill(DeltaR);

	// pT balance PRE
	h_pT_balance_PRE->Fill(pT_balance); // 2 muons 2 jets

}

void MC_Analysis::Zmumu_CutAndFill() {

	//false means failed the cut, true means passed the cut

	// Initialise common bool conditions
	bool Z_mass_condition = false;
	bool combined_lepton_pt = false;
	bool ljet_0_pt_greater = false;
	bool ljet_1_pt_greater = false;
	bool leading_jets_invariant_mass = false;
	bool ptvarcone_20 = false;
	bool ptvarcone_40 = false;

	//Initialise specific bool conditions
	bool pT_balance_limit = false;
	bool pT_balance_3_limit = false;
	bool rap_int_condition = RapidityIntervalCheck(ljet_0_p4, ljet_1_p4, ljet_2_p4);

	//Z Boson Mass Cut
	if (muon_0_muon_1_mass >= 81 && muon_0_muon_1_mass <= 101 ) Z_mass_condition = true;	

	//Dilepton Pt Cut
	if (muon_0_muon_1_pt > 20) combined_lepton_pt = true;

	//Leading Jet 1 (ljet_0) Cut Condition 
	if (ljet_0_p4->Pt() > 55) ljet_0_pt_greater = true;

	//Leading Jet 2 (ljet_1) Cut Condition
	if (ljet_1_p4->Pt() > 45) ljet_1_pt_greater = true;

	//Leading Jets Combined Invariant mass
	if (ljet_0_ljet_1_mass > 250) leading_jets_invariant_mass = true; // invariant mass of 2 leading jets required to satisfy m_jj > 250 GeV

	//pt balance limit Cut Condition
	if (pT_balance < 0.15) pT_balance_limit = true;

	//pt balance 3 Cut Condition
	if (pT_balance_3 < 0.15) pT_balance_3_limit = true;

	//ptvarcone cuts
	if (muon_0_iso_ptvarcone20 < 0.1) ptvarcone_20 = true; 
	if (muon_0_iso_ptvarcone40 < 0.1) ptvarcone_40 = true; 

	//Initialise Common Cuts bool
	bool common_cuts = false;

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		common_cuts = true;

	}

	if(//Z_mass_condition && 		// Z Boson Mass Cut ABSENT
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40	&&			// ptvarcone_40 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_muon_0_muon_1_mass_EXCEPT->Fill(muon_0_muon_1_mass);//Fill the EXCEPT histogram for mass

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   //combined_lepton_pt && 		// Dilepton Pt Cut ABSENT
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40	&&			// ptvarcone_40 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_muon_0_muon_1_pt_EXCEPT->Fill(muon_0_muon_1_pt);//Fill the EXCEPT histogram for combined lepton pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   //ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition ABSENT
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40	&&			// ptvarcone_40 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_ljet_0_p4_Pt_EXCEPT->Fill(ljet_0_p4->Pt());//Fill the EXCEPT histogram for ljet_0_pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   //ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition ABSENT
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40	&&			// ptvarcone_40 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_ljet_1_p4_Pt_EXCEPT->Fill(ljet_1_p4->Pt());//Fill the EXCEPT histogram for ljet_1_pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   //leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass ABSENT
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40	&&			// ptvarcone_40 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_ljet_0_ljet_1_mass_EXCEPT->Fill(ljet_0_ljet_1_mass);//Fill the EXCEPT histogram for leading jets combined invariant mass

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   //ptvarcone_20 && 			// ptvarcone_20 Cut ABSENT
	   ptvarcone_40	&&			// ptvarcone_40 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		double value;//Fill the EXCEPT histogram for ptvarcone20

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 &&			// ptvarcone_20 Cut
	   //ptvarcone_40 && 			// ptvarcone_40 Cut ABSENT
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		double value;//Fill the EXCEPT histogram for ptvarcone40

	}

	if (common_cuts && rap_int_condition && pT_balance_limit) {

		#include "_FillAllData_PostCut.h"

		//ptvar cone histograms
		h_muon_0_iso_ptvarcone20->Fill(muon_0_iso_ptvarcone20);
		h_muon_0_iso_ptvarcone40->Fill(muon_0_iso_ptvarcone40);

		//topoet cone histograms
		h_muon_0_iso_topoetcone20->Fill(muon_0_iso_topoetcone20);
		h_muon_0_iso_topoetcone40->Fill(muon_0_iso_topoetcone40);

		//Invariant mass
		h_muon_0_muon_1_mass->Fill(muon_0_muon_1_mass); // two muons
		h_ljet_0_ljet_1_mass->Fill(ljet_0_ljet_1_mass); // two jets

		//Combined lepton (muon) pT
		h_muon_0_muon_1_pt->Fill(muon_0_muon_1_pt);

		//Delta R for two muons
		h_DeltaR->Fill(DeltaR);

		// pT balance
		h_pT_balance->Fill(pT_balance);	

		if(pT_balance > 0.15) cout << "HOW DID THIS HAPPEN WHY DID YOU DO THIS TO ME" << endl;

	}
	
	else if (common_cuts && !(rap_int_condition) && pT_balance_3_limit) {

		#include "_FillAllData_ControlCut.h"

		//Invariant mass
		h_muon_0_muon_1_mass_CONTROL->Fill(muon_0_muon_1_mass); // two muons
		h_ljet_0_ljet_1_mass_CONTROL->Fill(ljet_0_ljet_1_mass); // two jets

		//Combined lepton (muon) pT
		h_muon_0_muon_1_pt_CONTROL->Fill(muon_0_muon_1_pt);

		//Delta R for two muons
		h_DeltaR_CONTROL->Fill(DeltaR);
		
		// pT balance CONTROL
		h_pT_balance_CONTROL->Fill(pT_balance);

		// pT balance 3 CONTROL
		h_pT_balance_3_CONTROL->Fill(pT_balance_3);

	}


}


// Histograms draw everything that belongs to TLorentzVector automatically except cones, and the ones we define - our "Custom" ones, all of which are defined below.
// This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::Zmumu_DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../../Root-Files/Zmumu_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "Something's gone horribly wrong" << endl;

	//Draw histogram function takes the following:
	//DrawHistogram(histogram, canvas name, histogram name, title string, canvas x size, canvas y size, bool for log y axis, output file name, analysis type)
	#include "_DrawHistos.h"

	// ptcone histograms
	DrawHistogram(h_muon_0_iso_ptcone20, "h_muon_0_iso_ptcone20", "h_muon_0_iso_ptcone20_" + AnalysisType , "Total momentum around muon_0 cone-size \\Delta R = 0.2 from " + AnalysisType + " data set ptcone;Total momentum [GeV/c];Entries", 600, 400, true, "h_muon_0_iso_ptcone20_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptcone30, "h_muon_0_iso_ptcone30", "h_muon_0_iso_ptcone30_" + AnalysisType , "Total momentum around muon_0 cone-size \\Delta R = 0.3 from " + AnalysisType + " data set ptcone;Total momentum [GeV/c]Entries", 600, 400, true, "h_muon_0_iso_ptcone30_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptcone40, "h_muon_0_iso_ptcone40", "h_muon_0_iso_ptcone40_" + AnalysisType , "Total momentum around muon_0 cone-size \\Delta R = 0.4 from " + AnalysisType + " data set ptcone;Total momentum [GeV/c];Entries", 600, 400, true, "h_muon_0_iso_ptcone40_" + AnalysisType + ".pdf", AnalysisType);

	// topoetcone histograms
	DrawHistogram(h_muon_0_iso_topoetcone20, "h_muon_0_iso_topoetcone20", "h_muon_0_iso_topoetcone20_" + AnalysisType , "Total energy around muon_0 cone-size \\Delta R = 0.2 from " + AnalysisType + " data set topoetcone;Total energy [GeV];Entries", 600, 400, true, "h_muon_0_iso_topoetcone20_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_topoetcone30, "h_muon_0_iso_topoetcone30", "h_muon_0_iso_topoetcone30_" + AnalysisType , "Total energy around muon_0 cone-size \\Delta R = 0.3 from " + AnalysisType + " data set topoetcone;Total energy [GeV];Entries", 600, 400, true, "h_muon_0_iso_topoetcone30_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_topoetcone40, "h_muon_0_iso_topoetcone40", "h_muon_0_iso_topoetcone40_" + AnalysisType , "Total energy around muon_0 cone-size \\Delta R = 0.4 from " + AnalysisType + " data set topoetcone;Total energy [GeV];Entries", 600, 400, true, "h_muon_0_iso_topoetcone40_" + AnalysisType + ".pdf", AnalysisType);
	
	// ptvarcone histograms
	DrawHistogram(h_muon_0_iso_ptvarcone20, "h_muon_0_iso_ptvarcone20", "h_muon_0_iso_ptvarcone20_" + AnalysisType , "Total momentum around muon_0 cone-size \\Delta R = 0.2 from " + AnalysisType + " data set ptvarcone;Total momentum [GeV/c];Entries", 600, 400, true, "h_muon_0_iso_ptvarcone20_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptvarcone40, "h_muon_0_iso_ptvarcone30", "h_muon_0_iso_ptvarcone30_" + AnalysisType , "Total momentum around muon_0 cone-size \\Delta R = 0.3 from " + AnalysisType + " data set ptvarcone;Total momentum [GeV/c];Entries", 600, 400, true, "h_muon_0_iso_ptvarcone30_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptvarcone30, "h_muon_0_iso_ptvarcone40", "h_muon_0_iso_ptvarcone40_" + AnalysisType , "Total momentum around muon_0 cone-size \\Delta R = 0.4 from " + AnalysisType + " data set ptvarcone;Total momentum [GeV/c];Entries", 600, 400, true, "h_muon_0_iso_ptvarcone40_" + AnalysisType + ".pdf", AnalysisType);
	
	// muon 0 & muon 1 invariant mass histograms
	DrawHistogram(h_muon_0_muon_1_mass_PRE, "h_muon_0_muon_1_mass_PRE", "h_muon_0_muon_1_mass_PRE_" + AnalysisType , "Invariant mass of muon_0 and muon_1 with initial smuontion cuts from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_muon_0_muon_1_mass_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_muon_1_mass, "h_muon_0_muon_1_mass", "h_muon_0_muon_1_mass_" + AnalysisType , "Invariant mass of muon_0 and muon_1 from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_muon_0_muon_1_mass_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_muon_0_muon_1_mass_PRE, h_muon_0_muon_1_mass, h_muon_0_muon_1_mass_CONTROL, "Muon Pair Invariant Mass", "Pre-Cut", "Post Cut", "Control", "h_muon_0_muon_1_mass", "h_muon_0_muon_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_muon_0_muon_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_muon_0_muon_1_mass_PRE, h_muon_0_muon_1_mass, h_muon_0_muon_1_mass_CONTROL, h_muon_0_muon_1_mass_EXCEPT, "Dilepton Pair Invariant Mass", "Pre-Cut", "Post Cut", "Control", "Except", "h_muon_0_muon_1_mass", "h_muon_0_muon_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_muon_0_muon_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);

	// Delta R Histograms
	DrawHistogram(h_DeltaR_PRE, "h_DeltaR_PRE", "h_DeltaR_PRE_" + AnalysisType , "\\Delta R with initial smuontion cuts from " + AnalysisType + " data set;\\Delta R;Entries", 600, 400, false, "h_DeltaR_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_DeltaR, "h_DeltaR", "h_DeltaR_" + AnalysisType , "\\Delta R with further cuts from " + AnalysisType + " data set;\\Delta R;Entries", 600, 400, false, "h_DeltaR_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_DeltaR_PRE, h_DeltaR, h_DeltaR_CONTROL, "\\Delta R", "Pre-Cut", "Post Cut", "Control", "h_DeltaR", "h_DeltaR_" + AnalysisType, ";Delta R;Entries", 600, 400, false, "h_DeltaR_" + AnalysisType + "_Combo.pdf", AnalysisType);

	// combined lepton momentum
	DrawHistogram(h_muon_0_muon_1_pt_PRE, "h_muon_0_muon_1_pt_PRE", "h_muon_0_muon_1_pt_PRE_" + AnalysisType , "Transverse momentum of combined muon system muon_0 and muon_1 with initial smuontion cuts from " + AnalysisType + " data set;Momentum [GeV/c];Entries", 600, 400, false, "h_muon_0_muon_1_pt_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_muon_0_muon_1_pt, "h_muon_0_muon_1_pt", "h_muon_0_muon_1_pt_" + AnalysisType , "Transverse momentum of combined muon system muon_0 and muon_1 with further cuts from " + AnalysisType + " data set;Momentum [GeV/c];Entries", 600, 400, false, "h_muon_0_muon_1_pt_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_muon_0_muon_1_pt_PRE, h_muon_0_muon_1_pt, h_muon_0_muon_1_pt_CONTROL, "Muon Pair Transverse Momentum", "Pre-Cut", "Post Cut", "Control", "h_muon_0_muon_1_pt", "h_muon_0_muon_1_pt_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_muon_0_muon_1_pt_" + AnalysisType + "_Combo.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_muon_0_muon_1_pt_PRE, h_muon_0_muon_1_pt, h_muon_0_muon_1_pt_CONTROL, h_muon_0_muon_1_pt_EXCEPT, "Combined Lepton Momentum", "Pre-Cut", "Post Cut", "Control", "Except", "h_muon_0_muon_1_pt", "h_muon_0_muon_1_pt_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_muon_0_muon_1_pt_" + AnalysisType + "_Combo.pdf", AnalysisType);	

	// leading jets invariant masses
	DrawHistogram(h_ljet_0_ljet_1_mass_PRE, "h_ljet_0_ljet_1_mass_PRE", "h_ljet_0_ljet_1_mass_PRE_" + AnalysisType , "Combined Invariant Mass of ljet_0 and ljet_1  with initial smuontion cuts from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_ljet_0_ljet_1_mass, "h_ljet_0_ljet_1_mass", "h_ljet_0_ljet_1_mass_" + AnalysisType , "Combined Invariant Mass of ljet_0 and ljet_1  with further cuts from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_muon_0_muon_1_mass_PRE, h_muon_0_muon_1_mass, h_muon_0_muon_1_mass_CONTROL, "Muon Pair Invariant Mass", "Pre-Cut", "Post Cut", "Control", "h_muon_0_muon_1_mass", "h_muon_0_muon_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_muon_0_muon_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_muon_0_muon_1_mass_PRE, h_muon_0_muon_1_mass, h_muon_0_muon_1_mass_CONTROL, h_muon_0_muon_1_mass_EXCEPT, "Dilepton Pair Invariant Mass", "Pre-Cut", "Post Cut", "Control", "Except", "h_muon_0_muon_1_mass", "h_muon_0_muon_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_muon_0_muon_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);

	// pT balance
	DrawHistogram(h_pT_balance_PRE, "h_pT_balance_PRE", "h_pT_balance_PRE_" + AnalysisType , "p_T^{balance} for transverse momentum of ljet_0, ljet_1 and muon_0 and muon_1 with initial smuontion cuts from " + AnalysisType + " data set;p_T^{balance} [GeV/c];Entries", 600, 400, false, "h_pT_balance_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_pT_balance, "h_pT_balance", "h_pT_balance_" + AnalysisType , "p_T^{balance} for transverse momentum of ljet_0, ljet_1 and muon_0 and muon_1 with further cuts from " + AnalysisType + " data set;p_T^{balance} [GeV/c];Entries", 600, 400, false, "h_pT_balance_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_pT_balance_CONTROL, "h_pT_balance_CONTROL", "h_pT_balance_CONTROL_" + AnalysisType , "p_T^{balance} for transverse momentum of ljet_0, ljet_1 and muon_0 and muon_1 with further cuts from " + AnalysisType + " data set;p_T^{balance} [GeV/c];Entries", 600, 400, false, "h_pT_balance_CONTROL_" + AnalysisType + ".pdf", AnalysisType);

	// pT balance 3 - only filled in control scenario (see ATLAS paper Table 1.)
	DrawHistogram(h_pT_balance_3_CONTROL, "h_pT_balance_3_CONTROL", "h_pT_balance_3_CONTROL_" + AnalysisType , "p_T^{balance, 3} for transverse momentum of ljet_0, ljet_1, ljet_2 and muon_0 and muon_1 with further cuts from " + AnalysisType + " data set;p_T^{balance, 3} [GeV/c];Entries", 600, 400, false, "h_pT_balance_3_CONTROL_" + AnalysisType + ".pdf", AnalysisType);
	
}


#endif