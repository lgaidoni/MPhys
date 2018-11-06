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
	//dilepton invariant mass
	Book_elec_0_elec_1_mass_EXCEPT(bins, 0, 200);
	Book_elec_0_elec_1_mass_CONTROL(bins, 0, 200);
	Book_elec_0_elec_1_mass_PRE(bins, 0, 200);
	Book_elec_0_elec_1_mass(bins, 0, 200);

	//dilepton pt
	Book_elec_0_elec_1_pt_EXCEPT(bins, 0, 200);
	Book_elec_0_elec_1_pt_CONTROL(bins, 0, 200);
	Book_elec_0_elec_1_pt_PRE(bins, 0, 200);
	Book_elec_0_elec_1_pt(bins, 0, 200);

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

	///------------------ pT balance for elec_0 & elec_1 ljet_0 & ljet_1-----------------///

	Book_pT_balance_PRE(bins, 0, 1);
	Book_pT_balance(bins, 0, 1);
	Book_pT_balance_CONTROL(bins, 0, 1);

	///------------------ pT balance for elec_0 & elec_1 ljet_0 & ljet_1 & ljet_2 -----------------///

	Book_pT_balance_3_PRE(bins, 0, 1);
	Book_pT_balance_3(bins, 0, 1);
	Book_pT_balance_3_CONTROL(bins, 0, 1);
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
	
	// p_T_Balance_3
	pT_balance_3 = pTBalanceThreeCalc(elec_0_p4, elec_1_p4, ljet_0_p4, ljet_1_p4, ljet_2_p4);


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

	// pT balance 3 PRE
	h_pT_balance_3_PRE->Fill(pT_balance);

}

void MC_Analysis::Zee_CutAndFill() {

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
	if (elec_0_elec_1_mass >= 81 && elec_0_elec_1_mass <= 101 ) Z_mass_condition = true;	

	//Dilepton Pt Cut
	if (elec_0_elec_1_pt > 20) combined_lepton_pt = true;

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
	if (elec_0_iso_ptvarcone20 < 0.1) ptvarcone_20 = true; 
	if (elec_0_iso_ptvarcone40 < 0.1) ptvarcone_40 = true; 

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
	
		h_elec_0_elec_1_mass_EXCEPT->Fill(elec_0_elec_1_mass);//Fill the EXCEPT histogram for mass

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
	
		h_elec_0_elec_1_pt_EXCEPT->Fill(elec_0_elec_1_pt);//Fill the EXCEPT histogram for combined lepton pt

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

		if(pT_balance > 0.15) cout << "HOW DID THIS HAPPEN WHY DID YOU DO THIS TO ME" << endl;

	}
	
	else if (common_cuts && !(rap_int_condition) && pT_balance_3_limit) {

		#include "_FillAllData_ControlCut.h"

		//Invariant mass
		h_elec_0_elec_1_mass_CONTROL->Fill(elec_0_elec_1_mass); // two electrons
		h_ljet_0_ljet_1_mass_CONTROL->Fill(ljet_0_ljet_1_mass); // two jets

		//Combined lepton (electron) pT
		h_elec_0_elec_1_pt_CONTROL->Fill(elec_0_elec_1_pt);

		//Delta R for two electrons
		h_DeltaR_CONTROL->Fill(DeltaR);

		// pT balance CONTROL
		h_pT_balance_3_CONTROL->Fill(pT_balance_3);

	}


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
	DrawHistogram(h_elec_0_elec_1_pt_PRE, "h_elec_0_elec_1_pt_PRE", "h_elec_0_elec_1_pt_PRE_" + AnalysisType , "Transverse momentum of combined elec system elec_0 and elec_1 with initial selection cuts from " + AnalysisType + " data set;Momentum [GeV/c];Entries", 600, 400, false, "h_elec_0_elec_1_pt_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_elec_0_elec_1_pt, "h_elec_0_elec_1_pt", "h_elec_0_elec_1_pt_" + AnalysisType , "Transverse momentum of combined elec system elec_0 and elec_1 with further cuts from " + AnalysisType + " data set;Momentum [GeV/c];Entries", 600, 400, false, "h_elec_0_elec_1_pt_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_elec_0_elec_1_pt_PRE, h_elec_0_elec_1_pt, h_elec_0_elec_1_pt_CONTROL, "Electron Pair Transverse Momentum", "Pre-Cut", "Post Cut", "Control", "h_elec_0_elec_1_pt", "h_elec_0_elec_1_pt_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_elec_0_elec_1_pt_" + AnalysisType + "_Combo.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_elec_0_elec_1_pt_PRE, h_elec_0_elec_1_pt, h_elec_0_elec_1_pt_CONTROL, h_elec_0_elec_1_pt_EXCEPT, "Combined Lepton Momentum", "Pre-Cut", "Post Cut", "Control", "Except", "h_elec_0_elec_1_pt", "h_elec_0_elec_1_pt_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_elec_0_elec_1_pt_" + AnalysisType + "_Combo.pdf", AnalysisType);	

	//Elec 0 & Elec 1 histograms
	DrawHistogram(h_elec_0_elec_1_mass_PRE, "h_elec_0_elec_1_mass_PRE", "h_elec_0_elec_1_mass_PRE_" + AnalysisType , "Invariant mass of elec_0 and elec_1 with initial selection cuts from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_elec_0_elec_1_mass_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_elec_0_elec_1_mass, "h_elec_0_elec_1_mass", "h_elec_0_elec_1_mass_" + AnalysisType , "Invariant mass of elec_0 and elec_1 from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_elec_0_elec_1_mass_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_elec_0_elec_1_mass_PRE, h_elec_0_elec_1_mass, h_elec_0_elec_1_mass_CONTROL, "Electron Pair Invariant Mass", "Pre-Cut", "Post Cut", "Control", "h_elec_0_elec_1_mass", "h_elec_0_elec_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_elec_0_elec_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_elec_0_elec_1_mass_PRE, h_elec_0_elec_1_mass, h_elec_0_elec_1_mass_CONTROL, h_elec_0_elec_1_mass_EXCEPT, "Dilepton Pair Invariant Mass", "Pre-Cut", "Post Cut", "Control", "Except", "h_elec_0_elec_1_mass", "h_elec_0_elec_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_elec_0_elec_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);

	//Delta R Histograms
	DrawHistogram(h_DeltaR_PRE, "h_DeltaR_PRE", "h_DeltaR_PRE_" + AnalysisType , "\\Delta R PRE - " + AnalysisType + ";\\Delta R;Entries", 600, 400, false, "h_DeltaR_PRE_Zmumu2Jets.pdf", AnalysisType);
	DrawHistogram(h_DeltaR, "h_DeltaR", "h_DeltaR_" + AnalysisType , "\\Delta R SEARCH - " + AnalysisType + ";\\Delta R;Entries", 600, 400, false, "h_DeltaR_Zmumu2Jets.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_DeltaR_PRE, h_DeltaR, h_DeltaR_CONTROL, "\\Delta R", "Pre-Cut", "Post Cut", "Control", "h_DeltaR", "h_DeltaR_" + AnalysisType, ";Delta R;Entries", 600, 400, false, "h_DeltaR_" + AnalysisType + "_Combo.pdf", AnalysisType);

	//leading jets invariant masses
	DrawHistogram(h_ljet_0_ljet_1_mass_PRE, "h_ljet_0_ljet_1_mass_PRE", "h_ljet_0_ljet_1_mass_PRE_" + AnalysisType , "Combined Invariant Mass of ljet_0 and ljet_1  with initial selection cuts from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_ljet_0_ljet_1_mass, "h_ljet_0_ljet_1_mass", "h_ljet_0_ljet_1_mass_" + AnalysisType , "Combined Invariant Mass of ljet_0 and ljet_1  with further cuts from " + AnalysisType + " data set;Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_ljet_0_ljet_1_mass_PRE, h_ljet_0_ljet_1_mass, h_ljet_0_ljet_1_mass_CONTROL, "Leading Jets Combined Invariant Mass", "Pre-Cut", "Post Cut", "Control", "h_ljet_0_ljet_1_mass", "h_ljet_0_ljet_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_0_ljet_1_mass_PRE, h_ljet_0_ljet_1_mass, h_ljet_0_ljet_1_mass_CONTROL, h_ljet_0_ljet_1_mass_EXCEPT, "Leading Jets Combined Invariant Mass", "Pre-Cut", "Post Cut", "Control", "Except", "h_ljet_0_ljet_1_mass", "h_ljet_0_ljet_1_mass_" + AnalysisType, ";Invariant Mass [GeV/c^{2}];Entries", 600, 400, false, "h_ljet_0_ljet_1_mass_" + AnalysisType + "_Combo.pdf", AnalysisType);

	// pT balance
	DrawHistogram(h_pT_balance_PRE, "h_pT_balance_PRE", "h_pT_balance_PRE_" + AnalysisType , "p_T^{balance} for transverse momentum of ljet_0, ljet_1 and elec_0 and elec_1 with initial selection cuts from " + AnalysisType + " data set;p_T^{balance} [GeV/c];Entries", 600, 400, false, "h_pT_balance_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_pT_balance, "h_pT_balance", "h_pT_balance_" + AnalysisType , "p_T^{balance} for transverse momentum of ljet_0, ljet_1 and elec_0 and elec_1 with further cuts from " + AnalysisType + " data set;p_T^{balance} [GeV/c];Entries", 600, 400, false, "h_pT_balance_" + AnalysisType + ".pdf", AnalysisType);
		
	// pT balance 3
	DrawHistogram(h_pT_balance_3_PRE, "h_pT_balance_3_PRE", "h_pT_balance_3_PRE_" + AnalysisType , "p_T^{balance, 3} for transverse momentum of ljet_0, ljet_1, ljet_2 and elec_0 and elec_1 with initial selection cuts from " + AnalysisType + " data set;p_T^{balance, 3} [GeV/c];Entries", 600, 400, false, "h_pT_balance_3_PRE_" + AnalysisType + ".pdf", AnalysisType);
	DrawHistogram(h_pT_balance_3_CONTROL, "h_pT_balance_3_CONTROL", "h_pT_balance_3_CONTROL_" + AnalysisType , "p_T^{balance, 3} for transverse momentum of ljet_0, ljet_1, ljet_2 and elec_0 and elec_1 with further cuts from " + AnalysisType + " data set;p_T^{balance, 3} [GeV/c];Entries", 600, 400, false, "h_pT_balance_3_CONTROL_" + AnalysisType + ".pdf", AnalysisType);

	//Leading Jet Histograms
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_0_p4_Pt_PRE, h_ljet_0_p4_Pt, h_ljet_0_p4_Pt_CONTROL, h_ljet_0_p4_Pt_EXCEPT, "Leading Jet Pt", "Pre-Cut", "Post Cut", "Control", "Except", "h_ljet_0_p4_Pt", "h_ljet_0_p4_Pt_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_ljet_0_p4_Pt_" + AnalysisType + "_Combo.pdf", AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_1_p4_Pt_PRE, h_ljet_1_p4_Pt, h_ljet_1_p4_Pt_CONTROL, h_ljet_1_p4_Pt_EXCEPT, "Subleading Jet Pt", "Pre-Cut", "Post Cut", "Control", "Except", "h_ljet_1_p4_Pt", "h_ljet_1_p4_Pt_" + AnalysisType, ";Momentum [GeV/c];Entries", 600, 400, false, "h_ljet_1_p4_Pt_" + AnalysisType + "_Combo.pdf", AnalysisType);

}

#endif
