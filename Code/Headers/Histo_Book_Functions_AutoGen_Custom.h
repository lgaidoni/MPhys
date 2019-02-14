#ifndef Histo_Book_Functions_AutoGen_Custom_h
#define Histo_Book_Functions_AutoGen_Custom_h

/// ------------------- TITLE ---------------- ///

/// ------------------- FunctionName:Comment ---------------- ///

/// ------------------- GENERIC ---------------- ///

// -- Distance in R space between two detections (ljet, elec, muon, etc)
void MC_Analysis::Book_DeltaR(int bins, double min, double max) {
	h_DeltaR = new TH1F("h_DeltaR", "", bins, min, max);
	h_DeltaR_PRE = new TH1F("h_DeltaR_PRE", "", bins, min, max);
	h_DeltaR_CONTROL = new TH1F("h_DeltaR_CONTROL", "", bins, min, max);
	h_DeltaR_EXCEPT = new TH1F("h_DeltaR_EXCEPT", "", bins, min, max);
	h_DeltaR_BJET = new TH1F("h_DeltaR_BJET", "", bins, min, max);

	hv_DeltaR.push_back(h_DeltaR);
	hv_DeltaR.push_back(h_DeltaR_CONTROL);
	hv_DeltaR.push_back(h_DeltaR_EXCEPT);
	hv_DeltaR.push_back(h_DeltaR_PRE);
	hv_DeltaR.push_back(h_DeltaR_BJET);

	hv_DeltaR_names.push_back("h_DeltaR");
	hv_DeltaR_names.push_back("h_DeltaR_CONTROL");
	hv_DeltaR_names.push_back("h_DeltaR_EXCEPT");
	hv_DeltaR_names.push_back("h_DeltaR_PRE");
	hv_DeltaR_names.push_back("h_DeltaR_BJET");
}


// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
void MC_Analysis::Book_pT_balance(int bins, double min, double max) {
	h_pT_balance = new TH1F("h_pT_balance", "", bins, min, max);
	h_pT_balance_PRE = new TH1F("h_pT_balance_PRE", "", bins, min, max);
	h_pT_balance_CONTROL = new TH1F("h_pT_balance_CONTROL", "", bins, min, max);
	h_pT_balance_EXCEPT = new TH1F("h_pT_balance_EXCEPT", "", bins, min, max);
	h_pT_balance_BJET = new TH1F("h_pT_balance_BJET", "", bins, min, max);

	hv_pT_balance.push_back(h_pT_balance);
	hv_pT_balance.push_back(h_pT_balance_CONTROL);
	hv_pT_balance.push_back(h_pT_balance_EXCEPT);
	hv_pT_balance.push_back(h_pT_balance_PRE);
	hv_pT_balance.push_back(h_pT_balance_BJET);

	hv_pT_balance_names.push_back("h_pT_balance");
	hv_pT_balance_names.push_back("h_pT_balance_CONTROL");
	hv_pT_balance_names.push_back("h_pT_balance_EXCEPT");
	hv_pT_balance_names.push_back("h_pT_balance_PRE");
	hv_pT_balance_names.push_back("h_pT_balance_BJET");
}


// -- PT Balance Three - Normalised transverse momentum balance between the two leptons and the three highest transverse momentum jets
void MC_Analysis::Book_pT_balance_3(int bins, double min, double max) {
	h_pT_balance_3 = new TH1F("h_pT_balance_3", "", bins, min, max);
	h_pT_balance_3_PRE = new TH1F("h_pT_balance_3_PRE", "", bins, min, max);
	h_pT_balance_3_CONTROL = new TH1F("h_pT_balance_3_CONTROL", "", bins, min, max);
	h_pT_balance_3_EXCEPT = new TH1F("h_pT_balance_3_EXCEPT", "", bins, min, max);
	h_pT_balance_3_BJET = new TH1F("h_pT_balance_3_BJET", "", bins, min, max);

	hv_pT_balance_3.push_back(h_pT_balance_3);
	hv_pT_balance_3.push_back(h_pT_balance_3_CONTROL);
	hv_pT_balance_3.push_back(h_pT_balance_3_EXCEPT);
	hv_pT_balance_3.push_back(h_pT_balance_3_PRE);
	hv_pT_balance_3.push_back(h_pT_balance_3_BJET);

	hv_pT_balance_3_names.push_back("h_pT_balance_3");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_CONTROL");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_EXCEPT");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_PRE");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_BJET");
}


// -- Centrality of pseudorapidity of Z boson between two leading jets
void MC_Analysis::Book_Centrality(int bins, double min, double max) {
	h_Centrality = new TH1F("h_Centrality", "", bins, min, max);
	h_Centrality_PRE = new TH1F("h_Centrality_PRE", "", bins, min, max);
	h_Centrality_CONTROL = new TH1F("h_Centrality_CONTROL", "", bins, min, max);
	h_Centrality_EXCEPT = new TH1F("h_Centrality_EXCEPT", "", bins, min, max);
	h_Centrality_BJET = new TH1F("h_Centrality_BJET", "", bins, min, max);

	hv_Centrality.push_back(h_Centrality);
	hv_Centrality.push_back(h_Centrality_CONTROL);
	hv_Centrality.push_back(h_Centrality_EXCEPT);
	hv_Centrality.push_back(h_Centrality_PRE);
	hv_Centrality.push_back(h_Centrality_BJET);

	hv_Centrality_names.push_back("h_Centrality");
	hv_Centrality_names.push_back("h_Centrality_CONTROL");
	hv_Centrality_names.push_back("h_Centrality_EXCEPT");
	hv_Centrality_names.push_back("h_Centrality_PRE");
	hv_Centrality_names.push_back("h_Centrality_BJET");
}


// -- Rapidity of a dijet pair
void MC_Analysis::Book_RapidityDijet(int bins, double min, double max) {
	h_RapidityDijet = new TH1F("h_RapidityDijet", "", bins, min, max);
	h_RapidityDijet_PRE = new TH1F("h_RapidityDijet_PRE", "", bins, min, max);
	h_RapidityDijet_CONTROL = new TH1F("h_RapidityDijet_CONTROL", "", bins, min, max);
	h_RapidityDijet_EXCEPT = new TH1F("h_RapidityDijet_EXCEPT", "", bins, min, max);
	h_RapidityDijet_BJET = new TH1F("h_RapidityDijet_BJET", "", bins, min, max);

	hv_RapidityDijet.push_back(h_RapidityDijet);
	hv_RapidityDijet.push_back(h_RapidityDijet_CONTROL);
	hv_RapidityDijet.push_back(h_RapidityDijet_EXCEPT);
	hv_RapidityDijet.push_back(h_RapidityDijet_PRE);
	hv_RapidityDijet.push_back(h_RapidityDijet_BJET);

	hv_RapidityDijet_names.push_back("h_RapidityDijet");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_CONTROL");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_EXCEPT");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_PRE");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_BJET");
}


// -- Rapidity of a dilepton pair
void MC_Analysis::Book_RapidityDilepton(int bins, double min, double max) {
	h_RapidityDilepton = new TH1F("h_RapidityDilepton", "", bins, min, max);
	h_RapidityDilepton_PRE = new TH1F("h_RapidityDilepton_PRE", "", bins, min, max);
	h_RapidityDilepton_CONTROL = new TH1F("h_RapidityDilepton_CONTROL", "", bins, min, max);
	h_RapidityDilepton_EXCEPT = new TH1F("h_RapidityDilepton_EXCEPT", "", bins, min, max);
	h_RapidityDilepton_BJET = new TH1F("h_RapidityDilepton_BJET", "", bins, min, max);

	hv_RapidityDilepton.push_back(h_RapidityDilepton);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_CONTROL);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_EXCEPT);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_PRE);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_BJET);

	hv_RapidityDilepton_names.push_back("h_RapidityDilepton");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_CONTROL");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_EXCEPT");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_PRE");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_BJET");
}


/// ------------------- LEPTONS ---------------- ///

// -- Invariant mass of lepton 0 and lepton 1
void MC_Analysis::Book_lep_0_lep_1_mass(int bins, double min, double max) {
	h_lep_0_lep_1_mass = new TH1F("h_lep_0_lep_1_mass", "", bins, min, max);
	h_lep_0_lep_1_mass_PRE = new TH1F("h_lep_0_lep_1_mass_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_CONTROL = new TH1F("h_lep_0_lep_1_mass_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_EXCEPT = new TH1F("h_lep_0_lep_1_mass_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_BJET = new TH1F("h_lep_0_lep_1_mass_BJET", "", bins, min, max);

	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_CONTROL);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_EXCEPT);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_PRE);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_BJET);

	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_CONTROL");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_EXCEPT");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_PRE");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_BJET");
}


// -- Combined transverse momentum of lepton 0 and lepton 1
void MC_Analysis::Book_lep_0_lep_1_pt(int bins, double min, double max) {
	h_lep_0_lep_1_pt = new TH1F("h_lep_0_lep_1_pt", "", bins, min, max);
	h_lep_0_lep_1_pt_PRE = new TH1F("h_lep_0_lep_1_pt_PRE", "", bins, min, max);
	h_lep_0_lep_1_pt_CONTROL = new TH1F("h_lep_0_lep_1_pt_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_pt_EXCEPT = new TH1F("h_lep_0_lep_1_pt_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_pt_BJET = new TH1F("h_lep_0_lep_1_pt_BJET", "", bins, min, max);

	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_CONTROL);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_EXCEPT);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_PRE);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_BJET);

	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_CONTROL");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_EXCEPT");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_PRE");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_BJET");
}


// -- Isolation cone for the lepton 0, size 40
void MC_Analysis::Book_lep_0_iso_ptvarcone40(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone40 = new TH1F("h_lep_0_iso_ptvarcone40", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_PRE = new TH1F("h_lep_0_iso_ptvarcone40_PRE", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_CONTROL = new TH1F("h_lep_0_iso_ptvarcone40_CONTROL", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_EXCEPT = new TH1F("h_lep_0_iso_ptvarcone40_EXCEPT", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_BJET = new TH1F("h_lep_0_iso_ptvarcone40_BJET", "", bins, min, max);

	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_CONTROL);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_EXCEPT);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_PRE);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_BJET);

	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_CONTROL");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_EXCEPT");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_PRE");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_BJET");
}


// -- Isolation cone for the lepton 1, size 40
void MC_Analysis::Book_lep_1_iso_ptvarcone40(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone40 = new TH1F("h_lep_1_iso_ptvarcone40", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_PRE = new TH1F("h_lep_1_iso_ptvarcone40_PRE", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_CONTROL = new TH1F("h_lep_1_iso_ptvarcone40_CONTROL", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_EXCEPT = new TH1F("h_lep_1_iso_ptvarcone40_EXCEPT", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_BJET = new TH1F("h_lep_1_iso_ptvarcone40_BJET", "", bins, min, max);

	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_CONTROL);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_EXCEPT);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_PRE);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_BJET);

	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_CONTROL");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_EXCEPT");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_PRE");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_BJET");
}


/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading)
void MC_Analysis::Book_jet_0_jet_1_mass(int bins, double min, double max) {
	h_jet_0_jet_1_mass = new TH1F("h_jet_0_jet_1_mass", "", bins, min, max);
	h_jet_0_jet_1_mass_PRE = new TH1F("h_jet_0_jet_1_mass_PRE", "", bins, min, max);
	h_jet_0_jet_1_mass_CONTROL = new TH1F("h_jet_0_jet_1_mass_CONTROL", "", bins, min, max);
	h_jet_0_jet_1_mass_EXCEPT = new TH1F("h_jet_0_jet_1_mass_EXCEPT", "", bins, min, max);
	h_jet_0_jet_1_mass_BJET = new TH1F("h_jet_0_jet_1_mass_BJET", "", bins, min, max);

	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_CONTROL);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_EXCEPT);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_PRE);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_BJET);

	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_CONTROL");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_EXCEPT");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_PRE");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_BJET");
}


// -- Leading jet transverse momentum
void MC_Analysis::Book_jet_0_p4_Pt(int bins, double min, double max) {
	h_jet_0_p4_Pt = new TH1F("h_jet_0_p4_Pt", "", bins, min, max);
	h_jet_0_p4_Pt_PRE = new TH1F("h_jet_0_p4_Pt_PRE", "", bins, min, max);
	h_jet_0_p4_Pt_CONTROL = new TH1F("h_jet_0_p4_Pt_CONTROL", "", bins, min, max);
	h_jet_0_p4_Pt_EXCEPT = new TH1F("h_jet_0_p4_Pt_EXCEPT", "", bins, min, max);
	h_jet_0_p4_Pt_BJET = new TH1F("h_jet_0_p4_Pt_BJET", "", bins, min, max);

	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_CONTROL);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_EXCEPT);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_PRE);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_BJET);

	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_CONTROL");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_EXCEPT");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_PRE");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_BJET");
}


// -- Subleading jet transverse momentum
void MC_Analysis::Book_jet_1_p4_Pt(int bins, double min, double max) {
	h_jet_1_p4_Pt = new TH1F("h_jet_1_p4_Pt", "", bins, min, max);
	h_jet_1_p4_Pt_PRE = new TH1F("h_jet_1_p4_Pt_PRE", "", bins, min, max);
	h_jet_1_p4_Pt_CONTROL = new TH1F("h_jet_1_p4_Pt_CONTROL", "", bins, min, max);
	h_jet_1_p4_Pt_EXCEPT = new TH1F("h_jet_1_p4_Pt_EXCEPT", "", bins, min, max);
	h_jet_1_p4_Pt_BJET = new TH1F("h_jet_1_p4_Pt_BJET", "", bins, min, max);

	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_CONTROL);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_EXCEPT);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_PRE);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_BJET);

	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_CONTROL");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_EXCEPT");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_PRE");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_BJET");
}


/// ------------------- MISSINGENERGY ---------------- ///

// -- Missing transversE Momentum centrality
void MC_Analysis::Book_MET_Centrality(int bins, double min, double max) {
	h_MET_Centrality = new TH1F("h_MET_Centrality", "", bins, min, max);
	h_MET_Centrality_PRE = new TH1F("h_MET_Centrality_PRE", "", bins, min, max);
	h_MET_Centrality_CONTROL = new TH1F("h_MET_Centrality_CONTROL", "", bins, min, max);
	h_MET_Centrality_EXCEPT = new TH1F("h_MET_Centrality_EXCEPT", "", bins, min, max);
	h_MET_Centrality_BJET = new TH1F("h_MET_Centrality_BJET", "", bins, min, max);

	hv_MET_Centrality.push_back(h_MET_Centrality);
	hv_MET_Centrality.push_back(h_MET_Centrality_CONTROL);
	hv_MET_Centrality.push_back(h_MET_Centrality_EXCEPT);
	hv_MET_Centrality.push_back(h_MET_Centrality_PRE);
	hv_MET_Centrality.push_back(h_MET_Centrality_BJET);

	hv_MET_Centrality_names.push_back("h_MET_Centrality");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_CONTROL");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_EXCEPT");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_PRE");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_BJET");
}


// -- missing energy of neutrino 1
void MC_Analysis::Book_neutrino_0_pt(int bins, double min, double max) {
	h_neutrino_0_pt = new TH1F("h_neutrino_0_pt", "", bins, min, max);
	h_neutrino_0_pt_PRE = new TH1F("h_neutrino_0_pt_PRE", "", bins, min, max);
	h_neutrino_0_pt_CONTROL = new TH1F("h_neutrino_0_pt_CONTROL", "", bins, min, max);
	h_neutrino_0_pt_EXCEPT = new TH1F("h_neutrino_0_pt_EXCEPT", "", bins, min, max);
	h_neutrino_0_pt_BJET = new TH1F("h_neutrino_0_pt_BJET", "", bins, min, max);

	hv_neutrino_0_pt.push_back(h_neutrino_0_pt);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_CONTROL);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_EXCEPT);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_PRE);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_BJET);

	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_CONTROL");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_EXCEPT");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_PRE");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_BJET");
}


// -- missing energy of neutrino 2
void MC_Analysis::Book_neutrino_1_pt(int bins, double min, double max) {
	h_neutrino_1_pt = new TH1F("h_neutrino_1_pt", "", bins, min, max);
	h_neutrino_1_pt_PRE = new TH1F("h_neutrino_1_pt_PRE", "", bins, min, max);
	h_neutrino_1_pt_CONTROL = new TH1F("h_neutrino_1_pt_CONTROL", "", bins, min, max);
	h_neutrino_1_pt_EXCEPT = new TH1F("h_neutrino_1_pt_EXCEPT", "", bins, min, max);
	h_neutrino_1_pt_BJET = new TH1F("h_neutrino_1_pt_BJET", "", bins, min, max);

	hv_neutrino_1_pt.push_back(h_neutrino_1_pt);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_CONTROL);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_EXCEPT);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_PRE);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_BJET);

	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_CONTROL");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_EXCEPT");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_PRE");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_BJET");
}


// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
void MC_Analysis::Book_MET_Type_Favour(int bins, double min, double max) {
	h_MET_Type_Favour = new TH1F("h_MET_Type_Favour", "", bins, min, max);
	h_MET_Type_Favour_PRE = new TH1F("h_MET_Type_Favour_PRE", "", bins, min, max);
	h_MET_Type_Favour_CONTROL = new TH1F("h_MET_Type_Favour_CONTROL", "", bins, min, max);
	h_MET_Type_Favour_EXCEPT = new TH1F("h_MET_Type_Favour_EXCEPT", "", bins, min, max);
	h_MET_Type_Favour_BJET = new TH1F("h_MET_Type_Favour_BJET", "", bins, min, max);

	hv_MET_Type_Favour.push_back(h_MET_Type_Favour);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_CONTROL);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_EXCEPT);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_PRE);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_BJET);

	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_CONTROL");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_EXCEPT");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_PRE");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_BJET");
}


// --  reconstructed Z mass with neutrino and z candidates
void MC_Analysis::Book_lep_0_lep_1_mass_reconstructed(int bins, double min, double max) {
	h_lep_0_lep_1_mass_reconstructed = new TH1F("h_lep_0_lep_1_mass_reconstructed", "", bins, min, max);
	h_lep_0_lep_1_mass_reconstructed_PRE = new TH1F("h_lep_0_lep_1_mass_reconstructed_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_reconstructed_CONTROL = new TH1F("h_lep_0_lep_1_mass_reconstructed_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_reconstructed_EXCEPT = new TH1F("h_lep_0_lep_1_mass_reconstructed_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_reconstructed_BJET = new TH1F("h_lep_0_lep_1_mass_reconstructed_BJET", "", bins, min, max);

	hv_lep_0_lep_1_mass_reconstructed.push_back(h_lep_0_lep_1_mass_reconstructed);
	hv_lep_0_lep_1_mass_reconstructed.push_back(h_lep_0_lep_1_mass_reconstructed_CONTROL);
	hv_lep_0_lep_1_mass_reconstructed.push_back(h_lep_0_lep_1_mass_reconstructed_EXCEPT);
	hv_lep_0_lep_1_mass_reconstructed.push_back(h_lep_0_lep_1_mass_reconstructed_PRE);
	hv_lep_0_lep_1_mass_reconstructed.push_back(h_lep_0_lep_1_mass_reconstructed_BJET);

	hv_lep_0_lep_1_mass_reconstructed_names.push_back("h_lep_0_lep_1_mass_reconstructed");
	hv_lep_0_lep_1_mass_reconstructed_names.push_back("h_lep_0_lep_1_mass_reconstructed_CONTROL");
	hv_lep_0_lep_1_mass_reconstructed_names.push_back("h_lep_0_lep_1_mass_reconstructed_EXCEPT");
	hv_lep_0_lep_1_mass_reconstructed_names.push_back("h_lep_0_lep_1_mass_reconstructed_PRE");
	hv_lep_0_lep_1_mass_reconstructed_names.push_back("h_lep_0_lep_1_mass_reconstructed_BJET");
}


#endif