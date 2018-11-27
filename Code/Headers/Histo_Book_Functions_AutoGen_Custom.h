#ifndef Histo_Book_Functions_AutoGen_Custom_h
#define Histo_Book_Functions_AutoGen_Custom_h

/// ------------------- TITLE ---------------- ///

/// ------------------- FunctionName:Comment ---------------- ///

/// ------------------- GENERIC ---------------- ///

// -- Distance in R space between two detections (ljet, elec, muon, etc)
void MC_Analysis::Book_DeltaR_PRE(int bins, double min, double max) {
	h_DeltaR_PRE = new TH1F("h_DeltaR_PRE", "", bins, min, max);
}
void MC_Analysis::Book_DeltaR_CONTROL(int bins, double min, double max) {
	h_DeltaR_CONTROL = new TH1F("h_DeltaR_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_DeltaR_EXCEPT(int bins, double min, double max) {
	h_DeltaR_EXCEPT = new TH1F("h_DeltaR_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_DeltaR(int bins, double min, double max) {
	h_DeltaR = new TH1F("h_DeltaR", "", bins, min, max);
}


// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
void MC_Analysis::Book_pT_balance_PRE(int bins, double min, double max) {
	h_pT_balance_PRE = new TH1F("h_pT_balance_PRE", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance_CONTROL(int bins, double min, double max) {
	h_pT_balance_CONTROL = new TH1F("h_pT_balance_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance_EXCEPT(int bins, double min, double max) {
	h_pT_balance_EXCEPT = new TH1F("h_pT_balance_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance(int bins, double min, double max) {
	h_pT_balance = new TH1F("h_pT_balance", "", bins, min, max);
}


// -- PT Balance Three - Normalised transverse momentum balance between the two leptons and the three highest transverse momentum jets
void MC_Analysis::Book_pT_balance_3_PRE(int bins, double min, double max) {
	h_pT_balance_3_PRE = new TH1F("h_pT_balance_3_PRE", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance_3_CONTROL(int bins, double min, double max) {
	h_pT_balance_3_CONTROL = new TH1F("h_pT_balance_3_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance_3_EXCEPT(int bins, double min, double max) {
	h_pT_balance_3_EXCEPT = new TH1F("h_pT_balance_3_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance_3(int bins, double min, double max) {
	h_pT_balance_3 = new TH1F("h_pT_balance_3", "", bins, min, max);
}


// -- Centrality of pseudorapidity of Z boson between two leading jets
void MC_Analysis::Book_Centrality_PRE(int bins, double min, double max) {
	h_Centrality_PRE = new TH1F("h_Centrality_PRE", "", bins, min, max);
}
void MC_Analysis::Book_Centrality_CONTROL(int bins, double min, double max) {
	h_Centrality_CONTROL = new TH1F("h_Centrality_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_Centrality_EXCEPT(int bins, double min, double max) {
	h_Centrality_EXCEPT = new TH1F("h_Centrality_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_Centrality(int bins, double min, double max) {
	h_Centrality = new TH1F("h_Centrality", "", bins, min, max);
}


// -- Rapidity of a dijet pair
void MC_Analysis::Book_RapidityDijet_PRE(int bins, double min, double max) {
	h_RapidityDijet_PRE = new TH1F("h_RapidityDijet_PRE", "", bins, min, max);
}
void MC_Analysis::Book_RapidityDijet_CONTROL(int bins, double min, double max) {
	h_RapidityDijet_CONTROL = new TH1F("h_RapidityDijet_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_RapidityDijet_EXCEPT(int bins, double min, double max) {
	h_RapidityDijet_EXCEPT = new TH1F("h_RapidityDijet_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_RapidityDijet(int bins, double min, double max) {
	h_RapidityDijet = new TH1F("h_RapidityDijet", "", bins, min, max);
}


// -- Rapidity of a dilepton pair
void MC_Analysis::Book_RapidityDilepton_PRE(int bins, double min, double max) {
	h_RapidityDilepton_PRE = new TH1F("h_RapidityDilepton_PRE", "", bins, min, max);
}
void MC_Analysis::Book_RapidityDilepton_CONTROL(int bins, double min, double max) {
	h_RapidityDilepton_CONTROL = new TH1F("h_RapidityDilepton_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_RapidityDilepton_EXCEPT(int bins, double min, double max) {
	h_RapidityDilepton_EXCEPT = new TH1F("h_RapidityDilepton_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_RapidityDilepton(int bins, double min, double max) {
	h_RapidityDilepton = new TH1F("h_RapidityDilepton", "", bins, min, max);
}


/// ------------------- LEPTONS ---------------- ///

// -- Invariant mass of lepton 0 and lepton 1
void MC_Analysis::Book_lep_0_lep_1_mass_PRE(int bins, double min, double max) {
	h_lep_0_lep_1_mass_PRE = new TH1F("h_lep_0_lep_1_mass_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_mass_CONTROL(int bins, double min, double max) {
	h_lep_0_lep_1_mass_CONTROL = new TH1F("h_lep_0_lep_1_mass_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_mass_EXCEPT(int bins, double min, double max) {
	h_lep_0_lep_1_mass_EXCEPT = new TH1F("h_lep_0_lep_1_mass_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_mass(int bins, double min, double max) {
	h_lep_0_lep_1_mass = new TH1F("h_lep_0_lep_1_mass", "", bins, min, max);
}


// -- Combined transverse momentum of lepton 0 and lepton 1
void MC_Analysis::Book_lep_0_lep_1_pt_PRE(int bins, double min, double max) {
	h_lep_0_lep_1_pt_PRE = new TH1F("h_lep_0_lep_1_pt_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_pt_CONTROL(int bins, double min, double max) {
	h_lep_0_lep_1_pt_CONTROL = new TH1F("h_lep_0_lep_1_pt_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_pt_EXCEPT(int bins, double min, double max) {
	h_lep_0_lep_1_pt_EXCEPT = new TH1F("h_lep_0_lep_1_pt_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_pt(int bins, double min, double max) {
	h_lep_0_lep_1_pt = new TH1F("h_lep_0_lep_1_pt", "", bins, min, max);
}


// -- True Combined transverse momentum of lepton 0 and lepton 1
void MC_Analysis::Book_lep_0_lep_1_pt_TRUTH_PRE(int bins, double min, double max) {
	h_lep_0_lep_1_pt_TRUTH_PRE = new TH1F("h_lep_0_lep_1_pt_TRUTH_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_pt_TRUTH_CONTROL(int bins, double min, double max) {
	h_lep_0_lep_1_pt_TRUTH_CONTROL = new TH1F("h_lep_0_lep_1_pt_TRUTH_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_pt_TRUTH_EXCEPT(int bins, double min, double max) {
	h_lep_0_lep_1_pt_TRUTH_EXCEPT = new TH1F("h_lep_0_lep_1_pt_TRUTH_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_lep_1_pt_TRUTH(int bins, double min, double max) {
	h_lep_0_lep_1_pt_TRUTH = new TH1F("h_lep_0_lep_1_pt_TRUTH", "", bins, min, max);
}


// -- Isolation cone for the lepton 0, size 20
void MC_Analysis::Book_lep_0_iso_ptvarcone20_PRE(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone20_PRE = new TH1F("h_lep_0_iso_ptvarcone20_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone20_CONTROL(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone20_CONTROL = new TH1F("h_lep_0_iso_ptvarcone20_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone20_EXCEPT(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone20_EXCEPT = new TH1F("h_lep_0_iso_ptvarcone20_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone20(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone20 = new TH1F("h_lep_0_iso_ptvarcone20", "", bins, min, max);
}


// -- Isolation cone for the lepton 0, size 30
void MC_Analysis::Book_lep_0_iso_ptvarcone30_PRE(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone30_PRE = new TH1F("h_lep_0_iso_ptvarcone30_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone30_CONTROL(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone30_CONTROL = new TH1F("h_lep_0_iso_ptvarcone30_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone30_EXCEPT(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone30_EXCEPT = new TH1F("h_lep_0_iso_ptvarcone30_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone30(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone30 = new TH1F("h_lep_0_iso_ptvarcone30", "", bins, min, max);
}


// -- Isolation cone for the lepton 0, size 40
void MC_Analysis::Book_lep_0_iso_ptvarcone40_PRE(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone40_PRE = new TH1F("h_lep_0_iso_ptvarcone40_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone40_CONTROL(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone40_CONTROL = new TH1F("h_lep_0_iso_ptvarcone40_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone40_EXCEPT(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone40_EXCEPT = new TH1F("h_lep_0_iso_ptvarcone40_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_0_iso_ptvarcone40(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone40 = new TH1F("h_lep_0_iso_ptvarcone40", "", bins, min, max);
}


// -- Isolation cone for the lepton 1, size 20
void MC_Analysis::Book_lep_1_iso_ptvarcone20_PRE(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone20_PRE = new TH1F("h_lep_1_iso_ptvarcone20_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone20_CONTROL(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone20_CONTROL = new TH1F("h_lep_1_iso_ptvarcone20_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone20_EXCEPT(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone20_EXCEPT = new TH1F("h_lep_1_iso_ptvarcone20_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone20(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone20 = new TH1F("h_lep_1_iso_ptvarcone20", "", bins, min, max);
}


// -- Isolation cone for the lepton 1, size 30
void MC_Analysis::Book_lep_1_iso_ptvarcone30_PRE(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone30_PRE = new TH1F("h_lep_1_iso_ptvarcone30_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone30_CONTROL(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone30_CONTROL = new TH1F("h_lep_1_iso_ptvarcone30_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone30_EXCEPT(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone30_EXCEPT = new TH1F("h_lep_1_iso_ptvarcone30_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone30(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone30 = new TH1F("h_lep_1_iso_ptvarcone30", "", bins, min, max);
}


// -- Isolation cone for the lepton 1, size 40
void MC_Analysis::Book_lep_1_iso_ptvarcone40_PRE(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone40_PRE = new TH1F("h_lep_1_iso_ptvarcone40_PRE", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone40_CONTROL(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone40_CONTROL = new TH1F("h_lep_1_iso_ptvarcone40_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone40_EXCEPT(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone40_EXCEPT = new TH1F("h_lep_1_iso_ptvarcone40_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_lep_1_iso_ptvarcone40(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone40 = new TH1F("h_lep_1_iso_ptvarcone40", "", bins, min, max);
}


/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading)
void MC_Analysis::Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass_PRE = new TH1F("h_ljet_0_ljet_1_mass_PRE", "", bins, min, max);
}
void MC_Analysis::Book_ljet_0_ljet_1_mass_CONTROL(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass_CONTROL = new TH1F("h_ljet_0_ljet_1_mass_CONTROL", "", bins, min, max);
}
void MC_Analysis::Book_ljet_0_ljet_1_mass_EXCEPT(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass_EXCEPT = new TH1F("h_ljet_0_ljet_1_mass_EXCEPT", "", bins, min, max);
}
void MC_Analysis::Book_ljet_0_ljet_1_mass(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass = new TH1F("h_ljet_0_ljet_1_mass", "", bins, min, max);
}


#endif