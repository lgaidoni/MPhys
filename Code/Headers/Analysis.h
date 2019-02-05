#ifndef Analysis_h
#define Analysis_h

///////////////////////////////////////////////////////////////////////////////////////////
///											///
///	This file, Analysis.h, contains the functions called by MC_Analysis.C to 	///
///	analyse individual events, sort them into their appropriate regions, and	///
///	book and fill the relevant histograms						///
///											///
///////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////
///--------------------------- HISTOGRAM BOOKING FUNCTION ---------------------------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::BookHistos() {


	//Values for the automatically generated TLorentzVector histograms (ljets and bjets)
	int bins = 50;
	int PtMin = 0; //GeV/c
	int PtMax = 1000; //GeV/c
	int PhiMin = -4;
	int PhiMax = 4;
	int RapidityMin = -4;
	int RapidityMax = 4;
	int EtaMin = -4;
	int EtaMax = 4;

	//Values for the automatically generated custom histograms
	int DeltaR_Min = 0, DeltaR_Max = 10;
	int pT_balance_Min = 0, pT_balance_Max = 1;
	int pT_balance_3_Min = 0, pT_balance_3_Max = 1;
	int Centrality_Min = -8, Centrality_Max = 8;
	double RapidityDijet_Min = 0, RapidityDijet_Max = 4.5;
	double RapidityDilepton_Min = 0, RapidityDilepton_Max = 4.5;
	int lep_0_lep_1_mass_Min = 0, lep_0_lep_1_mass_Max = 200;
	int lep_0_lep_1_pt_Min = 0, lep_0_lep_1_pt_Max = 300;
	int lep_0_iso_ptvarcone40_Min = 0, lep_0_iso_ptvarcone40_Max = 20000;
	int lep_1_iso_ptvarcone40_Min = 0, lep_1_iso_ptvarcone40_Max = 20000;
	int jet_0_jet_1_mass_Min = 0,  jet_0_jet_1_mass_Max = 4500;
	int jet_0_p4_Pt_Min = 0,  jet_0_p4_Pt_Max = 1000;
	int jet_1_p4_Pt_Min = 0,  jet_1_p4_Pt_Max = 1000;

	/////----------------------------------BOOKINGS------------------------------------/////

	#include "_BookHistos.h"

}

void MC_Analysis::JetSet(bool bjets) {

	if (bjets) {

		//bbl
		if (bjet_1_p4->Pt() > ljet_0_p4->Pt()) {

			jet_0 = & bjet_0;
			jet_0_p4 = bjet_0_p4;

			jet_1 = & bjet_1;
			jet_1_p4 = bjet_1_p4;

			jet_2 = & ljet_0;
			jet_2_p4 = ljet_0_p4;

		//blb
		} else if (bjet_0_p4->Pt() > ljet_0_p4->Pt() and ljet_0_p4->Pt() > bjet_1_p4->Pt() and bjet_1_p4->Pt() > ljet_1_p4->Pt()) {

			jet_0 = & bjet_0;
			jet_0_p4 = bjet_0_p4;

			jet_1 = & ljet_0;
			jet_1_p4 = ljet_0_p4;

			jet_2 = & bjet_1;
			jet_2_p4 = bjet_1_p4;

		//bll
		} else if (bjet_0_p4->Pt() > ljet_0_p4->Pt() and ljet_1_p4->Pt() > bjet_1_p4->Pt()) {

			jet_0 = & bjet_0;
			jet_0_p4 = bjet_0_p4;

			jet_1 = & ljet_0;
			jet_1_p4 = ljet_0_p4;

			jet_2 = & ljet_1;
			jet_2_p4 = ljet_1_p4;

		//lll
		} else if (ljet_2_p4->Pt() > bjet_0_p4->Pt()) {

			jet_0 = & ljet_0;
			jet_0_p4 = ljet_0_p4;

			jet_1 = & ljet_1;
			jet_1_p4 = ljet_1_p4;

			jet_2 = & ljet_2;
			jet_2_p4 = ljet_2_p4;

		//llb
		} else if (ljet_1_p4->Pt() > bjet_0_p4->Pt() and bjet_0_p4->Pt() > ljet_2_p4->Pt()) {

			jet_0 = & ljet_0;
			jet_0_p4 = ljet_0_p4;

			jet_1 = & ljet_1;
			jet_1_p4 = ljet_1_p4;

			jet_2 = & bjet_0;
			jet_2_p4 = bjet_0_p4;

		//lbl
		} else if (ljet_0_p4->Pt() > bjet_0_p4->Pt() and bjet_0_p4->Pt() > ljet_1_p4->Pt() and ljet_1_p4->Pt() > bjet_1_p4->Pt()) {

			jet_0 = & ljet_0;
			jet_0_p4 = ljet_0_p4;

			jet_1 = & bjet_0;
			jet_1_p4 = bjet_0_p4;

			jet_2 = & ljet_1;
			jet_2_p4 = ljet_1_p4;

		//lbb
		} else if (ljet_0_p4->Pt() > bjet_0_p4->Pt() and bjet_1_p4->Pt() > ljet_1_p4->Pt()) {

			jet_0 = & ljet_0;
			jet_0_p4 = ljet_0_p4;

			jet_1 = & bjet_0;
			jet_1_p4 = bjet_0_p4;

			jet_2 = & bjet_1;
			jet_2_p4 = bjet_1_p4;

		}

	}

	else {
		jet_0 = & ljet_0;
		jet_0_p4 = ljet_0_p4;

		jet_1 = & ljet_1;
		jet_1_p4 = ljet_1_p4;

		jet_2 = & ljet_2;
		jet_2_p4 = ljet_2_p4;
	}

}

////////////////////////////////////////////////////////////////////////////////////////
///---------------------- DESIRED PARTICLE SELECTION FUNCTION -----------------------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::ParticleSelection() {

	//For the desired output particles, set the generic lepton information to those specific leptons

	if (desired_particles == "ee") {

		lep_0 = & elec_0;
		lep_0_iso_ptvarcone40 = elec_0_iso_ptvarcone40;
		lep_0_p4 = elec_0_p4;
		lep_0_q = & elec_0_q;	

		lep_1 = & elec_1;
		lep_1_iso_ptvarcone40 = elec_1_iso_ptvarcone40;
		lep_1_p4 = elec_1_p4;
		lep_1_q = & elec_1_q;	
	
		n_leptons = n_electrons;
	}

	if (desired_particles == "mm") {

		lep_0 = & muon_0;
		lep_0_iso_ptvarcone40 = muon_0_iso_ptvarcone40;
		lep_0_p4 = muon_0_p4;
		lep_0_q = & muon_0_q;	

		lep_1 = & muon_1;
		lep_1_iso_ptvarcone40 = muon_1_iso_ptvarcone40;
		lep_1_p4 = muon_1_p4;
		lep_1_q = & muon_1_q;	
	
		n_leptons = n_muons;
	}

	if (desired_particles == "em" || desired_particles == "me") {

		lep_0 = & muon_0;
		lep_0_iso_ptvarcone40 = muon_0_iso_ptvarcone40;
		lep_0_p4 = muon_0_p4;
		lep_0_q = & muon_0_q;	

		lep_1 = & elec_0;
		lep_1_iso_ptvarcone40 = elec_0_iso_ptvarcone40;
		lep_1_p4 = elec_0_p4;
		lep_1_q = & elec_0_q;	

		if (n_muons == 1 && n_electrons == 1) n_leptons = n_muons + n_electrons;
		else n_leptons = 0;
	}

	if (desired_particles == "tt") {

		lep_0 = & tau_0;
		lep_0_iso_ptvarcone40 = 0;
		lep_0_p4 = tau_0_p4;
		lep_0_q = & tau_0_q;

		lep_1 = & tau_1;	
		lep_1_iso_ptvarcone40 = 0;
		lep_1_p4 = tau_1_p4;
		lep_1_q = & tau_1_q;

		n_leptons = n_taus; 
	}

	if (desired_particles == "et" || desired_particles == "te") {

		lep_0 = & tau_0; 
		lep_0_iso_ptvarcone40 = 0;
		lep_0_p4 = tau_0_p4;
		lep_0_q = & tau_0_q;

		lep_1 = & elec_0;
		lep_1_iso_ptvarcone40 = elec_0_iso_ptvarcone40;
		lep_1_p4 = elec_0_p4;
		lep_1_q = & elec_0_q;

		if (n_taus == 1 && n_electrons == 1) n_leptons = n_taus + n_electrons;
		else n_leptons = 0;
	}

	if (desired_particles == "mt" || desired_particles == "tm") {

		lep_0 = & tau_0; 
		lep_0_iso_ptvarcone40 = 0;
		lep_0_p4 = tau_0_p4;
		lep_0_q = & tau_0_q;

		lep_1 = & muon_0;
		lep_1_iso_ptvarcone40 = muon_0_iso_ptvarcone40;
		lep_1_p4 = muon_0_p4;
		lep_1_q = & muon_0_q;

		if (n_taus == 1 && n_muons == 1) n_leptons = n_taus + n_muons;
		else n_leptons = 0;
	}

}

//This function will perform the inital cuts, ensuring we have all the particles needed for analysis, selecting ljets
bool MC_Analysis::InitialCut(bool bjets) {

	//Setting up conditions
	bool two_leptons = false;
	bool two_or_more_jets = false;
	bool leptons_opposite_charges = false;
	bool bjets_requirement = false;

	//Condition Checking
	if (n_leptons == 2) { //If two leptons are found
		two_leptons = true;
		if (& lep_0_q != & lep_1_q) leptons_opposite_charges = true;  //If lepton +/- pair found
	}

	if (bjets) {
		bjets_region = true;  //If there are no bjets
		if (n_bjets >= 2) bjets_requirement = true;
	}
	else {
		bjets_region = false;
		if (n_bjets == 0) bjets_requirement = true;
	}
	if (n_jets >= 2) two_or_more_jets = true;  //If two or more jets were found

	// If the conditions are met, don't cut
	if (two_leptons && two_or_more_jets && leptons_opposite_charges && bjets_requirement) return false;
	//Otherwise, cut
	return true;	

}

////////////////////////////////////////////////////////////////////////////////////////
///--------------------- RELEVANT VARIABLE CALCULATION FUNCTION ---------------------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::GenerateVariables() {

	//Invariant Mass
	lep_0_lep_1_mass = InvariantMass(lep_0_p4, lep_1_p4);
	jet_0_jet_1_mass = InvariantMass(jet_0_p4, jet_1_p4);

	//Delta R
	DeltaR = DeltaRCalc(lep_0_p4, lep_1_p4);

	// Rapidity of dilepton pair
	RapidityDilepton = RapidityDisomething(lep_0_p4, lep_1_p4);

	// Rapidity of dijet pair
	RapidityDijet = RapidityDisomething(jet_0_p4, jet_1_p4);

	//Combined Lepton momentum
	lep_0_lep_1_pt = CombinedTransverseMomentum(lep_0_p4, lep_1_p4);

	// p_T_Balance 
	pT_balance = pTBalanceCalc(lep_0_p4, lep_1_p4, jet_0_p4, jet_1_p4);
	
	// p_T_Balance_3
	pT_balance_3 = pTBalanceThreeCalc(lep_0_p4, lep_1_p4, jet_0_p4, jet_1_p4, jet_2_p4);
	
	// Centrality of Z boson between two leading jets calc using rapidity
	Centrality = CentralityCalc(lep_0_p4, lep_1_p4, jet_0_p4, jet_1_p4);

	//Final Weighting
	final_weighting = Luminosity_Weight * weight_total;
  
}

////////////////////////////////////////////////////////////////////////////////////////
///------------- BEFORE VARIABLE CUT HISTOGRAM FILLING (PRE REGION) -----------------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::FillAllData_PreCut() {

	if (weight_total_override) weight_total = 1;

	#include "_FillAllData_PreCut.h"

	//ptvarcones
	h_lep_1_iso_ptvarcone40_PRE->Fill(lep_1_iso_ptvarcone40, final_weighting);
	h_lep_0_iso_ptvarcone40_PRE->Fill(lep_0_iso_ptvarcone40, final_weighting);


	//Invariant mass
	h_lep_0_lep_1_mass_PRE->Fill(lep_0_lep_1_mass, final_weighting);
	h_jet_0_jet_1_mass_PRE->Fill(jet_0_jet_1_mass, final_weighting);

	// Combined
	h_RapidityDilepton_PRE->Fill(RapidityDilepton, final_weighting);// dilepton rapidity
	h_RapidityDijet_PRE->Fill(RapidityDijet, final_weighting);// dijet rapidity	
	h_lep_0_lep_1_pt_PRE->Fill(lep_0_lep_1_pt, final_weighting);

	//Delta R
	h_DeltaR_PRE->Fill(DeltaR, final_weighting);

	// pT balance PRE
	h_pT_balance_PRE->Fill(pT_balance, final_weighting);

	// pT balance 3 PRE
	h_pT_balance_3_PRE->Fill(pT_balance_3, final_weighting);

	// Centrality
	h_Centrality_PRE->Fill(Centrality, final_weighting);
}

////////////////////////////////////////////////////////////////////////////////////////
///--------------------------- CUT FUNCTION CUT ON VARIABLES ------------------------///
////////////////////////////////////////////////////////////////////////////////////////
bool MC_Analysis::Cuts(string region) {

	// Initialise common bool conditions
	bool Z_mass_condition = false;
	bool combined_lepton_pt = false;
	bool ljet_0_pt_greater = false;
	bool ljet_1_pt_greater = false;
	bool leading_jets_invariant_mass = false;
	bool ptvarcone_40_0 = false;
	bool ptvarcone_40_1 = false;

	//Initialise specific bool conditions
	bool pT_balance_limit = false;
	bool pT_balance_3_limit = false;
	bool rap_int_condition = RapidityIntervalCheck(ljet_0_p4, ljet_1_p4, ljet_2_p4);

	//Z Boson Mass Cut
	if (lep_0_lep_1_mass >= 81 && lep_0_lep_1_mass <= 101) Z_mass_condition = true;	

	//Dilepton Pt Cut
	if (lep_0_lep_1_pt > 20) combined_lepton_pt = true;

	//Leading Jet 1 (ljet_0) Cut Condition
	if (jet_0_p4->Pt() > 55) ljet_0_pt_greater = true;

	//Leading Jet 2 (ljet_1) Cut Condition
	if (jet_1_p4->Pt() > 45) ljet_1_pt_greater = true;

	// Dijjet mass = Leading Jets Combined Invariant mass
	if (jet_0_jet_1_mass > 250) leading_jets_invariant_mass = true; // invariant mass of 2 leading jets required to satisfy m_jj > 250 GeV

	//pt balance limit Cut Condition
	if (pT_balance < 0.15) pT_balance_limit = true;

	//pt balance 3 Cut Condition
	if (pT_balance_3 < 0.15) pT_balance_3_limit = true;

	//ptvarcone cuts
	if (lep_0_iso_ptvarcone40 < 0.1) ptvarcone_40_0 = true; 
	if (lep_1_iso_ptvarcone40 < 0.1) ptvarcone_40_1 = true;

	//If the region is an except region, make the relevant condition always true to see more of that histogram.
	if (region == "EXCEPT_Z_mass_condition" && bjets_region == false) 		Z_mass_condition = true;
	if (region == "EXCEPT_combined_lepton_pt" && bjets_region == false) 		combined_lepton_pt = true;
	if (region == "EXCEPT_ljet_0_pt_greater" && bjets_region == false) 		ljet_0_pt_greater = true;
	if (region == "EXCEPT_ljet_1_pt_greater" && bjets_region == false) 		ljet_1_pt_greater = true;
	if (region == "EXCEPT_leading_jets_invariant_mass" && bjets_region == false) 	leading_jets_invariant_mass = true;
	if (region == "EXCEPT_ptvarcone_40_0" && bjets_region == false) 		ptvarcone_40_0 = true;
	if (region == "EXCEPT_ptvarcone_40_1" && bjets_region == false) 		ptvarcone_40_1 = true;
	if (region == "EXCEPT_pT_balance_limit" && bjets_region == false) 		pT_balance_limit = true;
	if (region == "EXCEPT_pT_balance_3_limit" && bjets_region == false) 		pT_balance_3_limit = true;

	//THIS IS HERE FOR THE FUTURE WHEN REMOVAL OF PT BALANCE FROM tau SELECTIONS IS NECESSARY
	/*
	if (region == "search" && (desired_particles != "ee" || desired_particles != "mm")) { pT_balance_limit = true; pT_balance_limit_3 = true; }
	*/

	if (region == "bjet" ) Z_mass_condition = true;

	bool common_cuts = false;	//The common cuts are false initially

	//Work out if the common cuts are true here
 	if (Z_mass_condition && combined_lepton_pt && ljet_0_pt_greater && ljet_1_pt_greater && leading_jets_invariant_mass && ptvarcone_40_0 && ptvarcone_40_1) {
		common_cuts = true;
	}

	//If the region is the search region or an except region that isn't pt_balance (EW Z->ll enriched)
	if ((region == "search" || (region.substr(0,6) == "EXCEPT" && region.substr(7,10) != "pT_balance")) && bjets_region == false) {
		if (common_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	//If the region is the except region for pt_balance (EW Z->ll enriched)
	if (region == "EXCEPT_pT_balance_limit" && bjets_region == false) {
		if (common_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	//If the region is the except region for pt_balance_3 (QCD enriched)
	if (region == "EXCEPT_pT_balance_3_limit" && bjets_region == false) {
		if(common_cuts && !(rap_int_condition) && pT_balance_3_limit) return true;
	}

	//If the region is the control region (QCD enriched)
	if (region == "control" && bjets_region == false) {
		if(common_cuts && !(rap_int_condition) && pT_balance_3_limit) return true;
	}

	//If the region is the bjet enriched region
	if (region == "bjet" && bjets_region == true) {
		if (common_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	return false;

}

////////////////////////////////////////////////////////////////////////////////////////
///-------- FILL FUNCTION TO FILLI HISTOGRAMS BELONGING TO DIFFERENT REGIONS --------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::Fill() {

	if (weight_total_override) weight_total = 1;  //THIS VARIABLE MAY BE REDUNDANT

	///----- EXCEPT region filling -----///
	if (Cuts("EXCEPT_Z_mass_condition")) 		h_lep_0_lep_1_mass_EXCEPT->Fill(lep_0_lep_1_mass, final_weighting);	//Fill the EXCEPT histogram for mass
	if (Cuts("EXCEPT_combined_lepton_pt")) 		h_lep_0_lep_1_pt_EXCEPT->Fill(lep_0_lep_1_pt, final_weighting);		//Fill the EXCEPT histogram for combined lepton pt
	if (Cuts("EXCEPT_ljet_0_pt_greater")) 		h_ljet_0_p4_Pt_EXCEPT->Fill(ljet_0_p4->Pt(), final_weighting);		//Fill the EXCEPT histogram for ljet_0_pt
	if (Cuts("EXCEPT_ljet_1_pt_greater")) 		h_ljet_1_p4_Pt_EXCEPT->Fill(ljet_1_p4->Pt(), final_weighting);		//Fill the EXCEPT histogram for ljet_1_pt
	if (Cuts("EXCEPT_leading_jets_invariant_mass")) h_jet_0_jet_1_mass_EXCEPT->Fill(jet_0_jet_1_mass, final_weighting);	//Fill the EXCEPT histogram for leading jets combined invariant mass
	if (Cuts("EXCEPT_ptvarcone_40_0")) 		h_lep_0_iso_ptvarcone40_EXCEPT->Fill(lep_0_iso_ptvarcone40, final_weighting);
	if (Cuts("EXCEPT_ptvarcone_40_1")) 		h_lep_1_iso_ptvarcone40_EXCEPT->Fill(lep_1_iso_ptvarcone40, final_weighting);
	if (Cuts("EXCEPT_pT_balance_limit")) 		h_pT_balance_EXCEPT->Fill(pT_balance, final_weighting);
	if (Cuts("EXCEPT_pT_balance_3_limit")) 		h_pT_balance_3_EXCEPT->Fill(pT_balance_3, final_weighting);

	///----- SEARCH region filling -----///
	if (Cuts("search")) {

		#include "_FillAllData_PostCut.h"

		//ptvar cone histograms
		h_lep_1_iso_ptvarcone40->Fill(lep_1_iso_ptvarcone40, final_weighting);
		h_lep_0_iso_ptvarcone40->Fill(lep_0_iso_ptvarcone40, final_weighting);

		//Invariant mass
		h_lep_0_lep_1_mass->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
		h_jet_0_jet_1_mass->Fill(jet_0_jet_1_mass, final_weighting); // two jets

		//Combined lepton
		h_RapidityDilepton->Fill(RapidityDilepton, final_weighting);// (elec) dilepton rapidity
		h_RapidityDijet->Fill(RapidityDijet, final_weighting);// (jet) dijet rapidity
		h_lep_0_lep_1_pt->Fill(lep_0_lep_1_pt, final_weighting);

		//Delta R for two electrons
		h_DeltaR->Fill(DeltaR, final_weighting);

		// pT balance
		h_pT_balance->Fill(pT_balance, final_weighting);	

		if(pT_balance > 0.15) cout << "HOW DID THIS HAPPEN TO ME" << endl;

		// Centrality
		h_Centrality->Fill(Centrality, final_weighting);
	
	}

	///----- CONTROL region filling -----///
	if (Cuts("control")) {

		#include "_FillAllData_ControlCut.h"

		//ptvar cone histograms
		h_lep_1_iso_ptvarcone40_CONTROL->Fill(lep_1_iso_ptvarcone40, final_weighting);
		h_lep_0_iso_ptvarcone40_CONTROL->Fill(lep_0_iso_ptvarcone40, final_weighting);


		//Invariant mass
		h_lep_0_lep_1_mass_CONTROL->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
		h_jet_0_jet_1_mass_CONTROL->Fill(jet_0_jet_1_mass, final_weighting); // two jets

		//Combined 
		h_RapidityDilepton_CONTROL->Fill(RapidityDilepton, final_weighting); // lepton (elec) dilepton rapidity
		h_RapidityDijet_CONTROL->Fill(RapidityDijet, final_weighting); // ljet dijet rapidity
		h_lep_0_lep_1_pt_CONTROL->Fill(lep_0_lep_1_pt, final_weighting);

		//Delta R for two electrons
		h_DeltaR_CONTROL->Fill(DeltaR, final_weighting);

		// pT balance CONTROL
		h_pT_balance_3_CONTROL->Fill(pT_balance_3, final_weighting);
		
		// Centrality CONTROL
		h_Centrality_CONTROL->Fill(Centrality, final_weighting);
	}

	if (Cuts("bjet")) {

		#include "_FillAllData_BJET.h"

		//ptvar cone histograms
		h_lep_1_iso_ptvarcone40_BJET->Fill(lep_1_iso_ptvarcone40, final_weighting);
		h_lep_0_iso_ptvarcone40_BJET->Fill(lep_0_iso_ptvarcone40, final_weighting);

		//Invariant mass
		h_lep_0_lep_1_mass_BJET->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
		h_jet_0_jet_1_mass_BJET->Fill(jet_0_jet_1_mass, final_weighting); // two jets

		//Combined lepton
		h_RapidityDilepton_BJET->Fill(RapidityDilepton, final_weighting);// (elec) dilepton rapidity
		h_RapidityDijet_BJET->Fill(RapidityDijet, final_weighting);// (jet) dijet rapidity
		h_lep_0_lep_1_pt_BJET->Fill(lep_0_lep_1_pt, final_weighting);

		//Delta R for two electrons
		h_DeltaR_BJET->Fill(DeltaR, final_weighting);

		// pT balance
		h_pT_balance_BJET->Fill(pT_balance, final_weighting);	

		if(pT_balance > 0.15) cout << "HOW COULD THIS HAPPEN TO ME" << endl;

		// Centrality
		h_Centrality_BJET->Fill(Centrality, final_weighting);

	}

}

//This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../../Root-Files/" + AnalysisType + "/" + ChainName + "_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "HOW DID THIS HAPPEN TO ME" << endl;

	//Draw histogram function takes the following:
	//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)
	#include "_DrawHistos.h"

	//ptvar cone histograms
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_1_iso_ptvarcone40_PRE, h_lep_1_iso_ptvarcone40, h_lep_1_iso_ptvarcone40_CONTROL, h_lep_1_iso_ptvarcone40_EXCEPT, "ptvarcone40 for lepton 1", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_1_iso_ptvarcone40", "h_lep_1_iso_ptvarcone40", ";Momentum [GeV/c];Events", 600, 400, true, "h_lep_1_iso_ptvarcone40_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_iso_ptvarcone40_PRE, h_lep_0_iso_ptvarcone40, h_lep_0_iso_ptvarcone40_CONTROL, h_lep_0_iso_ptvarcone40_EXCEPT, "ptvarcone40 for lepton 0", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_iso_ptvarcone40", "h_lep_0_iso_ptvarcone40", ";Momentum [GeV/c];Events", 600, 400, true, "h_lep_0_iso_ptvarcone40_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	

	// lep 0 & lep 1 invariant mass 
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_mass_PRE, h_lep_0_lep_1_mass, h_lep_0_lep_1_mass_CONTROL, h_lep_0_lep_1_mass_EXCEPT, "Dilepton Pair Invariant Mass", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_mass", "h_lep_0_lep_1_mass", ";Invariant Mass [GeV/c^{2}];Events", 600, 400, true, "h_lep_0_lep_1_mass_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);
	
	//combined lepton lep 0 & lep 1 momentum
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_pt_PRE, h_lep_0_lep_1_pt, h_lep_0_lep_1_pt_CONTROL, h_lep_0_lep_1_pt_EXCEPT, "Combined Lepton Momentum", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_pt", "h_lep_0_lep_1_pt", ";Momentum [GeV/c];Events", 600, 400, false, "h_lep_0_lep_1_pt_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	
	
	//leading jets ljet_0 ljet_1 invariant masses
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_jet_0_jet_1_mass_PRE, h_jet_0_jet_1_mass, h_jet_0_jet_1_mass_CONTROL, h_jet_0_jet_1_mass_EXCEPT, "Leading Jets Combined Invariant Mass", "Pre Cut", "Post Cut", "Control", "Except", "h_jet_0_jet_1_mass", "h_jet_0_jet_1_mass", ";Invariant Mass [GeV/c^{2}];Events", 600, 400, false, "h_jet_0_jet_1_mass_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	//leading jets ljet_0 ljet_1 transverse momentum < already exists in DrawHistos.h
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_0_p4_Pt_PRE, h_ljet_0_p4_Pt, h_ljet_0_p4_Pt_CONTROL, h_ljet_0_p4_Pt_EXCEPT, "Leading Jet Pt", "Pre Cut", "Post Cut", "Control", "Except", "h_ljet_0_p4_Pt", "h_ljet_0_p4_Pt", ";Momentum [GeV/c];Events", 600, 400, false, "h_ljet_0_p4_Pt_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_1_p4_Pt_PRE, h_ljet_1_p4_Pt, h_ljet_1_p4_Pt_CONTROL, h_ljet_1_p4_Pt_EXCEPT, "Subleading Jet Pt", "Pre Cut", "Post Cut", "Control", "Except", "h_ljet_1_p4_Pt", "h_ljet_1_p4_Pt", ";Momentum [GeV/c];Events", 600, 400, false, "h_ljet_1_p4_Pt_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	// Dilepton Rapidity
	DrawHistogram_Quiet(h_RapidityDilepton_PRE, "h_RapidityDilepton_PRE", "h_RapidityDilepton_PRE", ";Dilepton Rapidity [rads];Events", 600, 400, false, "h_RapidityDilepton_PRE_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDilepton, "h_RapidityDilepton", "h_RapidityDilepton", ";Dilepton Rapidity [rads];Events", 600, 400, false, "h_RapidityDilepton_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDilepton_CONTROL, "h_RapidityDilepton_CONTROL", "h_RapidityDilepton_CONTROL", ";Dilepton Rapidity [rads];Events", 600, 400, false, "h_RapidityDilepton_CONTROL_" + ChainName + ".pdf", ChainName, AnalysisType);

	// Dijet Rapidity
	DrawHistogram_Quiet(h_RapidityDijet_PRE, "h_RapidityDijet_PRE", "h_RapidityDijet_PRE", ";Dijet Rapidity [rads];Events", 600, 400, false, "h_RapidityDijet_PRE_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDijet, "h_RapidityDijet", "h_RapidityDijet", ";Events", 600, 400, false, "h_RapidityDijet_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDijet_CONTROL, "h_RapidityDijet_CONTROL", "h_RapidityDijet_CONTROL", ";Dijet Rapidity [rads];Events", 600, 400, false, "h_RapidityDijet_CONTROL_" + ChainName + ".pdf", ChainName, AnalysisType);

	//Delta R Histograms
	DrawHistogram_PRE_SEARCH_CONTROL(h_DeltaR_PRE, h_DeltaR, h_DeltaR_CONTROL, "\\Delta R", "Pre-Cut", "Post Cut", "Control", "h_DeltaR", "h_DeltaR", ";Delta R;Events", 600, 400, false, "h_DeltaR_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	// pT balance
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_PRE, h_pT_balance, h_pT_balance_CONTROL, h_pT_balance_EXCEPT, "p_{T}^{balance}", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance", "h_pT_balance", ";pT Balance;Events", 600, 400, false, "h_pT_balance_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	// pT balance 3
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_3_PRE, h_pT_balance_3, h_pT_balance_3_CONTROL, h_pT_balance_3_EXCEPT, "p_{T}^{balance, 3}", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance_3", "h_pT_balance_3", ";pT Balance 3;Events", 600, 400, false, "h_pT_balance_3_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	

	// Centrality histograms
	DrawHistogram_PRE_SEARCH_CONTROL(h_Centrality_PRE, h_Centrality, h_Centrality_CONTROL, "\\Centrality", "Pre-Cut", "Post Cut", "Control", "h_Centrality", "h_Centrality", ";Centrality;Events", 600, 400, false, "h_Centrality_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	//BJET GRAPHS
	DrawHistogram_Quiet(h_lep_1_iso_ptvarcone40_BJET, "h_lep_1_iso_ptvarcone40_BJET", "h_lep_1_iso_ptvarcone40_BJET", ";;Events", 600, 400, false, "h_lep_1_iso_ptvarcone40_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_lep_0_iso_ptvarcone40_BJET, "h_lep_0_iso_ptvarcone40_BJET", "h_lep_0_iso_ptvarcone40_BJET", ";;Events", 600, 400, false, "h_lep_0_iso_ptvarcone40_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_lep_0_lep_1_mass_BJET, "h_lep_0_lep_1_mass_BJET", "h_lep_0_lep_1_mass_BJET", ";;Events", 600, 400, false, "h_lep_0_lep_1_mass_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_jet_0_jet_1_mass_BJET, "h_jet_0_jet_1_mass_BJET", "h_jet_0_jet_1_mass_BJET", ";;Events", 600, 400, false, "h_jet_0_jet_1_mass_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDilepton_BJET, "h_RapidityDilepton_BJET", "h_RapidityDilepton_BJET", ";;Events", 600, 400, false, "h_RapidityDilepton_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDijet_BJET, "h_RapidityDijet_BJET", "h_RapidityDijet_BJET", ";;Events", 600, 400, false, "h_RapidityDijet_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_lep_0_lep_1_pt_BJET, "h_lep_0_lep_1_pt_BJET", "h_lep_0_lep_1_pt_BJET", ";;Events", 600, 400, false, "h_lep_0_lep_1_pt_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_DeltaR_BJET, "h_DeltaR_BJET", "h_DeltaR_BJET", ";;Events", 600, 400, false, "h_DeltaR_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_pT_balance_BJET, "h_pT_balance_BJET", "h_pT_balance_BJET", ";;Events", 600, 400, false, "h_pT_balance_BJET" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_Centrality_BJET, "h_Centrality_BJET", "h_Centrality_BJET", ";;Events", 600, 400, false, "h_Centrality_BJET" + ChainName + ".pdf", ChainName, AnalysisType);

	Histograms->Close();

}

#endif
