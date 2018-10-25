#ifndef Histo_Book_Definitions_AutoGen_Custom_h
#define Histo_Book_Definitions_AutoGen_Custom_h

/// ------------------- GENERIC ---------------- ///

// -- Distance in R space between two detections (ljet, elec, muon, etc)
double DeltaR;

virtual void Book_DeltaR_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_DeltaR_PRE; // PRE VERSION

virtual void Book_DeltaR_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_DeltaR_CONTROL; // CONTROL VERSION

virtual void Book_DeltaR(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_DeltaR; // SEARCH VERSION


// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
double pT_balance;

virtual void Book_pT_balance_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_pT_balance_PRE; // PRE VERSION

virtual void Book_pT_balance_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_pT_balance_CONTROL; // CONTROL VERSION

virtual void Book_pT_balance(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_pT_balance; // SEARCH VERSION


/// ------------------- ELECTRONS ---------------- ///

// -- Invariant mass of electron 0 and electron 1
double elec_0_elec_1_mass;

virtual void Book_elec_0_elec_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_elec_0_elec_1_mass_PRE; // PRE VERSION

virtual void Book_elec_0_elec_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_elec_0_elec_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_elec_0_elec_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_elec_0_elec_1_mass; // SEARCH VERSION


// -- Combined transverse momentum of electron 0 and electron 1
double elec_0_elec_1_pt;

virtual void Book_elec_0_elec_1_pt_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_elec_0_elec_1_pt_PRE; // PRE VERSION

virtual void Book_elec_0_elec_1_pt_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_elec_0_elec_1_pt_CONTROL; // CONTROL VERSION

virtual void Book_elec_0_elec_1_pt(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_elec_0_elec_1_pt; // SEARCH VERSION


/// ------------------- MUONS ---------------- ///

// -- Invariant mass of muon 0 and muon 1
double muon_0_muon_1_mass;

virtual void Book_muon_0_muon_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_muon_0_muon_1_mass_PRE; // PRE VERSION

virtual void Book_muon_0_muon_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_muon_0_muon_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_muon_0_muon_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_muon_0_muon_1_mass; // SEARCH VERSION


// -- Combined transverse momentum of muon 0 and muon 1
double muon_0_muon_1_pt;

virtual void Book_muon_0_muon_1_pt_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_muon_0_muon_1_pt_PRE; // PRE VERSION

virtual void Book_muon_0_muon_1_pt_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_muon_0_muon_1_pt_CONTROL; // CONTROL VERSION

virtual void Book_muon_0_muon_1_pt(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_muon_0_muon_1_pt; // SEARCH VERSION


/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading)
double ljet_0_ljet_1_mass;

virtual void Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_ljet_0_ljet_1_mass_PRE; // PRE VERSION

virtual void Book_ljet_0_ljet_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_ljet_0_ljet_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_ljet_0_ljet_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_ljet_0_ljet_1_mass; // SEARCH VERSION


#endif