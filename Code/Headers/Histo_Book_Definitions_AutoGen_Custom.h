#ifndef Histo_Book_Definitions_AutoGen_Custom_h
#define Histo_Book_Definitions_AutoGen_Custom_h

/// ------------------- TITLE ---------------- ///

/// ------------------- FunctionName:Comment ---------------- ///

/// ------------------- GENERIC ---------------- ///

// -- Distance in R space between two detections (ljet, elec, muon, etc)
double DeltaR;

virtual void Book_DeltaR_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_DeltaR_PRE; // PRE VERSION

virtual void Book_DeltaR_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_DeltaR_CONTROL; // CONTROL VERSION

virtual void Book_DeltaR_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_DeltaR_EXCEPT; // EXCEPT VERSION

virtual void Book_DeltaR(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_DeltaR; // SEARCH VERSION


// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
double pT_balance;

virtual void Book_pT_balance_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_pT_balance_PRE; // PRE VERSION

virtual void Book_pT_balance_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_pT_balance_CONTROL; // CONTROL VERSION

virtual void Book_pT_balance_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_pT_balance_EXCEPT; // EXCEPT VERSION

virtual void Book_pT_balance(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_pT_balance; // SEARCH VERSION


// -- PT Balance Three - Normalised transverse momentum balance between the two leptons and the three highest transverse momentum jets
double pT_balance_3;

virtual void Book_pT_balance_3_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_pT_balance_3_PRE; // PRE VERSION

virtual void Book_pT_balance_3_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_pT_balance_3_CONTROL; // CONTROL VERSION

virtual void Book_pT_balance_3_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_pT_balance_3_EXCEPT; // EXCEPT VERSION

virtual void Book_pT_balance_3(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_pT_balance_3; // SEARCH VERSION


// -- Centrality of pseudorapidity of Z boson between two leading jets
double Centrality;

virtual void Book_Centrality_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_Centrality_PRE; // PRE VERSION

virtual void Book_Centrality_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_Centrality_CONTROL; // CONTROL VERSION

virtual void Book_Centrality_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_Centrality_EXCEPT; // EXCEPT VERSION

virtual void Book_Centrality(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_Centrality; // SEARCH VERSION


// -- Rapidity of a dijet pair
double RapidityDijet;

virtual void Book_RapidityDijet_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_RapidityDijet_PRE; // PRE VERSION

virtual void Book_RapidityDijet_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_RapidityDijet_CONTROL; // CONTROL VERSION

virtual void Book_RapidityDijet_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_RapidityDijet_EXCEPT; // EXCEPT VERSION

virtual void Book_RapidityDijet(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_RapidityDijet; // SEARCH VERSION


// -- Rapidity of a dilepton pair
double RapidityDilepton;

virtual void Book_RapidityDilepton_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_RapidityDilepton_PRE; // PRE VERSION

virtual void Book_RapidityDilepton_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_RapidityDilepton_CONTROL; // CONTROL VERSION

virtual void Book_RapidityDilepton_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_RapidityDilepton_EXCEPT; // EXCEPT VERSION

virtual void Book_RapidityDilepton(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_RapidityDilepton; // SEARCH VERSION


/// ------------------- ELECTRONS ---------------- ///

// -- Invariant mass of electron 0 and electron 1
double elec_0_elec_1_mass;

virtual void Book_elec_0_elec_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_elec_0_elec_1_mass_PRE; // PRE VERSION

virtual void Book_elec_0_elec_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_elec_0_elec_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_elec_0_elec_1_mass_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_elec_0_elec_1_mass_EXCEPT; // EXCEPT VERSION

virtual void Book_elec_0_elec_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_elec_0_elec_1_mass; // SEARCH VERSION


// -- Combined transverse momentum of electron 0 and electron 1
double elec_0_elec_1_pt;

virtual void Book_elec_0_elec_1_pt_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_elec_0_elec_1_pt_PRE; // PRE VERSION

virtual void Book_elec_0_elec_1_pt_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_elec_0_elec_1_pt_CONTROL; // CONTROL VERSION

virtual void Book_elec_0_elec_1_pt_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_elec_0_elec_1_pt_EXCEPT; // EXCEPT VERSION

virtual void Book_elec_0_elec_1_pt(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_elec_0_elec_1_pt; // SEARCH VERSION


// -- True Combined transverse momentum of electron 0 and electron 1
double elec_0_elec_1_pt_TRUTH;

virtual void Book_elec_0_elec_1_pt_TRUTH_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_elec_0_elec_1_pt_TRUTH_PRE; // PRE VERSION

virtual void Book_elec_0_elec_1_pt_TRUTH_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_elec_0_elec_1_pt_TRUTH_CONTROL; // CONTROL VERSION

virtual void Book_elec_0_elec_1_pt_TRUTH_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_elec_0_elec_1_pt_TRUTH_EXCEPT; // EXCEPT VERSION

virtual void Book_elec_0_elec_1_pt_TRUTH(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_elec_0_elec_1_pt_TRUTH; // SEARCH VERSION


/// ------------------- MUONS ---------------- ///

// -- Invariant mass of muon 0 and muon 1
double muon_0_muon_1_mass;

virtual void Book_muon_0_muon_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_muon_0_muon_1_mass_PRE; // PRE VERSION

virtual void Book_muon_0_muon_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_muon_0_muon_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_muon_0_muon_1_mass_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_muon_0_muon_1_mass_EXCEPT; // EXCEPT VERSION

virtual void Book_muon_0_muon_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_muon_0_muon_1_mass; // SEARCH VERSION


// -- Combined transverse momentum of muon 0 and muon 1
double muon_0_muon_1_pt;

virtual void Book_muon_0_muon_1_pt_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_muon_0_muon_1_pt_PRE; // PRE VERSION

virtual void Book_muon_0_muon_1_pt_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_muon_0_muon_1_pt_CONTROL; // CONTROL VERSION

virtual void Book_muon_0_muon_1_pt_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_muon_0_muon_1_pt_EXCEPT; // EXCEPT VERSION

virtual void Book_muon_0_muon_1_pt(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_muon_0_muon_1_pt; // SEARCH VERSION


/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading)
double ljet_0_ljet_1_mass;

virtual void Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_ljet_0_ljet_1_mass_PRE; // PRE VERSION

virtual void Book_ljet_0_ljet_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_ljet_0_ljet_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_ljet_0_ljet_1_mass_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_ljet_0_ljet_1_mass_EXCEPT; // EXCEPT VERSION

virtual void Book_ljet_0_ljet_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_ljet_0_ljet_1_mass; // SEARCH VERSION


#endif