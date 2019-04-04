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

	// BDT stuff TEST
	int BDT_test_Min = 0, BDT_test_Max = 20000;
	int BDT_test1_Min = 0, BDT_test1_Max = 20000;
	int BDT_test2_Min = 0, BDT_test2_Max = 20000;
	int BDT_test3_Min = 0, BDT_test3_Max = 20000;
	int BDT_test4_Min = 0, BDT_test4_Max = 20000;


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
	double DeltaPhi_Min = 0, DeltaPhi_Max = pi;
	int pT_balance_Min = 0, pT_balance_Max = 1;
	int pT_balance_reco_Min = 0, pT_balance_reco_Max = 1;
	int pT_balance_reco_INSIDE_Min = 0, pT_balance_reco_INSIDE_Max = 1;
	int pT_balance_reco_OUTSIDE_Min = 0, pT_balance_reco_OUTSIDE_Max = 1;
	int pT_balance_3_Min = 0, pT_balance_3_Max = 1;
	int Centrality_Min = -8, Centrality_Max = 8;
	int Centrality_INSIDE_Min = -8, Centrality_INSIDE_Max = 8;
	int Centrality_OUTSIDE_Min = -8, Centrality_OUTSIDE_Max = 8;
	int MET_Centrality_Min = -4, MET_Centrality_Max = 4;
	double RapidityDijet_Min = 0, RapidityDijet_Max = 4.5;
	double RapidityDilepton_Min = 0, RapidityDilepton_Max = 4.5;
	int lep_0_lep_1_mass_Min = 0, lep_0_lep_1_mass_Max = 200;
	int lep_0_lep_1_pt_Min = 0, lep_0_lep_1_pt_Max = 300;
	int lep_0_iso_ptvarcone40_Min = 0, lep_0_iso_ptvarcone40_Max = 20000;
	int lep_1_iso_ptvarcone40_Min = 0, lep_1_iso_ptvarcone40_Max = 20000;
	int jet_0_jet_1_mass_Min = 0,  jet_0_jet_1_mass_Max = 4500;
	int jet_0_jet_1_mass_INSIDE_Min = 0,  jet_0_jet_1_mass_INSIDE_Max = 4500;
	int jet_0_jet_1_mass_OUTSIDE_Min = 0,  jet_0_jet_1_mass_OUTSIDE_Max = 4500;
	int jet_0_p4_Pt_Min = 0,  jet_0_p4_Pt_Max = 1000;
	int jet_1_p4_Pt_Min = 0,  jet_1_p4_Pt_Max = 1000;
	int TOT_pT_UnitVector_Min = 0, TOT_pT_UnitVector_Max = 1000;
	int MET_UnitVector_Min = 0, MET_UnitVector_Max = 1000;
	int VectorNeutrinoTransMom_Min = 0, VectorNeutrinoTransMom_Max = 1000;
	int neutrino_0_pt_Min = 0, neutrino_0_pt_Max = 1000;
	int neutrino_1_pt_Min = 0, neutrino_1_pt_Max = 1000;
	int MET_Type_Favour_Min = -1, MET_Type_Favour_Max = 2;
	int MET_Type_Favour_INSIDE_Min = -1, MET_Type_Favour_INSIDE_Max = 2;
	int MET_Type_Favour_OUTSIDE_Min = -1, MET_Type_Favour_OUTSIDE_Max = 2;

  	int lep_0_lep_1_mass_reco_Min = 0, lep_0_lep_1_mass_reco_Max = 200;
  	int lep_0_lep_1_mass_reco_INSIDE_Min = 0, lep_0_lep_1_mass_reco_INSIDE_Max = 200;
  	int lep_0_lep_1_mass_reco_OUTSIDE_Min = 0, lep_0_lep_1_mass_reco_OUTSIDE_Max = 200;
	int DeltaR_reco_Min = 0, DeltaR_reco_Max = 10;

	double DeltaPhi_reco_Min = 0, DeltaPhi_reco_Max = pi;
	double DeltaPhi_reco_INSIDE_Min = 0, DeltaPhi_reco_INSIDE_Max = pi;
	double DeltaPhi_reco_OUTSIDE_Min = 0, DeltaPhi_reco_OUTSIDE_Max = pi;

	int lep_0_lep_1_pt_reco_Min = 0, lep_0_lep_1_pt_reco_Max = 300;
	int Centrality_reco_Min = -8, Centrality_reco_Max = 8;
	int lep_0_invis_vis_mass_Min = 0, lep_0_invis_vis_mass_Max = 1000;
	int lep_1_invis_vis_mass_Min = 0, lep_1_invis_vis_mass_Max = 1000;
	int lep_0_lep_1_invis_vis_mass_Min = 0, lep_0_lep_1_invis_vis_mass_Max = 1000;
	int lep_0_vis_mass_Min = 0, lep_0_vis_mass_Max = 1000;
	int lep_1_vis_mass_Min = 0, lep_1_vis_mass_Max = 1000;
	//int lep_0_invis_mass_Min = 0, lep_0_invis_mass_Max = 1000;
	//int lep_1_invis_mass_Min = 0, lep_1_invis_mass_Max = 1000;

	int met_truth_energy_Min = 0, met_truth_energy_Max = 1000;	
	int lep_0_invis_energy_Min = 0, lep_0_invis_energy_Max = 1000; 
	int lep_1_invis_energy_Min = 0, lep_1_invis_energy_Max = 1000;

	//Values for the 2D histograms
	int xbins = 50;
	int ybins = 50;
//	int xbins = 120;
//	int ybins = 80;
	

	// POLAR
	int Test_Polar_Plot_xMin = 0 - pi;
	int Test_Polar_Plot_xMax = 0 + pi;
	int Test_Polar_Plot_yMin = 0;
	int Test_Polar_Plot_yMax = 100;

	int Mass_Favour_Combination_2D_xMin = -1;
	int Mass_Favour_Combination_2D_xMax = 2;
	int Mass_Favour_Combination_2D_yMin = 0;
	int Mass_Favour_Combination_2D_yMax = 160;

	int Mass_Favour_Combination_INSIDE_2D_xMin = -1;
	int Mass_Favour_Combination_INSIDE_2D_xMax = 2;
	int Mass_Favour_Combination_INSIDE_2D_yMin = 0;
	int Mass_Favour_Combination_INSIDE_2D_yMax = 160;

	int Mass_Favour_Combination_OUTSIDE_2D_xMin = -1;
	int Mass_Favour_Combination_OUTSIDE_2D_xMax = 2;
	int Mass_Favour_Combination_OUTSIDE_2D_yMin = 0;
	int Mass_Favour_Combination_OUTSIDE_2D_yMax = 160;

	int Mass_DeltaPhi_Combination_2D_xMin = 0;
	int Mass_DeltaPhi_Combination_2D_xMax = pi;
	int Mass_DeltaPhi_Combination_2D_yMin = 0;
	int Mass_DeltaPhi_Combination_2D_yMax = 160;

	int Mass_DeltaPhi_Combination_INSIDE_2D_xMin = 0;
	int Mass_DeltaPhi_Combination_INSIDE_2D_xMax = pi;
	int Mass_DeltaPhi_Combination_INSIDE_2D_yMin = 0;
	int Mass_DeltaPhi_Combination_INSIDE_2D_yMax = 160;

	int Mass_DeltaPhi_Combination_OUTSIDE_2D_xMin = 0;
	int Mass_DeltaPhi_Combination_OUTSIDE_2D_xMax = pi;
	int Mass_DeltaPhi_Combination_OUTSIDE_2D_yMin = 0;
	int Mass_DeltaPhi_Combination_OUTSIDE_2D_yMax = 160;
  
	int lep_0_reco_p4_xMin = 0 - pi;
	int lep_0_reco_p4_xMax = 0 + pi;
	int lep_0_reco_p4_yMin = 0;
	int lep_0_reco_p4_yMax = 100;

	int lep_1_reco_p4_xMin = 0 - pi;
	int lep_1_reco_p4_xMax = 0 + pi;
	int lep_1_reco_p4_yMin = 0;
	int lep_1_reco_p4_yMax = 100;

	/////----------------------------------BOOKINGS------------------------------------/////

	#include "_BookHistos.h"

}

////////////////////////////////////////////////////////////////////////////////////////
///----------------------------- JET SELECTION FUNCTION -----------------------------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::JetSet(bool bjets) {

	//If the region contains bjets
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

	//Otherwise, assume there are no bjets present (they are vetoed) and set jets to ljets
	else {
		jet_0 = & ljet_0;
		jet_0_p4 = ljet_0_p4;

		jet_1 = & ljet_1;
		jet_1_p4 = ljet_1_p4;

		jet_2 = & ljet_2;
		jet_2_p4 = ljet_2_p4;
	}

}

void MC_Analysis::JetSet_TRUTH() {

	jet_0 = & ljet_0_matched;
	jet_0_p4 = ljet_0_matched_p4;

	jet_1 = & ljet_1_matched;
	jet_1_p4 = ljet_1_matched_p4;

	jet_2 = & ljet_2_matched;
	jet_2_p4 = ljet_2_matched_p4;

}

////////////////////////////////////////////////////////////////////////////////////////
///---------------------- DESIRED PARTICLE SELECTION FUNCTION -----------------------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::ParticleSelection() {

	//For the desired output particles, set the generic lepton information to those specific leptons
	met_p4 = met_reco_p4;

	if (AnalysisType == "Electron") {

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

	if (AnalysisType == "Muon") {

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

	if (AnalysisType == "ElectronMuon") {

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

	if (AnalysisType == "Tau") {

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

	if (AnalysisType == "ElectronTau") {

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

	if (AnalysisType == "MuonTau") {

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

void MC_Analysis::ParticleSelection_TRUTH() {

	//For the desired output particles, set the generic lepton information to those specific leptons
	met_p4 = met_truth_p4;
	lep_0_iso_ptvarcone40 = 0;
	lep_1_iso_ptvarcone40 = 0;

	// add variables here

	if (AnalysisType == "Electron") {

		lep_0 = & elec_0_matched;
		lep_0_p4 = elec_0_matched_p4;
		lep_0_q = & elec_0_matched_q;	
		lep_0_invis_p4 = elec_0_matched_truth_lepTau_invis_p4;
		lep_0_vis_p4 = elec_0_matched_truth_lepTau_vis_p4;

		lep_1 = & elec_1_matched;
		lep_1_p4 = elec_1_matched_p4;
		lep_1_q = & elec_1_matched_q;
		lep_1_invis_p4 = elec_1_matched_truth_lepTau_invis_p4;
		lep_1_vis_p4 = elec_1_matched_truth_lepTau_vis_p4;
	
		if (elec_0_matched > 0 && elec_1_matched > 0) n_leptons = 2;
		else n_leptons = 0;
	}

	if (AnalysisType == "Muon") {

		lep_0 = & muon_0_matched;
		lep_0_p4 = muon_0_matched_p4;
		lep_0_q = & muon_0_matched_q;	
		lep_0_invis_p4 = muon_0_matched_truth_lepTau_invis_p4;
		lep_0_vis_p4 = muon_0_matched_truth_lepTau_vis_p4;

		lep_1 = & muon_1_matched;
		lep_1_p4 = muon_1_matched_p4;
		lep_1_q = & muon_1_matched_q;	
		lep_1_invis_p4 = muon_1_matched_truth_lepTau_invis_p4;
		lep_1_vis_p4 = muon_1_matched_truth_lepTau_vis_p4;
	
		if (muon_0_matched > 0 && muon_1_matched > 0) n_leptons = 2;
		else n_leptons = 0;
	}

	if (AnalysisType == "ElectronMuon") {

		lep_0 = & muon_0_matched_truth_lepTau;
		lep_0_p4 = muon_0_matched_truth_lepTau_p4;
		lep_0_q = & muon_0_matched_truth_lepTau_q;	
		lep_0_invis_p4 = muon_0_matched_truth_lepTau_invis_p4;
		lep_0_vis_p4 = muon_0_matched_truth_lepTau_vis_p4;

		lep_1 = & elec_0_matched_truth_lepTau;
		lep_1_p4 = elec_0_matched_truth_lepTau_p4;
		lep_1_q = & elec_0_matched_truth_lepTau_q;	
		lep_1_invis_p4 = elec_0_matched_truth_lepTau_invis_p4;
		lep_1_vis_p4 = elec_0_matched_truth_lepTau_vis_p4;

		if (muon_0_matched_truth_lepTau > 0 && elec_0_matched_truth_lepTau > 0 && muon_1_matched_truth_lepTau == 0 && elec_1_matched_truth_lepTau == 0) n_leptons = 2;
		else n_leptons = 0;
	}

	if (AnalysisType == "Tau") {

		lep_0 = & tau_0_truth;
		lep_0_p4 = tau_0_truth_p4;
		lep_0_q = & tau_0_truth_q;
		lep_0_vis_p4 = tau_0_truth_vis_p4;
		lep_0_invis_p4 = new TLorentzVector(0,0,0,0); // for hadronic tau only

		lep_1 = & tau_1_truth;	
		lep_1_p4 = tau_1_truth_p4;
		lep_1_q = & tau_1_truth_q;
		lep_1_vis_p4 = tau_1_truth_vis_p4;
		lep_1_invis_p4 = new TLorentzVector(0,0,0,0);

		if (tau_0_truth > 0 && tau_1_truth > 0) n_leptons = 2;
		else n_leptons = 0;
	}

	if (AnalysisType == "ElectronTau") { // 0 is always hadronic

		lep_0 = & tau_0_truth; 
		lep_0_p4 = tau_0_truth_p4;
		lep_0_q = & tau_0_truth_q;
		lep_0_vis_p4 = tau_0_truth_vis_p4;
		lep_0_invis_p4 = new TLorentzVector(0,0,0,0); // make it as it doesnt exist

		lep_1 = & elec_0_matched_truth_lepTau;
		lep_1_p4 = elec_0_matched_truth_lepTau_p4;
		lep_1_q = & elec_0_matched_truth_lepTau_q;
		lep_1_invis_p4 = elec_0_matched_truth_lepTau_invis_p4;
		lep_1_vis_p4 = elec_0_matched_truth_lepTau_vis_p4;

		if (tau_0_truth > 0 && elec_0_matched_truth_lepTau > 0 && tau_1_truth == 0 && elec_1_matched_truth_lepTau == 0) n_leptons = 2;
		else n_leptons = 0;
	}

	if (AnalysisType == "MuonTau") {

		lep_0 = & tau_0_truth; 
		lep_0_p4 = tau_0_truth_p4;
		lep_0_q = & tau_0_truth_q;
		lep_0_vis_p4 = tau_0_truth_vis_p4;
		lep_0_invis_p4 = new TLorentzVector(0,0,0,0);

		lep_1 = & muon_0_matched_truth_lepTau;
		lep_1_p4 = muon_0_matched_truth_lepTau_p4;
		lep_1_q = & muon_0_matched_truth_lepTau_q;
		lep_1_invis_p4 = muon_0_matched_truth_lepTau_invis_p4;
		lep_1_vis_p4 = muon_0_matched_truth_lepTau_vis_p4;

		if (tau_0_truth > 0 && muon_0_matched_truth_lepTau > 0 && tau_1_truth == 0 && muon_1_matched_truth_lepTau == 0) n_leptons = 2;
		else n_leptons = 0;
	}

}


//This function will perform the inital cuts, ensuring we have all the particles needed for analysis, selecting ljets
bool MC_Analysis::InitialCut(bool bjets, bool truth) { // true = cut, false = keep

	//Setting up conditions
	bool two_leptons = false;
	bool two_or_more_jets = false;
	bool leptons_opposite_charges = false;
	bool bjets_requirement = false;
	bool jet_0_pt_greater = false;
	bool jet_1_pt_greater = false;
	bool phi_realistic_condition = true;
	double jet_0_pt;
	double jet_1_pt;

	//Is the missing energy physically realistic condition
	if (AnalysisType == "MuonTau" or AnalysisType == "ElectronMuon" or AnalysisType == "ElectronTau") {
		phi_realistic_condition = false;
		phi_realistic_condition = EtMiss_OutOfReachCheck(lep_0_p4, lep_1_p4, met_p4); // returns true if want to keep (inside), false if outside
	}

	//Condition Checking
	if (n_leptons == 2) { //If two leptons are found
		two_leptons = true;
		if (& lep_0_q != & lep_1_q) leptons_opposite_charges = true;  //If lepton +/- pair found
	}

	if (bjets) {
		bjets_region = true;
		if (n_bjets >= 2) bjets_requirement = true;
		jet_0_pt = bjet_0_p4->Pt();
		jet_1_pt = bjet_1_p4->Pt();
	}
	else {
		bjets_region = false;
		if (n_bjets == 0) bjets_requirement = true;
		jet_0_pt = ljet_0_p4->Pt();
		jet_1_pt = ljet_1_p4->Pt();
	}

	if (truth) truth_region = true;
	else truth_region = false;

	if (n_jets >= 2) two_or_more_jets = true;  //If two or more jets were found
	
	//Leading Jet 1 (ljet_0) Cut Condition
	if (jet_0_pt > 55) jet_0_pt_greater = true;

	//Leading Jet 2 (ljet_1) Cut Condition
	if (jet_1_pt > 45) jet_1_pt_greater = true;

	// If the conditions are met, don't cut
	if (two_leptons && two_or_more_jets && leptons_opposite_charges && bjets_requirement && jet_0_pt_greater && jet_0_pt_greater && phi_realistic_condition) return false;
	
	//Otherwise, cut
	return true;	

}

////////////////////////////////////////////////////////////////////////////////////////
///--------------------- RELEVANT VARIABLE CALCULATION FUNCTION ---------------------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::GenerateVariables(bool truth) {

	// BDT STUFF
	BDT_test = tau_0_ele_BDTEleScoreTrans_run2;
	BDT_test1 = tau_0_ele_bdt_loose;
	BDT_test2 = tau_0_ele_bdt_medium;
	BDT_test3 = tau_0_ele_bdt_score;
	BDT_test4 = tau_0_ele_bdt_tight;

	// Missing transverse momentum centrality
	MET_Centrality = METCentrality(met_p4, lep_0_p4, lep_1_p4);

	// InorOut = true means the E_t is outside of the phi interval 
	// Change these to TLorentzVector as needed for Z boson mass reconstruction
	double Et_along_0;
	double Et_along_1;

	//Calculate the lepton mass favour (whether a lepton points more towards the hadronic tau or the leptonic tau
	MET_Type_Favour = METTypeFavour(met_p4, lep_0_p4, lep_1_p4);

	//Vector which cintains the neutrino transverse momentum vectors
	vector<double> Neutrino_Transverse_Momentum_Vector;

	//Stores the momenta of the neutrinos pointed along lepton 0 and lepton 1
	double neutrino_0_x_p, neutrino_0_y_p, neutrino_0_z_p;
	double neutrino_1_x_p, neutrino_1_y_p, neutrino_1_z_p;

	//Calculates the global variable for whether a missing energy is inside or outside the lepton phi interval
	outside_leptons = PhiIntervalInOrOut(lep_0_p4, lep_1_p4, met_p4);

	/* //SANITY CHECK FOR OUTSIDE LEPTON RANGE FUCNTION
	if (outside_leptons) {
		
		cout << "---------------------" << endl << endl;

		double phi_0 = lep_0_p4->Phi();
		double phi_1 = lep_1_p4->Phi();
		double phi_E = met_p4->Phi();
		double dp_01 = DeltaPhi_v2(lep_0_p4, lep_1_p4);
		double dp_0E = DeltaPhi_v2(lep_0_p4, met_p4);
		double dp_1E = DeltaPhi_v2(lep_1_p4, met_p4);
		double dot01 = DotProdPt(lep_0_p4, lep_1_p4);
		double dot0E = DotProdPt(lep_0_p4, met_p4);
		double dot1E = DotProdPt(lep_1_p4, met_p4);

		cout << "phi_0 = " << phi_0 << endl << "phi_1 = " << phi_1 << endl << "phi_E = " << phi_E << endl << endl;
		cout << "dp_01 = " << dp_01 << endl << "dp_0E = " << dp_0E << endl << "dp_1E = " << dp_1E << endl << endl;
		cout << "dot01 = " << dot01 << endl << "dot0E = " << dot0E << endl << "dot1E = " << dot1E << endl << endl;
		cout << "MET_F = " << MET_Type_Favour << endl << endl;
	}
	*/
	
	// if OUTSIDE
	if (outside_leptons) { // outside the phi interval so need to see which one it favours
		
		// want to calcualate which tau it is closer to and find Et component along that tau vector
		if ( ETFavourCalc( lep_0_p4, lep_1_p4, met_p4 ) ) { // closer to lep_0 aka TRUE
			
			// Et_along_0 should be TLorentzVector along lep_0
			Et_along_0 = ETalongVectorCalc(lep_0_p4, met_p4);	// Et along a
			Et_along_1 = 0;

			// neutrino 1
			neutrino_0_x_p = x_component_pT(Et_along_0, lep_0_p4); // p_x of neutrino 1
			neutrino_0_y_p = y_component_pT(Et_along_0, lep_0_p4); // p_y of neutrino 1
			neutrino_0_z_p = p_z_neutrino_calc(Et_along_0, lep_0_p4); // p_z of neutrino 1

			// neutrino 2
			neutrino_1_x_p = 0; // p_x of neutrino 2
			neutrino_1_y_p = 0; // p_y of neutrino 2
			neutrino_1_z_p = 0; // p_z of neutrino 2


		}
		else { // closer to lep_1 aka FALSE
			// Et_along_1 should be TLorentzVector along lep_1
			Et_along_1 = ETalongVectorCalc(lep_1_p4, met_p4);	// Et along a
			Et_along_0 = 0;
			// neutrino 2
			neutrino_1_x_p = x_component_pT(Et_along_1, lep_1_p4); // p_x of neutrino 2
			neutrino_1_y_p = y_component_pT(Et_along_1, lep_1_p4); // p_y of neutrino 2
			neutrino_1_z_p = p_z_neutrino_calc(Et_along_1, lep_1_p4); // p_z of neutrino 2

			// neutrino 1
			neutrino_0_x_p = 0; // p_x of neutrino 1
			neutrino_0_y_p = 0; // p_y of neutrino 1
			neutrino_0_z_p = 0; // p_z of neutrino 1

		} 
	}
	// else INSIDE
	else { // normal "inside" the phi interval gap - standard reconstruction calculation
	
		// neutrino missing energy/momentum vector x and y components (in transverse plane)
		Neutrino_Transverse_Momentum_Vector = pTneutrinovector_calc(lep_0_p4, lep_1_p4, met_p4);

		// transverse momentum for neutrino 1 and 2 taken from the vector VectorNeutrinoTransMom12
		neutrino_0_pt = abs(Neutrino_Transverse_Momentum_Vector[0]);
		neutrino_1_pt = abs(Neutrino_Transverse_Momentum_Vector[1]);

		// neutrino 1
		neutrino_0_x_p = x_component_pT(neutrino_0_pt, lep_0_p4); // p_x of neutrino 1
		neutrino_0_y_p = y_component_pT(neutrino_0_pt, lep_0_p4); // p_y of neutrino 1
		neutrino_0_z_p = p_z_neutrino_calc(neutrino_0_pt, lep_0_p4); // p_z of neutrino 1


		// neutrino 2
		neutrino_1_x_p = x_component_pT(neutrino_1_pt, lep_1_p4); // p_x of neutrino 2
		neutrino_1_y_p = y_component_pT(neutrino_1_pt, lep_1_p4); // p_y of neutrino 2
		neutrino_1_z_p = p_z_neutrino_calc(neutrino_1_pt, lep_1_p4); // p_z of neutrino 2

	}

	TLorentzVector* neutrino_0_TLV = neutrino_TLV(neutrino_0_x_p, neutrino_0_y_p, neutrino_0_z_p); // TLorentzVector (TLV) 4 momentum px,py,pz,E (E=p_tot) of neutrino 1
	TLorentzVector* neutrino_1_TLV = neutrino_TLV(neutrino_1_x_p, neutrino_1_y_p, neutrino_1_z_p); // TLorentzVector (TLV) 4 momentum px,py,pz,E (E=p_tot) of neutrino 2

	// reconstruct tau candidate with tau lepton and neutrino
	lep_0_reco_p4 = merge_two_TLV(lep_0_p4, neutrino_0_TLV); // new TLV for tau candidate with lepton 0 and neutrino 0
	lep_1_reco_p4 = merge_two_TLV(lep_1_p4, neutrino_1_TLV); // new TLV for tau candidate with lepton 1 and neutrino 1

	if (truth) {
		lep_0_reco_p4 = lep_0_p4; //uses LepTau_p4
		lep_1_reco_p4 = lep_1_p4; //uses LepTau_p4

		// TLorentzVectors
		TLorentzVector* lep_0_invis_vis_TLV = merge_two_TLV(lep_0_vis_p4, lep_0_invis_p4); // TLorentzVector for total tau (invis and vis)
		TLorentzVector* lep_1_invis_vis_TLV = merge_two_TLV(lep_1_vis_p4, lep_1_invis_p4); // TLorentzVector for total tau (invis and vis)
		// Invariant mass (takes TLorentzVectors as inputs)
		lep_0_invis_vis_mass = InvariantMass(lep_0_vis_p4, lep_0_invis_p4); //uses TLorentzVectors
		lep_1_invis_vis_mass = InvariantMass(lep_1_vis_p4, lep_1_invis_p4); //uses TLorentzVectors
		lep_0_vis_mass = lep_0_vis_p4->M();
		lep_1_vis_mass = lep_1_vis_p4->M();

		met_truth_energy = (met_p4)->E(); // energy of the TRUTH missing energy
		lep_0_invis_energy = (lep_0_invis_p4)->E(); // Energy of the invisible ntuple for truth tau
		lep_1_invis_energy = (lep_1_invis_p4)->E(); // Energy of the invisible ntuple for truth tau

		// Invariant mass of the di-lepton system (lep 0 and lep 1)
		lep_0_lep_1_invis_vis_mass = InvariantMass(lep_0_invis_vis_TLV, lep_1_invis_vis_TLV); // TLorentz vector of the invariant mass of di-tau
	}

	//Invariant Mass
  	lep_0_lep_1_mass = InvariantMass(lep_0_p4, lep_1_p4);
	lep_0_lep_1_mass_reco = InvariantMass(lep_0_reco_p4 , lep_1_reco_p4);
	jet_0_jet_1_mass = InvariantMass(jet_0_p4, jet_1_p4);

	// Delta R
	DeltaR = DeltaRCalc(lep_0_p4, lep_1_p4);
	DeltaR_reco = DeltaRCalc(lep_0_reco_p4, lep_1_reco_p4);

	//Delta Phi
	DeltaPhi = DeltaPhi_v2(lep_0_p4, lep_1_p4);
	DeltaPhi_reco = DeltaPhi_v2(lep_0_reco_p4, lep_1_reco_p4);

	// Rapidity of dilepton pair
	RapidityDilepton = RapidityDisomething(lep_0_p4, lep_1_p4);

	// Rapidity of dijet pair
	RapidityDijet = RapidityDisomething(jet_0_p4, jet_1_p4);

	// Combined Lepton momentum
	lep_0_lep_1_pt = CombinedTransverseMomentum(lep_0_p4, lep_1_p4);
	lep_0_lep_1_pt_reco = CombinedTransverseMomentum(lep_0_reco_p4, lep_1_reco_p4);

	// p_T_Balance 
	pT_balance = pTBalanceCalc(lep_0_p4, lep_1_p4, jet_0_p4, jet_1_p4);
	pT_balance_reco = pTBalanceCalc(lep_0_reco_p4, lep_1_reco_p4, jet_0_p4, jet_1_p4);

	// p_T_Balance_3
	pT_balance_3 = pTBalanceThreeCalc(lep_0_p4, lep_1_p4, jet_0_p4, jet_1_p4, jet_2_p4);
	
	// Centrality of Z boson between two leading jets calc using rapidity
	Centrality = CentralityCalc(lep_0_p4, lep_1_p4, jet_0_p4, jet_1_p4);
	Centrality_reco = CentralityCalc(lep_0_reco_p4, lep_1_reco_p4, jet_0_p4, jet_1_p4);

	double QCD_weight_factor = 1;

	if (ChainName.find("_Zee_") != string::npos) {
		QCD_weight_factor = -0.000240084 * jet_0_jet_1_mass + 0.996438;
		//cout << "QCD_WEIGHT_FACTOR = " << QCD_weight_factor << endl << endl;
	}
	else if (ChainName.find("_Zmumu_") != string::npos) {
		QCD_weight_factor = -0.000279242 * jet_0_jet_1_mass + 1.01748;
		//cout << "QCD_WEIGHT_FACTOR = " << QCD_weight_factor << endl << endl;
	}
	else if (ChainName.find("_Ztt_") != string::npos) {
		QCD_weight_factor = -0.000279242 * jet_0_jet_1_mass + 1.01748;
		//cout << "QCD_WEIGHT_FACTOR = " << QCD_weight_factor << endl << endl;
	}

	// Final Weighting
	final_weighting = Luminosity_Weight * weight_total * QCD_weight_factor;	
	
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
	h_DeltaPhi_PRE->Fill(DeltaPhi, final_weighting);

	// pT balance PRE
	h_pT_balance_PRE->Fill(pT_balance, final_weighting);

	// pT balance 3 PRE
	h_pT_balance_3_PRE->Fill(pT_balance_3, final_weighting);

	// Centrality PRE
	h_Centrality_PRE->Fill(Centrality, final_weighting);
	h_MET_Centrality_PRE->Fill(MET_Centrality, final_weighting);

	// missing energy for neutrino 1 and 2 taken from the vector VectorMissingEnergy12 PRE
	h_neutrino_0_pt_PRE->Fill(neutrino_0_pt,final_weighting);
	h_neutrino_1_pt_PRE->Fill(neutrino_1_pt,final_weighting);

	if (AnalysisType == "MuonTau" or AnalysisType == "ElectronTau") {

		h_MET_Type_Favour_PRE->Fill(MET_Type_Favour, final_weighting);

		if (outside_leptons) {
			h_MET_Type_Favour_OUTSIDE_PRE->Fill(MET_Type_Favour, final_weighting);

		} else {
			h_MET_Type_Favour_INSIDE_PRE->Fill(MET_Type_Favour, final_weighting);

		}

	}

	if (AnalysisType == "MuonTau" or AnalysisType == "ElectronMuon" or AnalysisType == "ElectronTau") {

		h_lep_0_lep_1_mass_reco_PRE->Fill(lep_0_lep_1_mass_reco, final_weighting);
		h_lep_0_lep_1_pt_reco_PRE->Fill(lep_0_lep_1_pt_reco, final_weighting);
		h_DeltaR_reco_PRE->Fill(DeltaR_reco, final_weighting);
		h_Centrality_reco_PRE->Fill(Centrality_reco, final_weighting);
		h_DeltaPhi_reco_PRE->Fill(DeltaPhi_reco, final_weighting);
		h_pT_balance_reco_PRE->Fill(pT_balance_reco, final_weighting);

		if (outside_leptons) {

			h_lep_0_lep_1_mass_reco_OUTSIDE_PRE->Fill(lep_0_lep_1_mass_reco, final_weighting);
			h_DeltaPhi_reco_OUTSIDE_PRE->Fill(DeltaPhi_reco, final_weighting);
			h_pT_balance_reco_OUTSIDE_PRE->Fill(pT_balance_reco, final_weighting);

		} else {

			h_lep_0_lep_1_mass_reco_INSIDE_PRE->Fill(lep_0_lep_1_mass_reco, final_weighting);
			h_pT_balance_reco_INSIDE_PRE->Fill(pT_balance_reco, final_weighting);
			h_DeltaPhi_reco_INSIDE_PRE->Fill(DeltaPhi_reco, final_weighting);

		}

	}


}

////////////////////////////////////////////////////////////////////////////////////////
///--------------------------- CUT FUNCTION CUT ON VARIABLES ------------------------///
////////////////////////////////////////////////////////////////////////////////////////
// NOTES
// Missing energy 'Phi Interval Check' will go in eventually but has not yet been implemented

bool MC_Analysis::Cuts(string region) {

	// Initialise common bool conditions
	bool Z_mass_condition = false;
	bool combined_lepton_pt = false;
	bool leading_jets_invariant_mass = false;
	bool ptvarcone_40_0 = false;
	bool ptvarcone_40_1 = false;
	bool phi_int_condition = PhiIntervalCheck(lep_0_p4, lep_1_p4, met_p4);
	bool Et_Miss_RangeCheck = EtMiss_OutOfReachCheck(lep_0_p4, lep_1_p4, met_p4);

	//Initialise Custom Cuts
	bool centrality_condition = false;
	bool delta_phi_condition = false;
	bool pT_balance_reco_condition = false;

	//Initialise specific bool conditions
	bool pT_balance_limit = false;
	bool pT_balance_3_limit = false;
	bool rap_int_condition = RapidityIntervalCheck(jet_0_p4, jet_1_p4, jet_2_p4);

	//Z Boson Mass Cut
	if (lep_0_lep_1_mass >= 81 && lep_0_lep_1_mass <= 101) Z_mass_condition = true;	

	//Dilepton Pt Cut
	if (lep_0_lep_1_pt > 20) combined_lepton_pt = true;

	// Dijjet mass = Leading Jets Combined Invariant mass
	if (jet_0_jet_1_mass > 250) leading_jets_invariant_mass = true; // invariant mass of 2 leading jets required to satisfy m_jj > 250 GeV

	//pt balance limit Cut Condition
	if (pT_balance < 0.15) pT_balance_limit = true;

	if (pT_balance_reco < 0.13) pT_balance_reco_condition = true;

	//pt balance 3 Cut Condition
	if (pT_balance_3 < 0.15) pT_balance_3_limit = true;

	//ptvarcone cuts
	if (lep_0_iso_ptvarcone40 < 0.1) ptvarcone_40_0 = true; 
	if (lep_1_iso_ptvarcone40 < 0.1) ptvarcone_40_1 = true;
	
	//Centrality cuts
	if (Centrality >= -2 && Centrality <= 2) centrality_condition = true;
	
	if (DeltaPhi < 2.72825) delta_phi_condition = true;

	//If the region is an except region, make the relevant condition always true to see more of that histogram.
	if (region == "EXCEPT_Z_mass_condition" && !(bjets_region)) 		Z_mass_condition = true;
	if (region == "EXCEPT_combined_lepton_pt" && !(bjets_region)) 		combined_lepton_pt = true;
	if (region == "EXCEPT_leading_jets_invariant_mass" && !(bjets_region)) 	leading_jets_invariant_mass = true;
	if (region == "EXCEPT_ptvarcone_40_0" && !(bjets_region)) 		ptvarcone_40_0 = true;
	if (region == "EXCEPT_ptvarcone_40_1" && !(bjets_region)) 		ptvarcone_40_1 = true;
	if (region == "EXCEPT_pT_balance_limit" && !(bjets_region)) 		pT_balance_limit = true;
	if (region == "EXCEPT_pT_balance_3_limit" && !(bjets_region)) 		pT_balance_3_limit = true;
	if (region == "EXCEPT_centrality_condition" && !(bjets_region)) 		centrality_condition = true;
	if (region == "EXCEPT_delta_phi_condition" && !(bjets_region)) 		delta_phi_condition = true;

	//If the region is the bjet region, make the mass condition true, so that the full mass spectrum can be seen 
	if (region == "bjet") Z_mass_condition = true;

	//If the region is the high energy region, increase the minimum energy requirement for events.
	if (region == "high_energy") {

		leading_jets_invariant_mass = false;
		if (jet_0_jet_1_mass > 1449.75) leading_jets_invariant_mass = true;

	}


	bool common_cuts = false;	//The common cuts are false initially
	bool custom_cuts = true;	//The custom cuts are true initially, as they are only considered for the "Tau" analyses, "ElectronTau", "MuonTau", "ElectronMuon".

	// common cuts for "Tau"
	if (AnalysisType == "ElectronMuon" || AnalysisType == "ElectronTau" || AnalysisType == "MuonTau"){

		//This is only here in order to see the full mass spectrum represented in the rest of the cuts, and should be changed when appropriate
		Z_mass_condition = false;
		if (lep_0_lep_1_mass_reco >= 60 && lep_0_lep_1_mass_reco <= 120) Z_mass_condition = true;

		if (region == "EXCEPT_Z_mass_condition" && bjets_region == false) Z_mass_condition = true;	
		if (region == "EXCEPT_pT_balance_reco_condition" && bjets_region == false) pT_balance_reco_condition = true;

		custom_cuts = false;

		if (region == "EXCEPT_delta_phi_condition" && bjets_region == false) delta_phi_condition = true;
		if (centrality_condition && delta_phi_condition && pT_balance_reco_condition) custom_cuts = true;
		
		pT_balance_limit = true; // pT balance cut taken out
		pT_balance_3_limit = true; // pT balance 3 cut taken out

		//Work out if the common cuts are true here
	 	if (Z_mass_condition && combined_lepton_pt && leading_jets_invariant_mass && ptvarcone_40_0 && ptvarcone_40_1 && Et_Miss_RangeCheck) {
			common_cuts = true;
		}
		
	}

	else { // common cuts for "Electron" and "Muon" 
		//Work out if the common cuts are true here
	 	if (Z_mass_condition && combined_lepton_pt && leading_jets_invariant_mass && ptvarcone_40_0 && ptvarcone_40_1) {
			common_cuts = true;
		}
	}

	//If the region is the search region or an except region that isn't pt_balance (EW Z->ll enriched)
	if ((region == "search" || (region.substr(0,6) == "EXCEPT" && region.substr(7,10) != "pT_balance")) && !(bjets_region) && !(truth_region)) {
		if (common_cuts && custom_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	//If the region is the except region for pt_balance (EW Z->ll enriched)
	if (region == "EXCEPT_pT_balance_reco_condition" && !(bjets_region) && !(truth_region)) {
		if (common_cuts && custom_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	//If the region is the except region for pt_balance (EW Z->ll enriched)
	if (region == "EXCEPT_pT_balance_limit" && !(bjets_region) && !(truth_region)) {
		if (common_cuts && custom_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	//If the region is the except region for pt_balance_3 (QCD enriched)
	if (region == "EXCEPT_pT_balance_3_limit" && !(bjets_region) && !(truth_region)) {
		if(common_cuts && custom_cuts && !(rap_int_condition) && pT_balance_3_limit) return true;
	}

	//If the region is the control region (QCD enriched)
	if (region == "control" && !(bjets_region) && !(truth_region)) {
		if(common_cuts && custom_cuts && !(rap_int_condition) && pT_balance_3_limit) return true;
	}

	//If the region is the bjet enriched region
	if (region == "bjet" && bjets_region && !(truth_region)) {
		if (common_cuts && custom_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	//If the region is the high energy region
	if (region == "high_energy" && !(bjets_region) && !(truth_region)) {
		if (common_cuts && custom_cuts && rap_int_condition && pT_balance_limit) return true;
	}

	//If the region is the high energy region
	if (region == "truth" && !(bjets_region) && truth_region) {
		if (common_cuts && custom_cuts && rap_int_condition && pT_balance_limit) return true;
	}
	
	return false;

}

////////////////////////////////////////////////////////////////////////////////////////
///-------- FILL FUNCTION TO FILLI HISTOGRAMS BELONGING TO DIFFERENT REGIONS --------///
////////////////////////////////////////////////////////////////////////////////////////
void MC_Analysis::Fill(string region) {

	if (weight_total_override) weight_total = 1;  //THIS VARIABLE MAY BE REDUNDANT

	if (region == "normal") {

		bool EXCEPT_Z_mass_condition = false;
		bool EXCEPT_DeltaPhi_condition = false;
		bool EXCEPT_pT_balance_reco_condition = false;
		bool EXCEPT_Centrality_condition = false;
		bool EXCEPT_Jet_mass_condition = false;

		///----- EXCEPT region filling -----///
		if (Cuts("EXCEPT_Z_mass_condition")) {
								 h_lep_0_lep_1_mass_EXCEPT->Fill(lep_0_lep_1_mass, final_weighting);		//Fill the EXCEPT histogram for mass
								 h_lep_0_lep_1_mass_EXCEPT_FINE->Fill(lep_0_lep_1_mass, final_weighting);
								 EXCEPT_Z_mass_condition = true;
		}
		if (Cuts("EXCEPT_combined_lepton_pt")) {
								 h_lep_0_lep_1_pt_EXCEPT->Fill(lep_0_lep_1_pt, final_weighting);			//Fill the EXCEPT histogram for combined lepton pt
								 h_lep_0_lep_1_pt_EXCEPT_FINE->Fill(lep_0_lep_1_pt, final_weighting);
		}
		if (Cuts("EXCEPT_leading_jets_invariant_mass")) {
								 h_jet_0_jet_1_mass_EXCEPT->Fill(jet_0_jet_1_mass, final_weighting);		//Fill the EXCEPT histogram for leading jets combined invariant mass
								 h_jet_0_jet_1_mass_EXCEPT_FINE->Fill(jet_0_jet_1_mass, final_weighting);
								 EXCEPT_Jet_mass_condition = true;
		}
		if (Cuts("EXCEPT_ptvarcone_40_0")) {
								 h_lep_0_iso_ptvarcone40_EXCEPT->Fill(lep_0_iso_ptvarcone40, final_weighting);	//Fill the EXCEPT histogram for isolation cone on lepton 0
								 h_lep_0_iso_ptvarcone40_EXCEPT_FINE->Fill(lep_0_iso_ptvarcone40, final_weighting);
		}
		if (Cuts("EXCEPT_ptvarcone_40_1")) {
								 h_lep_1_iso_ptvarcone40_EXCEPT->Fill(lep_1_iso_ptvarcone40, final_weighting);	//Fill the EXCEPT histogram for isolation cone on lepton 1
								 h_lep_1_iso_ptvarcone40_EXCEPT_FINE->Fill(lep_1_iso_ptvarcone40, final_weighting);
		}
		if (Cuts("EXCEPT_pT_balance_limit")) {
								 h_pT_balance_EXCEPT->Fill(pT_balance, final_weighting);				//Fill the EXCEPT histogram for pt balance
								 h_pT_balance_EXCEPT_FINE->Fill(pT_balance, final_weighting);
		}
		if (Cuts("EXCEPT_pT_balance_3_limit")) {
								 h_pT_balance_3_EXCEPT->Fill(pT_balance_3, final_weighting);			//Fill the EXCEPT histogram for pt balance 3 (extra jet, control region)
								 h_pT_balance_3_EXCEPT_FINE->Fill(pT_balance_3, final_weighting);	
		}
		if (Cuts("EXCEPT_centrality_condition")) {
								 h_Centrality_EXCEPT->Fill(Centrality, final_weighting);				//Fill the EXCEPT histogram for centrality	
								 h_Centrality_EXCEPT_FINE->Fill(Centrality, final_weighting);	
								 EXCEPT_Centrality_condition = true;
		}
		if (Cuts("EXCEPT_delta_phi_condition")) {
								h_DeltaPhi_EXCEPT->Fill(DeltaPhi, final_weighting);				//Fill the EXCEPT histogram for delta phi	
								h_DeltaPhi_EXCEPT_FINE->Fill(DeltaPhi, final_weighting);	
								EXCEPT_DeltaPhi_condition = true;
		}

		if (AnalysisType == "MuonTau" or AnalysisType == "ElectronMuon" or AnalysisType == "ElectronTau") {

			if (EXCEPT_Z_mass_condition) {
				h_lep_0_lep_1_mass_reco_EXCEPT->Fill(lep_0_lep_1_mass_reco, final_weighting);	//Fill the EXCEPT histogram for reconstructed mass
				h_lep_0_lep_1_mass_reco_EXCEPT_FINE->Fill(lep_0_lep_1_mass_reco, final_weighting);
			}

			if (EXCEPT_DeltaPhi_condition) {
				h_DeltaPhi_reco_EXCEPT->Fill(DeltaPhi_reco, final_weighting); //Fill the EXCEPT histogram for DeltaPhi
				h_DeltaPhi_reco_EXCEPT_FINE->Fill(DeltaPhi_reco, final_weighting); //Fill the EXCEPT histogram for DeltaPhi
			}

			if (Cuts("EXCEPT_pT_balance_reco_condition")) {
				h_pT_balance_reco_EXCEPT->Fill(pT_balance_reco, final_weighting); //Fill the EXCEPT histogram for DeltaPhi
				h_pT_balance_reco_EXCEPT_FINE->Fill(pT_balance_reco, final_weighting);
				EXCEPT_pT_balance_reco_condition = true;
			}

			if (outside_leptons) {

				if (EXCEPT_Z_mass_condition) h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT->Fill(lep_0_lep_1_mass_reco, final_weighting);	//Fill the EXCEPT histogram for reconstructed mass
				if (EXCEPT_DeltaPhi_condition) h_DeltaPhi_reco_OUTSIDE_EXCEPT->Fill(DeltaPhi_reco, final_weighting);				//Fill the EXCEPT histogram for DeltaPhi
				if (EXCEPT_pT_balance_reco_condition) h_pT_balance_reco_OUTSIDE_EXCEPT->Fill(pT_balance_reco, final_weighting);				//Fill the EXCEPT histogram for DeltaPhi

			} else {

				if (EXCEPT_Z_mass_condition) {
					h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT->Fill(lep_0_lep_1_mass_reco, final_weighting);	//Fill the EXCEPT histogram for reconstructed mass
					h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE->Fill(lep_0_lep_1_mass_reco, final_weighting);
				}

				if (EXCEPT_DeltaPhi_condition) {
					h_DeltaPhi_reco_INSIDE_EXCEPT->Fill(DeltaPhi_reco, final_weighting);	//Fill the EXCEPT histogram for DeltaPhi
					h_DeltaPhi_reco_INSIDE_EXCEPT_FINE->Fill(DeltaPhi_reco, final_weighting);
				}

				if (EXCEPT_pT_balance_reco_condition) {
					h_pT_balance_reco_INSIDE_EXCEPT->Fill(pT_balance_reco, final_weighting); //Fill the EXCEPT histogram for DeltaPhi
					h_pT_balance_reco_INSIDE_EXCEPT_FINE->Fill(pT_balance_reco, final_weighting);	
				}

				if (EXCEPT_Centrality_condition) {
					h_Centrality_INSIDE_EXCEPT->Fill(Centrality, final_weighting);				//Fill the EXCEPT histogram for centrality	
					h_Centrality_INSIDE_EXCEPT_FINE->Fill(Centrality, final_weighting);	
				}

				if (EXCEPT_Jet_mass_condition) {
					h_jet_0_jet_1_mass_INSIDE_EXCEPT->Fill(jet_0_jet_1_mass, final_weighting);		//Fill the EXCEPT histogram for leading jets combined invariant mass
					h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE->Fill(jet_0_jet_1_mass, final_weighting);
				}

			}

		}

		///----- SEARCH region filling -----///	
		if (Cuts("search")) {

			#include "_FillAllData_PostCut.h"

			signal_event_selected = true;

			// BDT STUFF
			h_BDT_test->Fill(BDT_test, final_weighting);
			h_BDT_test1->Fill(BDT_test1, final_weighting);
			h_BDT_test2->Fill(BDT_test2, final_weighting);
			h_BDT_test3->Fill(BDT_test3, final_weighting);
			h_BDT_test4->Fill(BDT_test4, final_weighting);

			//ptvar cone histograms
			h_lep_1_iso_ptvarcone40->Fill(lep_1_iso_ptvarcone40, final_weighting);
			h_lep_0_iso_ptvarcone40->Fill(lep_0_iso_ptvarcone40, final_weighting);

			//Invariant mass
			h_lep_0_lep_1_mass->Fill(lep_0_lep_1_mass, final_weighting); 	// two electrons
			h_jet_0_jet_1_mass->Fill(jet_0_jet_1_mass, final_weighting); 	// two jets

			//Combined lepton
			h_RapidityDilepton->Fill(RapidityDilepton, final_weighting);	// dilepton rapidity
			h_RapidityDijet->Fill(RapidityDijet, final_weighting);		// dijet rapidity
			h_lep_0_lep_1_pt->Fill(lep_0_lep_1_pt, final_weighting);	// dilepton transverse momentum

			//Delta R for two electrons
			h_DeltaR->Fill(DeltaR, final_weighting);			// Angular separation of two leptons

			h_DeltaPhi->Fill(DeltaPhi, final_weighting);

			// pT balance
			h_pT_balance->Fill(pT_balance, final_weighting);	
	
			// if(pT_balance > 0.15) cout << "HOW DID THIS HAPPEN TO ME" << endl;

			// Centrality
			h_Centrality->Fill(Centrality, final_weighting);
			h_MET_Centrality->Fill(MET_Centrality, final_weighting);

			// missing energy for neutrino 1 and 2 taken from the vector VectorMissingEnergy12 PRE
			h_neutrino_0_pt->Fill(neutrino_0_pt,final_weighting);
			h_neutrino_1_pt->Fill(neutrino_1_pt,final_weighting);

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronTau") {

				h_MET_Type_Favour->Fill(MET_Type_Favour, final_weighting);
				h_Mass_Favour_Combination_2D->Fill(MET_Type_Favour,lep_0_lep_1_mass_reco, final_weighting);

				if (outside_leptons) {
					h_MET_Type_Favour_OUTSIDE->Fill(MET_Type_Favour, final_weighting);
					h_Mass_Favour_Combination_OUTSIDE_2D->Fill(MET_Type_Favour,lep_0_lep_1_mass_reco, final_weighting);

				} else {

					h_MET_Type_Favour_INSIDE->Fill(MET_Type_Favour, final_weighting);
					h_Mass_Favour_Combination_INSIDE_2D->Fill(MET_Type_Favour,lep_0_lep_1_mass_reco, final_weighting);

				}


			}

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronMuon" or AnalysisType == "ElectronTau") {

				h_lep_0_lep_1_mass_reco->Fill(lep_0_lep_1_mass_reco, final_weighting);
				h_lep_0_lep_1_pt_reco->Fill(lep_0_lep_1_pt_reco, final_weighting);
				h_DeltaR_reco->Fill(DeltaR_reco, final_weighting);
				h_Centrality_reco->Fill(Centrality_reco, final_weighting);
				h_pT_balance_reco->Fill(pT_balance_reco, final_weighting);
				h_DeltaPhi_reco->Fill(DeltaPhi_reco, final_weighting);
				h_Mass_DeltaPhi_Combination_2D->Fill(DeltaPhi_reco, lep_0_lep_1_mass_reco, final_weighting);

				if (outside_leptons) {

					h_lep_0_lep_1_mass_reco_OUTSIDE->Fill(lep_0_lep_1_mass_reco, final_weighting);
					h_jet_0_jet_1_mass_OUTSIDE->Fill(jet_0_jet_1_mass, final_weighting); 	// two jets
					h_pT_balance_reco_OUTSIDE->Fill(pT_balance_reco, final_weighting);
					h_DeltaPhi_reco_OUTSIDE->Fill(DeltaPhi_reco, final_weighting);
					h_Centrality_OUTSIDE->Fill(Centrality, final_weighting);
					h_Mass_DeltaPhi_Combination_OUTSIDE_2D->Fill(DeltaPhi_reco, lep_0_lep_1_mass_reco, final_weighting);

				} else {

					h_lep_0_lep_1_mass_reco_INSIDE->Fill(lep_0_lep_1_mass_reco, final_weighting);
					h_jet_0_jet_1_mass_INSIDE->Fill(jet_0_jet_1_mass, final_weighting); 	// two jets
					h_pT_balance_reco_INSIDE->Fill(pT_balance_reco, final_weighting);
					h_DeltaPhi_reco_INSIDE->Fill(DeltaPhi_reco, final_weighting);
					h_Centrality_INSIDE->Fill(Centrality, final_weighting);
					h_Mass_DeltaPhi_Combination_INSIDE_2D->Fill(DeltaPhi_reco, lep_0_lep_1_mass_reco, final_weighting);

				}

			}

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

			h_DeltaPhi_CONTROL->Fill(DeltaPhi, final_weighting);

			// pT balance CONTROL
			h_pT_balance_3_CONTROL->Fill(pT_balance_3, final_weighting);
		
			// Centrality CONTROL
			h_Centrality_CONTROL->Fill(Centrality, final_weighting);
		
			// MET Centrality CONTROL
			h_MET_Centrality_CONTROL->Fill(MET_Centrality, final_weighting);
			 
			// missing energy for neutrino 1 and 2 taken from the vector VectorMissingEnergy12 CONTROL
			h_neutrino_0_pt_CONTROL->Fill(neutrino_0_pt,final_weighting);
			h_neutrino_1_pt_CONTROL->Fill(neutrino_1_pt,final_weighting);

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronTau") {

				h_MET_Type_Favour_CONTROL->Fill(MET_Type_Favour, final_weighting);

				if (outside_leptons) {
					h_MET_Type_Favour_OUTSIDE_CONTROL->Fill(MET_Type_Favour, final_weighting);

				} else {
					h_MET_Type_Favour_INSIDE_CONTROL->Fill(MET_Type_Favour, final_weighting);

				}

			}

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronMuon" or AnalysisType == "ElectronTau") {

				h_lep_0_lep_1_mass_reco_CONTROL->Fill(lep_0_lep_1_mass_reco, final_weighting);
				h_lep_0_lep_1_pt_reco_CONTROL->Fill(lep_0_lep_1_pt_reco, final_weighting);
				h_DeltaR_reco_CONTROL->Fill(DeltaR_reco, final_weighting);
				h_Centrality_reco_CONTROL->Fill(Centrality_reco, final_weighting);
				h_DeltaPhi_reco_CONTROL->Fill(DeltaPhi_reco, final_weighting);

				if (outside_leptons) {

					h_lep_0_lep_1_mass_reco_OUTSIDE_CONTROL->Fill(lep_0_lep_1_mass_reco, final_weighting);
					h_DeltaPhi_reco_OUTSIDE_CONTROL->Fill(DeltaPhi_reco, final_weighting);

				} else {

					h_lep_0_lep_1_mass_reco_INSIDE_CONTROL->Fill(lep_0_lep_1_mass_reco, final_weighting);
					h_DeltaPhi_reco_INSIDE_CONTROL->Fill(DeltaPhi_reco, final_weighting);

				}

			}


		}


		if (Cuts("high_energy")) {

			#include "_FillAllData_HIGH_E.h"

			//Invariant mass HIGH_E
			h_lep_0_lep_1_mass_HIGH_E->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
			h_jet_0_jet_1_mass_HIGH_E->Fill(jet_0_jet_1_mass, final_weighting); // two jets

			h_lep_0_lep_1_pt_HIGH_E->Fill(lep_0_lep_1_pt, final_weighting);

			//Delta R for two electrons HIGH_E
			h_DeltaR_HIGH_E->Fill(DeltaR, final_weighting);

			// pT balance HIGH_E
			h_pT_balance_HIGH_E->Fill(pT_balance, final_weighting);	
			h_pT_balance_reco_HIGH_E->Fill(pT_balance_reco, final_weighting);
	
			//if(pT_balance > 0.15) cout << "HOW COULD THIS HAPPEN TO ME" << endl;

			// Centrality HIGH_E
			h_Centrality_HIGH_E->Fill(Centrality, final_weighting);

			// MET Centrality HIGH_E
			h_MET_Centrality_HIGH_E->Fill(MET_Centrality, final_weighting);

			// missing energy for neutrino 1 and 2 taken from the vector VectorMissingEnergy12 BJET
			h_neutrino_0_pt_HIGH_E->Fill(neutrino_0_pt,final_weighting);
			h_neutrino_1_pt_HIGH_E->Fill(neutrino_1_pt,final_weighting);

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronTau") {

				h_MET_Type_Favour_HIGH_E->Fill(MET_Type_Favour, final_weighting);

			}

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronMuon" or AnalysisType == "ElectronTau") {

				h_lep_0_lep_1_mass_reco_HIGH_E->Fill(lep_0_lep_1_mass_reco, final_weighting);

			}

		}

	}

	if (region == "bjet") {

		if (Cuts("bjet")) {

			#include "_FillAllData_BJET.h"

			//ptvar cone histograms BJET
			h_lep_1_iso_ptvarcone40_BJET->Fill(lep_1_iso_ptvarcone40, final_weighting);
			h_lep_0_iso_ptvarcone40_BJET->Fill(lep_0_iso_ptvarcone40, final_weighting);

			//Invariant mass BJET
			h_lep_0_lep_1_mass_BJET->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
			h_jet_0_jet_1_mass_BJET->Fill(jet_0_jet_1_mass, final_weighting); // two jets

			//Combined lepton BJET
			h_RapidityDilepton_BJET->Fill(RapidityDilepton, final_weighting);// (elec) dilepton rapidity
			h_RapidityDijet_BJET->Fill(RapidityDijet, final_weighting);// (jet) dijet rapidity
			h_lep_0_lep_1_pt_BJET->Fill(lep_0_lep_1_pt, final_weighting);

			//Delta R for two electrons BJET
			h_DeltaR_BJET->Fill(DeltaR, final_weighting);

			// pT balance BJET
			h_pT_balance_BJET->Fill(pT_balance, final_weighting);	
			h_pT_balance_reco_BJET->Fill(pT_balance_reco, final_weighting);	

			//if(pT_balance > 0.15) cout << "HOW COULD THIS HAPPEN TO ME" << endl;

			// Centrality BJET
			h_Centrality_BJET->Fill(Centrality, final_weighting);

			// MET Centrality BJET
			h_MET_Centrality_BJET->Fill(MET_Centrality, final_weighting);

			// missing energy for neutrino 1 and 2 taken from the vector VectorMissingEnergy12 BJET
			h_neutrino_0_pt_BJET->Fill(neutrino_0_pt,final_weighting);
			h_neutrino_1_pt_BJET->Fill(neutrino_1_pt,final_weighting);

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronTau") {

				h_MET_Type_Favour_BJET->Fill(MET_Type_Favour, final_weighting);

			}
		}
	}

	if (region == "truth") {

		if (signal_event_selected) {

			#include "_FillAllData_TRUTH.h"

			//ptvar cone histograms TRUTH
			h_lep_1_iso_ptvarcone40_TRUTH->Fill(lep_1_iso_ptvarcone40, final_weighting);
			h_lep_0_iso_ptvarcone40_TRUTH->Fill(lep_0_iso_ptvarcone40, final_weighting);

			// Missing energy invariant mass TRUTH
			h_lep_0_invis_vis_mass_TRUTH->Fill(lep_0_invis_vis_mass, final_weighting); // tau_0 invisible and visable invar mass
			h_lep_1_invis_vis_mass_TRUTH->Fill(lep_1_invis_vis_mass, final_weighting); // tau_1 invisible and visable invar mass
			h_lep_0_lep_1_invis_vis_mass_TRUTH->Fill(lep_0_lep_1_invis_vis_mass, final_weighting); // di-tau invar mass
			h_lep_0_vis_mass_TRUTH->Fill(lep_0_vis_mass, final_weighting);
			h_lep_1_vis_mass_TRUTH->Fill(lep_1_vis_mass, final_weighting);

			// ENERGY
			h_met_truth_energy_TRUTH->Fill(met_truth_energy, final_weighting);
			h_lep_0_invis_energy_TRUTH->Fill(lep_0_invis_energy, final_weighting);
			h_lep_1_invis_energy_TRUTH->Fill(lep_1_invis_energy, final_weighting);

			//Invariant mass TRUTH
			h_lep_0_lep_1_mass_TRUTH->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
			h_jet_0_jet_1_mass_TRUTH->Fill(jet_0_jet_1_mass, final_weighting); // two jets

			//Combined lepton TRUTH
			h_RapidityDilepton_TRUTH->Fill(RapidityDilepton, final_weighting);// (elec) dilepton rapidity
			h_RapidityDijet_TRUTH->Fill(RapidityDijet, final_weighting);// (jet) dijet rapidity
			h_lep_0_lep_1_pt_TRUTH->Fill(lep_0_lep_1_pt, final_weighting);

			//Delta R for two electrons TRUTH
			h_DeltaR_TRUTH->Fill(DeltaR, final_weighting);

			h_DeltaPhi_TRUTH->Fill(DeltaPhi, final_weighting);

			// pT balance TRUTH
			h_pT_balance_TRUTH->Fill(pT_balance, final_weighting);	
			h_pT_balance_reco_TRUTH->Fill(pT_balance_reco, final_weighting);	

			//if(pT_balance > 0.15) cout << "HOW COULD THIS HAPPEN TO ME" << endl;

			// Centrality TRUTH
			h_Centrality_TRUTH->Fill(Centrality, final_weighting);

			// MET Centrality TRUTH
			h_MET_Centrality_TRUTH->Fill(MET_Centrality, final_weighting);

			// missing energy for neutrino 1 and 2 taken from the vector VectorMissingEnergy12 TRUTH
			h_neutrino_0_pt_TRUTH->Fill(neutrino_0_pt,final_weighting);
			h_neutrino_1_pt_TRUTH->Fill(neutrino_1_pt,final_weighting);

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronTau") {

				h_MET_Type_Favour_TRUTH->Fill(MET_Type_Favour, final_weighting);
				h_Mass_Favour_Combination_2D_TRUTH->Fill(MET_Type_Favour,lep_0_lep_1_mass_reco, final_weighting);

				if (outside_leptons) {
					h_MET_Type_Favour_OUTSIDE_TRUTH->Fill(MET_Type_Favour, final_weighting);
					h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH->Fill(MET_Type_Favour,lep_0_lep_1_mass_reco, final_weighting);

				} else {
					h_MET_Type_Favour_INSIDE_TRUTH->Fill(MET_Type_Favour, final_weighting);
					h_Mass_Favour_Combination_INSIDE_2D_TRUTH->Fill(MET_Type_Favour,lep_0_lep_1_mass_reco, final_weighting);

				}

			}

			if (AnalysisType == "MuonTau" or AnalysisType == "ElectronMuon" or AnalysisType == "ElectronTau") {

				h_lep_0_lep_1_mass_reco_TRUTH->Fill(lep_0_lep_1_mass_reco, final_weighting);
				h_lep_0_lep_1_pt_reco_TRUTH->Fill(lep_0_lep_1_pt_reco, final_weighting);
				h_DeltaR_reco_TRUTH->Fill(DeltaR_reco, final_weighting);
				h_Centrality_reco_TRUTH->Fill(Centrality_reco, final_weighting);
				h_DeltaPhi_reco_TRUTH->Fill(DeltaPhi_reco, final_weighting);
				h_pT_balance_reco_TRUTH->Fill(pT_balance_reco, final_weighting);
				h_Mass_DeltaPhi_Combination_2D_TRUTH->Fill(DeltaPhi_reco, lep_0_lep_1_mass_reco, final_weighting);


				if (outside_leptons) {

					h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH->Fill(lep_0_lep_1_mass_reco, final_weighting);
					h_DeltaPhi_reco_OUTSIDE_TRUTH->Fill(DeltaPhi_reco, final_weighting);
					h_pT_balance_reco_OUTSIDE_TRUTH->Fill(pT_balance_reco, final_weighting);
					h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH->Fill(DeltaPhi_reco, lep_0_lep_1_mass_reco, final_weighting);

				} else {

					h_lep_0_lep_1_mass_reco_INSIDE_TRUTH->Fill(lep_0_lep_1_mass_reco, final_weighting);
					h_pT_balance_reco_INSIDE_TRUTH->Fill(pT_balance_reco, final_weighting);
					h_DeltaPhi_reco_INSIDE_TRUTH->Fill(DeltaPhi_reco, final_weighting);
					h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH->Fill(DeltaPhi_reco, lep_0_lep_1_mass_reco, final_weighting);

				}

			}

		}

	}

}

//This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../../Root-Files/" + AnalysisType + "/" + ChainName + "_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "HOW DID THIS HAPPEN TO ME" << endl;

	#include "_DrawHistos.h"

	// BDT histograms
	DrawHistogram(h_BDT_test, "h_BDT_test", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_BDT_test1, "h_BDT_test1", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_BDT_test2, "h_BDT_test2", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_BDT_test3, "h_BDT_test3", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_BDT_test4, "h_BDT_test4", ";;Events", false, true, ChainName, AnalysisType);

	//ptvar cone histograms
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_1_iso_ptvarcone40_PRE, h_lep_1_iso_ptvarcone40, h_lep_1_iso_ptvarcone40_CONTROL, h_lep_1_iso_ptvarcone40_EXCEPT, "ptvarcone40 for lepton 1", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_1_iso_ptvarcone40", ";Momentum [GeV/c];Events", true, draw_histograms, ChainName, AnalysisType);	
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_iso_ptvarcone40_PRE, h_lep_0_iso_ptvarcone40, h_lep_0_iso_ptvarcone40_CONTROL, h_lep_0_iso_ptvarcone40_EXCEPT, "ptvarcone40 for lepton 0", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_iso_ptvarcone40", ";Momentum [GeV/c];Events", true, draw_histograms, ChainName, AnalysisType);	

	// lep 0 & lep 1 invariant mass 
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_mass_PRE, h_lep_0_lep_1_mass, h_lep_0_lep_1_mass_CONTROL, h_lep_0_lep_1_mass_EXCEPT, "Dilepton Pair Invariant Mass", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_mass", ";Invariant Mass [GeV/c^{2}];Events", true, draw_histograms, ChainName, AnalysisType);

	//combined lepton lep 0 & lep 1 momentum
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_pt_PRE, h_lep_0_lep_1_pt, h_lep_0_lep_1_pt_CONTROL, h_lep_0_lep_1_pt_EXCEPT, "Combined Lepton Momentum", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_pt", ";Momentum [GeV/c];Events", false, draw_histograms, ChainName, AnalysisType);	

	//leading jets ljet_0 ljet_1 invariant masses
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_jet_0_jet_1_mass_PRE, h_jet_0_jet_1_mass, h_jet_0_jet_1_mass_CONTROL, h_jet_0_jet_1_mass_EXCEPT, "Leading Jets Combined Invariant Mass", "Pre Cut", "Post Cut", "Control", "Except", "h_jet_0_jet_1_mass", ";Invariant Mass [GeV/c^{2}];Events", false, draw_histograms, ChainName, AnalysisType);

	//leading jets ljet_0 ljet_1 transverse momentum < already exists in DrawHistos.h
	DrawHistogram_PRE_SEARCH_CONTROL(h_ljet_0_p4_Pt_PRE, h_ljet_0_p4_Pt, h_ljet_0_p4_Pt_CONTROL, "Leading Jet Pt", "Pre Cut", "Post Cut", "Control", "h_ljet_0_p4_Pt", ";Momentum [GeV/c];Events", false, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_ljet_1_p4_Pt_PRE, h_ljet_1_p4_Pt, h_ljet_1_p4_Pt_CONTROL, "Subleading Jet Pt", "Pre Cut", "Post Cut", "Control", "h_ljet_1_p4_Pt", ";Momentum [GeV/c];Events", false, draw_histograms, ChainName, AnalysisType);

	// Dilepton Rapidity
	DrawHistogram(h_RapidityDilepton_PRE, "h_RapidityDilepton_PRE", ";Dilepton Rapidity [rads];Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDilepton, "h_RapidityDilepton", ";Dilepton Rapidity [rads];Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDilepton_CONTROL, "h_RapidityDilepton_CONTROL", ";Dilepton Rapidity [rads];Events", false, true, ChainName, AnalysisType);

	// Dijet Rapidity
	DrawHistogram(h_RapidityDijet_PRE, "h_RapidityDijet_PRE", ";Dijet Rapidity [rads];Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDijet, "h_RapidityDijet", ";Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDijet_CONTROL, "h_RapidityDijet_CONTROL", ";Dijet Rapidity [rads];Events", false, true, ChainName, AnalysisType);

	//Delta R Histograms
	DrawHistogram_PRE_SEARCH_CONTROL(h_DeltaR_PRE, h_DeltaR, h_DeltaR_CONTROL, "\\Delta R", "Pre-Cut", "Post Cut", "Control", "h_DeltaR", ";Delta R;Events", true, draw_histograms, ChainName, AnalysisType);

	//Delta Phi Histograms
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_DeltaPhi_PRE, h_DeltaPhi, h_DeltaPhi_CONTROL, h_DeltaPhi_EXCEPT, "\\Delta Phi", "Pre-Cut", "Post Cut", "Control", "Except", "h_DeltaPhi", ";Delta Phi;Events", true, draw_histograms, ChainName, AnalysisType);

	// pT balance
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_PRE, h_pT_balance, h_pT_balance_CONTROL, h_pT_balance_EXCEPT, "p_{T}^{balance}", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance", ";pT Balance;Events", false, draw_histograms, ChainName, AnalysisType);
	
	// pT balance reconstructed	
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_reco_PRE, h_pT_balance_reco, h_pT_balance_reco_CONTROL, h_pT_balance_reco_EXCEPT, "p_{T}^{balance} reconstructed", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance_reco", ";pT Balance reconstructed;Events", false, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_reco_INSIDE_PRE, h_pT_balance_reco_INSIDE, h_pT_balance_reco_INSIDE_CONTROL, h_pT_balance_reco_INSIDE_EXCEPT, "p_{T}^{balance} reconstructed_INSIDE", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance_reco_INSIDE", ";pT Balance reconstructed_INSIDE;Events", false, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_reco_OUTSIDE_PRE, h_pT_balance_reco_OUTSIDE, h_pT_balance_reco_OUTSIDE_CONTROL, h_pT_balance_reco_OUTSIDE_EXCEPT, "p_{T}^{balance} reconstructed_OUTSIDE", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance_reco_OUTSIDE", ";pT Balance reconstructed_OUTSIDE;Events", false, draw_histograms, ChainName, AnalysisType);
	
	// pT balance 3
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_3_PRE, h_pT_balance_3, h_pT_balance_3_CONTROL, h_pT_balance_3_EXCEPT, "p_{T}^{balance, 3}", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance_3", ";pT Balance 3;Events", false, draw_histograms, ChainName, AnalysisType);	

	// Centrality histograms
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_Centrality_PRE, h_Centrality, h_Centrality_CONTROL, h_Centrality_EXCEPT, "Centrality", "Pre-Cut", "Post Cut", "Control", "Except", "h_Centrality", ";Centrality;Events", true, draw_histograms, ChainName, AnalysisType);


	// MET Centrality histogram
	DrawHistogram_PRE_SEARCH_CONTROL(h_MET_Centrality_PRE, h_MET_Centrality, h_MET_Centrality_CONTROL, "MET Centrality", "Pre-Cut", "Post Cut", "Control", "h_MET_Centrality", ";MET_Centrality;Events", false, draw_histograms, ChainName, AnalysisType);

	// missing energy for neutrino 1 
	DrawHistogram_PRE_SEARCH_CONTROL(h_neutrino_0_pt_PRE, h_neutrino_0_pt, h_neutrino_0_pt_CONTROL, "neutrino_0_pt", "Pre-Cut", "Post Cut", "Control", "h_neutrino_0_pt", ";Missing Energy of neutrino 1;Events", true, draw_histograms, ChainName, AnalysisType);

	// missing energy for neutrino 2
	DrawHistogram_PRE_SEARCH_CONTROL(h_neutrino_1_pt_PRE, h_neutrino_1_pt, h_neutrino_1_pt_CONTROL, "neutrino_1_pt", "Pre-Cut", "Post Cut", "Control", "h_neutrino_1_pt", ";Missing Energy of neutrino 2;Events", true, draw_histograms, ChainName, AnalysisType);

	// Met Type Favour, whether the missing energy vector points towards the lepton or hadronic tau
	DrawHistogram_PRE_SEARCH_CONTROL(h_MET_Type_Favour_PRE, h_MET_Type_Favour, h_MET_Type_Favour_CONTROL, "MET_Type_Favour", "Pre-Cut", "Post Cut", "Control", "h_MET_Type_Favour", ";Missing Energy Tau or Lepton;Events", false, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_MET_Type_Favour_INSIDE_PRE, h_MET_Type_Favour_INSIDE, h_MET_Type_Favour_INSIDE_CONTROL, "MET_Type_Favour_INSIDE", "Pre-Cut", "Post Cut", "Control", "h_MET_Type_Favour_INSIDE", ";Missing Energy Tau or Lepton;Events", false, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_MET_Type_Favour_OUTSIDE_PRE, h_MET_Type_Favour_OUTSIDE, h_MET_Type_Favour_OUTSIDE_CONTROL, "MET_Type_Favour_OUTSIDE", "Pre-Cut", "Post Cut", "Control", "h_MET_Type_Favour_OUTSIDE", ";Missing Energy Tau or Lepton;Events", false, draw_histograms, ChainName, AnalysisType);

	// reconstructed Z mass with tau candidates and neutrinos
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_mass_reco_PRE, h_lep_0_lep_1_mass_reco, h_lep_0_lep_1_mass_reco_CONTROL, h_lep_0_lep_1_mass_reco_EXCEPT, "lep_0_lep_1_mass_reco", "Pre-Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_mass_reco", ";Z mass incl neutrinos;Events", true, draw_histograms, ChainName, AnalysisType);	
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_mass_reco_OUTSIDE_PRE, h_lep_0_lep_1_mass_reco_OUTSIDE, h_lep_0_lep_1_mass_reco_OUTSIDE_CONTROL, h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT, "lep_0_lep_1_mass_reco_OUTSIDE", "Pre-Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_mass_reco_OUTSIDE", ";Z mass incl neutrinos Inside;Events", true, draw_histograms, ChainName, AnalysisType);		
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_mass_reco_INSIDE_PRE, h_lep_0_lep_1_mass_reco_INSIDE, h_lep_0_lep_1_mass_reco_INSIDE_CONTROL, h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT, "lep_0_lep_1_mass_reco_INSIDE", "Pre-Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_mass_reco_INSIDE", ";Z mass incl neutrinos Outside;Events", true, draw_histograms, ChainName, AnalysisType);	
	DrawHistogram_PRE_SEARCH_CONTROL(h_DeltaR_reco_PRE, h_DeltaR_reco, h_DeltaR_reco_CONTROL, "\\Delta R_reco", "Pre-Cut", "Post Cut", "Control", "h_DeltaR_reco", ";Delta R;Events",true, draw_histograms, ChainName, AnalysisType);	
	DrawHistogram_PRE_SEARCH_CONTROL(h_Centrality_reco_PRE, h_Centrality_reco, h_Centrality_reco_CONTROL, "Centrality_reco", "Pre-Cut", "Post Cut", "Control", "h_Centrality_reco", ";Centrality;Events", true, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL(h_lep_0_lep_1_pt_reco_PRE, h_lep_0_lep_1_pt_reco, h_lep_0_lep_1_pt_reco_CONTROL, "lep_0_lep_1_pt_reco", "Pre-Cut", "Post Cut", "Control", "h_lep_0_lep_1_pt_reco", ";Z momentum incl neutrinos;Events", true, draw_histograms, ChainName, AnalysisType);	
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_DeltaPhi_reco_PRE, h_DeltaPhi_reco, h_DeltaPhi_reco_CONTROL, h_DeltaPhi_reco_EXCEPT, "\\Delta Phi_reco", "Pre-Cut", "Post Cut", "Control", "Except", "h_DeltaPhi_reco", ";Delta Phi_reco;Events", true, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_DeltaPhi_reco_INSIDE_PRE, h_DeltaPhi_reco_INSIDE, h_DeltaPhi_reco_INSIDE_CONTROL, h_DeltaPhi_reco_INSIDE_EXCEPT, "\\Delta Phi_reco_INSIDE", "Pre-Cut", "Post Cut", "Control", "Except", "h_DeltaPhi_reco_INSIDE", ";Delta Phi_reco_INSIDE;Events", true, draw_histograms, ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_DeltaPhi_reco_OUTSIDE_PRE, h_DeltaPhi_reco_OUTSIDE, h_DeltaPhi_reco_OUTSIDE_CONTROL, h_DeltaPhi_reco_OUTSIDE_EXCEPT, "\\Delta Phi_reco_OUTSIDE", "Pre-Cut", "Post Cut", "Control", "Except", "h_DeltaPhi_reco_OUTSIDE", ";Delta Phi_reco_OUTSIDE;Events", true, draw_histograms, ChainName, AnalysisType);

	// 2D POLAR HISTOGRAMS
  	DrawHistogram2D(h_Mass_Favour_Combination_2D, "h_Mass_Favour_Combination_2D", ";Type Favour (0 = leptonic, 1 = hadronic);Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_Favour_Combination_INSIDE_2D, "h_Mass_Favour_Combination_INSIDE_2D", ";Type Favour (0 = leptonic, 1 = hadronic);Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_Favour_Combination_OUTSIDE_2D, "h_Mass_Favour_Combination_OUTSIDE_2D", ";Type Favour (0 = leptonic, 1 = hadronic);Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);	

  	DrawHistogram2D(h_Mass_DeltaPhi_Combination_2D, "h_Mass_DeltaPhi_Combination_2D", ";DeltaPhi;Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_DeltaPhi_Combination_INSIDE_2D, "h_Mass_DeltaPhi_Combination_INSIDE_2D", ";DeltaPhi;Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_DeltaPhi_Combination_OUTSIDE_2D, "h_Mass_DeltaPhi_Combination_OUTSIDE_2D", ";DeltaPhi;Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);	


	//BJET GRAPHS
	DrawHistogram(h_lep_1_iso_ptvarcone40_BJET, "h_lep_1_iso_ptvarcone40_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_iso_ptvarcone40_BJET, "h_lep_0_iso_ptvarcone40_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_BJET, "h_lep_0_lep_1_mass_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_jet_0_jet_1_mass_BJET, "h_jet_0_jet_1_mass_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDilepton_BJET, "h_RapidityDilepton_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDijet_BJET, "h_RapidityDijet_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_pt_BJET, "h_lep_0_lep_1_pt_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaR_BJET, "h_DeltaR_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_BJET, "h_pT_balance_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_reco_BJET, "h_pT_balance_reco_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_Centrality_BJET, "h_Centrality_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_MET_Centrality_BJET, "h_MET_Centrality_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_neutrino_0_pt_BJET, "h_neutrino_0_pt_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_neutrino_1_pt_BJET, "h_neutrino_1_pt_BJET", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_MET_Type_Favour_BJET, "h_MET_Type_Favour_BJET", ";;Events", false, true, ChainName, AnalysisType);

	//HIGH_E Graphs
	DrawHistogram(h_lep_0_lep_1_mass_HIGH_E, "h_lep_0_lep_1_mass_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_jet_0_jet_1_mass_HIGH_E, "h_jet_0_jet_1_mass_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_pt_HIGH_E, "h_lep_0_lep_1_pt_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaR_HIGH_E, "h_DeltaR_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_HIGH_E, "h_pT_balance_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_reco_HIGH_E, "h_pT_balance_reco_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_Centrality_HIGH_E, "h_Centrality_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_MET_Centrality_HIGH_E, "h_MET_Centrality_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_neutrino_0_pt_HIGH_E, "h_neutrino_0_pt_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_neutrino_1_pt_HIGH_E, "h_neutrino_1_pt_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_MET_Type_Favour_HIGH_E, "h_MET_Type_Favour_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_reco_HIGH_E, "h_lep_0_lep_1_mass_reco_HIGH_E", ";;Events", false, true, ChainName, AnalysisType);

	//EXCEPT FINE Graphs
	DrawHistogram(h_lep_0_lep_1_mass_EXCEPT_FINE, "h_lep_0_lep_1_mass_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_reco_EXCEPT_FINE, "h_lep_0_lep_1_mass_reco_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE, "h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_jet_0_jet_1_mass_EXCEPT_FINE, "h_jet_0_jet_1_mass_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE, "h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_EXCEPT_FINE, "h_pT_balance_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_reco_EXCEPT_FINE, "h_pT_balance_reco_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_reco_INSIDE_EXCEPT_FINE, "h_pT_balance_reco_INSIDE_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_3_EXCEPT_FINE, "h_pT_balance_3_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_Centrality_EXCEPT_FINE, "h_Centrality_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_Centrality_INSIDE_EXCEPT_FINE, "h_Centrality_INSIDE_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaPhi_EXCEPT_FINE, "h_DeltaPhi_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaPhi_reco_INSIDE_EXCEPT_FINE, "h_DeltaPhi_reco_INSIDE_EXCEPT_FINE", ";;Events", false, true, ChainName, AnalysisType);

	//TRUTH GRAPHS
	DrawHistogram(h_lep_1_iso_ptvarcone40_TRUTH, "h_lep_1_iso_ptvarcone40_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_iso_ptvarcone40_TRUTH, "h_lep_0_iso_ptvarcone40_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_TRUTH, "h_lep_0_lep_1_mass_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_reco_TRUTH, "h_lep_0_lep_1_mass_reco_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_reco_INSIDE_TRUTH, "h_lep_0_lep_1_mass_reco_INSIDE_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH, "h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_jet_0_jet_1_mass_TRUTH, "h_jet_0_jet_1_mass_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDilepton_TRUTH, "h_RapidityDilepton_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_RapidityDijet_TRUTH, "h_RapidityDijet_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_pt_TRUTH, "h_lep_0_lep_1_pt_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaR_TRUTH, "h_DeltaR_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaPhi_TRUTH, "h_DeltaPhi_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaPhi_reco_TRUTH, "h_DeltaPhi_reco_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaPhi_reco_INSIDE_TRUTH, "h_DeltaPhi_reco_INSIDE_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_DeltaPhi_reco_OUTSIDE_TRUTH, "h_DeltaPhi_reco_OUTSIDE_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_TRUTH, "h_pT_balance_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_reco_TRUTH, "h_pT_balance_reco_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_reco_INSIDE_TRUTH, "h_pT_balance_reco_INSIDE_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_pT_balance_reco_OUTSIDE_TRUTH, "h_pT_balance_reco_OUTSIDE_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_Centrality_TRUTH, "h_Centrality_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_MET_Centrality_TRUTH, "h_MET_Centrality_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_neutrino_0_pt_TRUTH, "h_neutrino_0_pt_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_neutrino_1_pt_TRUTH, "h_neutrino_1_pt_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_MET_Type_Favour_TRUTH, "h_MET_Type_Favour_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_invis_vis_mass_TRUTH, "h_lep_0_invis_vis_mass_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_1_invis_vis_mass_TRUTH, "h_lep_1_invis_vis_mass_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_vis_mass_TRUTH, "h_lep_0_vis_mass_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_1_vis_mass_TRUTH, "h_lep_1_vis_mass_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_lep_1_invis_vis_mass_TRUTH, "h_lep_0_lep_1_invis_vis_mass_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_met_truth_energy_TRUTH, "h_met_truth_energy_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_0_invis_energy_TRUTH, "h_lep_0_invis_energy_TRUTH", ";;Events", false, true, ChainName, AnalysisType);
	DrawHistogram(h_lep_1_invis_energy_TRUTH, "h_lep_1_invis_energy_TRUTH", ";;Events", false, true, ChainName, AnalysisType);

	// 2D POLAR TRUTH HISTOGRAMS
  	DrawHistogram2D(h_Mass_Favour_Combination_2D_TRUTH, "h_Mass_Favour_Combination_2D_TRUTH", ";Type Favour (0 = leptonic, 1 = hadronic);Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_Favour_Combination_INSIDE_2D_TRUTH, "h_Mass_Favour_Combination_INSIDE_2D_TRUTH", ";Type Favour (0 = leptonic, 1 = hadronic);Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH, "h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH", ";Type Favour (0 = leptonic, 1 = hadronic);Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);	

  	DrawHistogram2D(h_Mass_DeltaPhi_Combination_2D_TRUTH, "h_Mass_DeltaPhi_Combination_2D_TRUTH", ";DeltaPhi;Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH, "h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH", ";DeltaPhi;Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);
  	DrawHistogram2D(h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH, "h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH", ";DeltaPhi;Reconstructed Invariant Mass[GeV/c^{2}]", false, draw_histograms, ChainName, AnalysisType);	


	Histograms->Close();

}

#endif
