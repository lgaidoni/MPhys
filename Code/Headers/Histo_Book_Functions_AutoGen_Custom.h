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
	h_DeltaR_EXCEPT_FINE = new TH1F("h_DeltaR_EXCEPT_FINE", "", 1000, min, max);
	h_DeltaR_BJET = new TH1F("h_DeltaR_BJET", "", bins, min, max);
	h_DeltaR_HIGH_E = new TH1F("h_DeltaR_HIGH_E", "", bins, min, max);
	h_DeltaR_TRUTH = new TH1F("h_DeltaR_TRUTH", "", bins, min, max);

	hv_DeltaR.push_back(h_DeltaR);
	hv_DeltaR.push_back(h_DeltaR_CONTROL);
	hv_DeltaR.push_back(h_DeltaR_EXCEPT);
	hv_DeltaR.push_back(h_DeltaR_EXCEPT_FINE);
	hv_DeltaR.push_back(h_DeltaR_PRE);
	hv_DeltaR.push_back(h_DeltaR_BJET);
	hv_DeltaR.push_back(h_DeltaR_HIGH_E);
	hv_DeltaR.push_back(h_DeltaR_TRUTH);

	hv_DeltaR_names.push_back("h_DeltaR");
	hv_DeltaR_names.push_back("h_DeltaR_CONTROL");
	hv_DeltaR_names.push_back("h_DeltaR_EXCEPT");
	hv_DeltaR_names.push_back("h_DeltaR_EXCEPT_FINE");
	hv_DeltaR_names.push_back("h_DeltaR_PRE");
	hv_DeltaR_names.push_back("h_DeltaR_BJET");
	hv_DeltaR_names.push_back("h_DeltaR_HIGH_E");
	hv_DeltaR_names.push_back("h_DeltaR_TRUTH");

}


// -- Separation of the two candidate leptons in phi space
void MC_Analysis::Book_DeltaPhi(int bins, double min, double max) {
	h_DeltaPhi = new TH1F("h_DeltaPhi", "", bins, min, max);
	h_DeltaPhi_PRE = new TH1F("h_DeltaPhi_PRE", "", bins, min, max);
	h_DeltaPhi_CONTROL = new TH1F("h_DeltaPhi_CONTROL", "", bins, min, max);
	h_DeltaPhi_EXCEPT = new TH1F("h_DeltaPhi_EXCEPT", "", bins, min, max);
	h_DeltaPhi_EXCEPT_FINE = new TH1F("h_DeltaPhi_EXCEPT_FINE", "", 1000, min, max);
	h_DeltaPhi_BJET = new TH1F("h_DeltaPhi_BJET", "", bins, min, max);
	h_DeltaPhi_HIGH_E = new TH1F("h_DeltaPhi_HIGH_E", "", bins, min, max);
	h_DeltaPhi_TRUTH = new TH1F("h_DeltaPhi_TRUTH", "", bins, min, max);

	hv_DeltaPhi.push_back(h_DeltaPhi);
	hv_DeltaPhi.push_back(h_DeltaPhi_CONTROL);
	hv_DeltaPhi.push_back(h_DeltaPhi_EXCEPT);
	hv_DeltaPhi.push_back(h_DeltaPhi_EXCEPT_FINE);
	hv_DeltaPhi.push_back(h_DeltaPhi_PRE);
	hv_DeltaPhi.push_back(h_DeltaPhi_BJET);
	hv_DeltaPhi.push_back(h_DeltaPhi_HIGH_E);
	hv_DeltaPhi.push_back(h_DeltaPhi_TRUTH);

	hv_DeltaPhi_names.push_back("h_DeltaPhi");
	hv_DeltaPhi_names.push_back("h_DeltaPhi_CONTROL");
	hv_DeltaPhi_names.push_back("h_DeltaPhi_EXCEPT");
	hv_DeltaPhi_names.push_back("h_DeltaPhi_EXCEPT_FINE");
	hv_DeltaPhi_names.push_back("h_DeltaPhi_PRE");
	hv_DeltaPhi_names.push_back("h_DeltaPhi_BJET");
	hv_DeltaPhi_names.push_back("h_DeltaPhi_HIGH_E");
	hv_DeltaPhi_names.push_back("h_DeltaPhi_TRUTH");

}


// -- PT Balance - Normalised transverse momentum balance between the two leptons and the two highest transverse momentum jets
void MC_Analysis::Book_pT_balance(int bins, double min, double max) {
	h_pT_balance = new TH1F("h_pT_balance", "", bins, min, max);
	h_pT_balance_PRE = new TH1F("h_pT_balance_PRE", "", bins, min, max);
	h_pT_balance_CONTROL = new TH1F("h_pT_balance_CONTROL", "", bins, min, max);
	h_pT_balance_EXCEPT = new TH1F("h_pT_balance_EXCEPT", "", bins, min, max);
	h_pT_balance_EXCEPT_FINE = new TH1F("h_pT_balance_EXCEPT_FINE", "", 1000, min, max);
	h_pT_balance_BJET = new TH1F("h_pT_balance_BJET", "", bins, min, max);
	h_pT_balance_HIGH_E = new TH1F("h_pT_balance_HIGH_E", "", bins, min, max);
	h_pT_balance_TRUTH = new TH1F("h_pT_balance_TRUTH", "", bins, min, max);

	hv_pT_balance.push_back(h_pT_balance);
	hv_pT_balance.push_back(h_pT_balance_CONTROL);
	hv_pT_balance.push_back(h_pT_balance_EXCEPT);
	hv_pT_balance.push_back(h_pT_balance_EXCEPT_FINE);
	hv_pT_balance.push_back(h_pT_balance_PRE);
	hv_pT_balance.push_back(h_pT_balance_BJET);
	hv_pT_balance.push_back(h_pT_balance_HIGH_E);
	hv_pT_balance.push_back(h_pT_balance_TRUTH);

	hv_pT_balance_names.push_back("h_pT_balance");
	hv_pT_balance_names.push_back("h_pT_balance_CONTROL");
	hv_pT_balance_names.push_back("h_pT_balance_EXCEPT");
	hv_pT_balance_names.push_back("h_pT_balance_EXCEPT_FINE");
	hv_pT_balance_names.push_back("h_pT_balance_PRE");
	hv_pT_balance_names.push_back("h_pT_balance_BJET");
	hv_pT_balance_names.push_back("h_pT_balance_HIGH_E");
	hv_pT_balance_names.push_back("h_pT_balance_TRUTH");

}


// -- PT Balance Three - Normalised transverse momentum balance between the two leptons and the three highest transverse momentum jets
void MC_Analysis::Book_pT_balance_3(int bins, double min, double max) {
	h_pT_balance_3 = new TH1F("h_pT_balance_3", "", bins, min, max);
	h_pT_balance_3_PRE = new TH1F("h_pT_balance_3_PRE", "", bins, min, max);
	h_pT_balance_3_CONTROL = new TH1F("h_pT_balance_3_CONTROL", "", bins, min, max);
	h_pT_balance_3_EXCEPT = new TH1F("h_pT_balance_3_EXCEPT", "", bins, min, max);
	h_pT_balance_3_EXCEPT_FINE = new TH1F("h_pT_balance_3_EXCEPT_FINE", "", 1000, min, max);
	h_pT_balance_3_BJET = new TH1F("h_pT_balance_3_BJET", "", bins, min, max);
	h_pT_balance_3_HIGH_E = new TH1F("h_pT_balance_3_HIGH_E", "", bins, min, max);
	h_pT_balance_3_TRUTH = new TH1F("h_pT_balance_3_TRUTH", "", bins, min, max);

	hv_pT_balance_3.push_back(h_pT_balance_3);
	hv_pT_balance_3.push_back(h_pT_balance_3_CONTROL);
	hv_pT_balance_3.push_back(h_pT_balance_3_EXCEPT);
	hv_pT_balance_3.push_back(h_pT_balance_3_EXCEPT_FINE);
	hv_pT_balance_3.push_back(h_pT_balance_3_PRE);
	hv_pT_balance_3.push_back(h_pT_balance_3_BJET);
	hv_pT_balance_3.push_back(h_pT_balance_3_HIGH_E);
	hv_pT_balance_3.push_back(h_pT_balance_3_TRUTH);

	hv_pT_balance_3_names.push_back("h_pT_balance_3");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_CONTROL");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_EXCEPT");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_EXCEPT_FINE");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_PRE");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_BJET");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_HIGH_E");
	hv_pT_balance_3_names.push_back("h_pT_balance_3_TRUTH");

}


// -- Centrality of pseudorapidity of Z boson between two leading jets
void MC_Analysis::Book_Centrality(int bins, double min, double max) {
	h_Centrality = new TH1F("h_Centrality", "", bins, min, max);
	h_Centrality_PRE = new TH1F("h_Centrality_PRE", "", bins, min, max);
	h_Centrality_CONTROL = new TH1F("h_Centrality_CONTROL", "", bins, min, max);
	h_Centrality_EXCEPT = new TH1F("h_Centrality_EXCEPT", "", bins, min, max);
	h_Centrality_EXCEPT_FINE = new TH1F("h_Centrality_EXCEPT_FINE", "", 1000, min, max);
	h_Centrality_BJET = new TH1F("h_Centrality_BJET", "", bins, min, max);
	h_Centrality_HIGH_E = new TH1F("h_Centrality_HIGH_E", "", bins, min, max);
	h_Centrality_TRUTH = new TH1F("h_Centrality_TRUTH", "", bins, min, max);

	hv_Centrality.push_back(h_Centrality);
	hv_Centrality.push_back(h_Centrality_CONTROL);
	hv_Centrality.push_back(h_Centrality_EXCEPT);
	hv_Centrality.push_back(h_Centrality_EXCEPT_FINE);
	hv_Centrality.push_back(h_Centrality_PRE);
	hv_Centrality.push_back(h_Centrality_BJET);
	hv_Centrality.push_back(h_Centrality_HIGH_E);
	hv_Centrality.push_back(h_Centrality_TRUTH);

	hv_Centrality_names.push_back("h_Centrality");
	hv_Centrality_names.push_back("h_Centrality_CONTROL");
	hv_Centrality_names.push_back("h_Centrality_EXCEPT");
	hv_Centrality_names.push_back("h_Centrality_EXCEPT_FINE");
	hv_Centrality_names.push_back("h_Centrality_PRE");
	hv_Centrality_names.push_back("h_Centrality_BJET");
	hv_Centrality_names.push_back("h_Centrality_HIGH_E");
	hv_Centrality_names.push_back("h_Centrality_TRUTH");

}


// -- Centrality of pseudorapidity of Z boson between two leading jets
void MC_Analysis::Book_Centrality_INSIDE(int bins, double min, double max) {
	h_Centrality_INSIDE = new TH1F("h_Centrality_INSIDE", "", bins, min, max);
	h_Centrality_INSIDE_PRE = new TH1F("h_Centrality_INSIDE_PRE", "", bins, min, max);
	h_Centrality_INSIDE_CONTROL = new TH1F("h_Centrality_INSIDE_CONTROL", "", bins, min, max);
	h_Centrality_INSIDE_EXCEPT = new TH1F("h_Centrality_INSIDE_EXCEPT", "", bins, min, max);
	h_Centrality_INSIDE_EXCEPT_FINE = new TH1F("h_Centrality_INSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_Centrality_INSIDE_BJET = new TH1F("h_Centrality_INSIDE_BJET", "", bins, min, max);
	h_Centrality_INSIDE_HIGH_E = new TH1F("h_Centrality_INSIDE_HIGH_E", "", bins, min, max);
	h_Centrality_INSIDE_TRUTH = new TH1F("h_Centrality_INSIDE_TRUTH", "", bins, min, max);

	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE);
	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE_CONTROL);
	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE_EXCEPT);
	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE_EXCEPT_FINE);
	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE_PRE);
	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE_BJET);
	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE_HIGH_E);
	hv_Centrality_INSIDE.push_back(h_Centrality_INSIDE_TRUTH);

	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE");
	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE_CONTROL");
	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE_EXCEPT");
	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE_EXCEPT_FINE");
	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE_PRE");
	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE_BJET");
	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE_HIGH_E");
	hv_Centrality_INSIDE_names.push_back("h_Centrality_INSIDE_TRUTH");

}


// -- Centrality of pseudorapidity of Z boson between two leading jets
void MC_Analysis::Book_Centrality_OUTSIDE(int bins, double min, double max) {
	h_Centrality_OUTSIDE = new TH1F("h_Centrality_OUTSIDE", "", bins, min, max);
	h_Centrality_OUTSIDE_PRE = new TH1F("h_Centrality_OUTSIDE_PRE", "", bins, min, max);
	h_Centrality_OUTSIDE_CONTROL = new TH1F("h_Centrality_OUTSIDE_CONTROL", "", bins, min, max);
	h_Centrality_OUTSIDE_EXCEPT = new TH1F("h_Centrality_OUTSIDE_EXCEPT", "", bins, min, max);
	h_Centrality_OUTSIDE_EXCEPT_FINE = new TH1F("h_Centrality_OUTSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_Centrality_OUTSIDE_BJET = new TH1F("h_Centrality_OUTSIDE_BJET", "", bins, min, max);
	h_Centrality_OUTSIDE_HIGH_E = new TH1F("h_Centrality_OUTSIDE_HIGH_E", "", bins, min, max);
	h_Centrality_OUTSIDE_TRUTH = new TH1F("h_Centrality_OUTSIDE_TRUTH", "", bins, min, max);

	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE);
	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE_CONTROL);
	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE_EXCEPT);
	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE_EXCEPT_FINE);
	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE_PRE);
	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE_BJET);
	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE_HIGH_E);
	hv_Centrality_OUTSIDE.push_back(h_Centrality_OUTSIDE_TRUTH);

	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE");
	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE_CONTROL");
	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE_EXCEPT");
	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE_EXCEPT_FINE");
	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE_PRE");
	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE_BJET");
	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE_HIGH_E");
	hv_Centrality_OUTSIDE_names.push_back("h_Centrality_OUTSIDE_TRUTH");

}


// -- Rapidity of a dijet pair
void MC_Analysis::Book_RapidityDijet(int bins, double min, double max) {
	h_RapidityDijet = new TH1F("h_RapidityDijet", "", bins, min, max);
	h_RapidityDijet_PRE = new TH1F("h_RapidityDijet_PRE", "", bins, min, max);
	h_RapidityDijet_CONTROL = new TH1F("h_RapidityDijet_CONTROL", "", bins, min, max);
	h_RapidityDijet_EXCEPT = new TH1F("h_RapidityDijet_EXCEPT", "", bins, min, max);
	h_RapidityDijet_EXCEPT_FINE = new TH1F("h_RapidityDijet_EXCEPT_FINE", "", 1000, min, max);
	h_RapidityDijet_BJET = new TH1F("h_RapidityDijet_BJET", "", bins, min, max);
	h_RapidityDijet_HIGH_E = new TH1F("h_RapidityDijet_HIGH_E", "", bins, min, max);
	h_RapidityDijet_TRUTH = new TH1F("h_RapidityDijet_TRUTH", "", bins, min, max);

	hv_RapidityDijet.push_back(h_RapidityDijet);
	hv_RapidityDijet.push_back(h_RapidityDijet_CONTROL);
	hv_RapidityDijet.push_back(h_RapidityDijet_EXCEPT);
	hv_RapidityDijet.push_back(h_RapidityDijet_EXCEPT_FINE);
	hv_RapidityDijet.push_back(h_RapidityDijet_PRE);
	hv_RapidityDijet.push_back(h_RapidityDijet_BJET);
	hv_RapidityDijet.push_back(h_RapidityDijet_HIGH_E);
	hv_RapidityDijet.push_back(h_RapidityDijet_TRUTH);

	hv_RapidityDijet_names.push_back("h_RapidityDijet");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_CONTROL");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_EXCEPT");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_EXCEPT_FINE");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_PRE");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_BJET");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_HIGH_E");
	hv_RapidityDijet_names.push_back("h_RapidityDijet_TRUTH");

}


// -- Rapidity of a dilepton pair
void MC_Analysis::Book_RapidityDilepton(int bins, double min, double max) {
	h_RapidityDilepton = new TH1F("h_RapidityDilepton", "", bins, min, max);
	h_RapidityDilepton_PRE = new TH1F("h_RapidityDilepton_PRE", "", bins, min, max);
	h_RapidityDilepton_CONTROL = new TH1F("h_RapidityDilepton_CONTROL", "", bins, min, max);
	h_RapidityDilepton_EXCEPT = new TH1F("h_RapidityDilepton_EXCEPT", "", bins, min, max);
	h_RapidityDilepton_EXCEPT_FINE = new TH1F("h_RapidityDilepton_EXCEPT_FINE", "", 1000, min, max);
	h_RapidityDilepton_BJET = new TH1F("h_RapidityDilepton_BJET", "", bins, min, max);
	h_RapidityDilepton_HIGH_E = new TH1F("h_RapidityDilepton_HIGH_E", "", bins, min, max);
	h_RapidityDilepton_TRUTH = new TH1F("h_RapidityDilepton_TRUTH", "", bins, min, max);

	hv_RapidityDilepton.push_back(h_RapidityDilepton);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_CONTROL);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_EXCEPT);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_EXCEPT_FINE);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_PRE);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_BJET);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_HIGH_E);
	hv_RapidityDilepton.push_back(h_RapidityDilepton_TRUTH);

	hv_RapidityDilepton_names.push_back("h_RapidityDilepton");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_CONTROL");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_EXCEPT");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_EXCEPT_FINE");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_PRE");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_BJET");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_HIGH_E");
	hv_RapidityDilepton_names.push_back("h_RapidityDilepton_TRUTH");

}


/// ------------------- LEPTONS ---------------- ///

// -- Invariant mass of lepton 0 and lepton 1
void MC_Analysis::Book_lep_0_lep_1_mass(int bins, double min, double max) {
	h_lep_0_lep_1_mass = new TH1F("h_lep_0_lep_1_mass", "", bins, min, max);
	h_lep_0_lep_1_mass_PRE = new TH1F("h_lep_0_lep_1_mass_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_CONTROL = new TH1F("h_lep_0_lep_1_mass_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_EXCEPT = new TH1F("h_lep_0_lep_1_mass_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_mass_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_mass_BJET = new TH1F("h_lep_0_lep_1_mass_BJET", "", bins, min, max);
	h_lep_0_lep_1_mass_HIGH_E = new TH1F("h_lep_0_lep_1_mass_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_mass_TRUTH = new TH1F("h_lep_0_lep_1_mass_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_CONTROL);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_EXCEPT);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_EXCEPT_FINE);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_PRE);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_BJET);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_HIGH_E);
	hv_lep_0_lep_1_mass.push_back(h_lep_0_lep_1_mass_TRUTH);

	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_CONTROL");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_EXCEPT");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_EXCEPT_FINE");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_PRE");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_BJET");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_HIGH_E");
	hv_lep_0_lep_1_mass_names.push_back("h_lep_0_lep_1_mass_TRUTH");

}


// -- Combined transverse momentum of lepton 0 and lepton 1
void MC_Analysis::Book_lep_0_lep_1_pt(int bins, double min, double max) {
	h_lep_0_lep_1_pt = new TH1F("h_lep_0_lep_1_pt", "", bins, min, max);
	h_lep_0_lep_1_pt_PRE = new TH1F("h_lep_0_lep_1_pt_PRE", "", bins, min, max);
	h_lep_0_lep_1_pt_CONTROL = new TH1F("h_lep_0_lep_1_pt_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_pt_EXCEPT = new TH1F("h_lep_0_lep_1_pt_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_pt_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_pt_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_pt_BJET = new TH1F("h_lep_0_lep_1_pt_BJET", "", bins, min, max);
	h_lep_0_lep_1_pt_HIGH_E = new TH1F("h_lep_0_lep_1_pt_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_pt_TRUTH = new TH1F("h_lep_0_lep_1_pt_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_CONTROL);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_EXCEPT);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_EXCEPT_FINE);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_PRE);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_BJET);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_HIGH_E);
	hv_lep_0_lep_1_pt.push_back(h_lep_0_lep_1_pt_TRUTH);

	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_CONTROL");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_EXCEPT");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_EXCEPT_FINE");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_PRE");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_BJET");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_HIGH_E");
	hv_lep_0_lep_1_pt_names.push_back("h_lep_0_lep_1_pt_TRUTH");

}


// -- Isolation cone for the lepton 0, size 40
void MC_Analysis::Book_lep_0_iso_ptvarcone40(int bins, double min, double max) {
	h_lep_0_iso_ptvarcone40 = new TH1F("h_lep_0_iso_ptvarcone40", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_PRE = new TH1F("h_lep_0_iso_ptvarcone40_PRE", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_CONTROL = new TH1F("h_lep_0_iso_ptvarcone40_CONTROL", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_EXCEPT = new TH1F("h_lep_0_iso_ptvarcone40_EXCEPT", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_EXCEPT_FINE = new TH1F("h_lep_0_iso_ptvarcone40_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_iso_ptvarcone40_BJET = new TH1F("h_lep_0_iso_ptvarcone40_BJET", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_HIGH_E = new TH1F("h_lep_0_iso_ptvarcone40_HIGH_E", "", bins, min, max);
	h_lep_0_iso_ptvarcone40_TRUTH = new TH1F("h_lep_0_iso_ptvarcone40_TRUTH", "", bins, min, max);

	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_CONTROL);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_EXCEPT);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_EXCEPT_FINE);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_PRE);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_BJET);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_HIGH_E);
	hv_lep_0_iso_ptvarcone40.push_back(h_lep_0_iso_ptvarcone40_TRUTH);

	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_CONTROL");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_EXCEPT");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_EXCEPT_FINE");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_PRE");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_BJET");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_HIGH_E");
	hv_lep_0_iso_ptvarcone40_names.push_back("h_lep_0_iso_ptvarcone40_TRUTH");

}


// -- Isolation cone for the lepton 1, size 40
void MC_Analysis::Book_lep_1_iso_ptvarcone40(int bins, double min, double max) {
	h_lep_1_iso_ptvarcone40 = new TH1F("h_lep_1_iso_ptvarcone40", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_PRE = new TH1F("h_lep_1_iso_ptvarcone40_PRE", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_CONTROL = new TH1F("h_lep_1_iso_ptvarcone40_CONTROL", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_EXCEPT = new TH1F("h_lep_1_iso_ptvarcone40_EXCEPT", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_EXCEPT_FINE = new TH1F("h_lep_1_iso_ptvarcone40_EXCEPT_FINE", "", 1000, min, max);
	h_lep_1_iso_ptvarcone40_BJET = new TH1F("h_lep_1_iso_ptvarcone40_BJET", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_HIGH_E = new TH1F("h_lep_1_iso_ptvarcone40_HIGH_E", "", bins, min, max);
	h_lep_1_iso_ptvarcone40_TRUTH = new TH1F("h_lep_1_iso_ptvarcone40_TRUTH", "", bins, min, max);

	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_CONTROL);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_EXCEPT);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_EXCEPT_FINE);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_PRE);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_BJET);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_HIGH_E);
	hv_lep_1_iso_ptvarcone40.push_back(h_lep_1_iso_ptvarcone40_TRUTH);

	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_CONTROL");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_EXCEPT");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_EXCEPT_FINE");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_PRE");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_BJET");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_HIGH_E");
	hv_lep_1_iso_ptvarcone40_names.push_back("h_lep_1_iso_ptvarcone40_TRUTH");

}


/// ------------------- JETS ---------------- ///

// -- Invariant mass of two leading jets (leading and subleading)
void MC_Analysis::Book_jet_0_jet_1_mass(int bins, double min, double max) {
	h_jet_0_jet_1_mass = new TH1F("h_jet_0_jet_1_mass", "", bins, min, max);
	h_jet_0_jet_1_mass_PRE = new TH1F("h_jet_0_jet_1_mass_PRE", "", bins, min, max);
	h_jet_0_jet_1_mass_CONTROL = new TH1F("h_jet_0_jet_1_mass_CONTROL", "", bins, min, max);
	h_jet_0_jet_1_mass_EXCEPT = new TH1F("h_jet_0_jet_1_mass_EXCEPT", "", bins, min, max);
	h_jet_0_jet_1_mass_EXCEPT_FINE = new TH1F("h_jet_0_jet_1_mass_EXCEPT_FINE", "", 1000, min, max);
	h_jet_0_jet_1_mass_BJET = new TH1F("h_jet_0_jet_1_mass_BJET", "", bins, min, max);
	h_jet_0_jet_1_mass_HIGH_E = new TH1F("h_jet_0_jet_1_mass_HIGH_E", "", bins, min, max);
	h_jet_0_jet_1_mass_TRUTH = new TH1F("h_jet_0_jet_1_mass_TRUTH", "", bins, min, max);

	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_CONTROL);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_EXCEPT);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_EXCEPT_FINE);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_PRE);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_BJET);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_HIGH_E);
	hv_jet_0_jet_1_mass.push_back(h_jet_0_jet_1_mass_TRUTH);

	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_CONTROL");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_EXCEPT");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_EXCEPT_FINE");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_PRE");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_BJET");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_HIGH_E");
	hv_jet_0_jet_1_mass_names.push_back("h_jet_0_jet_1_mass_TRUTH");

}


// -- Invariant mass of two leading jets (leading and subleading)
void MC_Analysis::Book_jet_0_jet_1_mass_INSIDE(int bins, double min, double max) {
	h_jet_0_jet_1_mass_INSIDE = new TH1F("h_jet_0_jet_1_mass_INSIDE", "", bins, min, max);
	h_jet_0_jet_1_mass_INSIDE_PRE = new TH1F("h_jet_0_jet_1_mass_INSIDE_PRE", "", bins, min, max);
	h_jet_0_jet_1_mass_INSIDE_CONTROL = new TH1F("h_jet_0_jet_1_mass_INSIDE_CONTROL", "", bins, min, max);
	h_jet_0_jet_1_mass_INSIDE_EXCEPT = new TH1F("h_jet_0_jet_1_mass_INSIDE_EXCEPT", "", bins, min, max);
	h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE = new TH1F("h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_jet_0_jet_1_mass_INSIDE_BJET = new TH1F("h_jet_0_jet_1_mass_INSIDE_BJET", "", bins, min, max);
	h_jet_0_jet_1_mass_INSIDE_HIGH_E = new TH1F("h_jet_0_jet_1_mass_INSIDE_HIGH_E", "", bins, min, max);
	h_jet_0_jet_1_mass_INSIDE_TRUTH = new TH1F("h_jet_0_jet_1_mass_INSIDE_TRUTH", "", bins, min, max);

	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE);
	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE_CONTROL);
	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE_EXCEPT);
	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE);
	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE_PRE);
	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE_BJET);
	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE_HIGH_E);
	hv_jet_0_jet_1_mass_INSIDE.push_back(h_jet_0_jet_1_mass_INSIDE_TRUTH);

	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE");
	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE_CONTROL");
	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE_EXCEPT");
	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE_EXCEPT_FINE");
	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE_PRE");
	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE_BJET");
	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE_HIGH_E");
	hv_jet_0_jet_1_mass_INSIDE_names.push_back("h_jet_0_jet_1_mass_INSIDE_TRUTH");

}


// -- Invariant mass of two leading jets (leading and subleading)
void MC_Analysis::Book_jet_0_jet_1_mass_OUTSIDE(int bins, double min, double max) {
	h_jet_0_jet_1_mass_OUTSIDE = new TH1F("h_jet_0_jet_1_mass_OUTSIDE", "", bins, min, max);
	h_jet_0_jet_1_mass_OUTSIDE_PRE = new TH1F("h_jet_0_jet_1_mass_OUTSIDE_PRE", "", bins, min, max);
	h_jet_0_jet_1_mass_OUTSIDE_CONTROL = new TH1F("h_jet_0_jet_1_mass_OUTSIDE_CONTROL", "", bins, min, max);
	h_jet_0_jet_1_mass_OUTSIDE_EXCEPT = new TH1F("h_jet_0_jet_1_mass_OUTSIDE_EXCEPT", "", bins, min, max);
	h_jet_0_jet_1_mass_OUTSIDE_EXCEPT_FINE = new TH1F("h_jet_0_jet_1_mass_OUTSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_jet_0_jet_1_mass_OUTSIDE_BJET = new TH1F("h_jet_0_jet_1_mass_OUTSIDE_BJET", "", bins, min, max);
	h_jet_0_jet_1_mass_OUTSIDE_HIGH_E = new TH1F("h_jet_0_jet_1_mass_OUTSIDE_HIGH_E", "", bins, min, max);
	h_jet_0_jet_1_mass_OUTSIDE_TRUTH = new TH1F("h_jet_0_jet_1_mass_OUTSIDE_TRUTH", "", bins, min, max);

	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE);
	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE_CONTROL);
	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE_EXCEPT);
	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE_EXCEPT_FINE);
	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE_PRE);
	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE_BJET);
	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE_HIGH_E);
	hv_jet_0_jet_1_mass_OUTSIDE.push_back(h_jet_0_jet_1_mass_OUTSIDE_TRUTH);

	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE");
	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE_CONTROL");
	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE_EXCEPT");
	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE_EXCEPT_FINE");
	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE_PRE");
	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE_BJET");
	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE_HIGH_E");
	hv_jet_0_jet_1_mass_OUTSIDE_names.push_back("h_jet_0_jet_1_mass_OUTSIDE_TRUTH");

}


// -- Leading jet transverse momentum
void MC_Analysis::Book_jet_0_p4_Pt(int bins, double min, double max) {
	h_jet_0_p4_Pt = new TH1F("h_jet_0_p4_Pt", "", bins, min, max);
	h_jet_0_p4_Pt_PRE = new TH1F("h_jet_0_p4_Pt_PRE", "", bins, min, max);
	h_jet_0_p4_Pt_CONTROL = new TH1F("h_jet_0_p4_Pt_CONTROL", "", bins, min, max);
	h_jet_0_p4_Pt_EXCEPT = new TH1F("h_jet_0_p4_Pt_EXCEPT", "", bins, min, max);
	h_jet_0_p4_Pt_EXCEPT_FINE = new TH1F("h_jet_0_p4_Pt_EXCEPT_FINE", "", 1000, min, max);
	h_jet_0_p4_Pt_BJET = new TH1F("h_jet_0_p4_Pt_BJET", "", bins, min, max);
	h_jet_0_p4_Pt_HIGH_E = new TH1F("h_jet_0_p4_Pt_HIGH_E", "", bins, min, max);
	h_jet_0_p4_Pt_TRUTH = new TH1F("h_jet_0_p4_Pt_TRUTH", "", bins, min, max);

	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_CONTROL);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_EXCEPT);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_EXCEPT_FINE);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_PRE);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_BJET);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_HIGH_E);
	hv_jet_0_p4_Pt.push_back(h_jet_0_p4_Pt_TRUTH);

	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_CONTROL");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_EXCEPT");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_EXCEPT_FINE");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_PRE");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_BJET");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_HIGH_E");
	hv_jet_0_p4_Pt_names.push_back("h_jet_0_p4_Pt_TRUTH");

}


// -- Subleading jet transverse momentum
void MC_Analysis::Book_jet_1_p4_Pt(int bins, double min, double max) {
	h_jet_1_p4_Pt = new TH1F("h_jet_1_p4_Pt", "", bins, min, max);
	h_jet_1_p4_Pt_PRE = new TH1F("h_jet_1_p4_Pt_PRE", "", bins, min, max);
	h_jet_1_p4_Pt_CONTROL = new TH1F("h_jet_1_p4_Pt_CONTROL", "", bins, min, max);
	h_jet_1_p4_Pt_EXCEPT = new TH1F("h_jet_1_p4_Pt_EXCEPT", "", bins, min, max);
	h_jet_1_p4_Pt_EXCEPT_FINE = new TH1F("h_jet_1_p4_Pt_EXCEPT_FINE", "", 1000, min, max);
	h_jet_1_p4_Pt_BJET = new TH1F("h_jet_1_p4_Pt_BJET", "", bins, min, max);
	h_jet_1_p4_Pt_HIGH_E = new TH1F("h_jet_1_p4_Pt_HIGH_E", "", bins, min, max);
	h_jet_1_p4_Pt_TRUTH = new TH1F("h_jet_1_p4_Pt_TRUTH", "", bins, min, max);

	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_CONTROL);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_EXCEPT);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_EXCEPT_FINE);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_PRE);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_BJET);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_HIGH_E);
	hv_jet_1_p4_Pt.push_back(h_jet_1_p4_Pt_TRUTH);

	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_CONTROL");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_EXCEPT");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_EXCEPT_FINE");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_PRE");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_BJET");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_HIGH_E");
	hv_jet_1_p4_Pt_names.push_back("h_jet_1_p4_Pt_TRUTH");

}


/// ------------------- MISSINGENERGY ---------------- ///

// -- Missing transversE Momentum centrality
void MC_Analysis::Book_MET_Centrality(int bins, double min, double max) {
	h_MET_Centrality = new TH1F("h_MET_Centrality", "", bins, min, max);
	h_MET_Centrality_PRE = new TH1F("h_MET_Centrality_PRE", "", bins, min, max);
	h_MET_Centrality_CONTROL = new TH1F("h_MET_Centrality_CONTROL", "", bins, min, max);
	h_MET_Centrality_EXCEPT = new TH1F("h_MET_Centrality_EXCEPT", "", bins, min, max);
	h_MET_Centrality_EXCEPT_FINE = new TH1F("h_MET_Centrality_EXCEPT_FINE", "", 1000, min, max);
	h_MET_Centrality_BJET = new TH1F("h_MET_Centrality_BJET", "", bins, min, max);
	h_MET_Centrality_HIGH_E = new TH1F("h_MET_Centrality_HIGH_E", "", bins, min, max);
	h_MET_Centrality_TRUTH = new TH1F("h_MET_Centrality_TRUTH", "", bins, min, max);

	hv_MET_Centrality.push_back(h_MET_Centrality);
	hv_MET_Centrality.push_back(h_MET_Centrality_CONTROL);
	hv_MET_Centrality.push_back(h_MET_Centrality_EXCEPT);
	hv_MET_Centrality.push_back(h_MET_Centrality_EXCEPT_FINE);
	hv_MET_Centrality.push_back(h_MET_Centrality_PRE);
	hv_MET_Centrality.push_back(h_MET_Centrality_BJET);
	hv_MET_Centrality.push_back(h_MET_Centrality_HIGH_E);
	hv_MET_Centrality.push_back(h_MET_Centrality_TRUTH);

	hv_MET_Centrality_names.push_back("h_MET_Centrality");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_CONTROL");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_EXCEPT");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_EXCEPT_FINE");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_PRE");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_BJET");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_HIGH_E");
	hv_MET_Centrality_names.push_back("h_MET_Centrality_TRUTH");

}


// -- missing energy of neutrino 1
void MC_Analysis::Book_neutrino_0_pt(int bins, double min, double max) {
	h_neutrino_0_pt = new TH1F("h_neutrino_0_pt", "", bins, min, max);
	h_neutrino_0_pt_PRE = new TH1F("h_neutrino_0_pt_PRE", "", bins, min, max);
	h_neutrino_0_pt_CONTROL = new TH1F("h_neutrino_0_pt_CONTROL", "", bins, min, max);
	h_neutrino_0_pt_EXCEPT = new TH1F("h_neutrino_0_pt_EXCEPT", "", bins, min, max);
	h_neutrino_0_pt_EXCEPT_FINE = new TH1F("h_neutrino_0_pt_EXCEPT_FINE", "", 1000, min, max);
	h_neutrino_0_pt_BJET = new TH1F("h_neutrino_0_pt_BJET", "", bins, min, max);
	h_neutrino_0_pt_HIGH_E = new TH1F("h_neutrino_0_pt_HIGH_E", "", bins, min, max);
	h_neutrino_0_pt_TRUTH = new TH1F("h_neutrino_0_pt_TRUTH", "", bins, min, max);

	hv_neutrino_0_pt.push_back(h_neutrino_0_pt);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_CONTROL);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_EXCEPT);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_EXCEPT_FINE);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_PRE);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_BJET);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_HIGH_E);
	hv_neutrino_0_pt.push_back(h_neutrino_0_pt_TRUTH);

	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_CONTROL");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_EXCEPT");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_EXCEPT_FINE");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_PRE");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_BJET");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_HIGH_E");
	hv_neutrino_0_pt_names.push_back("h_neutrino_0_pt_TRUTH");

}


// -- missing energy of neutrino 2
void MC_Analysis::Book_neutrino_1_pt(int bins, double min, double max) {
	h_neutrino_1_pt = new TH1F("h_neutrino_1_pt", "", bins, min, max);
	h_neutrino_1_pt_PRE = new TH1F("h_neutrino_1_pt_PRE", "", bins, min, max);
	h_neutrino_1_pt_CONTROL = new TH1F("h_neutrino_1_pt_CONTROL", "", bins, min, max);
	h_neutrino_1_pt_EXCEPT = new TH1F("h_neutrino_1_pt_EXCEPT", "", bins, min, max);
	h_neutrino_1_pt_EXCEPT_FINE = new TH1F("h_neutrino_1_pt_EXCEPT_FINE", "", 1000, min, max);
	h_neutrino_1_pt_BJET = new TH1F("h_neutrino_1_pt_BJET", "", bins, min, max);
	h_neutrino_1_pt_HIGH_E = new TH1F("h_neutrino_1_pt_HIGH_E", "", bins, min, max);
	h_neutrino_1_pt_TRUTH = new TH1F("h_neutrino_1_pt_TRUTH", "", bins, min, max);

	hv_neutrino_1_pt.push_back(h_neutrino_1_pt);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_CONTROL);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_EXCEPT);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_EXCEPT_FINE);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_PRE);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_BJET);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_HIGH_E);
	hv_neutrino_1_pt.push_back(h_neutrino_1_pt_TRUTH);

	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_CONTROL");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_EXCEPT");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_EXCEPT_FINE");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_PRE");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_BJET");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_HIGH_E");
	hv_neutrino_1_pt_names.push_back("h_neutrino_1_pt_TRUTH");

}


// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
void MC_Analysis::Book_MET_Type_Favour(int bins, double min, double max) {
	h_MET_Type_Favour = new TH1F("h_MET_Type_Favour", "", bins, min, max);
	h_MET_Type_Favour_PRE = new TH1F("h_MET_Type_Favour_PRE", "", bins, min, max);
	h_MET_Type_Favour_CONTROL = new TH1F("h_MET_Type_Favour_CONTROL", "", bins, min, max);
	h_MET_Type_Favour_EXCEPT = new TH1F("h_MET_Type_Favour_EXCEPT", "", bins, min, max);
	h_MET_Type_Favour_EXCEPT_FINE = new TH1F("h_MET_Type_Favour_EXCEPT_FINE", "", 1000, min, max);
	h_MET_Type_Favour_BJET = new TH1F("h_MET_Type_Favour_BJET", "", bins, min, max);
	h_MET_Type_Favour_HIGH_E = new TH1F("h_MET_Type_Favour_HIGH_E", "", bins, min, max);
	h_MET_Type_Favour_TRUTH = new TH1F("h_MET_Type_Favour_TRUTH", "", bins, min, max);

	hv_MET_Type_Favour.push_back(h_MET_Type_Favour);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_CONTROL);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_EXCEPT);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_EXCEPT_FINE);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_PRE);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_BJET);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_HIGH_E);
	hv_MET_Type_Favour.push_back(h_MET_Type_Favour_TRUTH);

	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_CONTROL");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_EXCEPT");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_EXCEPT_FINE");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_PRE");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_BJET");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_HIGH_E");
	hv_MET_Type_Favour_names.push_back("h_MET_Type_Favour_TRUTH");

}


// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
void MC_Analysis::Book_MET_Type_Favour_INSIDE(int bins, double min, double max) {
	h_MET_Type_Favour_INSIDE = new TH1F("h_MET_Type_Favour_INSIDE", "", bins, min, max);
	h_MET_Type_Favour_INSIDE_PRE = new TH1F("h_MET_Type_Favour_INSIDE_PRE", "", bins, min, max);
	h_MET_Type_Favour_INSIDE_CONTROL = new TH1F("h_MET_Type_Favour_INSIDE_CONTROL", "", bins, min, max);
	h_MET_Type_Favour_INSIDE_EXCEPT = new TH1F("h_MET_Type_Favour_INSIDE_EXCEPT", "", bins, min, max);
	h_MET_Type_Favour_INSIDE_EXCEPT_FINE = new TH1F("h_MET_Type_Favour_INSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_MET_Type_Favour_INSIDE_BJET = new TH1F("h_MET_Type_Favour_INSIDE_BJET", "", bins, min, max);
	h_MET_Type_Favour_INSIDE_HIGH_E = new TH1F("h_MET_Type_Favour_INSIDE_HIGH_E", "", bins, min, max);
	h_MET_Type_Favour_INSIDE_TRUTH = new TH1F("h_MET_Type_Favour_INSIDE_TRUTH", "", bins, min, max);

	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE);
	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE_CONTROL);
	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE_EXCEPT);
	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE_EXCEPT_FINE);
	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE_PRE);
	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE_BJET);
	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE_HIGH_E);
	hv_MET_Type_Favour_INSIDE.push_back(h_MET_Type_Favour_INSIDE_TRUTH);

	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE");
	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE_CONTROL");
	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE_EXCEPT");
	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE_EXCEPT_FINE");
	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE_PRE");
	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE_BJET");
	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE_HIGH_E");
	hv_MET_Type_Favour_INSIDE_names.push_back("h_MET_Type_Favour_INSIDE_TRUTH");

}


// -- Whether the missing energy is directed more towards the hadronic tau or the other lepton (e or m)
void MC_Analysis::Book_MET_Type_Favour_OUTSIDE(int bins, double min, double max) {
	h_MET_Type_Favour_OUTSIDE = new TH1F("h_MET_Type_Favour_OUTSIDE", "", bins, min, max);
	h_MET_Type_Favour_OUTSIDE_PRE = new TH1F("h_MET_Type_Favour_OUTSIDE_PRE", "", bins, min, max);
	h_MET_Type_Favour_OUTSIDE_CONTROL = new TH1F("h_MET_Type_Favour_OUTSIDE_CONTROL", "", bins, min, max);
	h_MET_Type_Favour_OUTSIDE_EXCEPT = new TH1F("h_MET_Type_Favour_OUTSIDE_EXCEPT", "", bins, min, max);
	h_MET_Type_Favour_OUTSIDE_EXCEPT_FINE = new TH1F("h_MET_Type_Favour_OUTSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_MET_Type_Favour_OUTSIDE_BJET = new TH1F("h_MET_Type_Favour_OUTSIDE_BJET", "", bins, min, max);
	h_MET_Type_Favour_OUTSIDE_HIGH_E = new TH1F("h_MET_Type_Favour_OUTSIDE_HIGH_E", "", bins, min, max);
	h_MET_Type_Favour_OUTSIDE_TRUTH = new TH1F("h_MET_Type_Favour_OUTSIDE_TRUTH", "", bins, min, max);

	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE);
	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE_CONTROL);
	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE_EXCEPT);
	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE_EXCEPT_FINE);
	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE_PRE);
	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE_BJET);
	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE_HIGH_E);
	hv_MET_Type_Favour_OUTSIDE.push_back(h_MET_Type_Favour_OUTSIDE_TRUTH);

	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE");
	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE_CONTROL");
	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE_EXCEPT");
	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE_EXCEPT_FINE");
	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE_PRE");
	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE_BJET");
	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE_HIGH_E");
	hv_MET_Type_Favour_OUTSIDE_names.push_back("h_MET_Type_Favour_OUTSIDE_TRUTH");

}


/// ------------------- RECONSTRUCTED ---------------- ///

// -- Separation of the two candidate leptons in phi space
void MC_Analysis::Book_DeltaPhi_reco(int bins, double min, double max) {
	h_DeltaPhi_reco = new TH1F("h_DeltaPhi_reco", "", bins, min, max);
	h_DeltaPhi_reco_PRE = new TH1F("h_DeltaPhi_reco_PRE", "", bins, min, max);
	h_DeltaPhi_reco_CONTROL = new TH1F("h_DeltaPhi_reco_CONTROL", "", bins, min, max);
	h_DeltaPhi_reco_EXCEPT = new TH1F("h_DeltaPhi_reco_EXCEPT", "", bins, min, max);
	h_DeltaPhi_reco_EXCEPT_FINE = new TH1F("h_DeltaPhi_reco_EXCEPT_FINE", "", 1000, min, max);
	h_DeltaPhi_reco_BJET = new TH1F("h_DeltaPhi_reco_BJET", "", bins, min, max);
	h_DeltaPhi_reco_HIGH_E = new TH1F("h_DeltaPhi_reco_HIGH_E", "", bins, min, max);
	h_DeltaPhi_reco_TRUTH = new TH1F("h_DeltaPhi_reco_TRUTH", "", bins, min, max);

	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco);
	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco_CONTROL);
	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco_EXCEPT);
	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco_EXCEPT_FINE);
	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco_PRE);
	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco_BJET);
	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco_HIGH_E);
	hv_DeltaPhi_reco.push_back(h_DeltaPhi_reco_TRUTH);

	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco");
	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco_CONTROL");
	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco_EXCEPT");
	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco_EXCEPT_FINE");
	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco_PRE");
	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco_BJET");
	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco_HIGH_E");
	hv_DeltaPhi_reco_names.push_back("h_DeltaPhi_reco_TRUTH");

}


// -- Separation of the two candidate leptons in phi space
void MC_Analysis::Book_DeltaPhi_reco_INSIDE(int bins, double min, double max) {
	h_DeltaPhi_reco_INSIDE = new TH1F("h_DeltaPhi_reco_INSIDE", "", bins, min, max);
	h_DeltaPhi_reco_INSIDE_PRE = new TH1F("h_DeltaPhi_reco_INSIDE_PRE", "", bins, min, max);
	h_DeltaPhi_reco_INSIDE_CONTROL = new TH1F("h_DeltaPhi_reco_INSIDE_CONTROL", "", bins, min, max);
	h_DeltaPhi_reco_INSIDE_EXCEPT = new TH1F("h_DeltaPhi_reco_INSIDE_EXCEPT", "", bins, min, max);
	h_DeltaPhi_reco_INSIDE_EXCEPT_FINE = new TH1F("h_DeltaPhi_reco_INSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_DeltaPhi_reco_INSIDE_BJET = new TH1F("h_DeltaPhi_reco_INSIDE_BJET", "", bins, min, max);
	h_DeltaPhi_reco_INSIDE_HIGH_E = new TH1F("h_DeltaPhi_reco_INSIDE_HIGH_E", "", bins, min, max);
	h_DeltaPhi_reco_INSIDE_TRUTH = new TH1F("h_DeltaPhi_reco_INSIDE_TRUTH", "", bins, min, max);

	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE);
	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE_CONTROL);
	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE_EXCEPT);
	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE_EXCEPT_FINE);
	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE_PRE);
	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE_BJET);
	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE_HIGH_E);
	hv_DeltaPhi_reco_INSIDE.push_back(h_DeltaPhi_reco_INSIDE_TRUTH);

	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE");
	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE_CONTROL");
	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE_EXCEPT");
	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE_EXCEPT_FINE");
	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE_PRE");
	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE_BJET");
	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE_HIGH_E");
	hv_DeltaPhi_reco_INSIDE_names.push_back("h_DeltaPhi_reco_INSIDE_TRUTH");

}


// -- Separation of the two candidate leptons in phi space
void MC_Analysis::Book_DeltaPhi_reco_OUTSIDE(int bins, double min, double max) {
	h_DeltaPhi_reco_OUTSIDE = new TH1F("h_DeltaPhi_reco_OUTSIDE", "", bins, min, max);
	h_DeltaPhi_reco_OUTSIDE_PRE = new TH1F("h_DeltaPhi_reco_OUTSIDE_PRE", "", bins, min, max);
	h_DeltaPhi_reco_OUTSIDE_CONTROL = new TH1F("h_DeltaPhi_reco_OUTSIDE_CONTROL", "", bins, min, max);
	h_DeltaPhi_reco_OUTSIDE_EXCEPT = new TH1F("h_DeltaPhi_reco_OUTSIDE_EXCEPT", "", bins, min, max);
	h_DeltaPhi_reco_OUTSIDE_EXCEPT_FINE = new TH1F("h_DeltaPhi_reco_OUTSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_DeltaPhi_reco_OUTSIDE_BJET = new TH1F("h_DeltaPhi_reco_OUTSIDE_BJET", "", bins, min, max);
	h_DeltaPhi_reco_OUTSIDE_HIGH_E = new TH1F("h_DeltaPhi_reco_OUTSIDE_HIGH_E", "", bins, min, max);
	h_DeltaPhi_reco_OUTSIDE_TRUTH = new TH1F("h_DeltaPhi_reco_OUTSIDE_TRUTH", "", bins, min, max);

	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE);
	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE_CONTROL);
	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE_EXCEPT);
	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE_EXCEPT_FINE);
	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE_PRE);
	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE_BJET);
	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE_HIGH_E);
	hv_DeltaPhi_reco_OUTSIDE.push_back(h_DeltaPhi_reco_OUTSIDE_TRUTH);

	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE");
	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE_CONTROL");
	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE_EXCEPT");
	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE_EXCEPT_FINE");
	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE_PRE");
	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE_BJET");
	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE_HIGH_E");
	hv_DeltaPhi_reco_OUTSIDE_names.push_back("h_DeltaPhi_reco_OUTSIDE_TRUTH");

}


// -- PT Balance reconstructed
void MC_Analysis::Book_pT_balance_reco(int bins, double min, double max) {
	h_pT_balance_reco = new TH1F("h_pT_balance_reco", "", bins, min, max);
	h_pT_balance_reco_PRE = new TH1F("h_pT_balance_reco_PRE", "", bins, min, max);
	h_pT_balance_reco_CONTROL = new TH1F("h_pT_balance_reco_CONTROL", "", bins, min, max);
	h_pT_balance_reco_EXCEPT = new TH1F("h_pT_balance_reco_EXCEPT", "", bins, min, max);
	h_pT_balance_reco_EXCEPT_FINE = new TH1F("h_pT_balance_reco_EXCEPT_FINE", "", 1000, min, max);
	h_pT_balance_reco_BJET = new TH1F("h_pT_balance_reco_BJET", "", bins, min, max);
	h_pT_balance_reco_HIGH_E = new TH1F("h_pT_balance_reco_HIGH_E", "", bins, min, max);
	h_pT_balance_reco_TRUTH = new TH1F("h_pT_balance_reco_TRUTH", "", bins, min, max);

	hv_pT_balance_reco.push_back(h_pT_balance_reco);
	hv_pT_balance_reco.push_back(h_pT_balance_reco_CONTROL);
	hv_pT_balance_reco.push_back(h_pT_balance_reco_EXCEPT);
	hv_pT_balance_reco.push_back(h_pT_balance_reco_EXCEPT_FINE);
	hv_pT_balance_reco.push_back(h_pT_balance_reco_PRE);
	hv_pT_balance_reco.push_back(h_pT_balance_reco_BJET);
	hv_pT_balance_reco.push_back(h_pT_balance_reco_HIGH_E);
	hv_pT_balance_reco.push_back(h_pT_balance_reco_TRUTH);

	hv_pT_balance_reco_names.push_back("h_pT_balance_reco");
	hv_pT_balance_reco_names.push_back("h_pT_balance_reco_CONTROL");
	hv_pT_balance_reco_names.push_back("h_pT_balance_reco_EXCEPT");
	hv_pT_balance_reco_names.push_back("h_pT_balance_reco_EXCEPT_FINE");
	hv_pT_balance_reco_names.push_back("h_pT_balance_reco_PRE");
	hv_pT_balance_reco_names.push_back("h_pT_balance_reco_BJET");
	hv_pT_balance_reco_names.push_back("h_pT_balance_reco_HIGH_E");
	hv_pT_balance_reco_names.push_back("h_pT_balance_reco_TRUTH");

}


// -- PT Balance reconstructed
void MC_Analysis::Book_pT_balance_reco_INSIDE(int bins, double min, double max) {
	h_pT_balance_reco_INSIDE = new TH1F("h_pT_balance_reco_INSIDE", "", bins, min, max);
	h_pT_balance_reco_INSIDE_PRE = new TH1F("h_pT_balance_reco_INSIDE_PRE", "", bins, min, max);
	h_pT_balance_reco_INSIDE_CONTROL = new TH1F("h_pT_balance_reco_INSIDE_CONTROL", "", bins, min, max);
	h_pT_balance_reco_INSIDE_EXCEPT = new TH1F("h_pT_balance_reco_INSIDE_EXCEPT", "", bins, min, max);
	h_pT_balance_reco_INSIDE_EXCEPT_FINE = new TH1F("h_pT_balance_reco_INSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_pT_balance_reco_INSIDE_BJET = new TH1F("h_pT_balance_reco_INSIDE_BJET", "", bins, min, max);
	h_pT_balance_reco_INSIDE_HIGH_E = new TH1F("h_pT_balance_reco_INSIDE_HIGH_E", "", bins, min, max);
	h_pT_balance_reco_INSIDE_TRUTH = new TH1F("h_pT_balance_reco_INSIDE_TRUTH", "", bins, min, max);

	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE);
	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE_CONTROL);
	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE_EXCEPT);
	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE_EXCEPT_FINE);
	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE_PRE);
	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE_BJET);
	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE_HIGH_E);
	hv_pT_balance_reco_INSIDE.push_back(h_pT_balance_reco_INSIDE_TRUTH);

	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE");
	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE_CONTROL");
	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE_EXCEPT");
	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE_EXCEPT_FINE");
	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE_PRE");
	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE_BJET");
	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE_HIGH_E");
	hv_pT_balance_reco_INSIDE_names.push_back("h_pT_balance_reco_INSIDE_TRUTH");

}


// -- PT Balance reconstructed
void MC_Analysis::Book_pT_balance_reco_OUTSIDE(int bins, double min, double max) {
	h_pT_balance_reco_OUTSIDE = new TH1F("h_pT_balance_reco_OUTSIDE", "", bins, min, max);
	h_pT_balance_reco_OUTSIDE_PRE = new TH1F("h_pT_balance_reco_OUTSIDE_PRE", "", bins, min, max);
	h_pT_balance_reco_OUTSIDE_CONTROL = new TH1F("h_pT_balance_reco_OUTSIDE_CONTROL", "", bins, min, max);
	h_pT_balance_reco_OUTSIDE_EXCEPT = new TH1F("h_pT_balance_reco_OUTSIDE_EXCEPT", "", bins, min, max);
	h_pT_balance_reco_OUTSIDE_EXCEPT_FINE = new TH1F("h_pT_balance_reco_OUTSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_pT_balance_reco_OUTSIDE_BJET = new TH1F("h_pT_balance_reco_OUTSIDE_BJET", "", bins, min, max);
	h_pT_balance_reco_OUTSIDE_HIGH_E = new TH1F("h_pT_balance_reco_OUTSIDE_HIGH_E", "", bins, min, max);
	h_pT_balance_reco_OUTSIDE_TRUTH = new TH1F("h_pT_balance_reco_OUTSIDE_TRUTH", "", bins, min, max);

	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE);
	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE_CONTROL);
	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE_EXCEPT);
	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE_EXCEPT_FINE);
	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE_PRE);
	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE_BJET);
	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE_HIGH_E);
	hv_pT_balance_reco_OUTSIDE.push_back(h_pT_balance_reco_OUTSIDE_TRUTH);

	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE");
	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE_CONTROL");
	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE_EXCEPT");
	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE_EXCEPT_FINE");
	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE_PRE");
	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE_BJET");
	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE_HIGH_E");
	hv_pT_balance_reco_OUTSIDE_names.push_back("h_pT_balance_reco_OUTSIDE_TRUTH");

}


// --  reconstructed Z mass with neutrino and z candidates
void MC_Analysis::Book_lep_0_lep_1_mass_reco(int bins, double min, double max) {
	h_lep_0_lep_1_mass_reco = new TH1F("h_lep_0_lep_1_mass_reco", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_PRE = new TH1F("h_lep_0_lep_1_mass_reco_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_CONTROL = new TH1F("h_lep_0_lep_1_mass_reco_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_EXCEPT = new TH1F("h_lep_0_lep_1_mass_reco_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_mass_reco_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_mass_reco_BJET = new TH1F("h_lep_0_lep_1_mass_reco_BJET", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_HIGH_E = new TH1F("h_lep_0_lep_1_mass_reco_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_TRUTH = new TH1F("h_lep_0_lep_1_mass_reco_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco);
	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco_CONTROL);
	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco_EXCEPT);
	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco_EXCEPT_FINE);
	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco_PRE);
	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco_BJET);
	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco_HIGH_E);
	hv_lep_0_lep_1_mass_reco.push_back(h_lep_0_lep_1_mass_reco_TRUTH);

	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco");
	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco_CONTROL");
	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco_EXCEPT");
	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco_EXCEPT_FINE");
	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco_PRE");
	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco_BJET");
	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco_HIGH_E");
	hv_lep_0_lep_1_mass_reco_names.push_back("h_lep_0_lep_1_mass_reco_TRUTH");

}


// -- Invariant mass of lepton 0 and lepton 1; non reconstructed when reconstruction happens
void MC_Analysis::Book_lep_0_lep_1_mass_non_reco(int bins, double min, double max) {
	h_lep_0_lep_1_mass_non_reco = new TH1F("h_lep_0_lep_1_mass_non_reco", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_PRE = new TH1F("h_lep_0_lep_1_mass_non_reco_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_CONTROL = new TH1F("h_lep_0_lep_1_mass_non_reco_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_EXCEPT = new TH1F("h_lep_0_lep_1_mass_non_reco_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_mass_non_reco_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_mass_non_reco_BJET = new TH1F("h_lep_0_lep_1_mass_non_reco_BJET", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_HIGH_E = new TH1F("h_lep_0_lep_1_mass_non_reco_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_TRUTH = new TH1F("h_lep_0_lep_1_mass_non_reco_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco);
	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco_CONTROL);
	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco_EXCEPT);
	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco_EXCEPT_FINE);
	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco_PRE);
	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco_BJET);
	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco_HIGH_E);
	hv_lep_0_lep_1_mass_non_reco.push_back(h_lep_0_lep_1_mass_non_reco_TRUTH);

	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco");
	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco_CONTROL");
	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco_EXCEPT");
	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco_EXCEPT_FINE");
	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco_PRE");
	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco_BJET");
	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco_HIGH_E");
	hv_lep_0_lep_1_mass_non_reco_names.push_back("h_lep_0_lep_1_mass_non_reco_TRUTH");

}


// -- Invariant mass of lepton 0 and lepton 1; non reconstructed when reconstruction happens, inside only
void MC_Analysis::Book_lep_0_lep_1_mass_non_reco_INSIDE(int bins, double min, double max) {
	h_lep_0_lep_1_mass_non_reco_INSIDE = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_INSIDE_PRE = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_INSIDE_CONTROL = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_mass_non_reco_INSIDE_BJET = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE_BJET", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_INSIDE_HIGH_E = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_mass_non_reco_INSIDE_TRUTH = new TH1F("h_lep_0_lep_1_mass_non_reco_INSIDE_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE);
	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE_CONTROL);
	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT);
	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT_FINE);
	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE_PRE);
	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE_BJET);
	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE_HIGH_E);
	hv_lep_0_lep_1_mass_non_reco_INSIDE.push_back(h_lep_0_lep_1_mass_non_reco_INSIDE_TRUTH);

	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE");
	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE_CONTROL");
	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT");
	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE_EXCEPT_FINE");
	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE_PRE");
	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE_BJET");
	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE_HIGH_E");
	hv_lep_0_lep_1_mass_non_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_non_reco_INSIDE_TRUTH");

}


// --  reconstructed Z mass with neutrino and z candidates only for inside the two leptons
void MC_Analysis::Book_lep_0_lep_1_mass_reco_INSIDE(int bins, double min, double max) {
	h_lep_0_lep_1_mass_reco_INSIDE = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_INSIDE_PRE = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_INSIDE_CONTROL = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_mass_reco_INSIDE_BJET = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE_BJET", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_INSIDE_HIGH_E = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_INSIDE_TRUTH = new TH1F("h_lep_0_lep_1_mass_reco_INSIDE_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE);
	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE_CONTROL);
	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT);
	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE);
	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE_PRE);
	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE_BJET);
	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE_HIGH_E);
	hv_lep_0_lep_1_mass_reco_INSIDE.push_back(h_lep_0_lep_1_mass_reco_INSIDE_TRUTH);

	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE");
	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE_CONTROL");
	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT");
	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE_EXCEPT_FINE");
	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE_PRE");
	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE_BJET");
	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE_HIGH_E");
	hv_lep_0_lep_1_mass_reco_INSIDE_names.push_back("h_lep_0_lep_1_mass_reco_INSIDE_TRUTH");

}


// --  reconstructed Z mass with neutrino and z candidates only for outside the two leptons
void MC_Analysis::Book_lep_0_lep_1_mass_reco_OUTSIDE(int bins, double min, double max) {
	h_lep_0_lep_1_mass_reco_OUTSIDE = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_OUTSIDE_PRE = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE_PRE", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_OUTSIDE_CONTROL = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_mass_reco_OUTSIDE_BJET = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE_BJET", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_OUTSIDE_HIGH_E = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH = new TH1F("h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE);
	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE_CONTROL);
	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT);
	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT_FINE);
	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE_PRE);
	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE_BJET);
	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE_HIGH_E);
	hv_lep_0_lep_1_mass_reco_OUTSIDE.push_back(h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH);

	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE");
	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE_CONTROL");
	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT");
	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE_EXCEPT_FINE");
	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE_PRE");
	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE_BJET");
	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE_HIGH_E");
	hv_lep_0_lep_1_mass_reco_OUTSIDE_names.push_back("h_lep_0_lep_1_mass_reco_OUTSIDE_TRUTH");

}


// -- Distance in R space between two leptons (reconstructed with missing neutrino energy included)
void MC_Analysis::Book_DeltaR_reco(int bins, double min, double max) {
	h_DeltaR_reco = new TH1F("h_DeltaR_reco", "", bins, min, max);
	h_DeltaR_reco_PRE = new TH1F("h_DeltaR_reco_PRE", "", bins, min, max);
	h_DeltaR_reco_CONTROL = new TH1F("h_DeltaR_reco_CONTROL", "", bins, min, max);
	h_DeltaR_reco_EXCEPT = new TH1F("h_DeltaR_reco_EXCEPT", "", bins, min, max);
	h_DeltaR_reco_EXCEPT_FINE = new TH1F("h_DeltaR_reco_EXCEPT_FINE", "", 1000, min, max);
	h_DeltaR_reco_BJET = new TH1F("h_DeltaR_reco_BJET", "", bins, min, max);
	h_DeltaR_reco_HIGH_E = new TH1F("h_DeltaR_reco_HIGH_E", "", bins, min, max);
	h_DeltaR_reco_TRUTH = new TH1F("h_DeltaR_reco_TRUTH", "", bins, min, max);

	hv_DeltaR_reco.push_back(h_DeltaR_reco);
	hv_DeltaR_reco.push_back(h_DeltaR_reco_CONTROL);
	hv_DeltaR_reco.push_back(h_DeltaR_reco_EXCEPT);
	hv_DeltaR_reco.push_back(h_DeltaR_reco_EXCEPT_FINE);
	hv_DeltaR_reco.push_back(h_DeltaR_reco_PRE);
	hv_DeltaR_reco.push_back(h_DeltaR_reco_BJET);
	hv_DeltaR_reco.push_back(h_DeltaR_reco_HIGH_E);
	hv_DeltaR_reco.push_back(h_DeltaR_reco_TRUTH);

	hv_DeltaR_reco_names.push_back("h_DeltaR_reco");
	hv_DeltaR_reco_names.push_back("h_DeltaR_reco_CONTROL");
	hv_DeltaR_reco_names.push_back("h_DeltaR_reco_EXCEPT");
	hv_DeltaR_reco_names.push_back("h_DeltaR_reco_EXCEPT_FINE");
	hv_DeltaR_reco_names.push_back("h_DeltaR_reco_PRE");
	hv_DeltaR_reco_names.push_back("h_DeltaR_reco_BJET");
	hv_DeltaR_reco_names.push_back("h_DeltaR_reco_HIGH_E");
	hv_DeltaR_reco_names.push_back("h_DeltaR_reco_TRUTH");

}


// -- Combined transverse momentum of lepton 0 and lepton 1 (reconstructed with missing neutrino energy included)
void MC_Analysis::Book_lep_0_lep_1_pt_reco(int bins, double min, double max) {
	h_lep_0_lep_1_pt_reco = new TH1F("h_lep_0_lep_1_pt_reco", "", bins, min, max);
	h_lep_0_lep_1_pt_reco_PRE = new TH1F("h_lep_0_lep_1_pt_reco_PRE", "", bins, min, max);
	h_lep_0_lep_1_pt_reco_CONTROL = new TH1F("h_lep_0_lep_1_pt_reco_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_pt_reco_EXCEPT = new TH1F("h_lep_0_lep_1_pt_reco_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_pt_reco_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_pt_reco_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_pt_reco_BJET = new TH1F("h_lep_0_lep_1_pt_reco_BJET", "", bins, min, max);
	h_lep_0_lep_1_pt_reco_HIGH_E = new TH1F("h_lep_0_lep_1_pt_reco_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_pt_reco_TRUTH = new TH1F("h_lep_0_lep_1_pt_reco_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco);
	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco_CONTROL);
	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco_EXCEPT);
	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco_EXCEPT_FINE);
	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco_PRE);
	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco_BJET);
	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco_HIGH_E);
	hv_lep_0_lep_1_pt_reco.push_back(h_lep_0_lep_1_pt_reco_TRUTH);

	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco");
	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco_CONTROL");
	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco_EXCEPT");
	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco_EXCEPT_FINE");
	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco_PRE");
	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco_BJET");
	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco_HIGH_E");
	hv_lep_0_lep_1_pt_reco_names.push_back("h_lep_0_lep_1_pt_reco_TRUTH");

}


// -- Centrality of pseudorapidity of Z boson between two leading jets (reconstructed with missing neutrino energy included)
void MC_Analysis::Book_Centrality_reco(int bins, double min, double max) {
	h_Centrality_reco = new TH1F("h_Centrality_reco", "", bins, min, max);
	h_Centrality_reco_PRE = new TH1F("h_Centrality_reco_PRE", "", bins, min, max);
	h_Centrality_reco_CONTROL = new TH1F("h_Centrality_reco_CONTROL", "", bins, min, max);
	h_Centrality_reco_EXCEPT = new TH1F("h_Centrality_reco_EXCEPT", "", bins, min, max);
	h_Centrality_reco_EXCEPT_FINE = new TH1F("h_Centrality_reco_EXCEPT_FINE", "", 1000, min, max);
	h_Centrality_reco_BJET = new TH1F("h_Centrality_reco_BJET", "", bins, min, max);
	h_Centrality_reco_HIGH_E = new TH1F("h_Centrality_reco_HIGH_E", "", bins, min, max);
	h_Centrality_reco_TRUTH = new TH1F("h_Centrality_reco_TRUTH", "", bins, min, max);

	hv_Centrality_reco.push_back(h_Centrality_reco);
	hv_Centrality_reco.push_back(h_Centrality_reco_CONTROL);
	hv_Centrality_reco.push_back(h_Centrality_reco_EXCEPT);
	hv_Centrality_reco.push_back(h_Centrality_reco_EXCEPT_FINE);
	hv_Centrality_reco.push_back(h_Centrality_reco_PRE);
	hv_Centrality_reco.push_back(h_Centrality_reco_BJET);
	hv_Centrality_reco.push_back(h_Centrality_reco_HIGH_E);
	hv_Centrality_reco.push_back(h_Centrality_reco_TRUTH);

	hv_Centrality_reco_names.push_back("h_Centrality_reco");
	hv_Centrality_reco_names.push_back("h_Centrality_reco_CONTROL");
	hv_Centrality_reco_names.push_back("h_Centrality_reco_EXCEPT");
	hv_Centrality_reco_names.push_back("h_Centrality_reco_EXCEPT_FINE");
	hv_Centrality_reco_names.push_back("h_Centrality_reco_PRE");
	hv_Centrality_reco_names.push_back("h_Centrality_reco_BJET");
	hv_Centrality_reco_names.push_back("h_Centrality_reco_HIGH_E");
	hv_Centrality_reco_names.push_back("h_Centrality_reco_TRUTH");

}


// -- 2D plot of dilepton invariant mass and favour for the purposes of discovering leptons which favour one flavour over another
void MC_Analysis::Book_Mass_Favour_Combination_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax) {
	h_Mass_Favour_Combination_2D = new TH2F("h_Mass_Favour_Combination_2D", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_2D_PRE = new TH2F("h_Mass_Favour_Combination_2D_PRE", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_2D_CONTROL = new TH2F("h_Mass_Favour_Combination_2D_CONTROL", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_2D_EXCEPT = new TH2F("h_Mass_Favour_Combination_2D_EXCEPT", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_2D_BJET = new TH2F("h_Mass_Favour_Combination_2D_BJET", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_2D_HIGH_E = new TH2F("h_Mass_Favour_Combination_2D_HIGH_E", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_2D_TRUTH = new TH2F("h_Mass_Favour_Combination_2D_TRUTH", "", xbins, xmin, xmax, ybins, ymin, ymax);

	hv_Mass_Favour_Combination_2D.push_back(h_Mass_Favour_Combination_2D);
	hv_Mass_Favour_Combination_2D.push_back(h_Mass_Favour_Combination_2D_CONTROL);
	hv_Mass_Favour_Combination_2D.push_back(h_Mass_Favour_Combination_2D_EXCEPT);
	hv_Mass_Favour_Combination_2D.push_back(h_Mass_Favour_Combination_2D_PRE);
	hv_Mass_Favour_Combination_2D.push_back(h_Mass_Favour_Combination_2D_BJET);
	hv_Mass_Favour_Combination_2D.push_back(h_Mass_Favour_Combination_2D_HIGH_E);
	hv_Mass_Favour_Combination_2D.push_back(h_Mass_Favour_Combination_2D_TRUTH);

	hv_Mass_Favour_Combination_2D_names.push_back("h_Mass_Favour_Combination_2D");
	hv_Mass_Favour_Combination_2D_names.push_back("h_Mass_Favour_Combination_2D_CONTROL");
	hv_Mass_Favour_Combination_2D_names.push_back("h_Mass_Favour_Combination_2D_EXCEPT");
	hv_Mass_Favour_Combination_2D_names.push_back("h_Mass_Favour_Combination_2D_PRE");
	hv_Mass_Favour_Combination_2D_names.push_back("h_Mass_Favour_Combination_2D_BJET");
	hv_Mass_Favour_Combination_2D_names.push_back("h_Mass_Favour_Combination_2D_HIGH_E");
	hv_Mass_Favour_Combination_2D_names.push_back("h_Mass_Favour_Combination_2D_TRUTH");

}


// -- 2D plot of dilepton invariant mass and favour for missing energy inside the two leptons
void MC_Analysis::Book_Mass_Favour_Combination_INSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax) {
	h_Mass_Favour_Combination_INSIDE_2D = new TH2F("h_Mass_Favour_Combination_INSIDE_2D", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_INSIDE_2D_PRE = new TH2F("h_Mass_Favour_Combination_INSIDE_2D_PRE", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_INSIDE_2D_CONTROL = new TH2F("h_Mass_Favour_Combination_INSIDE_2D_CONTROL", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_INSIDE_2D_EXCEPT = new TH2F("h_Mass_Favour_Combination_INSIDE_2D_EXCEPT", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_INSIDE_2D_BJET = new TH2F("h_Mass_Favour_Combination_INSIDE_2D_BJET", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_INSIDE_2D_HIGH_E = new TH2F("h_Mass_Favour_Combination_INSIDE_2D_HIGH_E", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_INSIDE_2D_TRUTH = new TH2F("h_Mass_Favour_Combination_INSIDE_2D_TRUTH", "", xbins, xmin, xmax, ybins, ymin, ymax);

	hv_Mass_Favour_Combination_INSIDE_2D.push_back(h_Mass_Favour_Combination_INSIDE_2D);
	hv_Mass_Favour_Combination_INSIDE_2D.push_back(h_Mass_Favour_Combination_INSIDE_2D_CONTROL);
	hv_Mass_Favour_Combination_INSIDE_2D.push_back(h_Mass_Favour_Combination_INSIDE_2D_EXCEPT);
	hv_Mass_Favour_Combination_INSIDE_2D.push_back(h_Mass_Favour_Combination_INSIDE_2D_PRE);
	hv_Mass_Favour_Combination_INSIDE_2D.push_back(h_Mass_Favour_Combination_INSIDE_2D_BJET);
	hv_Mass_Favour_Combination_INSIDE_2D.push_back(h_Mass_Favour_Combination_INSIDE_2D_HIGH_E);
	hv_Mass_Favour_Combination_INSIDE_2D.push_back(h_Mass_Favour_Combination_INSIDE_2D_TRUTH);

	hv_Mass_Favour_Combination_INSIDE_2D_names.push_back("h_Mass_Favour_Combination_INSIDE_2D");
	hv_Mass_Favour_Combination_INSIDE_2D_names.push_back("h_Mass_Favour_Combination_INSIDE_2D_CONTROL");
	hv_Mass_Favour_Combination_INSIDE_2D_names.push_back("h_Mass_Favour_Combination_INSIDE_2D_EXCEPT");
	hv_Mass_Favour_Combination_INSIDE_2D_names.push_back("h_Mass_Favour_Combination_INSIDE_2D_PRE");
	hv_Mass_Favour_Combination_INSIDE_2D_names.push_back("h_Mass_Favour_Combination_INSIDE_2D_BJET");
	hv_Mass_Favour_Combination_INSIDE_2D_names.push_back("h_Mass_Favour_Combination_INSIDE_2D_HIGH_E");
	hv_Mass_Favour_Combination_INSIDE_2D_names.push_back("h_Mass_Favour_Combination_INSIDE_2D_TRUTH");

}


// -- 2D plot of dilepton invariant mass and favour for missing energy outside the two leptons
void MC_Analysis::Book_Mass_Favour_Combination_OUTSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax) {
	h_Mass_Favour_Combination_OUTSIDE_2D = new TH2F("h_Mass_Favour_Combination_OUTSIDE_2D", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_OUTSIDE_2D_PRE = new TH2F("h_Mass_Favour_Combination_OUTSIDE_2D_PRE", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_OUTSIDE_2D_CONTROL = new TH2F("h_Mass_Favour_Combination_OUTSIDE_2D_CONTROL", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_OUTSIDE_2D_EXCEPT = new TH2F("h_Mass_Favour_Combination_OUTSIDE_2D_EXCEPT", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_OUTSIDE_2D_BJET = new TH2F("h_Mass_Favour_Combination_OUTSIDE_2D_BJET", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_OUTSIDE_2D_HIGH_E = new TH2F("h_Mass_Favour_Combination_OUTSIDE_2D_HIGH_E", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH = new TH2F("h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH", "", xbins, xmin, xmax, ybins, ymin, ymax);

	hv_Mass_Favour_Combination_OUTSIDE_2D.push_back(h_Mass_Favour_Combination_OUTSIDE_2D);
	hv_Mass_Favour_Combination_OUTSIDE_2D.push_back(h_Mass_Favour_Combination_OUTSIDE_2D_CONTROL);
	hv_Mass_Favour_Combination_OUTSIDE_2D.push_back(h_Mass_Favour_Combination_OUTSIDE_2D_EXCEPT);
	hv_Mass_Favour_Combination_OUTSIDE_2D.push_back(h_Mass_Favour_Combination_OUTSIDE_2D_PRE);
	hv_Mass_Favour_Combination_OUTSIDE_2D.push_back(h_Mass_Favour_Combination_OUTSIDE_2D_BJET);
	hv_Mass_Favour_Combination_OUTSIDE_2D.push_back(h_Mass_Favour_Combination_OUTSIDE_2D_HIGH_E);
	hv_Mass_Favour_Combination_OUTSIDE_2D.push_back(h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH);

	hv_Mass_Favour_Combination_OUTSIDE_2D_names.push_back("h_Mass_Favour_Combination_OUTSIDE_2D");
	hv_Mass_Favour_Combination_OUTSIDE_2D_names.push_back("h_Mass_Favour_Combination_OUTSIDE_2D_CONTROL");
	hv_Mass_Favour_Combination_OUTSIDE_2D_names.push_back("h_Mass_Favour_Combination_OUTSIDE_2D_EXCEPT");
	hv_Mass_Favour_Combination_OUTSIDE_2D_names.push_back("h_Mass_Favour_Combination_OUTSIDE_2D_PRE");
	hv_Mass_Favour_Combination_OUTSIDE_2D_names.push_back("h_Mass_Favour_Combination_OUTSIDE_2D_BJET");
	hv_Mass_Favour_Combination_OUTSIDE_2D_names.push_back("h_Mass_Favour_Combination_OUTSIDE_2D_HIGH_E");
	hv_Mass_Favour_Combination_OUTSIDE_2D_names.push_back("h_Mass_Favour_Combination_OUTSIDE_2D_TRUTH");

}


// -- 2D plot of Delta Phi between two candidate leptons and the dilepton invariant mass
void MC_Analysis::Book_Mass_DeltaPhi_Combination_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax) {
	h_Mass_DeltaPhi_Combination_2D = new TH2F("h_Mass_DeltaPhi_Combination_2D", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_2D_PRE = new TH2F("h_Mass_DeltaPhi_Combination_2D_PRE", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_2D_CONTROL = new TH2F("h_Mass_DeltaPhi_Combination_2D_CONTROL", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_2D_EXCEPT = new TH2F("h_Mass_DeltaPhi_Combination_2D_EXCEPT", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_2D_BJET = new TH2F("h_Mass_DeltaPhi_Combination_2D_BJET", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_2D_HIGH_E = new TH2F("h_Mass_DeltaPhi_Combination_2D_HIGH_E", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_2D_TRUTH = new TH2F("h_Mass_DeltaPhi_Combination_2D_TRUTH", "", xbins, xmin, xmax, ybins, ymin, ymax);

	hv_Mass_DeltaPhi_Combination_2D.push_back(h_Mass_DeltaPhi_Combination_2D);
	hv_Mass_DeltaPhi_Combination_2D.push_back(h_Mass_DeltaPhi_Combination_2D_CONTROL);
	hv_Mass_DeltaPhi_Combination_2D.push_back(h_Mass_DeltaPhi_Combination_2D_EXCEPT);
	hv_Mass_DeltaPhi_Combination_2D.push_back(h_Mass_DeltaPhi_Combination_2D_PRE);
	hv_Mass_DeltaPhi_Combination_2D.push_back(h_Mass_DeltaPhi_Combination_2D_BJET);
	hv_Mass_DeltaPhi_Combination_2D.push_back(h_Mass_DeltaPhi_Combination_2D_HIGH_E);
	hv_Mass_DeltaPhi_Combination_2D.push_back(h_Mass_DeltaPhi_Combination_2D_TRUTH);

	hv_Mass_DeltaPhi_Combination_2D_names.push_back("h_Mass_DeltaPhi_Combination_2D");
	hv_Mass_DeltaPhi_Combination_2D_names.push_back("h_Mass_DeltaPhi_Combination_2D_CONTROL");
	hv_Mass_DeltaPhi_Combination_2D_names.push_back("h_Mass_DeltaPhi_Combination_2D_EXCEPT");
	hv_Mass_DeltaPhi_Combination_2D_names.push_back("h_Mass_DeltaPhi_Combination_2D_PRE");
	hv_Mass_DeltaPhi_Combination_2D_names.push_back("h_Mass_DeltaPhi_Combination_2D_BJET");
	hv_Mass_DeltaPhi_Combination_2D_names.push_back("h_Mass_DeltaPhi_Combination_2D_HIGH_E");
	hv_Mass_DeltaPhi_Combination_2D_names.push_back("h_Mass_DeltaPhi_Combination_2D_TRUTH");

}


// -- 2D plot of Delta Phi between two candidate leptons and the dilepton invariant mass
void MC_Analysis::Book_Mass_DeltaPhi_Combination_INSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax) {
	h_Mass_DeltaPhi_Combination_INSIDE_2D = new TH2F("h_Mass_DeltaPhi_Combination_INSIDE_2D", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_INSIDE_2D_PRE = new TH2F("h_Mass_DeltaPhi_Combination_INSIDE_2D_PRE", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_INSIDE_2D_CONTROL = new TH2F("h_Mass_DeltaPhi_Combination_INSIDE_2D_CONTROL", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_INSIDE_2D_EXCEPT = new TH2F("h_Mass_DeltaPhi_Combination_INSIDE_2D_EXCEPT", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_INSIDE_2D_BJET = new TH2F("h_Mass_DeltaPhi_Combination_INSIDE_2D_BJET", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_INSIDE_2D_HIGH_E = new TH2F("h_Mass_DeltaPhi_Combination_INSIDE_2D_HIGH_E", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH = new TH2F("h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH", "", xbins, xmin, xmax, ybins, ymin, ymax);

	hv_Mass_DeltaPhi_Combination_INSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_INSIDE_2D);
	hv_Mass_DeltaPhi_Combination_INSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_INSIDE_2D_CONTROL);
	hv_Mass_DeltaPhi_Combination_INSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_INSIDE_2D_EXCEPT);
	hv_Mass_DeltaPhi_Combination_INSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_INSIDE_2D_PRE);
	hv_Mass_DeltaPhi_Combination_INSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_INSIDE_2D_BJET);
	hv_Mass_DeltaPhi_Combination_INSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_INSIDE_2D_HIGH_E);
	hv_Mass_DeltaPhi_Combination_INSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH);

	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_INSIDE_2D");
	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_INSIDE_2D_CONTROL");
	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_INSIDE_2D_EXCEPT");
	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_INSIDE_2D_PRE");
	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_INSIDE_2D_BJET");
	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_INSIDE_2D_HIGH_E");
	hv_Mass_DeltaPhi_Combination_INSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_INSIDE_2D_TRUTH");

}


// -- 2D plot of Delta Phi between two candidate leptons and the dilepton invariant mass
void MC_Analysis::Book_Mass_DeltaPhi_Combination_OUTSIDE_2D(int xbins, double xmin, double xmax, int ybins, double ymin, double ymax) {
	h_Mass_DeltaPhi_Combination_OUTSIDE_2D = new TH2F("h_Mass_DeltaPhi_Combination_OUTSIDE_2D", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_OUTSIDE_2D_PRE = new TH2F("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_PRE", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_OUTSIDE_2D_CONTROL = new TH2F("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_CONTROL", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_OUTSIDE_2D_EXCEPT = new TH2F("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_EXCEPT", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_OUTSIDE_2D_BJET = new TH2F("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_BJET", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_OUTSIDE_2D_HIGH_E = new TH2F("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_HIGH_E", "", xbins, xmin, xmax, ybins, ymin, ymax);
	h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH = new TH2F("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH", "", xbins, xmin, xmax, ybins, ymin, ymax);

	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_OUTSIDE_2D);
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_OUTSIDE_2D_CONTROL);
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_OUTSIDE_2D_EXCEPT);
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_OUTSIDE_2D_PRE);
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_OUTSIDE_2D_BJET);
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_OUTSIDE_2D_HIGH_E);
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D.push_back(h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH);

	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_OUTSIDE_2D");
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_CONTROL");
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_EXCEPT");
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_PRE");
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_BJET");
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_HIGH_E");
	hv_Mass_DeltaPhi_Combination_OUTSIDE_2D_names.push_back("h_Mass_DeltaPhi_Combination_OUTSIDE_2D_TRUTH");

}


/// ------------------- TRUTHRECONSTRUCTIONCHECKS ---------------- ///

// -- the invariant mass of the TRUTH visible tau 0
void MC_Analysis::Book_lep_1_vis_mass(int bins, double min, double max) {
	h_lep_1_vis_mass = new TH1F("h_lep_1_vis_mass", "", bins, min, max);
	h_lep_1_vis_mass_PRE = new TH1F("h_lep_1_vis_mass_PRE", "", bins, min, max);
	h_lep_1_vis_mass_CONTROL = new TH1F("h_lep_1_vis_mass_CONTROL", "", bins, min, max);
	h_lep_1_vis_mass_EXCEPT = new TH1F("h_lep_1_vis_mass_EXCEPT", "", bins, min, max);
	h_lep_1_vis_mass_EXCEPT_FINE = new TH1F("h_lep_1_vis_mass_EXCEPT_FINE", "", 1000, min, max);
	h_lep_1_vis_mass_BJET = new TH1F("h_lep_1_vis_mass_BJET", "", bins, min, max);
	h_lep_1_vis_mass_HIGH_E = new TH1F("h_lep_1_vis_mass_HIGH_E", "", bins, min, max);
	h_lep_1_vis_mass_TRUTH = new TH1F("h_lep_1_vis_mass_TRUTH", "", bins, min, max);

	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass);
	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass_CONTROL);
	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass_EXCEPT);
	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass_EXCEPT_FINE);
	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass_PRE);
	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass_BJET);
	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass_HIGH_E);
	hv_lep_1_vis_mass.push_back(h_lep_1_vis_mass_TRUTH);

	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass");
	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass_CONTROL");
	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass_EXCEPT");
	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass_EXCEPT_FINE");
	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass_PRE");
	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass_BJET");
	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass_HIGH_E");
	hv_lep_1_vis_mass_names.push_back("h_lep_1_vis_mass_TRUTH");

}


// -- the invariant mass of the TRUTH visible tau 1
void MC_Analysis::Book_lep_0_vis_mass(int bins, double min, double max) {
	h_lep_0_vis_mass = new TH1F("h_lep_0_vis_mass", "", bins, min, max);
	h_lep_0_vis_mass_PRE = new TH1F("h_lep_0_vis_mass_PRE", "", bins, min, max);
	h_lep_0_vis_mass_CONTROL = new TH1F("h_lep_0_vis_mass_CONTROL", "", bins, min, max);
	h_lep_0_vis_mass_EXCEPT = new TH1F("h_lep_0_vis_mass_EXCEPT", "", bins, min, max);
	h_lep_0_vis_mass_EXCEPT_FINE = new TH1F("h_lep_0_vis_mass_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_vis_mass_BJET = new TH1F("h_lep_0_vis_mass_BJET", "", bins, min, max);
	h_lep_0_vis_mass_HIGH_E = new TH1F("h_lep_0_vis_mass_HIGH_E", "", bins, min, max);
	h_lep_0_vis_mass_TRUTH = new TH1F("h_lep_0_vis_mass_TRUTH", "", bins, min, max);

	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass);
	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass_CONTROL);
	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass_EXCEPT);
	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass_EXCEPT_FINE);
	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass_PRE);
	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass_BJET);
	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass_HIGH_E);
	hv_lep_0_vis_mass.push_back(h_lep_0_vis_mass_TRUTH);

	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass");
	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass_CONTROL");
	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass_EXCEPT");
	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass_EXCEPT_FINE");
	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass_PRE");
	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass_BJET");
	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass_HIGH_E");
	hv_lep_0_vis_mass_names.push_back("h_lep_0_vis_mass_TRUTH");

}


/// ------------------- lep_1_invis_mass: ---------------- ///

/// ------------------- lep_0_invis_mass: ---------------- ///

// -- the invariant mass of the TRUTH visible and invisible tau 0
void MC_Analysis::Book_lep_0_invis_vis_mass(int bins, double min, double max) {
	h_lep_0_invis_vis_mass = new TH1F("h_lep_0_invis_vis_mass", "", bins, min, max);
	h_lep_0_invis_vis_mass_PRE = new TH1F("h_lep_0_invis_vis_mass_PRE", "", bins, min, max);
	h_lep_0_invis_vis_mass_CONTROL = new TH1F("h_lep_0_invis_vis_mass_CONTROL", "", bins, min, max);
	h_lep_0_invis_vis_mass_EXCEPT = new TH1F("h_lep_0_invis_vis_mass_EXCEPT", "", bins, min, max);
	h_lep_0_invis_vis_mass_EXCEPT_FINE = new TH1F("h_lep_0_invis_vis_mass_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_invis_vis_mass_BJET = new TH1F("h_lep_0_invis_vis_mass_BJET", "", bins, min, max);
	h_lep_0_invis_vis_mass_HIGH_E = new TH1F("h_lep_0_invis_vis_mass_HIGH_E", "", bins, min, max);
	h_lep_0_invis_vis_mass_TRUTH = new TH1F("h_lep_0_invis_vis_mass_TRUTH", "", bins, min, max);

	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass);
	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass_CONTROL);
	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass_EXCEPT);
	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass_EXCEPT_FINE);
	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass_PRE);
	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass_BJET);
	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass_HIGH_E);
	hv_lep_0_invis_vis_mass.push_back(h_lep_0_invis_vis_mass_TRUTH);

	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass");
	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass_CONTROL");
	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass_EXCEPT");
	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass_EXCEPT_FINE");
	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass_PRE");
	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass_BJET");
	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass_HIGH_E");
	hv_lep_0_invis_vis_mass_names.push_back("h_lep_0_invis_vis_mass_TRUTH");

}


// -- the invariant mass of the TRUTH visible and invisible tau 1
void MC_Analysis::Book_lep_1_invis_vis_mass(int bins, double min, double max) {
	h_lep_1_invis_vis_mass = new TH1F("h_lep_1_invis_vis_mass", "", bins, min, max);
	h_lep_1_invis_vis_mass_PRE = new TH1F("h_lep_1_invis_vis_mass_PRE", "", bins, min, max);
	h_lep_1_invis_vis_mass_CONTROL = new TH1F("h_lep_1_invis_vis_mass_CONTROL", "", bins, min, max);
	h_lep_1_invis_vis_mass_EXCEPT = new TH1F("h_lep_1_invis_vis_mass_EXCEPT", "", bins, min, max);
	h_lep_1_invis_vis_mass_EXCEPT_FINE = new TH1F("h_lep_1_invis_vis_mass_EXCEPT_FINE", "", 1000, min, max);
	h_lep_1_invis_vis_mass_BJET = new TH1F("h_lep_1_invis_vis_mass_BJET", "", bins, min, max);
	h_lep_1_invis_vis_mass_HIGH_E = new TH1F("h_lep_1_invis_vis_mass_HIGH_E", "", bins, min, max);
	h_lep_1_invis_vis_mass_TRUTH = new TH1F("h_lep_1_invis_vis_mass_TRUTH", "", bins, min, max);

	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass);
	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass_CONTROL);
	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass_EXCEPT);
	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass_EXCEPT_FINE);
	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass_PRE);
	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass_BJET);
	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass_HIGH_E);
	hv_lep_1_invis_vis_mass.push_back(h_lep_1_invis_vis_mass_TRUTH);

	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass");
	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass_CONTROL");
	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass_EXCEPT");
	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass_EXCEPT_FINE");
	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass_PRE");
	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass_BJET");
	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass_HIGH_E");
	hv_lep_1_invis_vis_mass_names.push_back("h_lep_1_invis_vis_mass_TRUTH");

}


// --  invariant mass of the TRUTH di-tau
void MC_Analysis::Book_lep_0_lep_1_invis_vis_mass(int bins, double min, double max) {
	h_lep_0_lep_1_invis_vis_mass = new TH1F("h_lep_0_lep_1_invis_vis_mass", "", bins, min, max);
	h_lep_0_lep_1_invis_vis_mass_PRE = new TH1F("h_lep_0_lep_1_invis_vis_mass_PRE", "", bins, min, max);
	h_lep_0_lep_1_invis_vis_mass_CONTROL = new TH1F("h_lep_0_lep_1_invis_vis_mass_CONTROL", "", bins, min, max);
	h_lep_0_lep_1_invis_vis_mass_EXCEPT = new TH1F("h_lep_0_lep_1_invis_vis_mass_EXCEPT", "", bins, min, max);
	h_lep_0_lep_1_invis_vis_mass_EXCEPT_FINE = new TH1F("h_lep_0_lep_1_invis_vis_mass_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_lep_1_invis_vis_mass_BJET = new TH1F("h_lep_0_lep_1_invis_vis_mass_BJET", "", bins, min, max);
	h_lep_0_lep_1_invis_vis_mass_HIGH_E = new TH1F("h_lep_0_lep_1_invis_vis_mass_HIGH_E", "", bins, min, max);
	h_lep_0_lep_1_invis_vis_mass_TRUTH = new TH1F("h_lep_0_lep_1_invis_vis_mass_TRUTH", "", bins, min, max);

	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass);
	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass_CONTROL);
	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass_EXCEPT);
	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass_EXCEPT_FINE);
	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass_PRE);
	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass_BJET);
	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass_HIGH_E);
	hv_lep_0_lep_1_invis_vis_mass.push_back(h_lep_0_lep_1_invis_vis_mass_TRUTH);

	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass");
	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass_CONTROL");
	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass_EXCEPT");
	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass_EXCEPT_FINE");
	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass_PRE");
	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass_BJET");
	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass_HIGH_E");
	hv_lep_0_lep_1_invis_vis_mass_names.push_back("h_lep_0_lep_1_invis_vis_mass_TRUTH");

}


// -- energy of the TRUTH missing energy
void MC_Analysis::Book_met_truth_energy(int bins, double min, double max) {
	h_met_truth_energy = new TH1F("h_met_truth_energy", "", bins, min, max);
	h_met_truth_energy_PRE = new TH1F("h_met_truth_energy_PRE", "", bins, min, max);
	h_met_truth_energy_CONTROL = new TH1F("h_met_truth_energy_CONTROL", "", bins, min, max);
	h_met_truth_energy_EXCEPT = new TH1F("h_met_truth_energy_EXCEPT", "", bins, min, max);
	h_met_truth_energy_EXCEPT_FINE = new TH1F("h_met_truth_energy_EXCEPT_FINE", "", 1000, min, max);
	h_met_truth_energy_BJET = new TH1F("h_met_truth_energy_BJET", "", bins, min, max);
	h_met_truth_energy_HIGH_E = new TH1F("h_met_truth_energy_HIGH_E", "", bins, min, max);
	h_met_truth_energy_TRUTH = new TH1F("h_met_truth_energy_TRUTH", "", bins, min, max);

	hv_met_truth_energy.push_back(h_met_truth_energy);
	hv_met_truth_energy.push_back(h_met_truth_energy_CONTROL);
	hv_met_truth_energy.push_back(h_met_truth_energy_EXCEPT);
	hv_met_truth_energy.push_back(h_met_truth_energy_EXCEPT_FINE);
	hv_met_truth_energy.push_back(h_met_truth_energy_PRE);
	hv_met_truth_energy.push_back(h_met_truth_energy_BJET);
	hv_met_truth_energy.push_back(h_met_truth_energy_HIGH_E);
	hv_met_truth_energy.push_back(h_met_truth_energy_TRUTH);

	hv_met_truth_energy_names.push_back("h_met_truth_energy");
	hv_met_truth_energy_names.push_back("h_met_truth_energy_CONTROL");
	hv_met_truth_energy_names.push_back("h_met_truth_energy_EXCEPT");
	hv_met_truth_energy_names.push_back("h_met_truth_energy_EXCEPT_FINE");
	hv_met_truth_energy_names.push_back("h_met_truth_energy_PRE");
	hv_met_truth_energy_names.push_back("h_met_truth_energy_BJET");
	hv_met_truth_energy_names.push_back("h_met_truth_energy_HIGH_E");
	hv_met_truth_energy_names.push_back("h_met_truth_energy_TRUTH");

}


// -- energy of TRUTH invis tau 0
void MC_Analysis::Book_lep_0_invis_energy(int bins, double min, double max) {
	h_lep_0_invis_energy = new TH1F("h_lep_0_invis_energy", "", bins, min, max);
	h_lep_0_invis_energy_PRE = new TH1F("h_lep_0_invis_energy_PRE", "", bins, min, max);
	h_lep_0_invis_energy_CONTROL = new TH1F("h_lep_0_invis_energy_CONTROL", "", bins, min, max);
	h_lep_0_invis_energy_EXCEPT = new TH1F("h_lep_0_invis_energy_EXCEPT", "", bins, min, max);
	h_lep_0_invis_energy_EXCEPT_FINE = new TH1F("h_lep_0_invis_energy_EXCEPT_FINE", "", 1000, min, max);
	h_lep_0_invis_energy_BJET = new TH1F("h_lep_0_invis_energy_BJET", "", bins, min, max);
	h_lep_0_invis_energy_HIGH_E = new TH1F("h_lep_0_invis_energy_HIGH_E", "", bins, min, max);
	h_lep_0_invis_energy_TRUTH = new TH1F("h_lep_0_invis_energy_TRUTH", "", bins, min, max);

	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy);
	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy_CONTROL);
	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy_EXCEPT);
	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy_EXCEPT_FINE);
	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy_PRE);
	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy_BJET);
	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy_HIGH_E);
	hv_lep_0_invis_energy.push_back(h_lep_0_invis_energy_TRUTH);

	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy");
	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy_CONTROL");
	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy_EXCEPT");
	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy_EXCEPT_FINE");
	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy_PRE");
	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy_BJET");
	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy_HIGH_E");
	hv_lep_0_invis_energy_names.push_back("h_lep_0_invis_energy_TRUTH");

}


// -- energy of TRUTH invis tau 1
void MC_Analysis::Book_lep_1_invis_energy(int bins, double min, double max) {
	h_lep_1_invis_energy = new TH1F("h_lep_1_invis_energy", "", bins, min, max);
	h_lep_1_invis_energy_PRE = new TH1F("h_lep_1_invis_energy_PRE", "", bins, min, max);
	h_lep_1_invis_energy_CONTROL = new TH1F("h_lep_1_invis_energy_CONTROL", "", bins, min, max);
	h_lep_1_invis_energy_EXCEPT = new TH1F("h_lep_1_invis_energy_EXCEPT", "", bins, min, max);
	h_lep_1_invis_energy_EXCEPT_FINE = new TH1F("h_lep_1_invis_energy_EXCEPT_FINE", "", 1000, min, max);
	h_lep_1_invis_energy_BJET = new TH1F("h_lep_1_invis_energy_BJET", "", bins, min, max);
	h_lep_1_invis_energy_HIGH_E = new TH1F("h_lep_1_invis_energy_HIGH_E", "", bins, min, max);
	h_lep_1_invis_energy_TRUTH = new TH1F("h_lep_1_invis_energy_TRUTH", "", bins, min, max);

	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy);
	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy_CONTROL);
	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy_EXCEPT);
	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy_EXCEPT_FINE);
	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy_PRE);
	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy_BJET);
	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy_HIGH_E);
	hv_lep_1_invis_energy.push_back(h_lep_1_invis_energy_TRUTH);

	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy");
	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy_CONTROL");
	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy_EXCEPT");
	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy_EXCEPT_FINE");
	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy_PRE");
	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy_BJET");
	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy_HIGH_E");
	hv_lep_1_invis_energy_names.push_back("h_lep_1_invis_energy_TRUTH");

}


// --  Boosted decision stuff for mis identified electrons as taus (test run)
void MC_Analysis::Book_BDT_test(int bins, double min, double max) {
	h_BDT_test = new TH1F("h_BDT_test", "", bins, min, max);
	h_BDT_test_PRE = new TH1F("h_BDT_test_PRE", "", bins, min, max);
	h_BDT_test_CONTROL = new TH1F("h_BDT_test_CONTROL", "", bins, min, max);
	h_BDT_test_EXCEPT = new TH1F("h_BDT_test_EXCEPT", "", bins, min, max);
	h_BDT_test_EXCEPT_FINE = new TH1F("h_BDT_test_EXCEPT_FINE", "", 1000, min, max);
	h_BDT_test_BJET = new TH1F("h_BDT_test_BJET", "", bins, min, max);
	h_BDT_test_HIGH_E = new TH1F("h_BDT_test_HIGH_E", "", bins, min, max);
	h_BDT_test_TRUTH = new TH1F("h_BDT_test_TRUTH", "", bins, min, max);

	hv_BDT_test.push_back(h_BDT_test);
	hv_BDT_test.push_back(h_BDT_test_CONTROL);
	hv_BDT_test.push_back(h_BDT_test_EXCEPT);
	hv_BDT_test.push_back(h_BDT_test_EXCEPT_FINE);
	hv_BDT_test.push_back(h_BDT_test_PRE);
	hv_BDT_test.push_back(h_BDT_test_BJET);
	hv_BDT_test.push_back(h_BDT_test_HIGH_E);
	hv_BDT_test.push_back(h_BDT_test_TRUTH);

	hv_BDT_test_names.push_back("h_BDT_test");
	hv_BDT_test_names.push_back("h_BDT_test_CONTROL");
	hv_BDT_test_names.push_back("h_BDT_test_EXCEPT");
	hv_BDT_test_names.push_back("h_BDT_test_EXCEPT_FINE");
	hv_BDT_test_names.push_back("h_BDT_test_PRE");
	hv_BDT_test_names.push_back("h_BDT_test_BJET");
	hv_BDT_test_names.push_back("h_BDT_test_HIGH_E");
	hv_BDT_test_names.push_back("h_BDT_test_TRUTH");

}


// --  Boosted decision stuff for mis identified electrons as taus (test run)
void MC_Analysis::Book_BDT_test1(int bins, double min, double max) {
	h_BDT_test1 = new TH1F("h_BDT_test1", "", bins, min, max);
	h_BDT_test1_PRE = new TH1F("h_BDT_test1_PRE", "", bins, min, max);
	h_BDT_test1_CONTROL = new TH1F("h_BDT_test1_CONTROL", "", bins, min, max);
	h_BDT_test1_EXCEPT = new TH1F("h_BDT_test1_EXCEPT", "", bins, min, max);
	h_BDT_test1_EXCEPT_FINE = new TH1F("h_BDT_test1_EXCEPT_FINE", "", 1000, min, max);
	h_BDT_test1_BJET = new TH1F("h_BDT_test1_BJET", "", bins, min, max);
	h_BDT_test1_HIGH_E = new TH1F("h_BDT_test1_HIGH_E", "", bins, min, max);
	h_BDT_test1_TRUTH = new TH1F("h_BDT_test1_TRUTH", "", bins, min, max);

	hv_BDT_test1.push_back(h_BDT_test1);
	hv_BDT_test1.push_back(h_BDT_test1_CONTROL);
	hv_BDT_test1.push_back(h_BDT_test1_EXCEPT);
	hv_BDT_test1.push_back(h_BDT_test1_EXCEPT_FINE);
	hv_BDT_test1.push_back(h_BDT_test1_PRE);
	hv_BDT_test1.push_back(h_BDT_test1_BJET);
	hv_BDT_test1.push_back(h_BDT_test1_HIGH_E);
	hv_BDT_test1.push_back(h_BDT_test1_TRUTH);

	hv_BDT_test1_names.push_back("h_BDT_test1");
	hv_BDT_test1_names.push_back("h_BDT_test1_CONTROL");
	hv_BDT_test1_names.push_back("h_BDT_test1_EXCEPT");
	hv_BDT_test1_names.push_back("h_BDT_test1_EXCEPT_FINE");
	hv_BDT_test1_names.push_back("h_BDT_test1_PRE");
	hv_BDT_test1_names.push_back("h_BDT_test1_BJET");
	hv_BDT_test1_names.push_back("h_BDT_test1_HIGH_E");
	hv_BDT_test1_names.push_back("h_BDT_test1_TRUTH");

}


// --  Boosted decision stuff for mis identified electrons as taus (test run)
void MC_Analysis::Book_BDT_test2(int bins, double min, double max) {
	h_BDT_test2 = new TH1F("h_BDT_test2", "", bins, min, max);
	h_BDT_test2_PRE = new TH1F("h_BDT_test2_PRE", "", bins, min, max);
	h_BDT_test2_CONTROL = new TH1F("h_BDT_test2_CONTROL", "", bins, min, max);
	h_BDT_test2_EXCEPT = new TH1F("h_BDT_test2_EXCEPT", "", bins, min, max);
	h_BDT_test2_EXCEPT_FINE = new TH1F("h_BDT_test2_EXCEPT_FINE", "", 1000, min, max);
	h_BDT_test2_BJET = new TH1F("h_BDT_test2_BJET", "", bins, min, max);
	h_BDT_test2_HIGH_E = new TH1F("h_BDT_test2_HIGH_E", "", bins, min, max);
	h_BDT_test2_TRUTH = new TH1F("h_BDT_test2_TRUTH", "", bins, min, max);

	hv_BDT_test2.push_back(h_BDT_test2);
	hv_BDT_test2.push_back(h_BDT_test2_CONTROL);
	hv_BDT_test2.push_back(h_BDT_test2_EXCEPT);
	hv_BDT_test2.push_back(h_BDT_test2_EXCEPT_FINE);
	hv_BDT_test2.push_back(h_BDT_test2_PRE);
	hv_BDT_test2.push_back(h_BDT_test2_BJET);
	hv_BDT_test2.push_back(h_BDT_test2_HIGH_E);
	hv_BDT_test2.push_back(h_BDT_test2_TRUTH);

	hv_BDT_test2_names.push_back("h_BDT_test2");
	hv_BDT_test2_names.push_back("h_BDT_test2_CONTROL");
	hv_BDT_test2_names.push_back("h_BDT_test2_EXCEPT");
	hv_BDT_test2_names.push_back("h_BDT_test2_EXCEPT_FINE");
	hv_BDT_test2_names.push_back("h_BDT_test2_PRE");
	hv_BDT_test2_names.push_back("h_BDT_test2_BJET");
	hv_BDT_test2_names.push_back("h_BDT_test2_HIGH_E");
	hv_BDT_test2_names.push_back("h_BDT_test2_TRUTH");

}


// --  Boosted decision stuff for mis identified electrons as taus (test run)
void MC_Analysis::Book_BDT_test3(int bins, double min, double max) {
	h_BDT_test3 = new TH1F("h_BDT_test3", "", bins, min, max);
	h_BDT_test3_PRE = new TH1F("h_BDT_test3_PRE", "", bins, min, max);
	h_BDT_test3_CONTROL = new TH1F("h_BDT_test3_CONTROL", "", bins, min, max);
	h_BDT_test3_EXCEPT = new TH1F("h_BDT_test3_EXCEPT", "", bins, min, max);
	h_BDT_test3_EXCEPT_FINE = new TH1F("h_BDT_test3_EXCEPT_FINE", "", 1000, min, max);
	h_BDT_test3_BJET = new TH1F("h_BDT_test3_BJET", "", bins, min, max);
	h_BDT_test3_HIGH_E = new TH1F("h_BDT_test3_HIGH_E", "", bins, min, max);
	h_BDT_test3_TRUTH = new TH1F("h_BDT_test3_TRUTH", "", bins, min, max);

	hv_BDT_test3.push_back(h_BDT_test3);
	hv_BDT_test3.push_back(h_BDT_test3_CONTROL);
	hv_BDT_test3.push_back(h_BDT_test3_EXCEPT);
	hv_BDT_test3.push_back(h_BDT_test3_EXCEPT_FINE);
	hv_BDT_test3.push_back(h_BDT_test3_PRE);
	hv_BDT_test3.push_back(h_BDT_test3_BJET);
	hv_BDT_test3.push_back(h_BDT_test3_HIGH_E);
	hv_BDT_test3.push_back(h_BDT_test3_TRUTH);

	hv_BDT_test3_names.push_back("h_BDT_test3");
	hv_BDT_test3_names.push_back("h_BDT_test3_CONTROL");
	hv_BDT_test3_names.push_back("h_BDT_test3_EXCEPT");
	hv_BDT_test3_names.push_back("h_BDT_test3_EXCEPT_FINE");
	hv_BDT_test3_names.push_back("h_BDT_test3_PRE");
	hv_BDT_test3_names.push_back("h_BDT_test3_BJET");
	hv_BDT_test3_names.push_back("h_BDT_test3_HIGH_E");
	hv_BDT_test3_names.push_back("h_BDT_test3_TRUTH");

}


// --  Boosted decision stuff for mis identified electrons as taus (test run)
void MC_Analysis::Book_BDT_test4(int bins, double min, double max) {
	h_BDT_test4 = new TH1F("h_BDT_test4", "", bins, min, max);
	h_BDT_test4_PRE = new TH1F("h_BDT_test4_PRE", "", bins, min, max);
	h_BDT_test4_CONTROL = new TH1F("h_BDT_test4_CONTROL", "", bins, min, max);
	h_BDT_test4_EXCEPT = new TH1F("h_BDT_test4_EXCEPT", "", bins, min, max);
	h_BDT_test4_EXCEPT_FINE = new TH1F("h_BDT_test4_EXCEPT_FINE", "", 1000, min, max);
	h_BDT_test4_BJET = new TH1F("h_BDT_test4_BJET", "", bins, min, max);
	h_BDT_test4_HIGH_E = new TH1F("h_BDT_test4_HIGH_E", "", bins, min, max);
	h_BDT_test4_TRUTH = new TH1F("h_BDT_test4_TRUTH", "", bins, min, max);

	hv_BDT_test4.push_back(h_BDT_test4);
	hv_BDT_test4.push_back(h_BDT_test4_CONTROL);
	hv_BDT_test4.push_back(h_BDT_test4_EXCEPT);
	hv_BDT_test4.push_back(h_BDT_test4_EXCEPT_FINE);
	hv_BDT_test4.push_back(h_BDT_test4_PRE);
	hv_BDT_test4.push_back(h_BDT_test4_BJET);
	hv_BDT_test4.push_back(h_BDT_test4_HIGH_E);
	hv_BDT_test4.push_back(h_BDT_test4_TRUTH);

	hv_BDT_test4_names.push_back("h_BDT_test4");
	hv_BDT_test4_names.push_back("h_BDT_test4_CONTROL");
	hv_BDT_test4_names.push_back("h_BDT_test4_EXCEPT");
	hv_BDT_test4_names.push_back("h_BDT_test4_EXCEPT_FINE");
	hv_BDT_test4_names.push_back("h_BDT_test4_PRE");
	hv_BDT_test4_names.push_back("h_BDT_test4_BJET");
	hv_BDT_test4_names.push_back("h_BDT_test4_HIGH_E");
	hv_BDT_test4_names.push_back("h_BDT_test4_TRUTH");

}


#endif