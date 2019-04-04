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
TH1F	*h_DeltaR_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_DeltaR_BJET; // BJET VERSION
TH1F	*h_DeltaR_HIGH_E; // HIGH_E VERSION
TH1F	*h_DeltaR_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_DeltaR; // HISTOGRAM VECTOR
vector<string>	hv_DeltaR_names; // HISTOGRAM NAME VECTOR

// -- Separation of the two candidate leptons in phi space
double DeltaPhi;

virtual void Book_DeltaPhi(int bins, double min, double max);
TH1F	*h_DeltaPhi; // SEARCH VERSION
TH1F	*h_DeltaPhi_PRE; // PRE VERSION
TH1F	*h_DeltaPhi_CONTROL; // CONTROL VERSION
TH1F	*h_DeltaPhi_EXCEPT; // EXCEPT VERSION
TH1F	*h_DeltaPhi_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_DeltaPhi_BJET; // BJET VERSION
TH1F	*h_DeltaPhi_HIGH_E; // HIGH_E VERSION
TH1F	*h_DeltaPhi_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_DeltaPhi; // HISTOGRAM VECTOR
vector<string>	hv_DeltaPhi_names; // HISTOGRAM NAME VECTOR

// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
double pT_balance;

virtual void Book_pT_balance(int bins, double min, double max);
TH1F	*h_pT_balance; // SEARCH VERSION
TH1F	*h_pT_balance_PRE; // PRE VERSION
TH1F	*h_pT_balance_CONTROL; // CONTROL VERSION
TH1F	*h_pT_balance_EXCEPT; // EXCEPT VERSION
TH1F	*h_pT_balance_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_pT_balance_BJET; // BJET VERSION
TH1F	*h_pT_balance_HIGH_E; // HIGH_E VERSION
TH1F	*h_pT_balance_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_pT_balance; // HISTOGRAM VECTOR
vector<string>	hv_pT_balance_names; // HISTOGRAM NAME VECTOR

// -- PT Balance Three - Normalised transverse momentum balance between the two leptons and the three highest transverse momentum jets
double pT_balance_3;

virtual void Book_pT_balance_3(int bins, double min, double max);
TH1F	*h_pT_balance_3; // SEARCH VERSION
TH1F	*h_pT_balance_3_PRE; // PRE VERSION
TH1F	*h_pT_balance_3_CONTROL; // CONTROL VERSION
TH1F	*h_pT_balance_3_EXCEPT; // EXCEPT VERSION
TH1F	*h_pT_balance_3_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_pT_balance_3_BJET; // BJET VERSION
TH1F	*h_pT_balance_3_HIGH_E; // HIGH_E VERSION
TH1F	*h_pT_balance_3_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_pT_balance_3; // HISTOGRAM VECTOR
vector<string>	hv_pT_balance_3_names; // HISTOGRAM NAME VECTOR

// -- Centrality of pseudorapidity of Z boson between two leading jets
double Centrality;

virtual void Book_Centrality(int bins, double min, double max);
TH1F	*h_Centrality; // SEARCH VERSION
TH1F	*h_Centrality_PRE; // PRE VERSION
TH1F	*h_Centrality_CONTROL; // CONTROL VERSION
TH1F	*h_Centrality_EXCEPT; // EXCEPT VERSION
TH1F	*h_Centrality_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_Centrality_BJET; // BJET VERSION
TH1F	*h_Centrality_HIGH_E; // HIGH_E VERSION
TH1F	*h_Centrality_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_Centrality; // HISTOGRAM VECTOR
vector<string>	hv_Centrality_names; // HISTOGRAM NAME VECTOR

// -- Centrality of pseudorapidity of Z boson between two leading jets
double Centrality_INSIDE;

virtual void Book_Centrality_INSIDE(int bins, double min, double max);
TH1F	*h_Centrality_INSIDE; // SEARCH VERSION
TH1F	*h_Centrality_INSIDE_PRE; // PRE VERSION
TH1F	*h_Centrality_INSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_Centrality_INSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_Centrality_INSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_Centrality_INSIDE_BJET; // BJET VERSION
TH1F	*h_Centrality_INSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_Centrality_INSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_Centrality_INSIDE; // HISTOGRAM VECTOR
vector<string>	hv_Centrality_INSIDE_names; // HISTOGRAM NAME VECTOR

// -- Centrality of pseudorapidity of Z boson between two leading jets
double Centrality_OUTSIDE;

virtual void Book_Centrality_OUTSIDE(int bins, double min, double max);
TH1F	*h_Centrality_OUTSIDE; // SEARCH VERSION
TH1F	*h_Centrality_OUTSIDE_PRE; // PRE VERSION
TH1F	*h_Centrality_OUTSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_Centrality_OUTSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_Centrality_OUTSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_Centrality_OUTSIDE_BJET; // BJET VERSION
TH1F	*h_Centrality_OUTSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_Centrality_OUTSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_Centrality_OUTSIDE; // HISTOGRAM VECTOR
vector<string>	hv_Centrality_OUTSIDE_names; // HISTOGRAM NAME VECTOR

// -- Rapidity of a dijet pair
double RapidityDijet;

virtual void Book_RapidityDijet(int bins, double min, double max);
TH1F	*h_RapidityDijet; // SEARCH VERSION
TH1F	*h_RapidityDijet_PRE; // PRE VERSION
TH1F	*h_RapidityDijet_CONTROL; // CONTROL VERSION
TH1F	*h_RapidityDijet_EXCEPT; // EXCEPT VERSION
TH1F	*h_RapidityDijet_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_RapidityDijet_BJET; // BJET VERSION
TH1F	*h_RapidityDijet_HIGH_E; // HIGH_E VERSION
TH1F	*h_RapidityDijet_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_RapidityDijet; // HISTOGRAM VECTOR
vector<string>	hv_RapidityDijet_names; // HISTOGRAM NAME VECTOR

// -- Rapidity of a dilepton pair
double RapidityDilepton;

virtual void Book_RapidityDilepton(int bins, double min, double max);
TH1F	*h_RapidityDilepton; // SEARCH VERSION
TH1F	*h_RapidityDilepton_PRE; // PRE VERSION
TH1F	*h_RapidityDilepton_CONTROL; // CONTROL VERSION
TH1F	*h_RapidityDilepton_EXCEPT; // EXCEPT VERSION
TH1F	*h_RapidityDilepton_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_RapidityDilepton_BJET; // BJET VERSION
TH1F	*h_RapidityDilepton_HIGH_E; // HIGH_E VERSION
TH1F	*h_RapidityDilepton_TRUTH; // TRUTH VERSION
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
TH1F	*h_lep_0_lep_1_mass_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_lep_1_mass_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_mass_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_lep_1_mass_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_lep_1_mass; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_mass_names; // HISTOGRAM NAME VECTOR

// -- Combined transverse momentum of lepton 0 and lepton 1
double lep_0_lep_1_pt;

virtual void Book_lep_0_lep_1_pt(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_pt; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_pt_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_pt_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_pt_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_lep_1_pt_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_pt_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_lep_1_pt_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_lep_1_pt; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_pt_names; // HISTOGRAM NAME VECTOR

// -- Isolation cone for the lepton 0, size 40
double lep_0_iso_ptvarcone40;

virtual void Book_lep_0_iso_ptvarcone40(int bins, double min, double max);
TH1F	*h_lep_0_iso_ptvarcone40; // SEARCH VERSION
TH1F	*h_lep_0_iso_ptvarcone40_PRE; // PRE VERSION
TH1F	*h_lep_0_iso_ptvarcone40_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_iso_ptvarcone40_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_iso_ptvarcone40_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_iso_ptvarcone40_BJET; // BJET VERSION
TH1F	*h_lep_0_iso_ptvarcone40_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_iso_ptvarcone40_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_iso_ptvarcone40; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_iso_ptvarcone40_names; // HISTOGRAM NAME VECTOR

// -- Isolation cone for the lepton 1, size 40
double lep_1_iso_ptvarcone40;

virtual void Book_lep_1_iso_ptvarcone40(int bins, double min, double max);
TH1F	*h_lep_1_iso_ptvarcone40; // SEARCH VERSION
TH1F	*h_lep_1_iso_ptvarcone40_PRE; // PRE VERSION
TH1F	*h_lep_1_iso_ptvarcone40_CONTROL; // CONTROL VERSION
TH1F	*h_lep_1_iso_ptvarcone40_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_1_iso_ptvarcone40_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_1_iso_ptvarcone40_BJET; // BJET VERSION
TH1F	*h_lep_1_iso_ptvarcone40_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_1_iso_ptvarcone40_TRUTH; // TRUTH VERSION
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
TH1F	*h_jet_0_jet_1_mass_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_jet_0_jet_1_mass_BJET; // BJET VERSION
TH1F	*h_jet_0_jet_1_mass_HIGH_E; // HIGH_E VERSION
TH1F	*h_jet_0_jet_1_mass_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_jet_0_jet_1_mass; // HISTOGRAM VECTOR
vector<string>	hv_jet_0_jet_1_mass_names; // HISTOGRAM NAME VECTOR

// -- Invariant mass of two leading jets (leading and subleading)
double jet_0_jet_1_mass_INSIDE;

virtual void Book_jet_0_jet_1_mass_INSIDE(int bins, double min, double max);
TH1F	*h_jet_0_jet_1_mass_INSIDE; // SEARCH VERSION
TH1F	*h_jet_0_jet_1_mass_INSIDE_PRE; // PRE VERSION
TH1F	*h_jet_0_jet_1_mass_INSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_jet_0_jet_1_mass_INSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_jet_0_jet_1_mass_INSIDE_BJET; // BJET VERSION
TH1F	*h_jet_0_jet_1_mass_INSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_jet_0_jet_1_mass_INSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_jet_0_jet_1_mass_INSIDE; // HISTOGRAM VECTOR
vector<string>	hv_jet_0_jet_1_mass_INSIDE_names; // HISTOGRAM NAME VECTOR

// -- Invariant mass of two leading jets (leading and subleading)
double jet_0_jet_1_mass_OUTSIDE;

virtual void Book_jet_0_jet_1_mass_OUTSIDE(int bins, double min, double max);
TH1F	*h_jet_0_jet_1_mass_OUTSIDE; // SEARCH VERSION
TH1F	*h_jet_0_jet_1_mass_OUTSIDE_PRE; // PRE VERSION
TH1F	*h_jet_0_jet_1_mass_OUTSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_jet_0_jet_1_mass_OUTSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_jet_0_jet_1_mass_OUTSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_jet_0_jet_1_mass_OUTSIDE_BJET; // BJET VERSION
TH1F	*h_jet_0_jet_1_mass_OUTSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_jet_0_jet_1_mass_OUTSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_jet_0_jet_1_mass_OUTSIDE; // HISTOGRAM VECTOR
vector<string>	hv_jet_0_jet_1_mass_OUTSIDE_names; // HISTOGRAM NAME VECTOR

// -- Leading jet transverse momentum
double jet_0_p4_Pt;

virtual void Book_jet_0_p4_Pt(int bins, double min, double max);
TH1F	*h_jet_0_p4_Pt; // SEARCH VERSION
TH1F	*h_jet_0_p4_Pt_PRE; // PRE VERSION
TH1F	*h_jet_0_p4_Pt_CONTROL; // CONTROL VERSION
TH1F	*h_jet_0_p4_Pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_jet_0_p4_Pt_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_jet_0_p4_Pt_BJET; // BJET VERSION
TH1F	*h_jet_0_p4_Pt_HIGH_E; // HIGH_E VERSION
TH1F	*h_jet_0_p4_Pt_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_jet_0_p4_Pt; // HISTOGRAM VECTOR
vector<string>	hv_jet_0_p4_Pt_names; // HISTOGRAM NAME VECTOR

// -- Subleading jet transverse momentum
double jet_1_p4_Pt;

virtual void Book_jet_1_p4_Pt(int bins, double min, double max);
TH1F	*h_jet_1_p4_Pt; // SEARCH VERSION
TH1F	*h_jet_1_p4_Pt_PRE; // PRE VERSION
TH1F	*h_jet_1_p4_Pt_CONTROL; // CONTROL VERSION
TH1F	*h_jet_1_p4_Pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_jet_1_p4_Pt_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_jet_1_p4_Pt_BJET; // BJET VERSION
TH1F	*h_jet_1_p4_Pt_HIGH_E; // HIGH_E VERSION
TH1F	*h_jet_1_p4_Pt_TRUTH; // TRUTH VERSION
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
TH1F	*h_MET_Centrality_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_MET_Centrality_BJET; // BJET VERSION
TH1F	*h_MET_Centrality_HIGH_E; // HIGH_E VERSION
TH1F	*h_MET_Centrality_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_MET_Centrality; // HISTOGRAM VECTOR
vector<string>	hv_MET_Centrality_names; // HISTOGRAM NAME VECTOR

// -- missing energy of neutrino 1
double neutrino_0_pt;

virtual void Book_neutrino_0_pt(int bins, double min, double max);
TH1F	*h_neutrino_0_pt; // SEARCH VERSION
TH1F	*h_neutrino_0_pt_PRE; // PRE VERSION
TH1F	*h_neutrino_0_pt_CONTROL; // CONTROL VERSION
TH1F	*h_neutrino_0_pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_neutrino_0_pt_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_neutrino_0_pt_BJET; // BJET VERSION
TH1F	*h_neutrino_0_pt_HIGH_E; // HIGH_E VERSION
TH1F	*h_neutrino_0_pt_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_neutrino_0_pt; // HISTOGRAM VECTOR
vector<string>	hv_neutrino_0_pt_names; // HISTOGRAM NAME VECTOR

// -- missing energy of neutrino 2
double neutrino_1_pt;

virtual void Book_neutrino_1_pt(int bins, double min, double max);
TH1F	*h_neutrino_1_pt; // SEARCH VERSION
TH1F	*h_neutrino_1_pt_PRE; // PRE VERSION
TH1F	*h_neutrino_1_pt_CONTROL; // CONTROL VERSION
TH1F	*h_neutrino_1_pt_EXCEPT; // EXCEPT VERSION
TH1F	*h_neutrino_1_pt_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_neutrino_1_pt_BJET; // BJET VERSION
TH1F	*h_neutrino_1_pt_HIGH_E; // HIGH_E VERSION
TH1F	*h_neutrino_1_pt_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_neutrino_1_pt; // HISTOGRAM VECTOR
vector<string>	hv_neutrino_1_pt_names; // HISTOGRAM NAME VECTOR

// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
double MET_Type_Favour;

virtual void Book_MET_Type_Favour(int bins, double min, double max);
TH1F	*h_MET_Type_Favour; // SEARCH VERSION
TH1F	*h_MET_Type_Favour_PRE; // PRE VERSION
TH1F	*h_MET_Type_Favour_CONTROL; // CONTROL VERSION
TH1F	*h_MET_Type_Favour_EXCEPT; // EXCEPT VERSION
TH1F	*h_MET_Type_Favour_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_MET_Type_Favour_BJET; // BJET VERSION
TH1F	*h_MET_Type_Favour_HIGH_E; // HIGH_E VERSION
TH1F	*h_MET_Type_Favour_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_MET_Type_Favour; // HISTOGRAM VECTOR
vector<string>	hv_MET_Type_Favour_names; // HISTOGRAM NAME VECTOR

// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
double MET_Type_Favour_INSIDE;

virtual void Book_MET_Type_Favour_INSIDE(int bins, double min, double max);
TH1F	*h_MET_Type_Favour_INSIDE; // SEARCH VERSION
TH1F	*h_MET_Type_Favour_INSIDE_PRE; // PRE VERSION
TH1F	*h_MET_Type_Favour_INSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_MET_Type_Favour_INSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_MET_Type_Favour_INSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_MET_Type_Favour_INSIDE_BJET; // BJET VERSION
TH1F	*h_MET_Type_Favour_INSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_MET_Type_Favour_INSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_MET_Type_Favour_INSIDE; // HISTOGRAM VECTOR
vector<string>	hv_MET_Type_Favour_INSIDE_names; // HISTOGRAM NAME VECTOR

// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
double MET_Type_Favour_OUTSIDE;

virtual void Book_MET_Type_Favour_OUTSIDE(int bins, double min, double max);
TH1F	*h_MET_Type_Favour_OUTSIDE; // SEARCH VERSION
TH1F	*h_MET_Type_Favour_OUTSIDE_PRE; // PRE VERSION
TH1F	*h_MET_Type_Favour_OUTSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_MET_Type_Favour_OUTSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_MET_Type_Favour_OUTSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_MET_Type_Favour_OUTSIDE_BJET; // BJET VERSION
TH1F	*h_MET_Type_Favour_OUTSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_MET_Type_Favour_OUTSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_MET_Type_Favour_OUTSIDE; // HISTOGRAM VECTOR
vector<string>	hv_MET_Type_Favour_OUTSIDE_names; // HISTOGRAM NAME VECTOR

/// ------------------- RECONSTRUCTED ---------------- ///

// -- Separation of the two candidate leptons in phi space
double DeltaPhi_reco;

virtual void Book_DeltaPhi_reco(int bins, double min, double max);
TH1F	*h_DeltaPhi_reco; // SEARCH VERSION
TH1F	*h_DeltaPhi_reco_PRE; // PRE VERSION
TH1F	*h_DeltaPhi_reco_CONTROL; // CONTROL VERSION
TH1F	*h_DeltaPhi_reco_EXCEPT; // EXCEPT VERSION
TH1F	*h_DeltaPhi_reco_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_DeltaPhi_reco_BJET; // BJET VERSION
TH1F	*h_DeltaPhi_reco_HIGH_E; // HIGH_E VERSION
TH1F	*h_DeltaPhi_reco_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_DeltaPhi_reco; // HISTOGRAM VECTOR
vector<string>	hv_DeltaPhi_reco_names; // HISTOGRAM NAME VECTOR

// -- Separation of the two candidate leptons in phi space
double DeltaPhi_reco_INSIDE;

virtual void Book_DeltaPhi_reco_INSIDE(int bins, double min, double max);
TH1F	*h_DeltaPhi_reco_INSIDE; // SEARCH VERSION
TH1F	*h_DeltaPhi_reco_INSIDE_PRE; // PRE VERSION
TH1F	*h_DeltaPhi_reco_INSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_DeltaPhi_reco_INSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_DeltaPhi_reco_INSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_DeltaPhi_reco_INSIDE_BJET; // BJET VERSION
TH1F	*h_DeltaPhi_reco_INSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_DeltaPhi_reco_INSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_DeltaPhi_reco_INSIDE; // HISTOGRAM VECTOR
vector<string>	hv_DeltaPhi_reco_INSIDE_names; // HISTOGRAM NAME VECTOR

// -- Separation of the two candidate leptons in phi space
double DeltaPhi_reco_OUTSIDE;

virtual void Book_DeltaPhi_reco_OUTSIDE(int bins, double min, double max);
TH1F	*h_DeltaPhi_reco_OUTSIDE; // SEARCH VERSION
TH1F	*h_DeltaPhi_reco_OUTSIDE_PRE; // PRE VERSION
TH1F	*h_DeltaPhi_reco_OUTSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_DeltaPhi_reco_OUTSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_DeltaPhi_reco_OUTSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_DeltaPhi_reco_OUTSIDE_BJET; // BJET VERSION
TH1F	*h_DeltaPhi_reco_OUTSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_DeltaPhi_reco_OUTSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_DeltaPhi_reco_OUTSIDE; // HISTOGRAM VECTOR
vector<string>	hv_DeltaPhi_reco_OUTSIDE_names; // HISTOGRAM NAME VECTOR

// -- PT Balance reconstructed
double pT_balance_reco;

virtual void Book_pT_balance_reco(int bins, double min, double max);
TH1F	*h_pT_balance_reco; // SEARCH VERSION
TH1F	*h_pT_balance_reco_PRE; // PRE VERSION
TH1F	*h_pT_balance_reco_CONTROL; // CONTROL VERSION
TH1F	*h_pT_balance_reco_EXCEPT; // EXCEPT VERSION
TH1F	*h_pT_balance_reco_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_pT_balance_reco_BJET; // BJET VERSION
TH1F	*h_pT_balance_reco_HIGH_E; // HIGH_E VERSION
TH1F	*h_pT_balance_reco_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_pT_balance_reco; // HISTOGRAM VECTOR
vector<string>	hv_pT_balance_reco_names; // HISTOGRAM NAME VECTOR

// -- PT Balance reconstructed
double pT_balance_reco_INSIDE;

virtual void Book_pT_balance_reco_INSIDE(int bins, double min, double max);
TH1F	*h_pT_balance_reco_INSIDE; // SEARCH VERSION
TH1F	*h_pT_balance_reco_INSIDE_PRE; // PRE VERSION
TH1F	*h_pT_balance_reco_INSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_pT_balance_reco_INSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_pT_balance_reco_INSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_pT_balance_reco_INSIDE_BJET; // BJET VERSION
TH1F	*h_pT_balance_reco_INSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_pT_balance_reco_INSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_pT_balance_reco_INSIDE; // HISTOGRAM VECTOR
vector<string>	hv_pT_balance_reco_INSIDE_names; // HISTOGRAM NAME VECTOR

// -- PT Balance reconstructed
double pT_balance_reco_OUTSIDE;

virtual void Book_pT_balance_reco_OUTSIDE(int bins, double min, double max);
TH1F	*h_pT_balance_reco_OUTSIDE; // SEARCH VERSION
TH1F	*h_pT_balance_reco_OUTSIDE_PRE; // PRE VERSION
TH1F	*h_pT_balance_reco_OUTSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_pT_balance_reco_OUTSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_pT_balance_reco_OUTSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_pT_balance_reco_OUTSIDE_BJET; // BJET VERSION
TH1F	*h_pT_balance_reco_OUTSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_pT_balance_reco_OUTSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_pT_balance_reco_OUTSIDE; // HISTOGRAM VECTOR
vector<string>	hv_pT_balance_reco_OUTSIDE_names; // HISTOGRAM NAME VECTOR

// --  reconstructed Z mass with neutrino and z candidates
double lep_0_lep_1_mass_reco;

virtual void Book_lep_0_lep_1_mass_reco(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_mass_reco; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_mass_reco_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_mass_reco_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_mass_reco_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_mass_reco_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_lep_1_mass_reco_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_mass_reco_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_lep_1_mass_reco_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_lep_1_mass_reco; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_mass_reco_names; // HISTOGRAM NAME VECTOR

// --  reconstructed Z mass with neutrino and z candidates only for inside the two leptons
double lep_0_lep_1_mass_reco_INSIDE;

virtual void Book_lep_0_lep_1_mass_reco_INSIDE(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_lep_1_mass_reco_INSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_lep_1_mass_reco_INSIDE; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_mass_reco_INSIDE_names; // HISTOGRAM NAME VECTOR

// --  reconstructed Z mass with neutrino and z candidates only for outside the two leptons
double lep_0_lep_1_mass_reco_OUTSIDE;

virtual void Book_lep_0_lep_1_mass_reco_OUTSIDE(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_lep_1_mass_reco_OUTSIDE; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_mass_reco_OUTSIDE_names; // HISTOGRAM NAME VECTOR

// -- Distance in R space between two leptons (reconstructed with missing neutrino energy included)
double DeltaR_reco;

virtual void Book_DeltaR_reco(int bins, double min, double max);
TH1F	*h_DeltaR_reco; // SEARCH VERSION
TH1F	*h_DeltaR_reco_PRE; // PRE VERSION
TH1F	*h_DeltaR_reco_CONTROL; // CONTROL VERSION
TH1F	*h_DeltaR_reco_EXCEPT; // EXCEPT VERSION
TH1F	*h_DeltaR_reco_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_DeltaR_reco_BJET; // BJET VERSION
TH1F	*h_DeltaR_reco_HIGH_E; // HIGH_E VERSION
TH1F	*h_DeltaR_reco_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_DeltaR_reco; // HISTOGRAM VECTOR
vector<string>	hv_DeltaR_reco_names; // HISTOGRAM NAME VECTOR

// -- Combined transverse momentum of lepton 0 and lepton 1 (reconstructed with missing neutrino energy included)
double lep_0_lep_1_pt_reco;

virtual void Book_lep_0_lep_1_pt_reco(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_pt_reco; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_pt_reco_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_pt_reco_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_pt_reco_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_pt_reco_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_lep_1_pt_reco_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_pt_reco_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_lep_1_pt_reco_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_lep_1_pt_reco; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_pt_reco_names; // HISTOGRAM NAME VECTOR

// -- Centrality of pseudorapidity of Z boson between two leading jets (reconstructed with missing neutrino energy included)
double Centrality_reco;

virtual void Book_Centrality_reco(int bins, double min, double max);
TH1F	*h_Centrality_reco; // SEARCH VERSION
TH1F	*h_Centrality_reco_PRE; // PRE VERSION
TH1F	*h_Centrality_reco_CONTROL; // CONTROL VERSION
TH1F	*h_Centrality_reco_EXCEPT; // EXCEPT VERSION
TH1F	*h_Centrality_reco_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_Centrality_reco_BJET; // BJET VERSION
TH1F	*h_Centrality_reco_HIGH_E; // HIGH_E VERSION
TH1F	*h_Centrality_reco_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_Centrality_reco; // HISTOGRAM VECTOR
vector<string>	hv_Centrality_reco_names; // HISTOGRAM NAME VECTOR

// -- 2D plot of dilepton invariant mass and favour for the purposes of discovering leptons which favour one flavour over another
virtual void Book_Mass_Favour_Combination_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Mass_Favour_Combination_2D; // SEARCH VERSION
TH2F	*h_Mass_Favour_Combination_2D_PRE; // PRE VERSION
TH2F	*h_Mass_Favour_Combination_2D_CONTROL; // CONTROL VERSION
TH2F	*h_Mass_Favour_Combination_2D_EXCEPT; // EXCEPT VERSION
TH2F	*h_Mass_Favour_Combination_2D_BJET; // BJET VERSION
TH2F	*h_Mass_Favour_Combination_2D_HIGH_E; // HIGH_E VERSION
TH2F	*h_Mass_Favour_Combination_2D_TRUTH; // TRUTH VERSION
vector<TH2F*>	hv_Mass_Favour_Combination_2D; // HISTOGRAM VECTOR
vector<string>	hv_Mass_Favour_Combination_2D_names; // HISTOGRAM NAME VECTOR

// -- 2D plot of dilepton invariant mass and favour for missing energy inside the two leptons
virtual void Book_Mass_Favour_Combination_INSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Mass_Favour_Combination_INSIDE_2D; // SEARCH VERSION
TH2F	*h_Mass_Favour_Combination_INSIDE_2D_PRE; // PRE VERSION
TH2F	*h_Mass_Favour_Combination_INSIDE_2D_CONTROL; // CONTROL VERSION
TH2F	*h_Mass_Favour_Combination_INSIDE_2D_EXCEPT; // EXCEPT VERSION
TH2F	*h_Mass_Favour_Combination_INSIDE_2D_BJET; // BJET VERSION
TH2F	*h_Mass_Favour_Combination_INSIDE_2D_HIGH_E; // HIGH_E VERSION
TH2F	*h_Mass_Favour_Combination_INSIDE_2D_TRUTH; // TRUTH VERSION
vector<TH2F*>	hv_Mass_Favour_Combination_INSIDE_2D; // HISTOGRAM VECTOR
vector<string>	hv_Mass_Favour_Combination_INSIDE_2D_names; // HISTOGRAM NAME VECTOR

// -- 2D plot of dilepton invariant mass and favour for missing energy outside the two leptons
virtual void Book_Mass_Favour_Combination_OUTSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Mass_Favour_Combination_OUTSIDE_2D; // SEARCH VERSION
TH2F	*h_Mass_Favour_Combination_OUTSIDE_2D_PRE; // PRE VERSION
TH2F	*h_Mass_Favour_Combination_OUTSIDE_2D_CONTROL; // CONTROL VERSION
TH2F	*h_Mass_Favour_Combination_OUTSIDE_2D_EXCEPT; // EXCEPT VERSION
TH2F	*h_Mass_Favour_Combination_OUTSIDE_2D_BJET; // BJET VERSION
TH2F	*h_Mass_Favour_Combination_OUTSIDE_2D_HIGH_E; // HIGH_E VERSION
TH2F	*h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH; // TRUTH VERSION
vector<TH2F*>	hv_Mass_Favour_Combination_OUTSIDE_2D; // HISTOGRAM VECTOR
vector<string>	hv_Mass_Favour_Combination_OUTSIDE_2D_names; // HISTOGRAM NAME VECTOR

// -- 2D plot of Delta Phi between two candidate leptons and the dilepton invariant mass
virtual void Book_Mass_DeltaPhi_Combination_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Mass_DeltaPhi_Combination_2D; // SEARCH VERSION
TH2F	*h_Mass_DeltaPhi_Combination_2D_PRE; // PRE VERSION
TH2F	*h_Mass_DeltaPhi_Combination_2D_CONTROL; // CONTROL VERSION
TH2F	*h_Mass_DeltaPhi_Combination_2D_EXCEPT; // EXCEPT VERSION
TH2F	*h_Mass_DeltaPhi_Combination_2D_BJET; // BJET VERSION
TH2F	*h_Mass_DeltaPhi_Combination_2D_HIGH_E; // HIGH_E VERSION
TH2F	*h_Mass_DeltaPhi_Combination_2D_TRUTH; // TRUTH VERSION
vector<TH2F*>	hv_Mass_DeltaPhi_Combination_2D; // HISTOGRAM VECTOR
vector<string>	hv_Mass_DeltaPhi_Combination_2D_names; // HISTOGRAM NAME VECTOR

// -- 2D plot of Delta Phi between two candidate leptons and the dilepton invariant mass
virtual void Book_Mass_DeltaPhi_Combination_INSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Mass_DeltaPhi_Combination_INSIDE_2D; // SEARCH VERSION
TH2F	*h_Mass_DeltaPhi_Combination_INSIDE_2D_PRE; // PRE VERSION
TH2F	*h_Mass_DeltaPhi_Combination_INSIDE_2D_CONTROL; // CONTROL VERSION
TH2F	*h_Mass_DeltaPhi_Combination_INSIDE_2D_EXCEPT; // EXCEPT VERSION
TH2F	*h_Mass_DeltaPhi_Combination_INSIDE_2D_BJET; // BJET VERSION
TH2F	*h_Mass_DeltaPhi_Combination_INSIDE_2D_HIGH_E; // HIGH_E VERSION
TH2F	*h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH; // TRUTH VERSION
vector<TH2F*>	hv_Mass_DeltaPhi_Combination_INSIDE_2D; // HISTOGRAM VECTOR
vector<string>	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names; // HISTOGRAM NAME VECTOR

// -- 2D plot of Delta Phi between two candidate leptons and the dilepton invariant mass
virtual void Book_Mass_DeltaPhi_Combination_OUTSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax);
TH2F	*h_Mass_DeltaPhi_Combination_OUTSIDE_2D; // SEARCH VERSION
TH2F	*h_Mass_DeltaPhi_Combination_OUTSIDE_2D_PRE; // PRE VERSION
TH2F	*h_Mass_DeltaPhi_Combination_OUTSIDE_2D_CONTROL; // CONTROL VERSION
TH2F	*h_Mass_DeltaPhi_Combination_OUTSIDE_2D_EXCEPT; // EXCEPT VERSION
TH2F	*h_Mass_DeltaPhi_Combination_OUTSIDE_2D_BJET; // BJET VERSION
TH2F	*h_Mass_DeltaPhi_Combination_OUTSIDE_2D_HIGH_E; // HIGH_E VERSION
TH2F	*h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH; // TRUTH VERSION
vector<TH2F*>	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D; // HISTOGRAM VECTOR
vector<string>	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names; // HISTOGRAM NAME VECTOR

/// ------------------- TRUTHRECONSTRUCTIONCHECKS ---------------- ///

// -- the invariant mass of the TRUTH visible tau 0
double lep_1_vis_mass;

virtual void Book_lep_1_vis_mass(int bins, double min, double max);
TH1F	*h_lep_1_vis_mass; // SEARCH VERSION
TH1F	*h_lep_1_vis_mass_PRE; // PRE VERSION
TH1F	*h_lep_1_vis_mass_CONTROL; // CONTROL VERSION
TH1F	*h_lep_1_vis_mass_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_1_vis_mass_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_1_vis_mass_BJET; // BJET VERSION
TH1F	*h_lep_1_vis_mass_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_1_vis_mass_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_1_vis_mass; // HISTOGRAM VECTOR
vector<string>	hv_lep_1_vis_mass_names; // HISTOGRAM NAME VECTOR

// -- the invariant mass of the TRUTH visible tau 1
double lep_0_vis_mass;

virtual void Book_lep_0_vis_mass(int bins, double min, double max);
TH1F	*h_lep_0_vis_mass; // SEARCH VERSION
TH1F	*h_lep_0_vis_mass_PRE; // PRE VERSION
TH1F	*h_lep_0_vis_mass_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_vis_mass_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_vis_mass_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_vis_mass_BJET; // BJET VERSION
TH1F	*h_lep_0_vis_mass_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_vis_mass_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_vis_mass; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_vis_mass_names; // HISTOGRAM NAME VECTOR

/// ------------------- lep_1_invis_mass: ---------------- ///

/// ------------------- lep_0_invis_mass: ---------------- ///

// -- the invariant mass of the TRUTH visible and invisible tau 0
double lep_0_invis_vis_mass;

virtual void Book_lep_0_invis_vis_mass(int bins, double min, double max);
TH1F	*h_lep_0_invis_vis_mass; // SEARCH VERSION
TH1F	*h_lep_0_invis_vis_mass_PRE; // PRE VERSION
TH1F	*h_lep_0_invis_vis_mass_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_invis_vis_mass_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_invis_vis_mass_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_invis_vis_mass_BJET; // BJET VERSION
TH1F	*h_lep_0_invis_vis_mass_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_invis_vis_mass_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_invis_vis_mass; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_invis_vis_mass_names; // HISTOGRAM NAME VECTOR

// -- the invariant mass of the TRUTH visible and invisible tau 1
double lep_1_invis_vis_mass;

virtual void Book_lep_1_invis_vis_mass(int bins, double min, double max);
TH1F	*h_lep_1_invis_vis_mass; // SEARCH VERSION
TH1F	*h_lep_1_invis_vis_mass_PRE; // PRE VERSION
TH1F	*h_lep_1_invis_vis_mass_CONTROL; // CONTROL VERSION
TH1F	*h_lep_1_invis_vis_mass_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_1_invis_vis_mass_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_1_invis_vis_mass_BJET; // BJET VERSION
TH1F	*h_lep_1_invis_vis_mass_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_1_invis_vis_mass_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_1_invis_vis_mass; // HISTOGRAM VECTOR
vector<string>	hv_lep_1_invis_vis_mass_names; // HISTOGRAM NAME VECTOR

// --  invariant mass of the TRUTH di-tau
double lep_0_lep_1_invis_vis_mass;

virtual void Book_lep_0_lep_1_invis_vis_mass(int bins, double min, double max);
TH1F	*h_lep_0_lep_1_invis_vis_mass; // SEARCH VERSION
TH1F	*h_lep_0_lep_1_invis_vis_mass_PRE; // PRE VERSION
TH1F	*h_lep_0_lep_1_invis_vis_mass_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_lep_1_invis_vis_mass_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_lep_1_invis_vis_mass_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_lep_1_invis_vis_mass_BJET; // BJET VERSION
TH1F	*h_lep_0_lep_1_invis_vis_mass_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_lep_1_invis_vis_mass_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_lep_1_invis_vis_mass; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_lep_1_invis_vis_mass_names; // HISTOGRAM NAME VECTOR

// -- energy of the TRUTH missing energy
double met_truth_energy;

virtual void Book_met_truth_energy(int bins, double min, double max);
TH1F	*h_met_truth_energy; // SEARCH VERSION
TH1F	*h_met_truth_energy_PRE; // PRE VERSION
TH1F	*h_met_truth_energy_CONTROL; // CONTROL VERSION
TH1F	*h_met_truth_energy_EXCEPT; // EXCEPT VERSION
TH1F	*h_met_truth_energy_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_met_truth_energy_BJET; // BJET VERSION
TH1F	*h_met_truth_energy_HIGH_E; // HIGH_E VERSION
TH1F	*h_met_truth_energy_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_met_truth_energy; // HISTOGRAM VECTOR
vector<string>	hv_met_truth_energy_names; // HISTOGRAM NAME VECTOR

// -- energy of TRUTH invis tau 0
double lep_0_invis_energy;

virtual void Book_lep_0_invis_energy(int bins, double min, double max);
TH1F	*h_lep_0_invis_energy; // SEARCH VERSION
TH1F	*h_lep_0_invis_energy_PRE; // PRE VERSION
TH1F	*h_lep_0_invis_energy_CONTROL; // CONTROL VERSION
TH1F	*h_lep_0_invis_energy_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_0_invis_energy_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_0_invis_energy_BJET; // BJET VERSION
TH1F	*h_lep_0_invis_energy_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_0_invis_energy_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_0_invis_energy; // HISTOGRAM VECTOR
vector<string>	hv_lep_0_invis_energy_names; // HISTOGRAM NAME VECTOR

// -- energy of TRUTH invis tau 1
double lep_1_invis_energy;

virtual void Book_lep_1_invis_energy(int bins, double min, double max);
TH1F	*h_lep_1_invis_energy; // SEARCH VERSION
TH1F	*h_lep_1_invis_energy_PRE; // PRE VERSION
TH1F	*h_lep_1_invis_energy_CONTROL; // CONTROL VERSION
TH1F	*h_lep_1_invis_energy_EXCEPT; // EXCEPT VERSION
TH1F	*h_lep_1_invis_energy_EXCEPT_FINE; // EXCEPT_FINE VERSION
TH1F	*h_lep_1_invis_energy_BJET; // BJET VERSION
TH1F	*h_lep_1_invis_energy_HIGH_E; // HIGH_E VERSION
TH1F	*h_lep_1_invis_energy_TRUTH; // TRUTH VERSION
vector<TH1F*>	hv_lep_1_invis_energy; // HISTOGRAM VECTOR
vector<string>	hv_lep_1_invis_energy_names; // HISTOGRAM NAME VECTOR

#endif