#ifndef Histo_Book_Functions_AutoGen_Custom_h
#define Histo_Book_Functions_AutoGen_Custom_h

/// ------------------- GENERIC ---------------- ///

// -- Distance in R space between two detections (ljet, elec, muon, etc)
void MC_Analysis::Book_DeltaR_PRE(int bins, double min, double max) {
	h_DeltaR_PRE = new TH1F("h_DeltaR_PRE", "", bins, min, max);
}
void MC_Analysis::Book_DeltaR_CONTROL(int bins, double min, double max) {
	h_DeltaR_CONTROL = new TH1F("h_DeltaR_COTNROL", "", bins, min, max);
}
void MC_Analysis::Book_DeltaR(int bins, double min, double max) {
	h_DeltaR = new TH1F("h_DeltaR", "", bins, min, max);
}


// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
void MC_Analysis::Book_pT_balance_PRE(int bins, double min, double max) {
	h_pT_balance_PRE = new TH1F("h_pT_balance_PRE", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance_CONTROL(int bins, double min, double max) {
	h_pT_balance_CONTROL = new TH1F("h_pT_balance_COTNROL", "", bins, min, max);
}
void MC_Analysis::Book_pT_balance(int bins, double min, double max) {
	h_pT_balance = new TH1F("h_pT_balance", "", bins, min, max);
}


/// ------------------- ELECTRONS ---------------- ///

// -- Invariant mass of electron 0 and electron 1
void MC_Analysis::Book_elec_0_elec_1_mass_PRE(int bins, double min, double max) {
	h_elec_0_elec_1_mass_PRE = new TH1F("h_elec_0_elec_1_mass_PRE", "", bins, min, max);
}
void MC_Analysis::Book_elec_0_elec_1_mass_CONTROL(int bins, double min, double max) {
	h_elec_0_elec_1_mass_CONTROL = new TH1F("h_elec_0_elec_1_mass_COTNROL", "", bins, min, max);
}
void MC_Analysis::Book_elec_0_elec_1_mass(int bins, double min, double max) {
	h_elec_0_elec_1_mass = new TH1F("h_elec_0_elec_1_mass", "", bins, min, max);
}


// -- Combined transverse momentum of electron 0 and electron 1
void MC_Analysis::Book_elec_0_elec_1_pt_PRE(int bins, double min, double max) {
	h_elec_0_elec_1_pt_PRE = new TH1F("h_elec_0_elec_1_pt_PRE", "", bins, min, max);
}
void MC_Analysis::Book_elec_0_elec_1_pt_CONTROL(int bins, double min, double max) {
	h_elec_0_elec_1_pt_CONTROL = new TH1F("h_elec_0_elec_1_pt_COTNROL", "", bins, min, max);
}
void MC_Analysis::Book_elec_0_elec_1_pt(int bins, double min, double max) {
	h_elec_0_elec_1_pt = new TH1F("h_elec_0_elec_1_pt", "", bins, min, max);
}


/// ------------------- MUONS ---------------- ///

// -- Invariant mass of muon 0 and muon 1
void MC_Analysis::Book_muon_0_muon_1_mass_PRE(int bins, double min, double max) {
	h_muon_0_muon_1_mass_PRE = new TH1F("h_muon_0_muon_1_mass_PRE", "", bins, min, max);
}
void MC_Analysis::Book_muon_0_muon_1_mass_CONTROL(int bins, double min, double max) {
	h_muon_0_muon_1_mass_CONTROL = new TH1F("h_muon_0_muon_1_mass_COTNROL", "", bins, min, max);
}
void MC_Analysis::Book_muon_0_muon_1_mass(int bins, double min, double max) {
	h_muon_0_muon_1_mass = new TH1F("h_muon_0_muon_1_mass", "", bins, min, max);
}


// -- Combined transverse momentum of muon 0 and muon 1
void MC_Analysis::Book_muon_0_muon_1_pt_PRE(int bins, double min, double max) {
	h_muon_0_muon_1_pt_PRE = new TH1F("h_muon_0_muon_1_pt_PRE", "", bins, min, max);
}
void MC_Analysis::Book_muon_0_muon_1_pt_CONTROL(int bins, double min, double max) {
	h_muon_0_muon_1_pt_CONTROL = new TH1F("h_muon_0_muon_1_pt_COTNROL", "", bins, min, max);
}
void MC_Analysis::Book_muon_0_muon_1_pt(int bins, double min, double max) {
	h_muon_0_muon_1_pt = new TH1F("h_muon_0_muon_1_pt", "", bins, min, max);
}


/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading)
void MC_Analysis::Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass_PRE = new TH1F("h_ljet_0_ljet_1_mass_PRE", "", bins, min, max);
}
void MC_Analysis::Book_ljet_0_ljet_1_mass_CONTROL(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass_CONTROL = new TH1F("h_ljet_0_ljet_1_mass_COTNROL", "", bins, min, max);
}
void MC_Analysis::Book_ljet_0_ljet_1_mass(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass = new TH1F("h_ljet_0_ljet_1_mass", "", bins, min, max);
}


#endif