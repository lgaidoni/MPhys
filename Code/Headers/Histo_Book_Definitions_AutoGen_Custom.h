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
TH1F	*h_DeltaR_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_pT_balance_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_pT_balance_3_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_Centrality_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_RapidityDijet_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_RapidityDilepton_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_lep_0_lep_1_mass_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_lep_0_lep_1_pt_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_lep_0_iso_ptvarcone40_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_lep_1_iso_ptvarcone40_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_jet_0_jet_1_mass_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_jet_0_p4_Pt_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_jet_1_p4_Pt_HIGH_E; // HIGH_E VERSION
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
TH1F	*h_MET_Centrality_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_MET_Centrality; // HISTOGRAM VECTOR
vector<string>	hv_MET_Centrality_names; // HISTOGRAM NAME VECTOR

// -- missing energy of neutrino 1
double neutrino_0_pt;

virtual void Book_neutrino_0_pt(int bins, double min, double max);
TH1F	*h_neutrino_0_pt; // SEARCH VERSION
TH1F	*h_neutrino_0_pt_PRE; // PRE VERSION
TH1F	*h_neutrino_0_pt_CONTROL; // CONTROL VERSION
TH1F	*h_neutrino_0_pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_neutrino_0_pt_BJET; // BJET VERSION
TH1F	*h_neutrino_0_pt_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_neutrino_0_pt; // HISTOGRAM VECTOR
vector<string>	hv_neutrino_0_pt_names; // HISTOGRAM NAME VECTOR

// -- missing energy of neutrino 2
double neutrino_1_pt;

virtual void Book_neutrino_1_pt(int bins, double min, double max);
TH1F	*h_neutrino_1_pt; // SEARCH VERSION
TH1F	*h_neutrino_1_pt_PRE; // PRE VERSION
TH1F	*h_neutrino_1_pt_CONTROL; // CONTROL VERSION
TH1F	*h_neutrino_1_pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_neutrino_1_pt_BJET; // BJET VERSION
TH1F	*h_neutrino_1_pt_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_neutrino_1_pt; // HISTOGRAM VECTOR
vector<string>	hv_neutrino_1_pt_names; // HISTOGRAM NAME VECTOR

// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
double MET_Type_Favour;

virtual void Book_MET_Type_Favour(int bins, double min, double max);
TH1F	*h_MET_Type_Favour; // SEARCH VERSION
TH1F	*h_MET_Type_Favour_PRE; // PRE VERSION
TH1F	*h_MET_Type_Favour_CONTROL; // CONTROL VERSION
TH1F	*h_MET_Type_Favour_EXCEPT; // EXCEPT VERSION
TH1F	*h_MET_Type_Favour_BJET; // BJET VERSION
TH1F	*h_MET_Type_Favour_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_MET_Type_Favour; // HISTOGRAM VECTOR
vector<string>	hv_MET_Type_Favour_names; // HISTOGRAM NAME VECTOR

/// ------------------- RECONSTRUCTED ---------------- ///

// --  reconstructed Z mass with neutrino and z candidates
double lep_0_lep_1_mass_reconstructed;

virtual void Book_lep_0_lep_1_mass_reconstructed(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_mass_reconstructed; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_mass_reconstructed_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_mass_reconstructed_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_mass_reconstructed_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_mass_reconstructed_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_mass_reconstructed_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_lep_0_lep_1_mass_reconstructed; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_mass_reconstructed_names; // HISTOGRAM NAME VECTOR

// -- Distance in R space between two leptons (reconstructed with missing neutrino energy included)
double DeltaR_reconstructed;

virtual void Book_DeltaR_reconstructed(int bins, double min, double max);
TH1F	*h_DeltaR_reconstructed; // SEARCH VERSION
TH1F	*h_DeltaR_reconstructed_PRE; // PRE VERSION
TH1F	*h_DeltaR_reconstructed_CONTROL; // CONTROL VERSION
TH1F	*h_DeltaR_reconstructed_EXCEPT; // EXCEPT VERSION
TH1F	*h_DeltaR_reconstructed_BJET; // BJET VERSION
TH1F	*h_DeltaR_reconstructed_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_DeltaR_reconstructed; // HISTOGRAM VECTOR
vector<string>	hv_DeltaR_reconstructed_names; // HISTOGRAM NAME VECTOR

// -- Combined transverse momentum of lepton 0 and lepton 1 (reconstructed with missing neutrino energy included)
double lep_0_lep_1_pt_reconstructed;

virtual void Book_lep_0_lep_1_pt_reconstructed(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_pt_reconstructed; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_pt_reconstructed_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_pt_reconstructed_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_pt_reconstructed_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_pt_reconstructed_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_pt_reconstructed_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_lep_0_lep_1_pt_reconstructed; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_pt_reconstructed_names; // HISTOGRAM NAME VECTOR

/// ------------------- lep_0_reco_p4:global variables for lepton 0 reconstructed ---------------- ///

/// ------------------- lep_1_reco_p4:global variables for lepton 1 reconstructed ---------------- ///

// -- Centrality of pseudorapidity of Z boson between two leading jets (reconstructed with missing neutrino energy included)
double Centrality_reconstructed;

virtual void Book_Centrality_reconstructed(int bins, double min, double max);
TH1F	*h_Centrality_reconstructed; // SEARCH VERSION
TH1F	*h_Centrality_reconstructed_PRE; // PRE VERSION
TH1F	*h_Centrality_reconstructed_CONTROL; // CONTROL VERSION
TH1F	*h_Centrality_reconstructed_EXCEPT; // EXCEPT VERSION
TH1F	*h_Centrality_reconstructed_BJET; // BJET VERSION
TH1F	*h_Centrality_reconstructed_HIGH_E; // HIGH_E VERSION
vector<TH1F*>	hv_Centrality_reconstructed; // HISTOGRAM VECTOR
vector<string>	hv_Centrality_reconstructed_names; // HISTOGRAM NAME VECTOR

// -- This is a test of a polar plot
virtual void Book_Test_Polar_Plot(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Test_Polar_Plot; // SEARCH VERSION
TH2F	*h_Test_Polar_Plot_PRE; // PRE VERSION
TH2F	*h_Test_Polar_Plot_CONTROL; // CONTROL VERSION
TH2F	*h_Test_Polar_Plot_EXCEPT; // EXCEPT VERSION
TH2F	*h_Test_Polar_Plot_BJET; // BJET VERSION
TH2F	*h_Test_Polar_Plot_HIGH_E; // HIGH_E VERSION
vector<TH2F*>	hv_Test_Polar_Plot; // HISTOGRAM VECTOR
vector<string>	hv_Test_Polar_Plot_names; // HISTOGRAM NAME VECTOR

// -- 2D plot of dilepton invariant mass and favour for the purposes of discovering leptons which favour one flavour over another
virtual void Book_Mass_Favour_Combination_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Mass_Favour_Combination_2D; // SEARCH VERSION
TH2F	*h_Mass_Favour_Combination_2D_PRE; // PRE VERSION
TH2F	*h_Mass_Favour_Combination_2D_CONTROL; // CONTROL VERSION
TH2F	*h_Mass_Favour_Combination_2D_EXCEPT; // EXCEPT VERSION
TH2F	*h_Mass_Favour_Combination_2D_BJET; // BJET VERSION
TH2F	*h_Mass_Favour_Combination_2D_HIGH_E; // HIGH_E VERSION
vector<TH2F*>	hv_Mass_Favour_Combination_2D; // HISTOGRAM VECTOR
vector<string>	hv_Mass_Favour_Combination_2D_names; // HISTOGRAM NAME VECTOR

// -- This is a test of a polar plot
virtual void Book_lep_0_reco_p4(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_lep_0_reco_p4; // SEARCH VERSION
TH2F	*h_lep_0_reco_p4_PRE; // PRE VERSION
TH2F	*h_lep_0_reco_p4_CONTROL; // CONTROL VERSION
TH2F	*h_lep_0_reco_p4_EXCEPT; // EXCEPT VERSION
TH2F	*h_lep_0_reco_p4_BJET; // BJET VERSION
TH2F	*h_lep_0_reco_p4_HIGH_E; // HIGH_E VERSION
vector<TH2F*>	hv_lep_0_reco_p4; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_reco_p4_names; // HISTOGRAM NAME VECTOR

// -- 
virtual void Book_lep_1_reco_p4(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_lep_1_reco_p4; // SEARCH VERSION
TH2F	*h_lep_1_reco_p4_PRE; // PRE VERSION
TH2F	*h_lep_1_reco_p4_CONTROL; // CONTROL VERSION
TH2F	*h_lep_1_reco_p4_EXCEPT; // EXCEPT VERSION
TH2F	*h_lep_1_reco_p4_BJET; // BJET VERSION
TH2F	*h_lep_1_reco_p4_HIGH_E; // HIGH_E VERSION
vector<TH2F*>	hv_lep_1_reco_p4; // HISTOGRAM VECTOR
vector<string>	hv_lep_1_reco_p4_names; // HISTOGRAM NAME VECTOR

#endif