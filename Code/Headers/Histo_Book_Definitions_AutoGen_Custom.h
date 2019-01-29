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

virtual void Book_DeltaR_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_DeltaR_BJET; // BJET VERSION


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

virtual void Book_pT_balance_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_pT_balance_BJET; // BJET VERSION


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

virtual void Book_pT_balance_3_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_pT_balance_3_BJET; // BJET VERSION


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

virtual void Book_Centrality_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_Centrality_BJET; // BJET VERSION


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

virtual void Book_RapidityDijet_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_RapidityDijet_BJET; // BJET VERSION


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

virtual void Book_RapidityDilepton_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_RapidityDilepton_BJET; // BJET VERSION


/// ------------------- LEPTONS ---------------- ///

// -- Invariant mass of lepton 0 and lepton 1
double lep_0_lep_1_mass;

virtual void Book_lep_0_lep_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_lep_0_lep_1_mass_PRE; // PRE VERSION

virtual void Book_lep_0_lep_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_lep_0_lep_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_lep_0_lep_1_mass_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_mass_EXCEPT; // EXCEPT VERSION

virtual void Book_lep_0_lep_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_lep_0_lep_1_mass; // SEARCH VERSION

virtual void Book_lep_0_lep_1_mass_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_lep_0_lep_1_mass_BJET; // BJET VERSION


// -- Combined transverse momentum of lepton 0 and lepton 1
double lep_0_lep_1_pt;

virtual void Book_lep_0_lep_1_pt_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_lep_0_lep_1_pt_PRE; // PRE VERSION

virtual void Book_lep_0_lep_1_pt_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_lep_0_lep_1_pt_CONTROL; // CONTROL VERSION

virtual void Book_lep_0_lep_1_pt_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_pt_EXCEPT; // EXCEPT VERSION

virtual void Book_lep_0_lep_1_pt(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_lep_0_lep_1_pt; // SEARCH VERSION

virtual void Book_lep_0_lep_1_pt_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_lep_0_lep_1_pt_BJET; // BJET VERSION


// -- True Combined transverse momentum of lepton 0 and lepton 1
double lep_0_lep_1_pt_TRUTH;

virtual void Book_lep_0_lep_1_pt_TRUTH_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_lep_0_lep_1_pt_TRUTH_PRE; // PRE VERSION

virtual void Book_lep_0_lep_1_pt_TRUTH_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_lep_0_lep_1_pt_TRUTH_CONTROL; // CONTROL VERSION

virtual void Book_lep_0_lep_1_pt_TRUTH_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_pt_TRUTH_EXCEPT; // EXCEPT VERSION

virtual void Book_lep_0_lep_1_pt_TRUTH(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_lep_0_lep_1_pt_TRUTH; // SEARCH VERSION

virtual void Book_lep_0_lep_1_pt_TRUTH_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_lep_0_lep_1_pt_TRUTH_BJET; // BJET VERSION


// -- Isolation cone for the lepton 0, size 40
double lep_0_iso_ptvarcone40;

virtual void Book_lep_0_iso_ptvarcone40_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_lep_0_iso_ptvarcone40_PRE; // PRE VERSION

virtual void Book_lep_0_iso_ptvarcone40_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_lep_0_iso_ptvarcone40_CONTROL; // CONTROL VERSION

virtual void Book_lep_0_iso_ptvarcone40_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_lep_0_iso_ptvarcone40_EXCEPT; // EXCEPT VERSION

virtual void Book_lep_0_iso_ptvarcone40(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_lep_0_iso_ptvarcone40; // SEARCH VERSION

virtual void Book_lep_0_iso_ptvarcone40_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_lep_0_iso_ptvarcone40_BJET; // BJET VERSION


// -- Isolation cone for the lepton 1, size 40
double lep_1_iso_ptvarcone40;

virtual void Book_lep_1_iso_ptvarcone40_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_lep_1_iso_ptvarcone40_PRE; // PRE VERSION

virtual void Book_lep_1_iso_ptvarcone40_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_lep_1_iso_ptvarcone40_CONTROL; // CONTROL VERSION

virtual void Book_lep_1_iso_ptvarcone40_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_lep_1_iso_ptvarcone40_EXCEPT; // EXCEPT VERSION

virtual void Book_lep_1_iso_ptvarcone40(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_lep_1_iso_ptvarcone40; // SEARCH VERSION

virtual void Book_lep_1_iso_ptvarcone40_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_lep_1_iso_ptvarcone40_BJET; // BJET VERSION


/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading) (light)
double ljet_0_ljet_1_mass;

virtual void Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_ljet_0_ljet_1_mass_PRE; // PRE VERSION

virtual void Book_ljet_0_ljet_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_ljet_0_ljet_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_ljet_0_ljet_1_mass_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_ljet_0_ljet_1_mass_EXCEPT; // EXCEPT VERSION

virtual void Book_ljet_0_ljet_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_ljet_0_ljet_1_mass; // SEARCH VERSION

virtual void Book_ljet_0_ljet_1_mass_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_ljet_0_ljet_1_mass_BJET; // BJET VERSION


// -- Invariant mass of two leading jets (leading and subleading) (bottom)
double bjet_0_bjet_1_mass;

virtual void Book_bjet_0_bjet_1_mass_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_bjet_0_bjet_1_mass_PRE; // PRE VERSION

virtual void Book_bjet_0_bjet_1_mass_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_bjet_0_bjet_1_mass_CONTROL; // CONTROL VERSION

virtual void Book_bjet_0_bjet_1_mass_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_bjet_0_bjet_1_mass_EXCEPT; // EXCEPT VERSION

virtual void Book_bjet_0_bjet_1_mass(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_bjet_0_bjet_1_mass; // SEARCH VERSION

virtual void Book_bjet_0_bjet_1_mass_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_bjet_0_bjet_1_mass_BJET; // BJET VERSION


// -- Leading jet transverse momentum
double jet_0_p4_Pt;

virtual void Book_jet_0_p4_Pt_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_jet_0_p4_Pt_PRE; // PRE VERSION

virtual void Book_jet_0_p4_Pt_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_jet_0_p4_Pt_CONTROL; // CONTROL VERSION

virtual void Book_jet_0_p4_Pt_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_jet_0_p4_Pt_EXCEPT; // EXCEPT VERSION

virtual void Book_jet_0_p4_Pt(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_jet_0_p4_Pt; // SEARCH VERSION

virtual void Book_jet_0_p4_Pt_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_jet_0_p4_Pt_BJET; // BJET VERSION


// -- Subleading jet transverse momentum
double jet_1_p4_Pt;

virtual void Book_jet_1_p4_Pt_PRE(int bins, double min, double max); // PRE VERSION
TH1F	*h_jet_1_p4_Pt_PRE; // PRE VERSION

virtual void Book_jet_1_p4_Pt_CONTROL(int bins, double min, double max); // CONTROL VERSION
TH1F	*h_jet_1_p4_Pt_CONTROL; // CONTROL VERSION

virtual void Book_jet_1_p4_Pt_EXCEPT(int bins, double min, double max); // EXCEPT VERSION
TH1F	*h_jet_1_p4_Pt_EXCEPT; // EXCEPT VERSION

virtual void Book_jet_1_p4_Pt(int bins, double min, double max); // SEARCH VERSION
TH1F	*h_jet_1_p4_Pt; // SEARCH VERSION

virtual void Book_jet_1_p4_Pt_BJET(int bins, double min, double max); // BJET VERSION
TH1F	*h_jet_1_p4_Pt_BJET; // BJET VERSION


#endif