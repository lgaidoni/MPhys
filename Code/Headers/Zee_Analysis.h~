#ifndef Zee_Analysis_h
#define Zee_Analysis_h

///--------------------- ORDER OF OPERATIONS ---------------------------///
///	1. Book Histograms
///	2. Initial Selection Cut
///	3. Generate Variables
///	4. Fill Histograms Pre Selection Cut
///	5. Selection Cut
///	6. Fill Histograms Post Selection Cut
///	7. Draw/Save Histograms

//This function will book all relevant histograms
void MC_Analysis::Zee_BookHistos() {

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

	///------------------------------------ elec_0 --------------------------------------///
	//ptvar cone histograms
	Book_elec_0_iso_ptvarcone20(bins, 0, 100000);
	Book_elec_0_iso_ptvarcone40(bins, 0, 100000);

	//topoet cone histograms
	Book_elec_0_iso_topoetcone20(bins, 0, 800000);
	Book_elec_0_iso_topoetcone40(bins, 0, 800000);

	///-------------------------------- elec_0 & elec_1 ----------------------------------///
	//invariant mass control cut
	Book_elec_0_elec_1_mass_CONTROL(bins, 0, 200);
	
	//invariant mass pre cut
	Book_elec_0_elec_1_mass_PRE(bins, 0, 200);

	//invariant mass post cut
	Book_elec_0_elec_1_mass(bins, 0, 200);

	//pt control cut
	Book_elec_0_elec_1_pt_CONTROL(bins, 0, 200);

	//pt pre cut
	Book_elec_0_elec_1_pt_PRE(bins, 0, 200);

	//pt post cut
	Book_elec_0_elec_1_pt(bins, 0, 200);

	///---------------------------------- Delta R ----------------------------------------///
	//Delta R
	Book_DeltaR(bins, 0, 10);

	//Delta R PRE
	Book_DeltaR_PRE(bins, 0, 10);

	//Delta R CONTROL
	Book_DeltaR_CONTROL(bins, 0, 10);

	///---------------------------------ljet_0 & ljet_1-----------------------------------///
	Book_ljet_0_ljet_1_mass_CONTROL(bins, 0, 1500);
	Book_ljet_0_ljet_1_mass_PRE(bins, 0, 1500);
	Book_ljet_0_ljet_1_mass(bins, 0, 1500);

	///------------------ pT balance for muon_0 & muon_1 ljet_0 & ljet_1-----------------///


	Book_pT_balance_PRE(bins, -800000, 800000);
	Book_pT_balance(bins, -800000, 800000);
	Book_pT_balance_CONTROL(bins, -800000, 800000);
}


//This function will perform the inital cuts, ensuring we have all the particles needed for analysis
bool MC_Analysis::Zee_InitialCut() {

	//Setting up conditions
	bool two_electrons = false;
	bool two_or_more_jets = false;
	bool electrons_opposite_charges = false;
	bool no_bjets = false;

	//Condition Checking
	if (n_electrons == 2) { //If two electrons or positrons are found
		two_electrons = true;
		if (elec_0_q != elec_1_q) electrons_opposite_charges = true;  //If electron positron pair found
	}

	if (n_bjets == 0) no_bjets = true;  //If there are no bjets
	if (n_jets >= 2) two_or_more_jets = true;  //If two or more jets were found

	// If the conditions are met, don't cut
	if (two_electrons && two_or_more_jets && electrons_opposite_charges && no_bjets) return false;
	//Otherwise, cut
	return true;	

}

//This function will generate variables, put them in a vector, and return said vector
void MC_Analysis::Zee_GenerateVariables() {

	//Invariant Mass
	elec_0_elec_1_mass = InvariantMass(elec_0_p4, elec_1_p4);
	ljet_0_ljet_1_mass = InvariantMass(ljet_0_p4, ljet_1_p4);

	//Delta R
	DeltaR = DeltaRCalc(elec_0_p4, elec_1_p4);

	//Combined Lepton momentum
	elec_0_elec_1_pt = CombinedTransverseMomentum(elec_0_p4, elec_1_p4);

	
	// p_T_Balance 
	pT_balance = pTBalanceCalc(elec_0_p4, elec_1_p4, ljet_0_p4, ljet_1_p4);


}

// This function will fill the histograms that need to be filled before cuts are made
void MC_Analysis::Zee_FillAllData_PreCut() {

	#include "_FillAllData_PreCut.h"

	//Invariant mass
	h_elec_0_elec_1_mass_PRE->Fill(elec_0_elec_1_mass);
	h_ljet_0_ljet_1_mass_PRE->Fill(ljet_0_ljet_1_mass);

	//Combined lepton pt
	h_elec_0_elec_1_pt_PRE->Fill(elec_0_elec_1_pt);

	//Delta R
	h_DeltaR_PRE->Fill(DeltaR);

	// pT balance PRE
	h_pT_balance_PRE->Fill(pT_balance);

}

//This function will determine if event is cut for the search
//Returns bool, for ease of use in if statements
bool MC_Analysis::Zee_Cut() {

	//Setting up conditions
	bool combined_lepton_pt = false;
	bool leading_jets_invariant_mass = false;
	bool ljet_0_pt_greater = false;
	bool ljet_1_pt_greater = false;
	bool ljet_2_pt_less = false;
	
	//Condition Checking

	// search region cuts from Section 6, page 7, REF: ATLAS doi:10.1007/JHEP04(2014)031
	if (ljet_0_ljet_1_mass > 250) leading_jets_invariant_mass = true;
	if (ljet_0_p4->Pt() > 50) ljet_0_pt_greater = true;
	if (ljet_1_p4->Pt() > 50) ljet_1_pt_greater = true;
	if (elec_0_elec_1_pt > 20) combined_lepton_pt = true;

	//If the conditions are met, don't cut
	if (leading_jets_invariant_mass && ljet_0_pt_greater && ljet_1_pt_greater && combined_lepton_pt) return false;	
	//Otherwise, cut
	return true;

}

//This function will determine if event is cut for the search
//Returns bool, for ease of use in if statements
bool MC_Analysis::Zee_SearchCut() {

	//Setting up conditions
	bool cut_pass = false;
	bool pT_balance_limit = false;
	bool rap_int_condition = RapidityIntervalCheck(ljet_0_p4, ljet_1_p4, ljet_2_p4);

	//Condition Checking
	if (Zee_Cut() == false) cut_pass = true;
	if (pT_balance < 0.15) pT_balance_limit = true; // p_T balance required to be less than 0.15

	//If the conditions are met, don't cut
	if (cut_pass && pT_balance_limit && rap_int_condition) return false;	
	//Otherwise, cut
	return true;

}

//This function will determine if event is cut for the control
//Returns bool, for ease of use in if statements
bool MC_Analysis::Zee_ControlCut() {

	//Setting up conditions
	bool cut_pass = false;
	bool pT_balance3_limit = false;
	bool rap_int_condition = RapidityIntervalCheck(ljet_0_p4, ljet_1_p4, ljet_2_p4);

	//Condition Checking
	if (Zee_Cut() == false) cut_pass = true;

	//If the conditions are met, don't cut
	if (cut_pass && pT_balance3_limit && rap_int_condition) return false;	
	//Otherwise, cut
	return true;

}


//This function will fill all the histograms after cuts are made
void MC_Analysis::Zee_FillAllData_PostCut() {
	
	#include "_FillAllData_PostCut.h"

	//ptvar cone histograms
	h_elec_0_iso_ptvarcone20->Fill(elec_0_iso_ptvarcone20);
	h_elec_0_iso_ptvarcone40->Fill(elec_0_iso_ptvarcone40);

	//topoet cone histograms
	h_elec_0_iso_topoetcone20->Fill(elec_0_iso_topoetcone20);
	h_elec_0_iso_topoetcone40->Fill(elec_0_iso_topoetcone40);

	//Invariant mass
	h_elec_0_elec_1_mass->Fill(elec_0_elec_1_mass); // two electrons
	h_ljet_0_ljet_1_mass->Fill(ljet_0_ljet_1_mass); // two jets

	//Combined lepton (electron) pT
	h_elec_0_elec_1_pt->Fill(elec_0_elec_1_pt);

	//Delta R for two electrons
	h_DeltaR->Fill(DeltaR);

	// pT balance
	h_pT_balance->Fill(pT_balance);


}

//This function will fill all the histograms after cuts are made
void MC_Analysis::Zee_FillAllData_ControlCut() {
	
	#include "_FillAllData_ControlCut.h"

	//Invariant mass
	h_elec_0_elec_1_mass_CONTROL->Fill(elec_0_elec_1_mass); // two electrons
	h_ljet_0_ljet_1_mass_CONTROL->Fill(ljet_0_ljet_1_mass); // two jets

	//Combined lepton (electron) pT
	h_elec_0_elec_1_pt_CONTROL->Fill(elec_0_elec_1_pt);

	//Delta R for two electrons
	h_DeltaR_CONTROL->Fill(DeltaR);

	// pT balance CONTROL
	h_pT_balance_CONTROL->Fill(pT_balance);


}

//This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::Zee_DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../../Root-Files/" + AnalysisType + "_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "Something's gone horribly wrong" << endl;

	//Draw histogram function takes the following:
	//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)
	#include "_DrawHistos.h"

	//ptvar cone histograms
	DrawHistogram(h_elec_0_iso_ptvarcone20, "h_elec_0_iso_ptvarcone20", "h_elec_0_iso_ptvarcone20_" + AnalysisType, ";;Entries", 600, 400, true, "h_elec_0_iso_ptvarcone20_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_elec_0_iso_ptvarcone40, "h_elec_0_iso_ptvarcone40", "h_elec_0_iso_ptvarcone40_" + AnalysisType, ";;Entries", 600, 400, true, "h_elec_0_iso_ptvarcone40_" + AnalysisType + ".pdf", AnalysisType);

	//topoet cone histograms
	DrawHistogram(h_elec_0_iso_topoetcone20, "h_elec_0_iso_topoetcone20", "h_elec_0_iso_topoetcone20_" + AnalysisType, ";;Entries", 600, 400, true, "h_elec_0_iso_topoetcone20_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_elec_0_iso_topoetcone40, "h_elec_0_iso_topoetcone40", "h_elec_0_iso_topoetcone40_" + AnalysisType, ";;Entries", 600, 400, true, "h_elec_0_iso_topoetcone40_" + AnalysisType + ".pdf", AnalysisType);

	//combined lepton momentum
	DrawHistogram(h_elec_0_elec_1_mass_PRE, "h_elec_0_elec_1_mass_PRE", "h_elec_0_elec_1_mass_PRE_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_elec_0_elec_1_mass_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_elec_0_elec_1_mass, "h_elec_0_elec_1_mass", "h_elec_0_elec_1_mass_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_elec_0_elec_1_mass_" + AnalysisType + ".pdf", AnalysisType);

	//Elec 0 & Elec 1 histograms
	DrawHistogram(h_elec_0_elec_1_mass_PRE, "h_elec_0_elec_1_mass_PRE", "h_elec_0_elec_1_mass_PRE_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_elec_0_elec_1_mass_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_elec_0_elec_1_mass_CONTROL, "h_elec_0_elec_1_mass_CONTROL", "h_elec_0_elec_1_mass_CONTROL_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_elec_0_elec_1_mass_CONTROL_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_elec_0_elec_1_mass, "h_elec_0_elec_1_mass", "h_elec_0_elec_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_elec_0_elec_1_mass_" + AnalysisType + ".pdf", AnalysisType);

	//Delta R Histograms
	DrawHistogram(h_DeltaR_PRE, "h_DeltaR_PRE", "h_DeltaR_PRE_" + AnalysisType, ";;Entries", 600, 400, false, "h_DeltaR_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_DeltaR, "h_DeltaR", "h_DeltaR_" + AnalysisType, ";;Entries", 600, 400, false, "h_DeltaR_" + AnalysisType + ".pdf", AnalysisType);

	//leading jets invariant masses
	DrawHistogram(h_ljet_0_ljet_1_mass_PRE, "h_ljet_0_ljet_1_mass_PRE", "h_ljet_0_ljet_1_mass_PRE_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_ljet_0_ljet_1_mass, "h_ljet_0_ljet_1_mass", "h_ljet_0_ljet_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_" + AnalysisType + ".pdf", AnalysisType);

	// pT balance
	DrawHistogram(h_pT_balance_PRE, "h_pT_balance_PRE", "h_pT_balance_PRE_" + AnalysisType , "p_T^{balance} for transverse momentum of ljet_0, ljet_1 and elec_0 and elec_1 with initial selection cuts from " + AnalysisType + " data set;p_T^{balance} [GeV/c];Entries", 600, 400, false, "h_pT_balance_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_pT_balance, "h_pT_balance", "h_pT_balance_" + AnalysisType , "p_T^{balance} for transverse momentum of ljet_0, ljet_1 and elec_0 and elec_1 with further cuts from " + AnalysisType + " data set;p_T^{balance} [GeV/c];Entries", 600, 400, false, "h_pT_balance_" + AnalysisType + ".pdf", AnalysisType);
	

}

#endif
