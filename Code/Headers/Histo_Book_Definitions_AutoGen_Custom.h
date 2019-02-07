#ifndef Histo_Book_Definitions_AutoGen_Custom_h
#define Histo_Book_Definitions_AutoGen_Custom_h

/// ------------------- TITLE ---------------- ///

/// ------------------- FunctionName:Comment ---------------- ///

/// ------------------- GENERIC ---------------- ///

// -- Distance in R space between two detections (ljet, elec, muon, etc)
double DeltaR;

virtual void Book_DeltaR(int bins, double min, double max);
TH1F	*h_DeltaR; // SEARCH VERSION
TH1F	*h_DeltaR_PRE; // PRE VERSION
TH1F	*h_DeltaR_CONTROL; // CONTROL VERSION
TH1F	*h_DeltaR_EXCEPT; // EXCEPT VERSION
TH1F	*h_DeltaR_BJET; // BJET VERSION
vector<TH1F*>	hv_DeltaR; // HISTOGRAM VECTOR

vector<string>	hv_DeltaR_names; // HISTOGRAM NAME VECTOR

// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
double pT_balance;

virtual void Book_pT_balance(int bins, double min, double max);
TH1F	*h_pT_balance; // SEARCH VERSION
TH1F	*h_pT_balance_PRE; // PRE VERSION
TH1F	*h_pT_balance_CONTROL; // CONTROL VERSION
TH1F	*h_pT_balance_EXCEPT; // EXCEPT VERSION
TH1F	*h_pT_balance_BJET; // BJET VERSION
vector<TH1F*>	hv_pT_balance; // HISTOGRAM VECTOR

vector<string>	hv_pT_balance_names; // HISTOGRAM NAME VECTOR

// -- PT Balance Three - Normalised transverse momentum balance between the two leptons and the three highest transverse momentum jets
double pT_balance_3;

virtual void Book_pT_balance_3(int bins, double min, double max);
TH1F	*h_pT_balance_3; // SEARCH VERSION
TH1F	*h_pT_balance_3_PRE; // PRE VERSION
TH1F	*h_pT_balance_3_CONTROL; // CONTROL VERSION
TH1F	*h_pT_balance_3_EXCEPT; // EXCEPT VERSION
TH1F	*h_pT_balance_3_BJET; // BJET VERSION
vector<TH1F*>	hv_pT_balance_3; // HISTOGRAM VECTOR

vector<string>	hv_pT_balance_3_names; // HISTOGRAM NAME VECTOR

// -- Centrality of pseudorapidity of Z boson between two leading jets
double Centrality;

virtual void Book_Centrality(int bins, double min, double max);
TH1F	*h_Centrality; // SEARCH VERSION
TH1F	*h_Centrality_PRE; // PRE VERSION
TH1F	*h_Centrality_CONTROL; // CONTROL VERSION
TH1F	*h_Centrality_EXCEPT; // EXCEPT VERSION
TH1F	*h_Centrality_BJET; // BJET VERSION
vector<TH1F*>	hv_Centrality; // HISTOGRAM VECTOR

vector<string>	hv_Centrality_names; // HISTOGRAM NAME VECTOR

// -- Rapidity of a dijet pair
double RapidityDijet;

virtual void Book_RapidityDijet(int bins, double min, double max);
TH1F	*h_RapidityDijet; // SEARCH VERSION
TH1F	*h_RapidityDijet_PRE; // PRE VERSION
TH1F	*h_RapidityDijet_CONTROL; // CONTROL VERSION
TH1F	*h_RapidityDijet_EXCEPT; // EXCEPT VERSION
TH1F	*h_RapidityDijet_BJET; // BJET VERSION
vector<TH1F*>	hv_RapidityDijet; // HISTOGRAM VECTOR

vector<string>	hv_RapidityDijet_names; // HISTOGRAM NAME VECTOR

// -- Rapidity of a dilepton pair
double RapidityDilepton;

virtual void Book_RapidityDilepton(int bins, double min, double max);
TH1F	*h_RapidityDilepton; // SEARCH VERSION
TH1F	*h_RapidityDilepton_PRE; // PRE VERSION
TH1F	*h_RapidityDilepton_CONTROL; // CONTROL VERSION
TH1F	*h_RapidityDilepton_EXCEPT; // EXCEPT VERSION
TH1F	*h_RapidityDilepton_BJET; // BJET VERSION
vector<TH1F*>	hv_RapidityDilepton; // HISTOGRAM VECTOR

vector<string>	hv_RapidityDilepton_names; // HISTOGRAM NAME VECTOR

/// ------------------- LEPTONS ---------------- ///

// -- Invariant mass of lepton 0 and lepton 1
double lep_0_lep_1_mass;

virtual void Book_lep_0_lep_1_mass(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_mass; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_mass_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_mass_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_mass_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_mass_BJET; // BJET VERSION
vector<TH1F*>	hv_lep_0_lep_1_mass; // HISTOGRAM VECTOR

vector<string>	hv_lep_0_lep_1_mass_names; // HISTOGRAM NAME VECTOR

// -- Combined transverse momentum of lepton 0 and lepton 1
double lep_0_lep_1_pt;

virtual void Book_lep_0_lep_1_pt(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_pt; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_pt_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_pt_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_pt_BJET; // BJET VERSION
vector<TH1F*>	hv_lep_0_lep_1_pt; // HISTOGRAM VECTOR

vector<string>	hv_lep_0_lep_1_pt_names; // HISTOGRAM NAME VECTOR

// -- Isolation cone for the lepton 0, size 40
double lep_0_iso_ptvarcone40;

virtual void Book_lep_0_iso_ptvarcone40(int bins, double min, double max);
TH1F	*h_lep_0_iso_ptvarcone40; // SEARCH VERSION
TH1F	*h_lep_0_iso_ptvarcone40_PRE; // PRE VERSION
TH1F	*h_lep_0_iso_ptvarcone40_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_iso_ptvarcone40_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_iso_ptvarcone40_BJET; // BJET VERSION
vector<TH1F*>	hv_lep_0_iso_ptvarcone40; // HISTOGRAM VECTOR

vector<string>	hv_lep_0_iso_ptvarcone40_names; // HISTOGRAM NAME VECTOR

// -- Isolation cone for the lepton 1, size 40
double lep_1_iso_ptvarcone40;

virtual void Book_lep_1_iso_ptvarcone40(int bins, double min, double max);
TH1F	*h_lep_1_iso_ptvarcone40; // SEARCH VERSION
TH1F	*h_lep_1_iso_ptvarcone40_PRE; // PRE VERSION
TH1F	*h_lep_1_iso_ptvarcone40_CONTROL; // CONTROL VERSION
TH1F	*h_lep_1_iso_ptvarcone40_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_1_iso_ptvarcone40_BJET; // BJET VERSION
vector<TH1F*>	hv_lep_1_iso_ptvarcone40; // HISTOGRAM VECTOR

vector<string>	hv_lep_1_iso_ptvarcone40_names; // HISTOGRAM NAME VECTOR

/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading)
double jet_0_jet_1_mass;

virtual void Book_jet_0_jet_1_mass(int bins, double min, double max);
TH1F	*h_jet_0_jet_1_mass; // SEARCH VERSION
TH1F	*h_jet_0_jet_1_mass_PRE; // PRE VERSION
TH1F	*h_jet_0_jet_1_mass_CONTROL; // CONTROL VERSION
TH1F	*h_jet_0_jet_1_mass_EXCEPT; // EXCEPT VERSION
TH1F	*h_jet_0_jet_1_mass_BJET; // BJET VERSION
vector<TH1F*>	hv_jet_0_jet_1_mass; // HISTOGRAM VECTOR

vector<string>	hv_jet_0_jet_1_mass_names; // HISTOGRAM NAME VECTOR

// -- Leading jet transverse momentum
double jet_0_p4_Pt;

virtual void Book_jet_0_p4_Pt(int bins, double min, double max);
TH1F	*h_jet_0_p4_Pt; // SEARCH VERSION
TH1F	*h_jet_0_p4_Pt_PRE; // PRE VERSION
TH1F	*h_jet_0_p4_Pt_CONTROL; // CONTROL VERSION
TH1F	*h_jet_0_p4_Pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_jet_0_p4_Pt_BJET; // BJET VERSION
vector<TH1F*>	hv_jet_0_p4_Pt; // HISTOGRAM VECTOR

vector<string>	hv_jet_0_p4_Pt_names; // HISTOGRAM NAME VECTOR

// -- Subleading jet transverse momentum
double jet_1_p4_Pt;

virtual void Book_jet_1_p4_Pt(int bins, double min, double max);
TH1F	*h_jet_1_p4_Pt; // SEARCH VERSION
TH1F	*h_jet_1_p4_Pt_PRE; // PRE VERSION
TH1F	*h_jet_1_p4_Pt_CONTROL; // CONTROL VERSION
TH1F	*h_jet_1_p4_Pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_jet_1_p4_Pt_BJET; // BJET VERSION
vector<TH1F*>	hv_jet_1_p4_Pt; // HISTOGRAM VECTOR

vector<string>	hv_jet_1_p4_Pt_names; // HISTOGRAM NAME VECTOR

/// ------------------- MISSINGENERGY ---------------- ///

// -- Missing transversE Momentum centrality
double MET_Centrality;

virtual void Book_MET_Centrality(int bins, double min, double max);
TH1F	*h_MET_Centrality; // SEARCH VERSION
TH1F	*h_MET_Centrality_PRE; // PRE VERSION
TH1F	*h_MET_Centrality_CONTROL; // CONTROL VERSION
TH1F	*h_MET_Centrality_EXCEPT; // EXCEPT VERSION
TH1F	*h_MET_Centrality_BJET; // BJET VERSION
vector<TH1F*>	hv_MET_Centrality; // HISTOGRAM VECTOR

vector<string>	hv_MET_Centrality_names; // HISTOGRAM NAME VECTOR

// -- total unit vector of transverse momentum
double TOT_pT_UnitVector;

virtual void Book_TOT_pT_UnitVector(int bins, double min, double max);
TH1F	*h_TOT_pT_UnitVector; // SEARCH VERSION
TH1F	*h_TOT_pT_UnitVector_PRE; // PRE VERSION
TH1F	*h_TOT_pT_UnitVector_CONTROL; // CONTROL VERSION
TH1F	*h_TOT_pT_UnitVector_EXCEPT; // EXCEPT VERSION
TH1F	*h_TOT_pT_UnitVector_BJET; // BJET VERSION
vector<TH1F*>	hv_TOT_pT_UnitVector; // HISTOGRAM VECTOR

vector<string>	hv_TOT_pT_UnitVector_names; // HISTOGRAM NAME VECTOR

// -- unit vector of MET
double MET_UnitVector;

virtual void Book_MET_UnitVector(int bins, double min, double max);
TH1F	*h_MET_UnitVector; // SEARCH VERSION
TH1F	*h_MET_UnitVector_PRE; // PRE VERSION
TH1F	*h_MET_UnitVector_CONTROL; // CONTROL VERSION
TH1F	*h_MET_UnitVector_EXCEPT; // EXCEPT VERSION
TH1F	*h_MET_UnitVector_BJET; // BJET VERSION
vector<TH1F*>	hv_MET_UnitVector; // HISTOGRAM VECTOR

vector<string>	hv_MET_UnitVector_names; // HISTOGRAM NAME VECTOR

/// ------------------- TESTING ---------------- ///

// -- TESTING
double Testing;

virtual void Book_Testing(int bins, double min, double max);
TH1F	*h_Testing; // SEARCH VERSION
TH1F	*h_Testing_PRE; // PRE VERSION
TH1F	*h_Testing_CONTROL; // CONTROL VERSION
TH1F	*h_Testing_EXCEPT; // EXCEPT VERSION
TH1F	*h_Testing_BJET; // BJET VERSION
vector<TH1F*>	hv_Testing; // HISTOGRAM VECTOR

vector<string>	hv_Testing_names; // HISTOGRAM NAME VECTOR

#endif