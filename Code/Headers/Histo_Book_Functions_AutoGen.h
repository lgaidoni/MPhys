

///------------------------------- bjet_0 --------------------------///

//Histogram booking function for bjet_0
void MC_Analysis::Book_bjet_0(int bins, double min, double max) {
	h_bjet_0 = new TH1F("h_bjet_0", "", bins, min, max);
	h_bjet_0_CONTROL = new TH1F("h_bjet_0_CONTROL", "", bins, min, max);
	h_bjet_0_EXCEPT = new TH1F("h_bjet_0_EXCEPT", "", bins, min, max);
	h_bjet_0_EXCEPT_FINE = new TH1F("h_bjet_0_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_PRE = new TH1F("h_bjet_0_PRE", "", bins, min, max);
	h_bjet_0_BJET = new TH1F("h_bjet_0_BJET", "", bins, min, max);
	h_bjet_0_HIGH_E = new TH1F("h_bjet_0_HIGH_E", "", bins, min, max);
	h_bjet_0_TRUTH = new TH1F("h_bjet_0_TRUTH", "", bins, min, max);

	hv_bjet_0.push_back(h_bjet_0);
	hv_bjet_0.push_back(h_bjet_0_CONTROL);
	hv_bjet_0.push_back(h_bjet_0_EXCEPT);
	hv_bjet_0.push_back(h_bjet_0_EXCEPT_FINE);
	hv_bjet_0.push_back(h_bjet_0_PRE);
	hv_bjet_0.push_back(h_bjet_0_BJET);
	hv_bjet_0.push_back(h_bjet_0_HIGH_E);
	hv_bjet_0.push_back(h_bjet_0_TRUTH);

	hv_bjet_0_names.push_back("h_bjet_0");
	hv_bjet_0_names.push_back("h_bjet_0_CONTROL");
	hv_bjet_0_names.push_back("h_bjet_0_EXCEPT");
	hv_bjet_0_names.push_back("h_bjet_0_EXCEPT_FINE");
	hv_bjet_0_names.push_back("h_bjet_0_PRE");
	hv_bjet_0_names.push_back("h_bjet_0_BJET");
	hv_bjet_0_names.push_back("h_bjet_0_HIGH_E");
	hv_bjet_0_names.push_back("h_bjet_0_TRUTH");

}

//Histogram booking function for bjet_0_NOMINAL_central_jets_effSF_JVT
void MC_Analysis::Book_bjet_0_NOMINAL_central_jets_effSF_JVT(int bins, double min, double max) {
	h_bjet_0_NOMINAL_central_jets_effSF_JVT = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_effSF_JVT_CONTROL = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_effSF_JVT_PRE = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT_PRE", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_effSF_JVT_BJET = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT_BJET", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_effSF_JVT_TRUTH = new TH1F("h_bjet_0_NOMINAL_central_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT);
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT_CONTROL);
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT);
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE);
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT_PRE);
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT_BJET);
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E);
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_effSF_JVT_TRUTH);

	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT");
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT_CONTROL");
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT");
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE");
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT_PRE");
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT_BJET");
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E");
	hv_bjet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for bjet_0_NOMINAL_central_jets_ineffSF_JVT
void MC_Analysis::Book_bjet_0_NOMINAL_central_jets_ineffSF_JVT(int bins, double min, double max) {
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_PRE = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_BJET = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH = new TH1F("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT);
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL);
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT);
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_PRE);
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_BJET);
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E);
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH);

	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT");
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL");
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT");
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_PRE");
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_BJET");
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E");
	hv_bjet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for bjet_0_NOMINAL_effSF_MV2c10
void MC_Analysis::Book_bjet_0_NOMINAL_effSF_MV2c10(int bins, double min, double max) {
	h_bjet_0_NOMINAL_effSF_MV2c10 = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10", "", bins, min, max);
	h_bjet_0_NOMINAL_effSF_MV2c10_CONTROL = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10_CONTROL", "", bins, min, max);
	h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT", "", bins, min, max);
	h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_NOMINAL_effSF_MV2c10_PRE = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10_PRE", "", bins, min, max);
	h_bjet_0_NOMINAL_effSF_MV2c10_BJET = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10_BJET", "", bins, min, max);
	h_bjet_0_NOMINAL_effSF_MV2c10_HIGH_E = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10_HIGH_E", "", bins, min, max);
	h_bjet_0_NOMINAL_effSF_MV2c10_TRUTH = new TH1F("h_bjet_0_NOMINAL_effSF_MV2c10_TRUTH", "", bins, min, max);

	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10);
	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10_CONTROL);
	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT);
	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE);
	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10_PRE);
	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10_BJET);
	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10_HIGH_E);
	hv_bjet_0_NOMINAL_effSF_MV2c10.push_back(h_bjet_0_NOMINAL_effSF_MV2c10_TRUTH);

	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10");
	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10_CONTROL");
	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT");
	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE");
	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10_PRE");
	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10_BJET");
	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10_HIGH_E");
	hv_bjet_0_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_effSF_MV2c10_TRUTH");

}

//Histogram booking function for bjet_0_NOMINAL_forward_jets_effSF_JVT
void MC_Analysis::Book_bjet_0_NOMINAL_forward_jets_effSF_JVT(int bins, double min, double max) {
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT_PRE = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_PRE", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT_BJET = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_BJET", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH = new TH1F("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT);
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL);
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT);
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE);
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT_PRE);
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT_BJET);
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E);
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH);

	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT");
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL");
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT");
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE");
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_PRE");
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_BJET");
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E");
	hv_bjet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for bjet_0_NOMINAL_forward_jets_ineffSF_JVT
void MC_Analysis::Book_bjet_0_NOMINAL_forward_jets_ineffSF_JVT(int bins, double min, double max) {
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH = new TH1F("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT);
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL);
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT);
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE);
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET);
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E);
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH);

	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT");
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL");
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT");
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE");
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET");
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E");
	hv_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for bjet_0_NOMINAL_ineffSF_MV2c10
void MC_Analysis::Book_bjet_0_NOMINAL_ineffSF_MV2c10(int bins, double min, double max) {
	h_bjet_0_NOMINAL_ineffSF_MV2c10 = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10", "", bins, min, max);
	h_bjet_0_NOMINAL_ineffSF_MV2c10_CONTROL = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10_CONTROL", "", bins, min, max);
	h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT", "", bins, min, max);
	h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_NOMINAL_ineffSF_MV2c10_PRE = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10_PRE", "", bins, min, max);
	h_bjet_0_NOMINAL_ineffSF_MV2c10_BJET = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10_BJET", "", bins, min, max);
	h_bjet_0_NOMINAL_ineffSF_MV2c10_HIGH_E = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10_HIGH_E", "", bins, min, max);
	h_bjet_0_NOMINAL_ineffSF_MV2c10_TRUTH = new TH1F("h_bjet_0_NOMINAL_ineffSF_MV2c10_TRUTH", "", bins, min, max);

	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10);
	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10_CONTROL);
	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT);
	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE);
	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10_PRE);
	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10_BJET);
	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10_HIGH_E);
	hv_bjet_0_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_0_NOMINAL_ineffSF_MV2c10_TRUTH);

	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10");
	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10_CONTROL");
	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT");
	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE");
	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10_PRE");
	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10_BJET");
	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10_HIGH_E");
	hv_bjet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_0_NOMINAL_ineffSF_MV2c10_TRUTH");

}

//Histogram booking function for bjet_0_b_tag_quantile
void MC_Analysis::Book_bjet_0_b_tag_quantile(int bins, double min, double max) {
	h_bjet_0_b_tag_quantile = new TH1F("h_bjet_0_b_tag_quantile", "", bins, min, max);
	h_bjet_0_b_tag_quantile_CONTROL = new TH1F("h_bjet_0_b_tag_quantile_CONTROL", "", bins, min, max);
	h_bjet_0_b_tag_quantile_EXCEPT = new TH1F("h_bjet_0_b_tag_quantile_EXCEPT", "", bins, min, max);
	h_bjet_0_b_tag_quantile_EXCEPT_FINE = new TH1F("h_bjet_0_b_tag_quantile_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_b_tag_quantile_PRE = new TH1F("h_bjet_0_b_tag_quantile_PRE", "", bins, min, max);
	h_bjet_0_b_tag_quantile_BJET = new TH1F("h_bjet_0_b_tag_quantile_BJET", "", bins, min, max);
	h_bjet_0_b_tag_quantile_HIGH_E = new TH1F("h_bjet_0_b_tag_quantile_HIGH_E", "", bins, min, max);
	h_bjet_0_b_tag_quantile_TRUTH = new TH1F("h_bjet_0_b_tag_quantile_TRUTH", "", bins, min, max);

	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile);
	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile_CONTROL);
	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile_EXCEPT);
	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile_EXCEPT_FINE);
	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile_PRE);
	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile_BJET);
	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile_HIGH_E);
	hv_bjet_0_b_tag_quantile.push_back(h_bjet_0_b_tag_quantile_TRUTH);

	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile");
	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile_CONTROL");
	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile_EXCEPT");
	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile_EXCEPT_FINE");
	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile_PRE");
	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile_BJET");
	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile_HIGH_E");
	hv_bjet_0_b_tag_quantile_names.push_back("h_bjet_0_b_tag_quantile_TRUTH");

}

//Histogram booking function for bjet_0_b_tag_score
void MC_Analysis::Book_bjet_0_b_tag_score(int bins, double min, double max) {
	h_bjet_0_b_tag_score = new TH1F("h_bjet_0_b_tag_score", "", bins, min, max);
	h_bjet_0_b_tag_score_CONTROL = new TH1F("h_bjet_0_b_tag_score_CONTROL", "", bins, min, max);
	h_bjet_0_b_tag_score_EXCEPT = new TH1F("h_bjet_0_b_tag_score_EXCEPT", "", bins, min, max);
	h_bjet_0_b_tag_score_EXCEPT_FINE = new TH1F("h_bjet_0_b_tag_score_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_b_tag_score_PRE = new TH1F("h_bjet_0_b_tag_score_PRE", "", bins, min, max);
	h_bjet_0_b_tag_score_BJET = new TH1F("h_bjet_0_b_tag_score_BJET", "", bins, min, max);
	h_bjet_0_b_tag_score_HIGH_E = new TH1F("h_bjet_0_b_tag_score_HIGH_E", "", bins, min, max);
	h_bjet_0_b_tag_score_TRUTH = new TH1F("h_bjet_0_b_tag_score_TRUTH", "", bins, min, max);

	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score);
	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score_CONTROL);
	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score_EXCEPT);
	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score_EXCEPT_FINE);
	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score_PRE);
	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score_BJET);
	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score_HIGH_E);
	hv_bjet_0_b_tag_score.push_back(h_bjet_0_b_tag_score_TRUTH);

	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score");
	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score_CONTROL");
	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score_EXCEPT");
	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score_EXCEPT_FINE");
	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score_PRE");
	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score_BJET");
	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score_HIGH_E");
	hv_bjet_0_b_tag_score_names.push_back("h_bjet_0_b_tag_score_TRUTH");

}

//Histogram booking function for bjet_0_b_tagged
void MC_Analysis::Book_bjet_0_b_tagged(int bins, double min, double max) {
	h_bjet_0_b_tagged = new TH1F("h_bjet_0_b_tagged", "", bins, min, max);
	h_bjet_0_b_tagged_CONTROL = new TH1F("h_bjet_0_b_tagged_CONTROL", "", bins, min, max);
	h_bjet_0_b_tagged_EXCEPT = new TH1F("h_bjet_0_b_tagged_EXCEPT", "", bins, min, max);
	h_bjet_0_b_tagged_EXCEPT_FINE = new TH1F("h_bjet_0_b_tagged_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_b_tagged_PRE = new TH1F("h_bjet_0_b_tagged_PRE", "", bins, min, max);
	h_bjet_0_b_tagged_BJET = new TH1F("h_bjet_0_b_tagged_BJET", "", bins, min, max);
	h_bjet_0_b_tagged_HIGH_E = new TH1F("h_bjet_0_b_tagged_HIGH_E", "", bins, min, max);
	h_bjet_0_b_tagged_TRUTH = new TH1F("h_bjet_0_b_tagged_TRUTH", "", bins, min, max);

	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged);
	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged_CONTROL);
	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged_EXCEPT);
	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged_EXCEPT_FINE);
	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged_PRE);
	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged_BJET);
	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged_HIGH_E);
	hv_bjet_0_b_tagged.push_back(h_bjet_0_b_tagged_TRUTH);

	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged");
	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged_CONTROL");
	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged_EXCEPT");
	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged_EXCEPT_FINE");
	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged_PRE");
	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged_BJET");
	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged_HIGH_E");
	hv_bjet_0_b_tagged_names.push_back("h_bjet_0_b_tagged_TRUTH");

}

//Histogram booking function for bjet_0_fjvt
void MC_Analysis::Book_bjet_0_fjvt(int bins, double min, double max) {
	h_bjet_0_fjvt = new TH1F("h_bjet_0_fjvt", "", bins, min, max);
	h_bjet_0_fjvt_CONTROL = new TH1F("h_bjet_0_fjvt_CONTROL", "", bins, min, max);
	h_bjet_0_fjvt_EXCEPT = new TH1F("h_bjet_0_fjvt_EXCEPT", "", bins, min, max);
	h_bjet_0_fjvt_EXCEPT_FINE = new TH1F("h_bjet_0_fjvt_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_fjvt_PRE = new TH1F("h_bjet_0_fjvt_PRE", "", bins, min, max);
	h_bjet_0_fjvt_BJET = new TH1F("h_bjet_0_fjvt_BJET", "", bins, min, max);
	h_bjet_0_fjvt_HIGH_E = new TH1F("h_bjet_0_fjvt_HIGH_E", "", bins, min, max);
	h_bjet_0_fjvt_TRUTH = new TH1F("h_bjet_0_fjvt_TRUTH", "", bins, min, max);

	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt);
	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt_CONTROL);
	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt_EXCEPT);
	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt_EXCEPT_FINE);
	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt_PRE);
	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt_BJET);
	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt_HIGH_E);
	hv_bjet_0_fjvt.push_back(h_bjet_0_fjvt_TRUTH);

	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt");
	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt_CONTROL");
	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt_EXCEPT");
	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt_EXCEPT_FINE");
	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt_PRE");
	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt_BJET");
	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt_HIGH_E");
	hv_bjet_0_fjvt_names.push_back("h_bjet_0_fjvt_TRUTH");

}

//Histogram booking function for bjet_0_flavorlabel
void MC_Analysis::Book_bjet_0_flavorlabel(int bins, double min, double max) {
	h_bjet_0_flavorlabel = new TH1F("h_bjet_0_flavorlabel", "", bins, min, max);
	h_bjet_0_flavorlabel_CONTROL = new TH1F("h_bjet_0_flavorlabel_CONTROL", "", bins, min, max);
	h_bjet_0_flavorlabel_EXCEPT = new TH1F("h_bjet_0_flavorlabel_EXCEPT", "", bins, min, max);
	h_bjet_0_flavorlabel_EXCEPT_FINE = new TH1F("h_bjet_0_flavorlabel_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_flavorlabel_PRE = new TH1F("h_bjet_0_flavorlabel_PRE", "", bins, min, max);
	h_bjet_0_flavorlabel_BJET = new TH1F("h_bjet_0_flavorlabel_BJET", "", bins, min, max);
	h_bjet_0_flavorlabel_HIGH_E = new TH1F("h_bjet_0_flavorlabel_HIGH_E", "", bins, min, max);
	h_bjet_0_flavorlabel_TRUTH = new TH1F("h_bjet_0_flavorlabel_TRUTH", "", bins, min, max);

	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel);
	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel_CONTROL);
	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel_EXCEPT);
	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel_EXCEPT_FINE);
	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel_PRE);
	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel_BJET);
	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel_HIGH_E);
	hv_bjet_0_flavorlabel.push_back(h_bjet_0_flavorlabel_TRUTH);

	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel");
	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel_CONTROL");
	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel_EXCEPT");
	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel_EXCEPT_FINE");
	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel_PRE");
	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel_BJET");
	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel_HIGH_E");
	hv_bjet_0_flavorlabel_names.push_back("h_bjet_0_flavorlabel_TRUTH");

}

//Histogram booking function for bjet_0_flavorlabel_cone
void MC_Analysis::Book_bjet_0_flavorlabel_cone(int bins, double min, double max) {
	h_bjet_0_flavorlabel_cone = new TH1F("h_bjet_0_flavorlabel_cone", "", bins, min, max);
	h_bjet_0_flavorlabel_cone_CONTROL = new TH1F("h_bjet_0_flavorlabel_cone_CONTROL", "", bins, min, max);
	h_bjet_0_flavorlabel_cone_EXCEPT = new TH1F("h_bjet_0_flavorlabel_cone_EXCEPT", "", bins, min, max);
	h_bjet_0_flavorlabel_cone_EXCEPT_FINE = new TH1F("h_bjet_0_flavorlabel_cone_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_flavorlabel_cone_PRE = new TH1F("h_bjet_0_flavorlabel_cone_PRE", "", bins, min, max);
	h_bjet_0_flavorlabel_cone_BJET = new TH1F("h_bjet_0_flavorlabel_cone_BJET", "", bins, min, max);
	h_bjet_0_flavorlabel_cone_HIGH_E = new TH1F("h_bjet_0_flavorlabel_cone_HIGH_E", "", bins, min, max);
	h_bjet_0_flavorlabel_cone_TRUTH = new TH1F("h_bjet_0_flavorlabel_cone_TRUTH", "", bins, min, max);

	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone);
	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone_CONTROL);
	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone_EXCEPT);
	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone_EXCEPT_FINE);
	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone_PRE);
	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone_BJET);
	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone_HIGH_E);
	hv_bjet_0_flavorlabel_cone.push_back(h_bjet_0_flavorlabel_cone_TRUTH);

	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone");
	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone_CONTROL");
	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone_EXCEPT");
	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone_EXCEPT_FINE");
	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone_PRE");
	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone_BJET");
	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone_HIGH_E");
	hv_bjet_0_flavorlabel_cone_names.push_back("h_bjet_0_flavorlabel_cone_TRUTH");

}

//Histogram booking function for bjet_0_flavorlabel_part
void MC_Analysis::Book_bjet_0_flavorlabel_part(int bins, double min, double max) {
	h_bjet_0_flavorlabel_part = new TH1F("h_bjet_0_flavorlabel_part", "", bins, min, max);
	h_bjet_0_flavorlabel_part_CONTROL = new TH1F("h_bjet_0_flavorlabel_part_CONTROL", "", bins, min, max);
	h_bjet_0_flavorlabel_part_EXCEPT = new TH1F("h_bjet_0_flavorlabel_part_EXCEPT", "", bins, min, max);
	h_bjet_0_flavorlabel_part_EXCEPT_FINE = new TH1F("h_bjet_0_flavorlabel_part_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_flavorlabel_part_PRE = new TH1F("h_bjet_0_flavorlabel_part_PRE", "", bins, min, max);
	h_bjet_0_flavorlabel_part_BJET = new TH1F("h_bjet_0_flavorlabel_part_BJET", "", bins, min, max);
	h_bjet_0_flavorlabel_part_HIGH_E = new TH1F("h_bjet_0_flavorlabel_part_HIGH_E", "", bins, min, max);
	h_bjet_0_flavorlabel_part_TRUTH = new TH1F("h_bjet_0_flavorlabel_part_TRUTH", "", bins, min, max);

	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part);
	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part_CONTROL);
	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part_EXCEPT);
	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part_EXCEPT_FINE);
	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part_PRE);
	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part_BJET);
	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part_HIGH_E);
	hv_bjet_0_flavorlabel_part.push_back(h_bjet_0_flavorlabel_part_TRUTH);

	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part");
	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part_CONTROL");
	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part_EXCEPT");
	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part_EXCEPT_FINE");
	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part_PRE");
	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part_BJET");
	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part_HIGH_E");
	hv_bjet_0_flavorlabel_part_names.push_back("h_bjet_0_flavorlabel_part_TRUTH");

}

//Histogram booking function for bjet_0_is_Jvt_HS
void MC_Analysis::Book_bjet_0_is_Jvt_HS(int bins, double min, double max) {
	h_bjet_0_is_Jvt_HS = new TH1F("h_bjet_0_is_Jvt_HS", "", bins, min, max);
	h_bjet_0_is_Jvt_HS_CONTROL = new TH1F("h_bjet_0_is_Jvt_HS_CONTROL", "", bins, min, max);
	h_bjet_0_is_Jvt_HS_EXCEPT = new TH1F("h_bjet_0_is_Jvt_HS_EXCEPT", "", bins, min, max);
	h_bjet_0_is_Jvt_HS_EXCEPT_FINE = new TH1F("h_bjet_0_is_Jvt_HS_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_is_Jvt_HS_PRE = new TH1F("h_bjet_0_is_Jvt_HS_PRE", "", bins, min, max);
	h_bjet_0_is_Jvt_HS_BJET = new TH1F("h_bjet_0_is_Jvt_HS_BJET", "", bins, min, max);
	h_bjet_0_is_Jvt_HS_HIGH_E = new TH1F("h_bjet_0_is_Jvt_HS_HIGH_E", "", bins, min, max);
	h_bjet_0_is_Jvt_HS_TRUTH = new TH1F("h_bjet_0_is_Jvt_HS_TRUTH", "", bins, min, max);

	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS);
	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS_CONTROL);
	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS_EXCEPT);
	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS_EXCEPT_FINE);
	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS_PRE);
	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS_BJET);
	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS_HIGH_E);
	hv_bjet_0_is_Jvt_HS.push_back(h_bjet_0_is_Jvt_HS_TRUTH);

	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS");
	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS_CONTROL");
	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS_EXCEPT");
	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS_EXCEPT_FINE");
	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS_PRE");
	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS_BJET");
	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS_HIGH_E");
	hv_bjet_0_is_Jvt_HS_names.push_back("h_bjet_0_is_Jvt_HS_TRUTH");

}

//Histogram booking function for bjet_0_jvt
void MC_Analysis::Book_bjet_0_jvt(int bins, double min, double max) {
	h_bjet_0_jvt = new TH1F("h_bjet_0_jvt", "", bins, min, max);
	h_bjet_0_jvt_CONTROL = new TH1F("h_bjet_0_jvt_CONTROL", "", bins, min, max);
	h_bjet_0_jvt_EXCEPT = new TH1F("h_bjet_0_jvt_EXCEPT", "", bins, min, max);
	h_bjet_0_jvt_EXCEPT_FINE = new TH1F("h_bjet_0_jvt_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_jvt_PRE = new TH1F("h_bjet_0_jvt_PRE", "", bins, min, max);
	h_bjet_0_jvt_BJET = new TH1F("h_bjet_0_jvt_BJET", "", bins, min, max);
	h_bjet_0_jvt_HIGH_E = new TH1F("h_bjet_0_jvt_HIGH_E", "", bins, min, max);
	h_bjet_0_jvt_TRUTH = new TH1F("h_bjet_0_jvt_TRUTH", "", bins, min, max);

	hv_bjet_0_jvt.push_back(h_bjet_0_jvt);
	hv_bjet_0_jvt.push_back(h_bjet_0_jvt_CONTROL);
	hv_bjet_0_jvt.push_back(h_bjet_0_jvt_EXCEPT);
	hv_bjet_0_jvt.push_back(h_bjet_0_jvt_EXCEPT_FINE);
	hv_bjet_0_jvt.push_back(h_bjet_0_jvt_PRE);
	hv_bjet_0_jvt.push_back(h_bjet_0_jvt_BJET);
	hv_bjet_0_jvt.push_back(h_bjet_0_jvt_HIGH_E);
	hv_bjet_0_jvt.push_back(h_bjet_0_jvt_TRUTH);

	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt");
	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt_CONTROL");
	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt_EXCEPT");
	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt_EXCEPT_FINE");
	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt_PRE");
	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt_BJET");
	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt_HIGH_E");
	hv_bjet_0_jvt_names.push_back("h_bjet_0_jvt_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_0_matched_p4 ----- //
	//Histogram booking function for bjet_0_matched_p4_X
	void MC_Analysis::Book_bjet_0_matched_p4_X(int bins, double min, double max) {
		h_bjet_0_matched_p4_X = new TH1F("h_bjet_0_matched_p4_X","", bins, min, max);
		h_bjet_0_matched_p4_X_CONTROL = new TH1F("h_bjet_0_matched_p4_X_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_X_EXCEPT = new TH1F("h_bjet_0_matched_p4_X_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_X_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_X_PRE = new TH1F("h_bjet_0_matched_p4_X_PRE","", bins, min, max);
		h_bjet_0_matched_p4_X_BJET = new TH1F("h_bjet_0_matched_p4_X_BJET","", bins, min, max);
		h_bjet_0_matched_p4_X_HIGH_E = new TH1F("h_bjet_0_matched_p4_X_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_X_TRUTH = new TH1F("h_bjet_0_matched_p4_X_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X);
		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X_CONTROL);
		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X_EXCEPT);
		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X_EXCEPT_FINE);
		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X_PRE);
		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X_BJET);
		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X_HIGH_E);
		hv_bjet_0_matched_p4_X.push_back(h_bjet_0_matched_p4_X_TRUTH);

		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X");
		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X_CONTROL");
		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X_EXCEPT");
		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X_EXCEPT_FINE");
		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X_PRE");
		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X_BJET");
		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X_HIGH_E");
		hv_bjet_0_matched_p4_X_names.push_back("h_bjet_0_matched_p4_X_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Y
	void MC_Analysis::Book_bjet_0_matched_p4_Y(int bins, double min, double max) {
		h_bjet_0_matched_p4_Y = new TH1F("h_bjet_0_matched_p4_Y","", bins, min, max);
		h_bjet_0_matched_p4_Y_CONTROL = new TH1F("h_bjet_0_matched_p4_Y_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Y_EXCEPT = new TH1F("h_bjet_0_matched_p4_Y_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Y_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Y_PRE = new TH1F("h_bjet_0_matched_p4_Y_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Y_BJET = new TH1F("h_bjet_0_matched_p4_Y_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Y_HIGH_E = new TH1F("h_bjet_0_matched_p4_Y_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Y_TRUTH = new TH1F("h_bjet_0_matched_p4_Y_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y);
		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y_CONTROL);
		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y_EXCEPT);
		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y_PRE);
		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y_BJET);
		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y_HIGH_E);
		hv_bjet_0_matched_p4_Y.push_back(h_bjet_0_matched_p4_Y_TRUTH);

		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y");
		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y_CONTROL");
		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y_EXCEPT");
		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y_PRE");
		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y_BJET");
		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y_HIGH_E");
		hv_bjet_0_matched_p4_Y_names.push_back("h_bjet_0_matched_p4_Y_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Z
	void MC_Analysis::Book_bjet_0_matched_p4_Z(int bins, double min, double max) {
		h_bjet_0_matched_p4_Z = new TH1F("h_bjet_0_matched_p4_Z","", bins, min, max);
		h_bjet_0_matched_p4_Z_CONTROL = new TH1F("h_bjet_0_matched_p4_Z_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Z_EXCEPT = new TH1F("h_bjet_0_matched_p4_Z_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Z_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Z_PRE = new TH1F("h_bjet_0_matched_p4_Z_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Z_BJET = new TH1F("h_bjet_0_matched_p4_Z_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Z_HIGH_E = new TH1F("h_bjet_0_matched_p4_Z_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Z_TRUTH = new TH1F("h_bjet_0_matched_p4_Z_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z);
		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z_CONTROL);
		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z_EXCEPT);
		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z_PRE);
		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z_BJET);
		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z_HIGH_E);
		hv_bjet_0_matched_p4_Z.push_back(h_bjet_0_matched_p4_Z_TRUTH);

		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z");
		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z_CONTROL");
		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z_EXCEPT");
		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z_PRE");
		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z_BJET");
		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z_HIGH_E");
		hv_bjet_0_matched_p4_Z_names.push_back("h_bjet_0_matched_p4_Z_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_T
	void MC_Analysis::Book_bjet_0_matched_p4_T(int bins, double min, double max) {
		h_bjet_0_matched_p4_T = new TH1F("h_bjet_0_matched_p4_T","", bins, min, max);
		h_bjet_0_matched_p4_T_CONTROL = new TH1F("h_bjet_0_matched_p4_T_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_T_EXCEPT = new TH1F("h_bjet_0_matched_p4_T_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_T_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_T_PRE = new TH1F("h_bjet_0_matched_p4_T_PRE","", bins, min, max);
		h_bjet_0_matched_p4_T_BJET = new TH1F("h_bjet_0_matched_p4_T_BJET","", bins, min, max);
		h_bjet_0_matched_p4_T_HIGH_E = new TH1F("h_bjet_0_matched_p4_T_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_T_TRUTH = new TH1F("h_bjet_0_matched_p4_T_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T);
		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T_CONTROL);
		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T_EXCEPT);
		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T_EXCEPT_FINE);
		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T_PRE);
		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T_BJET);
		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T_HIGH_E);
		hv_bjet_0_matched_p4_T.push_back(h_bjet_0_matched_p4_T_TRUTH);

		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T");
		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T_CONTROL");
		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T_EXCEPT");
		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T_EXCEPT_FINE");
		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T_PRE");
		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T_BJET");
		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T_HIGH_E");
		hv_bjet_0_matched_p4_T_names.push_back("h_bjet_0_matched_p4_T_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Px
	void MC_Analysis::Book_bjet_0_matched_p4_Px(int bins, double min, double max) {
		h_bjet_0_matched_p4_Px = new TH1F("h_bjet_0_matched_p4_Px","", bins, min, max);
		h_bjet_0_matched_p4_Px_CONTROL = new TH1F("h_bjet_0_matched_p4_Px_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Px_EXCEPT = new TH1F("h_bjet_0_matched_p4_Px_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Px_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Px_PRE = new TH1F("h_bjet_0_matched_p4_Px_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Px_BJET = new TH1F("h_bjet_0_matched_p4_Px_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Px_HIGH_E = new TH1F("h_bjet_0_matched_p4_Px_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Px_TRUTH = new TH1F("h_bjet_0_matched_p4_Px_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px);
		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px_CONTROL);
		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px_EXCEPT);
		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px_PRE);
		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px_BJET);
		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px_HIGH_E);
		hv_bjet_0_matched_p4_Px.push_back(h_bjet_0_matched_p4_Px_TRUTH);

		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px");
		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px_CONTROL");
		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px_EXCEPT");
		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px_PRE");
		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px_BJET");
		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px_HIGH_E");
		hv_bjet_0_matched_p4_Px_names.push_back("h_bjet_0_matched_p4_Px_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Py
	void MC_Analysis::Book_bjet_0_matched_p4_Py(int bins, double min, double max) {
		h_bjet_0_matched_p4_Py = new TH1F("h_bjet_0_matched_p4_Py","", bins, min, max);
		h_bjet_0_matched_p4_Py_CONTROL = new TH1F("h_bjet_0_matched_p4_Py_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Py_EXCEPT = new TH1F("h_bjet_0_matched_p4_Py_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Py_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Py_PRE = new TH1F("h_bjet_0_matched_p4_Py_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Py_BJET = new TH1F("h_bjet_0_matched_p4_Py_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Py_HIGH_E = new TH1F("h_bjet_0_matched_p4_Py_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Py_TRUTH = new TH1F("h_bjet_0_matched_p4_Py_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py);
		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py_CONTROL);
		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py_EXCEPT);
		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py_PRE);
		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py_BJET);
		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py_HIGH_E);
		hv_bjet_0_matched_p4_Py.push_back(h_bjet_0_matched_p4_Py_TRUTH);

		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py");
		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py_CONTROL");
		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py_EXCEPT");
		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py_PRE");
		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py_BJET");
		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py_HIGH_E");
		hv_bjet_0_matched_p4_Py_names.push_back("h_bjet_0_matched_p4_Py_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Pz
	void MC_Analysis::Book_bjet_0_matched_p4_Pz(int bins, double min, double max) {
		h_bjet_0_matched_p4_Pz = new TH1F("h_bjet_0_matched_p4_Pz","", bins, min, max);
		h_bjet_0_matched_p4_Pz_CONTROL = new TH1F("h_bjet_0_matched_p4_Pz_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Pz_EXCEPT = new TH1F("h_bjet_0_matched_p4_Pz_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Pz_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Pz_PRE = new TH1F("h_bjet_0_matched_p4_Pz_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Pz_BJET = new TH1F("h_bjet_0_matched_p4_Pz_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Pz_HIGH_E = new TH1F("h_bjet_0_matched_p4_Pz_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Pz_TRUTH = new TH1F("h_bjet_0_matched_p4_Pz_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz);
		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz_CONTROL);
		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz_EXCEPT);
		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz_PRE);
		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz_BJET);
		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz_HIGH_E);
		hv_bjet_0_matched_p4_Pz.push_back(h_bjet_0_matched_p4_Pz_TRUTH);

		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz");
		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz_CONTROL");
		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz_EXCEPT");
		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz_PRE");
		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz_BJET");
		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz_HIGH_E");
		hv_bjet_0_matched_p4_Pz_names.push_back("h_bjet_0_matched_p4_Pz_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Energy
	void MC_Analysis::Book_bjet_0_matched_p4_Energy(int bins, double min, double max) {
		h_bjet_0_matched_p4_Energy = new TH1F("h_bjet_0_matched_p4_Energy","", bins, min, max);
		h_bjet_0_matched_p4_Energy_CONTROL = new TH1F("h_bjet_0_matched_p4_Energy_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Energy_EXCEPT = new TH1F("h_bjet_0_matched_p4_Energy_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Energy_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Energy_PRE = new TH1F("h_bjet_0_matched_p4_Energy_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Energy_BJET = new TH1F("h_bjet_0_matched_p4_Energy_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Energy_HIGH_E = new TH1F("h_bjet_0_matched_p4_Energy_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Energy_TRUTH = new TH1F("h_bjet_0_matched_p4_Energy_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy);
		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy_CONTROL);
		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy_EXCEPT);
		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy_PRE);
		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy_BJET);
		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy_HIGH_E);
		hv_bjet_0_matched_p4_Energy.push_back(h_bjet_0_matched_p4_Energy_TRUTH);

		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy");
		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy_CONTROL");
		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy_EXCEPT");
		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy_PRE");
		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy_BJET");
		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy_HIGH_E");
		hv_bjet_0_matched_p4_Energy_names.push_back("h_bjet_0_matched_p4_Energy_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Theta
	void MC_Analysis::Book_bjet_0_matched_p4_Theta(int bins, double min, double max) {
		h_bjet_0_matched_p4_Theta = new TH1F("h_bjet_0_matched_p4_Theta","", bins, min, max);
		h_bjet_0_matched_p4_Theta_CONTROL = new TH1F("h_bjet_0_matched_p4_Theta_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Theta_EXCEPT = new TH1F("h_bjet_0_matched_p4_Theta_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Theta_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Theta_PRE = new TH1F("h_bjet_0_matched_p4_Theta_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Theta_BJET = new TH1F("h_bjet_0_matched_p4_Theta_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Theta_HIGH_E = new TH1F("h_bjet_0_matched_p4_Theta_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Theta_TRUTH = new TH1F("h_bjet_0_matched_p4_Theta_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta);
		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta_CONTROL);
		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta_EXCEPT);
		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta_PRE);
		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta_BJET);
		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta_HIGH_E);
		hv_bjet_0_matched_p4_Theta.push_back(h_bjet_0_matched_p4_Theta_TRUTH);

		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta");
		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta_CONTROL");
		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta_EXCEPT");
		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta_PRE");
		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta_BJET");
		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta_HIGH_E");
		hv_bjet_0_matched_p4_Theta_names.push_back("h_bjet_0_matched_p4_Theta_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_CosTheta
	void MC_Analysis::Book_bjet_0_matched_p4_CosTheta(int bins, double min, double max) {
		h_bjet_0_matched_p4_CosTheta = new TH1F("h_bjet_0_matched_p4_CosTheta","", bins, min, max);
		h_bjet_0_matched_p4_CosTheta_CONTROL = new TH1F("h_bjet_0_matched_p4_CosTheta_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_CosTheta_EXCEPT = new TH1F("h_bjet_0_matched_p4_CosTheta_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_CosTheta_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_CosTheta_PRE = new TH1F("h_bjet_0_matched_p4_CosTheta_PRE","", bins, min, max);
		h_bjet_0_matched_p4_CosTheta_BJET = new TH1F("h_bjet_0_matched_p4_CosTheta_BJET","", bins, min, max);
		h_bjet_0_matched_p4_CosTheta_HIGH_E = new TH1F("h_bjet_0_matched_p4_CosTheta_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_CosTheta_TRUTH = new TH1F("h_bjet_0_matched_p4_CosTheta_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta);
		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta_CONTROL);
		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta_EXCEPT);
		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta_EXCEPT_FINE);
		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta_PRE);
		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta_BJET);
		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta_HIGH_E);
		hv_bjet_0_matched_p4_CosTheta.push_back(h_bjet_0_matched_p4_CosTheta_TRUTH);

		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta");
		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta_CONTROL");
		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta_EXCEPT");
		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta_EXCEPT_FINE");
		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta_PRE");
		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta_BJET");
		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta_HIGH_E");
		hv_bjet_0_matched_p4_CosTheta_names.push_back("h_bjet_0_matched_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Phi
	void MC_Analysis::Book_bjet_0_matched_p4_Phi(int bins, double min, double max) {
		h_bjet_0_matched_p4_Phi = new TH1F("h_bjet_0_matched_p4_Phi","", bins, min, max);
		h_bjet_0_matched_p4_Phi_CONTROL = new TH1F("h_bjet_0_matched_p4_Phi_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Phi_EXCEPT = new TH1F("h_bjet_0_matched_p4_Phi_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Phi_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Phi_PRE = new TH1F("h_bjet_0_matched_p4_Phi_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Phi_BJET = new TH1F("h_bjet_0_matched_p4_Phi_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Phi_HIGH_E = new TH1F("h_bjet_0_matched_p4_Phi_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Phi_TRUTH = new TH1F("h_bjet_0_matched_p4_Phi_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi);
		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi_CONTROL);
		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi_EXCEPT);
		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi_PRE);
		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi_BJET);
		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi_HIGH_E);
		hv_bjet_0_matched_p4_Phi.push_back(h_bjet_0_matched_p4_Phi_TRUTH);

		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi");
		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi_CONTROL");
		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi_EXCEPT");
		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi_PRE");
		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi_BJET");
		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi_HIGH_E");
		hv_bjet_0_matched_p4_Phi_names.push_back("h_bjet_0_matched_p4_Phi_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Rho
	void MC_Analysis::Book_bjet_0_matched_p4_Rho(int bins, double min, double max) {
		h_bjet_0_matched_p4_Rho = new TH1F("h_bjet_0_matched_p4_Rho","", bins, min, max);
		h_bjet_0_matched_p4_Rho_CONTROL = new TH1F("h_bjet_0_matched_p4_Rho_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Rho_EXCEPT = new TH1F("h_bjet_0_matched_p4_Rho_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Rho_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Rho_PRE = new TH1F("h_bjet_0_matched_p4_Rho_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Rho_BJET = new TH1F("h_bjet_0_matched_p4_Rho_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Rho_HIGH_E = new TH1F("h_bjet_0_matched_p4_Rho_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Rho_TRUTH = new TH1F("h_bjet_0_matched_p4_Rho_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho);
		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho_CONTROL);
		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho_EXCEPT);
		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho_PRE);
		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho_BJET);
		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho_HIGH_E);
		hv_bjet_0_matched_p4_Rho.push_back(h_bjet_0_matched_p4_Rho_TRUTH);

		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho");
		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho_CONTROL");
		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho_EXCEPT");
		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho_PRE");
		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho_BJET");
		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho_HIGH_E");
		hv_bjet_0_matched_p4_Rho_names.push_back("h_bjet_0_matched_p4_Rho_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Perp2
	void MC_Analysis::Book_bjet_0_matched_p4_Perp2(int bins, double min, double max) {
		h_bjet_0_matched_p4_Perp2 = new TH1F("h_bjet_0_matched_p4_Perp2","", bins, min, max);
		h_bjet_0_matched_p4_Perp2_CONTROL = new TH1F("h_bjet_0_matched_p4_Perp2_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Perp2_EXCEPT = new TH1F("h_bjet_0_matched_p4_Perp2_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Perp2_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Perp2_PRE = new TH1F("h_bjet_0_matched_p4_Perp2_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Perp2_BJET = new TH1F("h_bjet_0_matched_p4_Perp2_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Perp2_HIGH_E = new TH1F("h_bjet_0_matched_p4_Perp2_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Perp2_TRUTH = new TH1F("h_bjet_0_matched_p4_Perp2_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2);
		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2_CONTROL);
		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2_EXCEPT);
		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2_PRE);
		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2_BJET);
		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2_HIGH_E);
		hv_bjet_0_matched_p4_Perp2.push_back(h_bjet_0_matched_p4_Perp2_TRUTH);

		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2");
		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2_CONTROL");
		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2_EXCEPT");
		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2_PRE");
		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2_BJET");
		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2_HIGH_E");
		hv_bjet_0_matched_p4_Perp2_names.push_back("h_bjet_0_matched_p4_Perp2_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Pt
	void MC_Analysis::Book_bjet_0_matched_p4_Pt(int bins, double min, double max) {
		h_bjet_0_matched_p4_Pt = new TH1F("h_bjet_0_matched_p4_Pt","", bins, min, max);
		h_bjet_0_matched_p4_Pt_CONTROL = new TH1F("h_bjet_0_matched_p4_Pt_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Pt_EXCEPT = new TH1F("h_bjet_0_matched_p4_Pt_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Pt_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Pt_PRE = new TH1F("h_bjet_0_matched_p4_Pt_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Pt_BJET = new TH1F("h_bjet_0_matched_p4_Pt_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Pt_HIGH_E = new TH1F("h_bjet_0_matched_p4_Pt_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Pt_TRUTH = new TH1F("h_bjet_0_matched_p4_Pt_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt);
		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt_CONTROL);
		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt_EXCEPT);
		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt_PRE);
		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt_BJET);
		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt_HIGH_E);
		hv_bjet_0_matched_p4_Pt.push_back(h_bjet_0_matched_p4_Pt_TRUTH);

		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt");
		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt_CONTROL");
		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt_EXCEPT");
		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt_PRE");
		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt_BJET");
		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt_HIGH_E");
		hv_bjet_0_matched_p4_Pt_names.push_back("h_bjet_0_matched_p4_Pt_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Perp
	void MC_Analysis::Book_bjet_0_matched_p4_Perp(int bins, double min, double max) {
		h_bjet_0_matched_p4_Perp = new TH1F("h_bjet_0_matched_p4_Perp","", bins, min, max);
		h_bjet_0_matched_p4_Perp_CONTROL = new TH1F("h_bjet_0_matched_p4_Perp_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Perp_EXCEPT = new TH1F("h_bjet_0_matched_p4_Perp_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Perp_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Perp_PRE = new TH1F("h_bjet_0_matched_p4_Perp_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Perp_BJET = new TH1F("h_bjet_0_matched_p4_Perp_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Perp_HIGH_E = new TH1F("h_bjet_0_matched_p4_Perp_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Perp_TRUTH = new TH1F("h_bjet_0_matched_p4_Perp_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp);
		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp_CONTROL);
		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp_EXCEPT);
		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp_PRE);
		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp_BJET);
		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp_HIGH_E);
		hv_bjet_0_matched_p4_Perp.push_back(h_bjet_0_matched_p4_Perp_TRUTH);

		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp");
		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp_CONTROL");
		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp_EXCEPT");
		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp_PRE");
		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp_BJET");
		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp_HIGH_E");
		hv_bjet_0_matched_p4_Perp_names.push_back("h_bjet_0_matched_p4_Perp_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Et2
	void MC_Analysis::Book_bjet_0_matched_p4_Et2(int bins, double min, double max) {
		h_bjet_0_matched_p4_Et2 = new TH1F("h_bjet_0_matched_p4_Et2","", bins, min, max);
		h_bjet_0_matched_p4_Et2_CONTROL = new TH1F("h_bjet_0_matched_p4_Et2_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Et2_EXCEPT = new TH1F("h_bjet_0_matched_p4_Et2_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Et2_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Et2_PRE = new TH1F("h_bjet_0_matched_p4_Et2_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Et2_BJET = new TH1F("h_bjet_0_matched_p4_Et2_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Et2_HIGH_E = new TH1F("h_bjet_0_matched_p4_Et2_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Et2_TRUTH = new TH1F("h_bjet_0_matched_p4_Et2_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2);
		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2_CONTROL);
		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2_EXCEPT);
		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2_PRE);
		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2_BJET);
		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2_HIGH_E);
		hv_bjet_0_matched_p4_Et2.push_back(h_bjet_0_matched_p4_Et2_TRUTH);

		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2");
		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2_CONTROL");
		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2_EXCEPT");
		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2_PRE");
		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2_BJET");
		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2_HIGH_E");
		hv_bjet_0_matched_p4_Et2_names.push_back("h_bjet_0_matched_p4_Et2_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Et
	void MC_Analysis::Book_bjet_0_matched_p4_Et(int bins, double min, double max) {
		h_bjet_0_matched_p4_Et = new TH1F("h_bjet_0_matched_p4_Et","", bins, min, max);
		h_bjet_0_matched_p4_Et_CONTROL = new TH1F("h_bjet_0_matched_p4_Et_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Et_EXCEPT = new TH1F("h_bjet_0_matched_p4_Et_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Et_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Et_PRE = new TH1F("h_bjet_0_matched_p4_Et_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Et_BJET = new TH1F("h_bjet_0_matched_p4_Et_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Et_HIGH_E = new TH1F("h_bjet_0_matched_p4_Et_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Et_TRUTH = new TH1F("h_bjet_0_matched_p4_Et_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et);
		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et_CONTROL);
		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et_EXCEPT);
		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et_PRE);
		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et_BJET);
		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et_HIGH_E);
		hv_bjet_0_matched_p4_Et.push_back(h_bjet_0_matched_p4_Et_TRUTH);

		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et");
		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et_CONTROL");
		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et_EXCEPT");
		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et_PRE");
		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et_BJET");
		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et_HIGH_E");
		hv_bjet_0_matched_p4_Et_names.push_back("h_bjet_0_matched_p4_Et_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Mag2
	void MC_Analysis::Book_bjet_0_matched_p4_Mag2(int bins, double min, double max) {
		h_bjet_0_matched_p4_Mag2 = new TH1F("h_bjet_0_matched_p4_Mag2","", bins, min, max);
		h_bjet_0_matched_p4_Mag2_CONTROL = new TH1F("h_bjet_0_matched_p4_Mag2_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Mag2_EXCEPT = new TH1F("h_bjet_0_matched_p4_Mag2_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Mag2_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Mag2_PRE = new TH1F("h_bjet_0_matched_p4_Mag2_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Mag2_BJET = new TH1F("h_bjet_0_matched_p4_Mag2_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Mag2_HIGH_E = new TH1F("h_bjet_0_matched_p4_Mag2_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Mag2_TRUTH = new TH1F("h_bjet_0_matched_p4_Mag2_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2);
		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2_CONTROL);
		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2_EXCEPT);
		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2_PRE);
		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2_BJET);
		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2_HIGH_E);
		hv_bjet_0_matched_p4_Mag2.push_back(h_bjet_0_matched_p4_Mag2_TRUTH);

		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2");
		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2_CONTROL");
		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2_EXCEPT");
		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2_PRE");
		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2_BJET");
		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2_HIGH_E");
		hv_bjet_0_matched_p4_Mag2_names.push_back("h_bjet_0_matched_p4_Mag2_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_M2
	void MC_Analysis::Book_bjet_0_matched_p4_M2(int bins, double min, double max) {
		h_bjet_0_matched_p4_M2 = new TH1F("h_bjet_0_matched_p4_M2","", bins, min, max);
		h_bjet_0_matched_p4_M2_CONTROL = new TH1F("h_bjet_0_matched_p4_M2_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_M2_EXCEPT = new TH1F("h_bjet_0_matched_p4_M2_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_M2_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_M2_PRE = new TH1F("h_bjet_0_matched_p4_M2_PRE","", bins, min, max);
		h_bjet_0_matched_p4_M2_BJET = new TH1F("h_bjet_0_matched_p4_M2_BJET","", bins, min, max);
		h_bjet_0_matched_p4_M2_HIGH_E = new TH1F("h_bjet_0_matched_p4_M2_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_M2_TRUTH = new TH1F("h_bjet_0_matched_p4_M2_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2);
		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2_CONTROL);
		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2_EXCEPT);
		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2_EXCEPT_FINE);
		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2_PRE);
		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2_BJET);
		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2_HIGH_E);
		hv_bjet_0_matched_p4_M2.push_back(h_bjet_0_matched_p4_M2_TRUTH);

		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2");
		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2_CONTROL");
		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2_EXCEPT");
		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2_EXCEPT_FINE");
		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2_PRE");
		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2_BJET");
		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2_HIGH_E");
		hv_bjet_0_matched_p4_M2_names.push_back("h_bjet_0_matched_p4_M2_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Mag
	void MC_Analysis::Book_bjet_0_matched_p4_Mag(int bins, double min, double max) {
		h_bjet_0_matched_p4_Mag = new TH1F("h_bjet_0_matched_p4_Mag","", bins, min, max);
		h_bjet_0_matched_p4_Mag_CONTROL = new TH1F("h_bjet_0_matched_p4_Mag_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Mag_EXCEPT = new TH1F("h_bjet_0_matched_p4_Mag_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Mag_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Mag_PRE = new TH1F("h_bjet_0_matched_p4_Mag_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Mag_BJET = new TH1F("h_bjet_0_matched_p4_Mag_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Mag_HIGH_E = new TH1F("h_bjet_0_matched_p4_Mag_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Mag_TRUTH = new TH1F("h_bjet_0_matched_p4_Mag_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag);
		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag_CONTROL);
		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag_EXCEPT);
		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag_PRE);
		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag_BJET);
		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag_HIGH_E);
		hv_bjet_0_matched_p4_Mag.push_back(h_bjet_0_matched_p4_Mag_TRUTH);

		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag");
		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag_CONTROL");
		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag_EXCEPT");
		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag_PRE");
		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag_BJET");
		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag_HIGH_E");
		hv_bjet_0_matched_p4_Mag_names.push_back("h_bjet_0_matched_p4_Mag_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_M
	void MC_Analysis::Book_bjet_0_matched_p4_M(int bins, double min, double max) {
		h_bjet_0_matched_p4_M = new TH1F("h_bjet_0_matched_p4_M","", bins, min, max);
		h_bjet_0_matched_p4_M_CONTROL = new TH1F("h_bjet_0_matched_p4_M_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_M_EXCEPT = new TH1F("h_bjet_0_matched_p4_M_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_M_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_M_PRE = new TH1F("h_bjet_0_matched_p4_M_PRE","", bins, min, max);
		h_bjet_0_matched_p4_M_BJET = new TH1F("h_bjet_0_matched_p4_M_BJET","", bins, min, max);
		h_bjet_0_matched_p4_M_HIGH_E = new TH1F("h_bjet_0_matched_p4_M_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_M_TRUTH = new TH1F("h_bjet_0_matched_p4_M_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M);
		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M_CONTROL);
		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M_EXCEPT);
		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M_EXCEPT_FINE);
		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M_PRE);
		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M_BJET);
		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M_HIGH_E);
		hv_bjet_0_matched_p4_M.push_back(h_bjet_0_matched_p4_M_TRUTH);

		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M");
		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M_CONTROL");
		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M_EXCEPT");
		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M_EXCEPT_FINE");
		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M_PRE");
		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M_BJET");
		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M_HIGH_E");
		hv_bjet_0_matched_p4_M_names.push_back("h_bjet_0_matched_p4_M_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Mt2
	void MC_Analysis::Book_bjet_0_matched_p4_Mt2(int bins, double min, double max) {
		h_bjet_0_matched_p4_Mt2 = new TH1F("h_bjet_0_matched_p4_Mt2","", bins, min, max);
		h_bjet_0_matched_p4_Mt2_CONTROL = new TH1F("h_bjet_0_matched_p4_Mt2_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Mt2_EXCEPT = new TH1F("h_bjet_0_matched_p4_Mt2_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Mt2_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Mt2_PRE = new TH1F("h_bjet_0_matched_p4_Mt2_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Mt2_BJET = new TH1F("h_bjet_0_matched_p4_Mt2_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Mt2_HIGH_E = new TH1F("h_bjet_0_matched_p4_Mt2_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Mt2_TRUTH = new TH1F("h_bjet_0_matched_p4_Mt2_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2);
		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2_CONTROL);
		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2_EXCEPT);
		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2_PRE);
		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2_BJET);
		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2_HIGH_E);
		hv_bjet_0_matched_p4_Mt2.push_back(h_bjet_0_matched_p4_Mt2_TRUTH);

		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2");
		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2_CONTROL");
		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2_EXCEPT");
		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2_PRE");
		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2_BJET");
		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2_HIGH_E");
		hv_bjet_0_matched_p4_Mt2_names.push_back("h_bjet_0_matched_p4_Mt2_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Mt
	void MC_Analysis::Book_bjet_0_matched_p4_Mt(int bins, double min, double max) {
		h_bjet_0_matched_p4_Mt = new TH1F("h_bjet_0_matched_p4_Mt","", bins, min, max);
		h_bjet_0_matched_p4_Mt_CONTROL = new TH1F("h_bjet_0_matched_p4_Mt_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Mt_EXCEPT = new TH1F("h_bjet_0_matched_p4_Mt_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Mt_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Mt_PRE = new TH1F("h_bjet_0_matched_p4_Mt_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Mt_BJET = new TH1F("h_bjet_0_matched_p4_Mt_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Mt_HIGH_E = new TH1F("h_bjet_0_matched_p4_Mt_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Mt_TRUTH = new TH1F("h_bjet_0_matched_p4_Mt_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt);
		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt_CONTROL);
		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt_EXCEPT);
		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt_PRE);
		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt_BJET);
		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt_HIGH_E);
		hv_bjet_0_matched_p4_Mt.push_back(h_bjet_0_matched_p4_Mt_TRUTH);

		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt");
		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt_CONTROL");
		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt_EXCEPT");
		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt_PRE");
		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt_BJET");
		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt_HIGH_E");
		hv_bjet_0_matched_p4_Mt_names.push_back("h_bjet_0_matched_p4_Mt_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Beta
	void MC_Analysis::Book_bjet_0_matched_p4_Beta(int bins, double min, double max) {
		h_bjet_0_matched_p4_Beta = new TH1F("h_bjet_0_matched_p4_Beta","", bins, min, max);
		h_bjet_0_matched_p4_Beta_CONTROL = new TH1F("h_bjet_0_matched_p4_Beta_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Beta_EXCEPT = new TH1F("h_bjet_0_matched_p4_Beta_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Beta_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Beta_PRE = new TH1F("h_bjet_0_matched_p4_Beta_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Beta_BJET = new TH1F("h_bjet_0_matched_p4_Beta_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Beta_HIGH_E = new TH1F("h_bjet_0_matched_p4_Beta_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Beta_TRUTH = new TH1F("h_bjet_0_matched_p4_Beta_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta);
		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta_CONTROL);
		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta_EXCEPT);
		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta_PRE);
		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta_BJET);
		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta_HIGH_E);
		hv_bjet_0_matched_p4_Beta.push_back(h_bjet_0_matched_p4_Beta_TRUTH);

		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta");
		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta_CONTROL");
		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta_EXCEPT");
		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta_PRE");
		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta_BJET");
		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta_HIGH_E");
		hv_bjet_0_matched_p4_Beta_names.push_back("h_bjet_0_matched_p4_Beta_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Gamma
	void MC_Analysis::Book_bjet_0_matched_p4_Gamma(int bins, double min, double max) {
		h_bjet_0_matched_p4_Gamma = new TH1F("h_bjet_0_matched_p4_Gamma","", bins, min, max);
		h_bjet_0_matched_p4_Gamma_CONTROL = new TH1F("h_bjet_0_matched_p4_Gamma_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Gamma_EXCEPT = new TH1F("h_bjet_0_matched_p4_Gamma_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Gamma_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Gamma_PRE = new TH1F("h_bjet_0_matched_p4_Gamma_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Gamma_BJET = new TH1F("h_bjet_0_matched_p4_Gamma_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Gamma_HIGH_E = new TH1F("h_bjet_0_matched_p4_Gamma_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Gamma_TRUTH = new TH1F("h_bjet_0_matched_p4_Gamma_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma);
		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma_CONTROL);
		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma_EXCEPT);
		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma_PRE);
		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma_BJET);
		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma_HIGH_E);
		hv_bjet_0_matched_p4_Gamma.push_back(h_bjet_0_matched_p4_Gamma_TRUTH);

		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma");
		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma_CONTROL");
		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma_EXCEPT");
		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma_PRE");
		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma_BJET");
		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma_HIGH_E");
		hv_bjet_0_matched_p4_Gamma_names.push_back("h_bjet_0_matched_p4_Gamma_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Plus
	void MC_Analysis::Book_bjet_0_matched_p4_Plus(int bins, double min, double max) {
		h_bjet_0_matched_p4_Plus = new TH1F("h_bjet_0_matched_p4_Plus","", bins, min, max);
		h_bjet_0_matched_p4_Plus_CONTROL = new TH1F("h_bjet_0_matched_p4_Plus_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Plus_EXCEPT = new TH1F("h_bjet_0_matched_p4_Plus_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Plus_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Plus_PRE = new TH1F("h_bjet_0_matched_p4_Plus_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Plus_BJET = new TH1F("h_bjet_0_matched_p4_Plus_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Plus_HIGH_E = new TH1F("h_bjet_0_matched_p4_Plus_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Plus_TRUTH = new TH1F("h_bjet_0_matched_p4_Plus_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus);
		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus_CONTROL);
		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus_EXCEPT);
		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus_PRE);
		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus_BJET);
		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus_HIGH_E);
		hv_bjet_0_matched_p4_Plus.push_back(h_bjet_0_matched_p4_Plus_TRUTH);

		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus");
		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus_CONTROL");
		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus_EXCEPT");
		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus_PRE");
		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus_BJET");
		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus_HIGH_E");
		hv_bjet_0_matched_p4_Plus_names.push_back("h_bjet_0_matched_p4_Plus_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Minus
	void MC_Analysis::Book_bjet_0_matched_p4_Minus(int bins, double min, double max) {
		h_bjet_0_matched_p4_Minus = new TH1F("h_bjet_0_matched_p4_Minus","", bins, min, max);
		h_bjet_0_matched_p4_Minus_CONTROL = new TH1F("h_bjet_0_matched_p4_Minus_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Minus_EXCEPT = new TH1F("h_bjet_0_matched_p4_Minus_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Minus_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Minus_PRE = new TH1F("h_bjet_0_matched_p4_Minus_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Minus_BJET = new TH1F("h_bjet_0_matched_p4_Minus_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Minus_HIGH_E = new TH1F("h_bjet_0_matched_p4_Minus_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Minus_TRUTH = new TH1F("h_bjet_0_matched_p4_Minus_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus);
		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus_CONTROL);
		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus_EXCEPT);
		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus_PRE);
		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus_BJET);
		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus_HIGH_E);
		hv_bjet_0_matched_p4_Minus.push_back(h_bjet_0_matched_p4_Minus_TRUTH);

		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus");
		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus_CONTROL");
		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus_EXCEPT");
		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus_PRE");
		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus_BJET");
		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus_HIGH_E");
		hv_bjet_0_matched_p4_Minus_names.push_back("h_bjet_0_matched_p4_Minus_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Rapidity
	void MC_Analysis::Book_bjet_0_matched_p4_Rapidity(int bins, double min, double max) {
		h_bjet_0_matched_p4_Rapidity = new TH1F("h_bjet_0_matched_p4_Rapidity","", bins, min, max);
		h_bjet_0_matched_p4_Rapidity_CONTROL = new TH1F("h_bjet_0_matched_p4_Rapidity_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Rapidity_EXCEPT = new TH1F("h_bjet_0_matched_p4_Rapidity_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Rapidity_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Rapidity_PRE = new TH1F("h_bjet_0_matched_p4_Rapidity_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Rapidity_BJET = new TH1F("h_bjet_0_matched_p4_Rapidity_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Rapidity_HIGH_E = new TH1F("h_bjet_0_matched_p4_Rapidity_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Rapidity_TRUTH = new TH1F("h_bjet_0_matched_p4_Rapidity_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity);
		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity_CONTROL);
		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity_EXCEPT);
		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity_PRE);
		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity_BJET);
		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity_HIGH_E);
		hv_bjet_0_matched_p4_Rapidity.push_back(h_bjet_0_matched_p4_Rapidity_TRUTH);

		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity");
		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity_CONTROL");
		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity_EXCEPT");
		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity_PRE");
		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity_BJET");
		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity_HIGH_E");
		hv_bjet_0_matched_p4_Rapidity_names.push_back("h_bjet_0_matched_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_Eta
	void MC_Analysis::Book_bjet_0_matched_p4_Eta(int bins, double min, double max) {
		h_bjet_0_matched_p4_Eta = new TH1F("h_bjet_0_matched_p4_Eta","", bins, min, max);
		h_bjet_0_matched_p4_Eta_CONTROL = new TH1F("h_bjet_0_matched_p4_Eta_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_Eta_EXCEPT = new TH1F("h_bjet_0_matched_p4_Eta_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_Eta_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_Eta_PRE = new TH1F("h_bjet_0_matched_p4_Eta_PRE","", bins, min, max);
		h_bjet_0_matched_p4_Eta_BJET = new TH1F("h_bjet_0_matched_p4_Eta_BJET","", bins, min, max);
		h_bjet_0_matched_p4_Eta_HIGH_E = new TH1F("h_bjet_0_matched_p4_Eta_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_Eta_TRUTH = new TH1F("h_bjet_0_matched_p4_Eta_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta);
		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta_CONTROL);
		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta_EXCEPT);
		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta_EXCEPT_FINE);
		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta_PRE);
		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta_BJET);
		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta_HIGH_E);
		hv_bjet_0_matched_p4_Eta.push_back(h_bjet_0_matched_p4_Eta_TRUTH);

		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta");
		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta_CONTROL");
		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta_EXCEPT");
		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta_EXCEPT_FINE");
		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta_PRE");
		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta_BJET");
		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta_HIGH_E");
		hv_bjet_0_matched_p4_Eta_names.push_back("h_bjet_0_matched_p4_Eta_TRUTH");

	}
	//Histogram booking function for bjet_0_matched_p4_PseudoRapidity
	void MC_Analysis::Book_bjet_0_matched_p4_PseudoRapidity(int bins, double min, double max) {
		h_bjet_0_matched_p4_PseudoRapidity = new TH1F("h_bjet_0_matched_p4_PseudoRapidity","", bins, min, max);
		h_bjet_0_matched_p4_PseudoRapidity_CONTROL = new TH1F("h_bjet_0_matched_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_bjet_0_matched_p4_PseudoRapidity_EXCEPT = new TH1F("h_bjet_0_matched_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_bjet_0_matched_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_bjet_0_matched_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_matched_p4_PseudoRapidity_PRE = new TH1F("h_bjet_0_matched_p4_PseudoRapidity_PRE","", bins, min, max);
		h_bjet_0_matched_p4_PseudoRapidity_BJET = new TH1F("h_bjet_0_matched_p4_PseudoRapidity_BJET","", bins, min, max);
		h_bjet_0_matched_p4_PseudoRapidity_HIGH_E = new TH1F("h_bjet_0_matched_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_bjet_0_matched_p4_PseudoRapidity_TRUTH = new TH1F("h_bjet_0_matched_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity);
		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity_CONTROL);
		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity_EXCEPT);
		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity_EXCEPT_FINE);
		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity_PRE);
		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity_BJET);
		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity_HIGH_E);
		hv_bjet_0_matched_p4_PseudoRapidity.push_back(h_bjet_0_matched_p4_PseudoRapidity_TRUTH);

		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity");
		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity_CONTROL");
		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity_EXCEPT");
		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity_EXCEPT_FINE");
		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity_PRE");
		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity_BJET");
		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity_HIGH_E");
		hv_bjet_0_matched_p4_PseudoRapidity_names.push_back("h_bjet_0_matched_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_0_matched_p4 ----- ///

//Histogram booking function for bjet_0_origin
void MC_Analysis::Book_bjet_0_origin(int bins, double min, double max) {
	h_bjet_0_origin = new TH1F("h_bjet_0_origin", "", bins, min, max);
	h_bjet_0_origin_CONTROL = new TH1F("h_bjet_0_origin_CONTROL", "", bins, min, max);
	h_bjet_0_origin_EXCEPT = new TH1F("h_bjet_0_origin_EXCEPT", "", bins, min, max);
	h_bjet_0_origin_EXCEPT_FINE = new TH1F("h_bjet_0_origin_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_origin_PRE = new TH1F("h_bjet_0_origin_PRE", "", bins, min, max);
	h_bjet_0_origin_BJET = new TH1F("h_bjet_0_origin_BJET", "", bins, min, max);
	h_bjet_0_origin_HIGH_E = new TH1F("h_bjet_0_origin_HIGH_E", "", bins, min, max);
	h_bjet_0_origin_TRUTH = new TH1F("h_bjet_0_origin_TRUTH", "", bins, min, max);

	hv_bjet_0_origin.push_back(h_bjet_0_origin);
	hv_bjet_0_origin.push_back(h_bjet_0_origin_CONTROL);
	hv_bjet_0_origin.push_back(h_bjet_0_origin_EXCEPT);
	hv_bjet_0_origin.push_back(h_bjet_0_origin_EXCEPT_FINE);
	hv_bjet_0_origin.push_back(h_bjet_0_origin_PRE);
	hv_bjet_0_origin.push_back(h_bjet_0_origin_BJET);
	hv_bjet_0_origin.push_back(h_bjet_0_origin_HIGH_E);
	hv_bjet_0_origin.push_back(h_bjet_0_origin_TRUTH);

	hv_bjet_0_origin_names.push_back("h_bjet_0_origin");
	hv_bjet_0_origin_names.push_back("h_bjet_0_origin_CONTROL");
	hv_bjet_0_origin_names.push_back("h_bjet_0_origin_EXCEPT");
	hv_bjet_0_origin_names.push_back("h_bjet_0_origin_EXCEPT_FINE");
	hv_bjet_0_origin_names.push_back("h_bjet_0_origin_PRE");
	hv_bjet_0_origin_names.push_back("h_bjet_0_origin_BJET");
	hv_bjet_0_origin_names.push_back("h_bjet_0_origin_HIGH_E");
	hv_bjet_0_origin_names.push_back("h_bjet_0_origin_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_0_p4 ----- //
	//Histogram booking function for bjet_0_p4_X
	void MC_Analysis::Book_bjet_0_p4_X(int bins, double min, double max) {
		h_bjet_0_p4_X = new TH1F("h_bjet_0_p4_X","", bins, min, max);
		h_bjet_0_p4_X_CONTROL = new TH1F("h_bjet_0_p4_X_CONTROL","", bins, min, max);
		h_bjet_0_p4_X_EXCEPT = new TH1F("h_bjet_0_p4_X_EXCEPT","", bins, min, max);
		h_bjet_0_p4_X_EXCEPT_FINE = new TH1F("h_bjet_0_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_X_PRE = new TH1F("h_bjet_0_p4_X_PRE","", bins, min, max);
		h_bjet_0_p4_X_BJET = new TH1F("h_bjet_0_p4_X_BJET","", bins, min, max);
		h_bjet_0_p4_X_HIGH_E = new TH1F("h_bjet_0_p4_X_HIGH_E","", bins, min, max);
		h_bjet_0_p4_X_TRUTH = new TH1F("h_bjet_0_p4_X_TRUTH","", bins, min, max);

		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X);
		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X_CONTROL);
		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X_EXCEPT);
		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X_EXCEPT_FINE);
		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X_PRE);
		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X_BJET);
		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X_HIGH_E);
		hv_bjet_0_p4_X.push_back(h_bjet_0_p4_X_TRUTH);

		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X");
		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X_CONTROL");
		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X_EXCEPT");
		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X_EXCEPT_FINE");
		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X_PRE");
		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X_BJET");
		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X_HIGH_E");
		hv_bjet_0_p4_X_names.push_back("h_bjet_0_p4_X_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Y
	void MC_Analysis::Book_bjet_0_p4_Y(int bins, double min, double max) {
		h_bjet_0_p4_Y = new TH1F("h_bjet_0_p4_Y","", bins, min, max);
		h_bjet_0_p4_Y_CONTROL = new TH1F("h_bjet_0_p4_Y_CONTROL","", bins, min, max);
		h_bjet_0_p4_Y_EXCEPT = new TH1F("h_bjet_0_p4_Y_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Y_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Y_PRE = new TH1F("h_bjet_0_p4_Y_PRE","", bins, min, max);
		h_bjet_0_p4_Y_BJET = new TH1F("h_bjet_0_p4_Y_BJET","", bins, min, max);
		h_bjet_0_p4_Y_HIGH_E = new TH1F("h_bjet_0_p4_Y_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Y_TRUTH = new TH1F("h_bjet_0_p4_Y_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y);
		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y_CONTROL);
		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y_EXCEPT);
		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y_EXCEPT_FINE);
		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y_PRE);
		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y_BJET);
		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y_HIGH_E);
		hv_bjet_0_p4_Y.push_back(h_bjet_0_p4_Y_TRUTH);

		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y");
		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y_CONTROL");
		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y_EXCEPT");
		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y_EXCEPT_FINE");
		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y_PRE");
		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y_BJET");
		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y_HIGH_E");
		hv_bjet_0_p4_Y_names.push_back("h_bjet_0_p4_Y_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Z
	void MC_Analysis::Book_bjet_0_p4_Z(int bins, double min, double max) {
		h_bjet_0_p4_Z = new TH1F("h_bjet_0_p4_Z","", bins, min, max);
		h_bjet_0_p4_Z_CONTROL = new TH1F("h_bjet_0_p4_Z_CONTROL","", bins, min, max);
		h_bjet_0_p4_Z_EXCEPT = new TH1F("h_bjet_0_p4_Z_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Z_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Z_PRE = new TH1F("h_bjet_0_p4_Z_PRE","", bins, min, max);
		h_bjet_0_p4_Z_BJET = new TH1F("h_bjet_0_p4_Z_BJET","", bins, min, max);
		h_bjet_0_p4_Z_HIGH_E = new TH1F("h_bjet_0_p4_Z_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Z_TRUTH = new TH1F("h_bjet_0_p4_Z_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z);
		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z_CONTROL);
		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z_EXCEPT);
		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z_EXCEPT_FINE);
		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z_PRE);
		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z_BJET);
		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z_HIGH_E);
		hv_bjet_0_p4_Z.push_back(h_bjet_0_p4_Z_TRUTH);

		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z");
		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z_CONTROL");
		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z_EXCEPT");
		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z_EXCEPT_FINE");
		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z_PRE");
		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z_BJET");
		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z_HIGH_E");
		hv_bjet_0_p4_Z_names.push_back("h_bjet_0_p4_Z_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_T
	void MC_Analysis::Book_bjet_0_p4_T(int bins, double min, double max) {
		h_bjet_0_p4_T = new TH1F("h_bjet_0_p4_T","", bins, min, max);
		h_bjet_0_p4_T_CONTROL = new TH1F("h_bjet_0_p4_T_CONTROL","", bins, min, max);
		h_bjet_0_p4_T_EXCEPT = new TH1F("h_bjet_0_p4_T_EXCEPT","", bins, min, max);
		h_bjet_0_p4_T_EXCEPT_FINE = new TH1F("h_bjet_0_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_T_PRE = new TH1F("h_bjet_0_p4_T_PRE","", bins, min, max);
		h_bjet_0_p4_T_BJET = new TH1F("h_bjet_0_p4_T_BJET","", bins, min, max);
		h_bjet_0_p4_T_HIGH_E = new TH1F("h_bjet_0_p4_T_HIGH_E","", bins, min, max);
		h_bjet_0_p4_T_TRUTH = new TH1F("h_bjet_0_p4_T_TRUTH","", bins, min, max);

		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T);
		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T_CONTROL);
		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T_EXCEPT);
		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T_EXCEPT_FINE);
		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T_PRE);
		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T_BJET);
		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T_HIGH_E);
		hv_bjet_0_p4_T.push_back(h_bjet_0_p4_T_TRUTH);

		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T");
		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T_CONTROL");
		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T_EXCEPT");
		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T_EXCEPT_FINE");
		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T_PRE");
		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T_BJET");
		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T_HIGH_E");
		hv_bjet_0_p4_T_names.push_back("h_bjet_0_p4_T_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Px
	void MC_Analysis::Book_bjet_0_p4_Px(int bins, double min, double max) {
		h_bjet_0_p4_Px = new TH1F("h_bjet_0_p4_Px","", bins, min, max);
		h_bjet_0_p4_Px_CONTROL = new TH1F("h_bjet_0_p4_Px_CONTROL","", bins, min, max);
		h_bjet_0_p4_Px_EXCEPT = new TH1F("h_bjet_0_p4_Px_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Px_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Px_PRE = new TH1F("h_bjet_0_p4_Px_PRE","", bins, min, max);
		h_bjet_0_p4_Px_BJET = new TH1F("h_bjet_0_p4_Px_BJET","", bins, min, max);
		h_bjet_0_p4_Px_HIGH_E = new TH1F("h_bjet_0_p4_Px_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Px_TRUTH = new TH1F("h_bjet_0_p4_Px_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px);
		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px_CONTROL);
		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px_EXCEPT);
		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px_EXCEPT_FINE);
		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px_PRE);
		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px_BJET);
		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px_HIGH_E);
		hv_bjet_0_p4_Px.push_back(h_bjet_0_p4_Px_TRUTH);

		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px");
		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px_CONTROL");
		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px_EXCEPT");
		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px_EXCEPT_FINE");
		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px_PRE");
		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px_BJET");
		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px_HIGH_E");
		hv_bjet_0_p4_Px_names.push_back("h_bjet_0_p4_Px_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Py
	void MC_Analysis::Book_bjet_0_p4_Py(int bins, double min, double max) {
		h_bjet_0_p4_Py = new TH1F("h_bjet_0_p4_Py","", bins, min, max);
		h_bjet_0_p4_Py_CONTROL = new TH1F("h_bjet_0_p4_Py_CONTROL","", bins, min, max);
		h_bjet_0_p4_Py_EXCEPT = new TH1F("h_bjet_0_p4_Py_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Py_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Py_PRE = new TH1F("h_bjet_0_p4_Py_PRE","", bins, min, max);
		h_bjet_0_p4_Py_BJET = new TH1F("h_bjet_0_p4_Py_BJET","", bins, min, max);
		h_bjet_0_p4_Py_HIGH_E = new TH1F("h_bjet_0_p4_Py_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Py_TRUTH = new TH1F("h_bjet_0_p4_Py_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py);
		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py_CONTROL);
		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py_EXCEPT);
		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py_EXCEPT_FINE);
		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py_PRE);
		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py_BJET);
		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py_HIGH_E);
		hv_bjet_0_p4_Py.push_back(h_bjet_0_p4_Py_TRUTH);

		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py");
		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py_CONTROL");
		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py_EXCEPT");
		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py_EXCEPT_FINE");
		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py_PRE");
		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py_BJET");
		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py_HIGH_E");
		hv_bjet_0_p4_Py_names.push_back("h_bjet_0_p4_Py_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Pz
	void MC_Analysis::Book_bjet_0_p4_Pz(int bins, double min, double max) {
		h_bjet_0_p4_Pz = new TH1F("h_bjet_0_p4_Pz","", bins, min, max);
		h_bjet_0_p4_Pz_CONTROL = new TH1F("h_bjet_0_p4_Pz_CONTROL","", bins, min, max);
		h_bjet_0_p4_Pz_EXCEPT = new TH1F("h_bjet_0_p4_Pz_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Pz_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Pz_PRE = new TH1F("h_bjet_0_p4_Pz_PRE","", bins, min, max);
		h_bjet_0_p4_Pz_BJET = new TH1F("h_bjet_0_p4_Pz_BJET","", bins, min, max);
		h_bjet_0_p4_Pz_HIGH_E = new TH1F("h_bjet_0_p4_Pz_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Pz_TRUTH = new TH1F("h_bjet_0_p4_Pz_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz);
		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz_CONTROL);
		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz_EXCEPT);
		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz_EXCEPT_FINE);
		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz_PRE);
		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz_BJET);
		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz_HIGH_E);
		hv_bjet_0_p4_Pz.push_back(h_bjet_0_p4_Pz_TRUTH);

		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz");
		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz_CONTROL");
		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz_EXCEPT");
		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz_EXCEPT_FINE");
		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz_PRE");
		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz_BJET");
		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz_HIGH_E");
		hv_bjet_0_p4_Pz_names.push_back("h_bjet_0_p4_Pz_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Energy
	void MC_Analysis::Book_bjet_0_p4_Energy(int bins, double min, double max) {
		h_bjet_0_p4_Energy = new TH1F("h_bjet_0_p4_Energy","", bins, min, max);
		h_bjet_0_p4_Energy_CONTROL = new TH1F("h_bjet_0_p4_Energy_CONTROL","", bins, min, max);
		h_bjet_0_p4_Energy_EXCEPT = new TH1F("h_bjet_0_p4_Energy_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Energy_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Energy_PRE = new TH1F("h_bjet_0_p4_Energy_PRE","", bins, min, max);
		h_bjet_0_p4_Energy_BJET = new TH1F("h_bjet_0_p4_Energy_BJET","", bins, min, max);
		h_bjet_0_p4_Energy_HIGH_E = new TH1F("h_bjet_0_p4_Energy_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Energy_TRUTH = new TH1F("h_bjet_0_p4_Energy_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy);
		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy_CONTROL);
		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy_EXCEPT);
		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy_EXCEPT_FINE);
		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy_PRE);
		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy_BJET);
		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy_HIGH_E);
		hv_bjet_0_p4_Energy.push_back(h_bjet_0_p4_Energy_TRUTH);

		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy");
		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy_CONTROL");
		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy_EXCEPT");
		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy_EXCEPT_FINE");
		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy_PRE");
		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy_BJET");
		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy_HIGH_E");
		hv_bjet_0_p4_Energy_names.push_back("h_bjet_0_p4_Energy_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Theta
	void MC_Analysis::Book_bjet_0_p4_Theta(int bins, double min, double max) {
		h_bjet_0_p4_Theta = new TH1F("h_bjet_0_p4_Theta","", bins, min, max);
		h_bjet_0_p4_Theta_CONTROL = new TH1F("h_bjet_0_p4_Theta_CONTROL","", bins, min, max);
		h_bjet_0_p4_Theta_EXCEPT = new TH1F("h_bjet_0_p4_Theta_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Theta_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Theta_PRE = new TH1F("h_bjet_0_p4_Theta_PRE","", bins, min, max);
		h_bjet_0_p4_Theta_BJET = new TH1F("h_bjet_0_p4_Theta_BJET","", bins, min, max);
		h_bjet_0_p4_Theta_HIGH_E = new TH1F("h_bjet_0_p4_Theta_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Theta_TRUTH = new TH1F("h_bjet_0_p4_Theta_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta);
		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta_CONTROL);
		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta_EXCEPT);
		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta_EXCEPT_FINE);
		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta_PRE);
		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta_BJET);
		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta_HIGH_E);
		hv_bjet_0_p4_Theta.push_back(h_bjet_0_p4_Theta_TRUTH);

		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta");
		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta_CONTROL");
		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta_EXCEPT");
		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta_EXCEPT_FINE");
		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta_PRE");
		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta_BJET");
		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta_HIGH_E");
		hv_bjet_0_p4_Theta_names.push_back("h_bjet_0_p4_Theta_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_CosTheta
	void MC_Analysis::Book_bjet_0_p4_CosTheta(int bins, double min, double max) {
		h_bjet_0_p4_CosTheta = new TH1F("h_bjet_0_p4_CosTheta","", bins, min, max);
		h_bjet_0_p4_CosTheta_CONTROL = new TH1F("h_bjet_0_p4_CosTheta_CONTROL","", bins, min, max);
		h_bjet_0_p4_CosTheta_EXCEPT = new TH1F("h_bjet_0_p4_CosTheta_EXCEPT","", bins, min, max);
		h_bjet_0_p4_CosTheta_EXCEPT_FINE = new TH1F("h_bjet_0_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_CosTheta_PRE = new TH1F("h_bjet_0_p4_CosTheta_PRE","", bins, min, max);
		h_bjet_0_p4_CosTheta_BJET = new TH1F("h_bjet_0_p4_CosTheta_BJET","", bins, min, max);
		h_bjet_0_p4_CosTheta_HIGH_E = new TH1F("h_bjet_0_p4_CosTheta_HIGH_E","", bins, min, max);
		h_bjet_0_p4_CosTheta_TRUTH = new TH1F("h_bjet_0_p4_CosTheta_TRUTH","", bins, min, max);

		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta);
		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta_CONTROL);
		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta_EXCEPT);
		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta_EXCEPT_FINE);
		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta_PRE);
		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta_BJET);
		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta_HIGH_E);
		hv_bjet_0_p4_CosTheta.push_back(h_bjet_0_p4_CosTheta_TRUTH);

		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta");
		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta_CONTROL");
		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta_EXCEPT");
		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta_EXCEPT_FINE");
		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta_PRE");
		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta_BJET");
		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta_HIGH_E");
		hv_bjet_0_p4_CosTheta_names.push_back("h_bjet_0_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Phi
	void MC_Analysis::Book_bjet_0_p4_Phi(int bins, double min, double max) {
		h_bjet_0_p4_Phi = new TH1F("h_bjet_0_p4_Phi","", bins, min, max);
		h_bjet_0_p4_Phi_CONTROL = new TH1F("h_bjet_0_p4_Phi_CONTROL","", bins, min, max);
		h_bjet_0_p4_Phi_EXCEPT = new TH1F("h_bjet_0_p4_Phi_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Phi_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Phi_PRE = new TH1F("h_bjet_0_p4_Phi_PRE","", bins, min, max);
		h_bjet_0_p4_Phi_BJET = new TH1F("h_bjet_0_p4_Phi_BJET","", bins, min, max);
		h_bjet_0_p4_Phi_HIGH_E = new TH1F("h_bjet_0_p4_Phi_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Phi_TRUTH = new TH1F("h_bjet_0_p4_Phi_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi);
		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi_CONTROL);
		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi_EXCEPT);
		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi_EXCEPT_FINE);
		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi_PRE);
		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi_BJET);
		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi_HIGH_E);
		hv_bjet_0_p4_Phi.push_back(h_bjet_0_p4_Phi_TRUTH);

		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi");
		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi_CONTROL");
		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi_EXCEPT");
		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi_EXCEPT_FINE");
		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi_PRE");
		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi_BJET");
		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi_HIGH_E");
		hv_bjet_0_p4_Phi_names.push_back("h_bjet_0_p4_Phi_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Rho
	void MC_Analysis::Book_bjet_0_p4_Rho(int bins, double min, double max) {
		h_bjet_0_p4_Rho = new TH1F("h_bjet_0_p4_Rho","", bins, min, max);
		h_bjet_0_p4_Rho_CONTROL = new TH1F("h_bjet_0_p4_Rho_CONTROL","", bins, min, max);
		h_bjet_0_p4_Rho_EXCEPT = new TH1F("h_bjet_0_p4_Rho_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Rho_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Rho_PRE = new TH1F("h_bjet_0_p4_Rho_PRE","", bins, min, max);
		h_bjet_0_p4_Rho_BJET = new TH1F("h_bjet_0_p4_Rho_BJET","", bins, min, max);
		h_bjet_0_p4_Rho_HIGH_E = new TH1F("h_bjet_0_p4_Rho_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Rho_TRUTH = new TH1F("h_bjet_0_p4_Rho_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho);
		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho_CONTROL);
		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho_EXCEPT);
		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho_EXCEPT_FINE);
		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho_PRE);
		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho_BJET);
		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho_HIGH_E);
		hv_bjet_0_p4_Rho.push_back(h_bjet_0_p4_Rho_TRUTH);

		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho");
		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho_CONTROL");
		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho_EXCEPT");
		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho_EXCEPT_FINE");
		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho_PRE");
		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho_BJET");
		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho_HIGH_E");
		hv_bjet_0_p4_Rho_names.push_back("h_bjet_0_p4_Rho_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Perp2
	void MC_Analysis::Book_bjet_0_p4_Perp2(int bins, double min, double max) {
		h_bjet_0_p4_Perp2 = new TH1F("h_bjet_0_p4_Perp2","", bins, min, max);
		h_bjet_0_p4_Perp2_CONTROL = new TH1F("h_bjet_0_p4_Perp2_CONTROL","", bins, min, max);
		h_bjet_0_p4_Perp2_EXCEPT = new TH1F("h_bjet_0_p4_Perp2_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Perp2_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Perp2_PRE = new TH1F("h_bjet_0_p4_Perp2_PRE","", bins, min, max);
		h_bjet_0_p4_Perp2_BJET = new TH1F("h_bjet_0_p4_Perp2_BJET","", bins, min, max);
		h_bjet_0_p4_Perp2_HIGH_E = new TH1F("h_bjet_0_p4_Perp2_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Perp2_TRUTH = new TH1F("h_bjet_0_p4_Perp2_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2);
		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2_CONTROL);
		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2_EXCEPT);
		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2_EXCEPT_FINE);
		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2_PRE);
		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2_BJET);
		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2_HIGH_E);
		hv_bjet_0_p4_Perp2.push_back(h_bjet_0_p4_Perp2_TRUTH);

		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2");
		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2_CONTROL");
		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2_EXCEPT");
		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2_EXCEPT_FINE");
		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2_PRE");
		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2_BJET");
		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2_HIGH_E");
		hv_bjet_0_p4_Perp2_names.push_back("h_bjet_0_p4_Perp2_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Pt
	void MC_Analysis::Book_bjet_0_p4_Pt(int bins, double min, double max) {
		h_bjet_0_p4_Pt = new TH1F("h_bjet_0_p4_Pt","", bins, min, max);
		h_bjet_0_p4_Pt_CONTROL = new TH1F("h_bjet_0_p4_Pt_CONTROL","", bins, min, max);
		h_bjet_0_p4_Pt_EXCEPT = new TH1F("h_bjet_0_p4_Pt_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Pt_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Pt_PRE = new TH1F("h_bjet_0_p4_Pt_PRE","", bins, min, max);
		h_bjet_0_p4_Pt_BJET = new TH1F("h_bjet_0_p4_Pt_BJET","", bins, min, max);
		h_bjet_0_p4_Pt_HIGH_E = new TH1F("h_bjet_0_p4_Pt_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Pt_TRUTH = new TH1F("h_bjet_0_p4_Pt_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt);
		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt_CONTROL);
		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt_EXCEPT);
		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt_EXCEPT_FINE);
		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt_PRE);
		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt_BJET);
		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt_HIGH_E);
		hv_bjet_0_p4_Pt.push_back(h_bjet_0_p4_Pt_TRUTH);

		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt");
		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt_CONTROL");
		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt_EXCEPT");
		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt_EXCEPT_FINE");
		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt_PRE");
		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt_BJET");
		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt_HIGH_E");
		hv_bjet_0_p4_Pt_names.push_back("h_bjet_0_p4_Pt_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Perp
	void MC_Analysis::Book_bjet_0_p4_Perp(int bins, double min, double max) {
		h_bjet_0_p4_Perp = new TH1F("h_bjet_0_p4_Perp","", bins, min, max);
		h_bjet_0_p4_Perp_CONTROL = new TH1F("h_bjet_0_p4_Perp_CONTROL","", bins, min, max);
		h_bjet_0_p4_Perp_EXCEPT = new TH1F("h_bjet_0_p4_Perp_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Perp_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Perp_PRE = new TH1F("h_bjet_0_p4_Perp_PRE","", bins, min, max);
		h_bjet_0_p4_Perp_BJET = new TH1F("h_bjet_0_p4_Perp_BJET","", bins, min, max);
		h_bjet_0_p4_Perp_HIGH_E = new TH1F("h_bjet_0_p4_Perp_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Perp_TRUTH = new TH1F("h_bjet_0_p4_Perp_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp);
		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp_CONTROL);
		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp_EXCEPT);
		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp_EXCEPT_FINE);
		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp_PRE);
		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp_BJET);
		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp_HIGH_E);
		hv_bjet_0_p4_Perp.push_back(h_bjet_0_p4_Perp_TRUTH);

		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp");
		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp_CONTROL");
		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp_EXCEPT");
		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp_EXCEPT_FINE");
		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp_PRE");
		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp_BJET");
		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp_HIGH_E");
		hv_bjet_0_p4_Perp_names.push_back("h_bjet_0_p4_Perp_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Et2
	void MC_Analysis::Book_bjet_0_p4_Et2(int bins, double min, double max) {
		h_bjet_0_p4_Et2 = new TH1F("h_bjet_0_p4_Et2","", bins, min, max);
		h_bjet_0_p4_Et2_CONTROL = new TH1F("h_bjet_0_p4_Et2_CONTROL","", bins, min, max);
		h_bjet_0_p4_Et2_EXCEPT = new TH1F("h_bjet_0_p4_Et2_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Et2_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Et2_PRE = new TH1F("h_bjet_0_p4_Et2_PRE","", bins, min, max);
		h_bjet_0_p4_Et2_BJET = new TH1F("h_bjet_0_p4_Et2_BJET","", bins, min, max);
		h_bjet_0_p4_Et2_HIGH_E = new TH1F("h_bjet_0_p4_Et2_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Et2_TRUTH = new TH1F("h_bjet_0_p4_Et2_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2);
		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2_CONTROL);
		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2_EXCEPT);
		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2_EXCEPT_FINE);
		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2_PRE);
		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2_BJET);
		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2_HIGH_E);
		hv_bjet_0_p4_Et2.push_back(h_bjet_0_p4_Et2_TRUTH);

		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2");
		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2_CONTROL");
		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2_EXCEPT");
		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2_EXCEPT_FINE");
		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2_PRE");
		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2_BJET");
		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2_HIGH_E");
		hv_bjet_0_p4_Et2_names.push_back("h_bjet_0_p4_Et2_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Et
	void MC_Analysis::Book_bjet_0_p4_Et(int bins, double min, double max) {
		h_bjet_0_p4_Et = new TH1F("h_bjet_0_p4_Et","", bins, min, max);
		h_bjet_0_p4_Et_CONTROL = new TH1F("h_bjet_0_p4_Et_CONTROL","", bins, min, max);
		h_bjet_0_p4_Et_EXCEPT = new TH1F("h_bjet_0_p4_Et_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Et_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Et_PRE = new TH1F("h_bjet_0_p4_Et_PRE","", bins, min, max);
		h_bjet_0_p4_Et_BJET = new TH1F("h_bjet_0_p4_Et_BJET","", bins, min, max);
		h_bjet_0_p4_Et_HIGH_E = new TH1F("h_bjet_0_p4_Et_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Et_TRUTH = new TH1F("h_bjet_0_p4_Et_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et);
		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et_CONTROL);
		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et_EXCEPT);
		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et_EXCEPT_FINE);
		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et_PRE);
		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et_BJET);
		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et_HIGH_E);
		hv_bjet_0_p4_Et.push_back(h_bjet_0_p4_Et_TRUTH);

		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et");
		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et_CONTROL");
		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et_EXCEPT");
		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et_EXCEPT_FINE");
		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et_PRE");
		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et_BJET");
		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et_HIGH_E");
		hv_bjet_0_p4_Et_names.push_back("h_bjet_0_p4_Et_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Mag2
	void MC_Analysis::Book_bjet_0_p4_Mag2(int bins, double min, double max) {
		h_bjet_0_p4_Mag2 = new TH1F("h_bjet_0_p4_Mag2","", bins, min, max);
		h_bjet_0_p4_Mag2_CONTROL = new TH1F("h_bjet_0_p4_Mag2_CONTROL","", bins, min, max);
		h_bjet_0_p4_Mag2_EXCEPT = new TH1F("h_bjet_0_p4_Mag2_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Mag2_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Mag2_PRE = new TH1F("h_bjet_0_p4_Mag2_PRE","", bins, min, max);
		h_bjet_0_p4_Mag2_BJET = new TH1F("h_bjet_0_p4_Mag2_BJET","", bins, min, max);
		h_bjet_0_p4_Mag2_HIGH_E = new TH1F("h_bjet_0_p4_Mag2_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Mag2_TRUTH = new TH1F("h_bjet_0_p4_Mag2_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2);
		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2_CONTROL);
		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2_EXCEPT);
		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2_EXCEPT_FINE);
		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2_PRE);
		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2_BJET);
		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2_HIGH_E);
		hv_bjet_0_p4_Mag2.push_back(h_bjet_0_p4_Mag2_TRUTH);

		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2");
		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2_CONTROL");
		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2_EXCEPT");
		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2_EXCEPT_FINE");
		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2_PRE");
		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2_BJET");
		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2_HIGH_E");
		hv_bjet_0_p4_Mag2_names.push_back("h_bjet_0_p4_Mag2_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_M2
	void MC_Analysis::Book_bjet_0_p4_M2(int bins, double min, double max) {
		h_bjet_0_p4_M2 = new TH1F("h_bjet_0_p4_M2","", bins, min, max);
		h_bjet_0_p4_M2_CONTROL = new TH1F("h_bjet_0_p4_M2_CONTROL","", bins, min, max);
		h_bjet_0_p4_M2_EXCEPT = new TH1F("h_bjet_0_p4_M2_EXCEPT","", bins, min, max);
		h_bjet_0_p4_M2_EXCEPT_FINE = new TH1F("h_bjet_0_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_M2_PRE = new TH1F("h_bjet_0_p4_M2_PRE","", bins, min, max);
		h_bjet_0_p4_M2_BJET = new TH1F("h_bjet_0_p4_M2_BJET","", bins, min, max);
		h_bjet_0_p4_M2_HIGH_E = new TH1F("h_bjet_0_p4_M2_HIGH_E","", bins, min, max);
		h_bjet_0_p4_M2_TRUTH = new TH1F("h_bjet_0_p4_M2_TRUTH","", bins, min, max);

		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2);
		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2_CONTROL);
		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2_EXCEPT);
		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2_EXCEPT_FINE);
		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2_PRE);
		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2_BJET);
		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2_HIGH_E);
		hv_bjet_0_p4_M2.push_back(h_bjet_0_p4_M2_TRUTH);

		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2");
		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2_CONTROL");
		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2_EXCEPT");
		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2_EXCEPT_FINE");
		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2_PRE");
		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2_BJET");
		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2_HIGH_E");
		hv_bjet_0_p4_M2_names.push_back("h_bjet_0_p4_M2_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Mag
	void MC_Analysis::Book_bjet_0_p4_Mag(int bins, double min, double max) {
		h_bjet_0_p4_Mag = new TH1F("h_bjet_0_p4_Mag","", bins, min, max);
		h_bjet_0_p4_Mag_CONTROL = new TH1F("h_bjet_0_p4_Mag_CONTROL","", bins, min, max);
		h_bjet_0_p4_Mag_EXCEPT = new TH1F("h_bjet_0_p4_Mag_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Mag_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Mag_PRE = new TH1F("h_bjet_0_p4_Mag_PRE","", bins, min, max);
		h_bjet_0_p4_Mag_BJET = new TH1F("h_bjet_0_p4_Mag_BJET","", bins, min, max);
		h_bjet_0_p4_Mag_HIGH_E = new TH1F("h_bjet_0_p4_Mag_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Mag_TRUTH = new TH1F("h_bjet_0_p4_Mag_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag);
		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag_CONTROL);
		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag_EXCEPT);
		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag_EXCEPT_FINE);
		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag_PRE);
		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag_BJET);
		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag_HIGH_E);
		hv_bjet_0_p4_Mag.push_back(h_bjet_0_p4_Mag_TRUTH);

		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag");
		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag_CONTROL");
		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag_EXCEPT");
		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag_EXCEPT_FINE");
		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag_PRE");
		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag_BJET");
		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag_HIGH_E");
		hv_bjet_0_p4_Mag_names.push_back("h_bjet_0_p4_Mag_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_M
	void MC_Analysis::Book_bjet_0_p4_M(int bins, double min, double max) {
		h_bjet_0_p4_M = new TH1F("h_bjet_0_p4_M","", bins, min, max);
		h_bjet_0_p4_M_CONTROL = new TH1F("h_bjet_0_p4_M_CONTROL","", bins, min, max);
		h_bjet_0_p4_M_EXCEPT = new TH1F("h_bjet_0_p4_M_EXCEPT","", bins, min, max);
		h_bjet_0_p4_M_EXCEPT_FINE = new TH1F("h_bjet_0_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_M_PRE = new TH1F("h_bjet_0_p4_M_PRE","", bins, min, max);
		h_bjet_0_p4_M_BJET = new TH1F("h_bjet_0_p4_M_BJET","", bins, min, max);
		h_bjet_0_p4_M_HIGH_E = new TH1F("h_bjet_0_p4_M_HIGH_E","", bins, min, max);
		h_bjet_0_p4_M_TRUTH = new TH1F("h_bjet_0_p4_M_TRUTH","", bins, min, max);

		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M);
		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M_CONTROL);
		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M_EXCEPT);
		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M_EXCEPT_FINE);
		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M_PRE);
		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M_BJET);
		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M_HIGH_E);
		hv_bjet_0_p4_M.push_back(h_bjet_0_p4_M_TRUTH);

		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M");
		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M_CONTROL");
		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M_EXCEPT");
		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M_EXCEPT_FINE");
		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M_PRE");
		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M_BJET");
		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M_HIGH_E");
		hv_bjet_0_p4_M_names.push_back("h_bjet_0_p4_M_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Mt2
	void MC_Analysis::Book_bjet_0_p4_Mt2(int bins, double min, double max) {
		h_bjet_0_p4_Mt2 = new TH1F("h_bjet_0_p4_Mt2","", bins, min, max);
		h_bjet_0_p4_Mt2_CONTROL = new TH1F("h_bjet_0_p4_Mt2_CONTROL","", bins, min, max);
		h_bjet_0_p4_Mt2_EXCEPT = new TH1F("h_bjet_0_p4_Mt2_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Mt2_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Mt2_PRE = new TH1F("h_bjet_0_p4_Mt2_PRE","", bins, min, max);
		h_bjet_0_p4_Mt2_BJET = new TH1F("h_bjet_0_p4_Mt2_BJET","", bins, min, max);
		h_bjet_0_p4_Mt2_HIGH_E = new TH1F("h_bjet_0_p4_Mt2_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Mt2_TRUTH = new TH1F("h_bjet_0_p4_Mt2_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2);
		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2_CONTROL);
		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2_EXCEPT);
		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2_EXCEPT_FINE);
		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2_PRE);
		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2_BJET);
		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2_HIGH_E);
		hv_bjet_0_p4_Mt2.push_back(h_bjet_0_p4_Mt2_TRUTH);

		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2");
		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2_CONTROL");
		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2_EXCEPT");
		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2_EXCEPT_FINE");
		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2_PRE");
		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2_BJET");
		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2_HIGH_E");
		hv_bjet_0_p4_Mt2_names.push_back("h_bjet_0_p4_Mt2_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Mt
	void MC_Analysis::Book_bjet_0_p4_Mt(int bins, double min, double max) {
		h_bjet_0_p4_Mt = new TH1F("h_bjet_0_p4_Mt","", bins, min, max);
		h_bjet_0_p4_Mt_CONTROL = new TH1F("h_bjet_0_p4_Mt_CONTROL","", bins, min, max);
		h_bjet_0_p4_Mt_EXCEPT = new TH1F("h_bjet_0_p4_Mt_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Mt_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Mt_PRE = new TH1F("h_bjet_0_p4_Mt_PRE","", bins, min, max);
		h_bjet_0_p4_Mt_BJET = new TH1F("h_bjet_0_p4_Mt_BJET","", bins, min, max);
		h_bjet_0_p4_Mt_HIGH_E = new TH1F("h_bjet_0_p4_Mt_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Mt_TRUTH = new TH1F("h_bjet_0_p4_Mt_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt);
		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt_CONTROL);
		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt_EXCEPT);
		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt_EXCEPT_FINE);
		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt_PRE);
		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt_BJET);
		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt_HIGH_E);
		hv_bjet_0_p4_Mt.push_back(h_bjet_0_p4_Mt_TRUTH);

		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt");
		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt_CONTROL");
		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt_EXCEPT");
		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt_EXCEPT_FINE");
		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt_PRE");
		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt_BJET");
		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt_HIGH_E");
		hv_bjet_0_p4_Mt_names.push_back("h_bjet_0_p4_Mt_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Beta
	void MC_Analysis::Book_bjet_0_p4_Beta(int bins, double min, double max) {
		h_bjet_0_p4_Beta = new TH1F("h_bjet_0_p4_Beta","", bins, min, max);
		h_bjet_0_p4_Beta_CONTROL = new TH1F("h_bjet_0_p4_Beta_CONTROL","", bins, min, max);
		h_bjet_0_p4_Beta_EXCEPT = new TH1F("h_bjet_0_p4_Beta_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Beta_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Beta_PRE = new TH1F("h_bjet_0_p4_Beta_PRE","", bins, min, max);
		h_bjet_0_p4_Beta_BJET = new TH1F("h_bjet_0_p4_Beta_BJET","", bins, min, max);
		h_bjet_0_p4_Beta_HIGH_E = new TH1F("h_bjet_0_p4_Beta_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Beta_TRUTH = new TH1F("h_bjet_0_p4_Beta_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta);
		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta_CONTROL);
		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta_EXCEPT);
		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta_EXCEPT_FINE);
		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta_PRE);
		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta_BJET);
		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta_HIGH_E);
		hv_bjet_0_p4_Beta.push_back(h_bjet_0_p4_Beta_TRUTH);

		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta");
		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta_CONTROL");
		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta_EXCEPT");
		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta_EXCEPT_FINE");
		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta_PRE");
		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta_BJET");
		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta_HIGH_E");
		hv_bjet_0_p4_Beta_names.push_back("h_bjet_0_p4_Beta_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Gamma
	void MC_Analysis::Book_bjet_0_p4_Gamma(int bins, double min, double max) {
		h_bjet_0_p4_Gamma = new TH1F("h_bjet_0_p4_Gamma","", bins, min, max);
		h_bjet_0_p4_Gamma_CONTROL = new TH1F("h_bjet_0_p4_Gamma_CONTROL","", bins, min, max);
		h_bjet_0_p4_Gamma_EXCEPT = new TH1F("h_bjet_0_p4_Gamma_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Gamma_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Gamma_PRE = new TH1F("h_bjet_0_p4_Gamma_PRE","", bins, min, max);
		h_bjet_0_p4_Gamma_BJET = new TH1F("h_bjet_0_p4_Gamma_BJET","", bins, min, max);
		h_bjet_0_p4_Gamma_HIGH_E = new TH1F("h_bjet_0_p4_Gamma_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Gamma_TRUTH = new TH1F("h_bjet_0_p4_Gamma_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma);
		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma_CONTROL);
		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma_EXCEPT);
		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma_EXCEPT_FINE);
		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma_PRE);
		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma_BJET);
		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma_HIGH_E);
		hv_bjet_0_p4_Gamma.push_back(h_bjet_0_p4_Gamma_TRUTH);

		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma");
		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma_CONTROL");
		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma_EXCEPT");
		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma_EXCEPT_FINE");
		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma_PRE");
		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma_BJET");
		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma_HIGH_E");
		hv_bjet_0_p4_Gamma_names.push_back("h_bjet_0_p4_Gamma_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Plus
	void MC_Analysis::Book_bjet_0_p4_Plus(int bins, double min, double max) {
		h_bjet_0_p4_Plus = new TH1F("h_bjet_0_p4_Plus","", bins, min, max);
		h_bjet_0_p4_Plus_CONTROL = new TH1F("h_bjet_0_p4_Plus_CONTROL","", bins, min, max);
		h_bjet_0_p4_Plus_EXCEPT = new TH1F("h_bjet_0_p4_Plus_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Plus_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Plus_PRE = new TH1F("h_bjet_0_p4_Plus_PRE","", bins, min, max);
		h_bjet_0_p4_Plus_BJET = new TH1F("h_bjet_0_p4_Plus_BJET","", bins, min, max);
		h_bjet_0_p4_Plus_HIGH_E = new TH1F("h_bjet_0_p4_Plus_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Plus_TRUTH = new TH1F("h_bjet_0_p4_Plus_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus);
		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus_CONTROL);
		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus_EXCEPT);
		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus_EXCEPT_FINE);
		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus_PRE);
		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus_BJET);
		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus_HIGH_E);
		hv_bjet_0_p4_Plus.push_back(h_bjet_0_p4_Plus_TRUTH);

		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus");
		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus_CONTROL");
		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus_EXCEPT");
		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus_EXCEPT_FINE");
		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus_PRE");
		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus_BJET");
		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus_HIGH_E");
		hv_bjet_0_p4_Plus_names.push_back("h_bjet_0_p4_Plus_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Minus
	void MC_Analysis::Book_bjet_0_p4_Minus(int bins, double min, double max) {
		h_bjet_0_p4_Minus = new TH1F("h_bjet_0_p4_Minus","", bins, min, max);
		h_bjet_0_p4_Minus_CONTROL = new TH1F("h_bjet_0_p4_Minus_CONTROL","", bins, min, max);
		h_bjet_0_p4_Minus_EXCEPT = new TH1F("h_bjet_0_p4_Minus_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Minus_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Minus_PRE = new TH1F("h_bjet_0_p4_Minus_PRE","", bins, min, max);
		h_bjet_0_p4_Minus_BJET = new TH1F("h_bjet_0_p4_Minus_BJET","", bins, min, max);
		h_bjet_0_p4_Minus_HIGH_E = new TH1F("h_bjet_0_p4_Minus_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Minus_TRUTH = new TH1F("h_bjet_0_p4_Minus_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus);
		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus_CONTROL);
		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus_EXCEPT);
		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus_EXCEPT_FINE);
		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus_PRE);
		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus_BJET);
		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus_HIGH_E);
		hv_bjet_0_p4_Minus.push_back(h_bjet_0_p4_Minus_TRUTH);

		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus");
		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus_CONTROL");
		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus_EXCEPT");
		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus_EXCEPT_FINE");
		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus_PRE");
		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus_BJET");
		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus_HIGH_E");
		hv_bjet_0_p4_Minus_names.push_back("h_bjet_0_p4_Minus_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Rapidity
	void MC_Analysis::Book_bjet_0_p4_Rapidity(int bins, double min, double max) {
		h_bjet_0_p4_Rapidity = new TH1F("h_bjet_0_p4_Rapidity","", bins, min, max);
		h_bjet_0_p4_Rapidity_CONTROL = new TH1F("h_bjet_0_p4_Rapidity_CONTROL","", bins, min, max);
		h_bjet_0_p4_Rapidity_EXCEPT = new TH1F("h_bjet_0_p4_Rapidity_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Rapidity_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Rapidity_PRE = new TH1F("h_bjet_0_p4_Rapidity_PRE","", bins, min, max);
		h_bjet_0_p4_Rapidity_BJET = new TH1F("h_bjet_0_p4_Rapidity_BJET","", bins, min, max);
		h_bjet_0_p4_Rapidity_HIGH_E = new TH1F("h_bjet_0_p4_Rapidity_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Rapidity_TRUTH = new TH1F("h_bjet_0_p4_Rapidity_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity);
		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity_CONTROL);
		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity_EXCEPT);
		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity_EXCEPT_FINE);
		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity_PRE);
		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity_BJET);
		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity_HIGH_E);
		hv_bjet_0_p4_Rapidity.push_back(h_bjet_0_p4_Rapidity_TRUTH);

		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity");
		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity_CONTROL");
		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity_EXCEPT");
		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity_EXCEPT_FINE");
		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity_PRE");
		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity_BJET");
		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity_HIGH_E");
		hv_bjet_0_p4_Rapidity_names.push_back("h_bjet_0_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_Eta
	void MC_Analysis::Book_bjet_0_p4_Eta(int bins, double min, double max) {
		h_bjet_0_p4_Eta = new TH1F("h_bjet_0_p4_Eta","", bins, min, max);
		h_bjet_0_p4_Eta_CONTROL = new TH1F("h_bjet_0_p4_Eta_CONTROL","", bins, min, max);
		h_bjet_0_p4_Eta_EXCEPT = new TH1F("h_bjet_0_p4_Eta_EXCEPT","", bins, min, max);
		h_bjet_0_p4_Eta_EXCEPT_FINE = new TH1F("h_bjet_0_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_Eta_PRE = new TH1F("h_bjet_0_p4_Eta_PRE","", bins, min, max);
		h_bjet_0_p4_Eta_BJET = new TH1F("h_bjet_0_p4_Eta_BJET","", bins, min, max);
		h_bjet_0_p4_Eta_HIGH_E = new TH1F("h_bjet_0_p4_Eta_HIGH_E","", bins, min, max);
		h_bjet_0_p4_Eta_TRUTH = new TH1F("h_bjet_0_p4_Eta_TRUTH","", bins, min, max);

		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta);
		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta_CONTROL);
		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta_EXCEPT);
		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta_EXCEPT_FINE);
		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta_PRE);
		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta_BJET);
		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta_HIGH_E);
		hv_bjet_0_p4_Eta.push_back(h_bjet_0_p4_Eta_TRUTH);

		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta");
		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta_CONTROL");
		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta_EXCEPT");
		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta_EXCEPT_FINE");
		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta_PRE");
		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta_BJET");
		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta_HIGH_E");
		hv_bjet_0_p4_Eta_names.push_back("h_bjet_0_p4_Eta_TRUTH");

	}
	//Histogram booking function for bjet_0_p4_PseudoRapidity
	void MC_Analysis::Book_bjet_0_p4_PseudoRapidity(int bins, double min, double max) {
		h_bjet_0_p4_PseudoRapidity = new TH1F("h_bjet_0_p4_PseudoRapidity","", bins, min, max);
		h_bjet_0_p4_PseudoRapidity_CONTROL = new TH1F("h_bjet_0_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_bjet_0_p4_PseudoRapidity_EXCEPT = new TH1F("h_bjet_0_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_bjet_0_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_bjet_0_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_0_p4_PseudoRapidity_PRE = new TH1F("h_bjet_0_p4_PseudoRapidity_PRE","", bins, min, max);
		h_bjet_0_p4_PseudoRapidity_BJET = new TH1F("h_bjet_0_p4_PseudoRapidity_BJET","", bins, min, max);
		h_bjet_0_p4_PseudoRapidity_HIGH_E = new TH1F("h_bjet_0_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_bjet_0_p4_PseudoRapidity_TRUTH = new TH1F("h_bjet_0_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity);
		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity_CONTROL);
		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity_EXCEPT);
		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity_EXCEPT_FINE);
		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity_PRE);
		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity_BJET);
		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity_HIGH_E);
		hv_bjet_0_p4_PseudoRapidity.push_back(h_bjet_0_p4_PseudoRapidity_TRUTH);

		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity");
		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity_CONTROL");
		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity_EXCEPT");
		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity_EXCEPT_FINE");
		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity_PRE");
		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity_BJET");
		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity_HIGH_E");
		hv_bjet_0_p4_PseudoRapidity_names.push_back("h_bjet_0_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_0_p4 ----- ///

//Histogram booking function for bjet_0_q
void MC_Analysis::Book_bjet_0_q(int bins, double min, double max) {
	h_bjet_0_q = new TH1F("h_bjet_0_q", "", bins, min, max);
	h_bjet_0_q_CONTROL = new TH1F("h_bjet_0_q_CONTROL", "", bins, min, max);
	h_bjet_0_q_EXCEPT = new TH1F("h_bjet_0_q_EXCEPT", "", bins, min, max);
	h_bjet_0_q_EXCEPT_FINE = new TH1F("h_bjet_0_q_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_q_PRE = new TH1F("h_bjet_0_q_PRE", "", bins, min, max);
	h_bjet_0_q_BJET = new TH1F("h_bjet_0_q_BJET", "", bins, min, max);
	h_bjet_0_q_HIGH_E = new TH1F("h_bjet_0_q_HIGH_E", "", bins, min, max);
	h_bjet_0_q_TRUTH = new TH1F("h_bjet_0_q_TRUTH", "", bins, min, max);

	hv_bjet_0_q.push_back(h_bjet_0_q);
	hv_bjet_0_q.push_back(h_bjet_0_q_CONTROL);
	hv_bjet_0_q.push_back(h_bjet_0_q_EXCEPT);
	hv_bjet_0_q.push_back(h_bjet_0_q_EXCEPT_FINE);
	hv_bjet_0_q.push_back(h_bjet_0_q_PRE);
	hv_bjet_0_q.push_back(h_bjet_0_q_BJET);
	hv_bjet_0_q.push_back(h_bjet_0_q_HIGH_E);
	hv_bjet_0_q.push_back(h_bjet_0_q_TRUTH);

	hv_bjet_0_q_names.push_back("h_bjet_0_q");
	hv_bjet_0_q_names.push_back("h_bjet_0_q_CONTROL");
	hv_bjet_0_q_names.push_back("h_bjet_0_q_EXCEPT");
	hv_bjet_0_q_names.push_back("h_bjet_0_q_EXCEPT_FINE");
	hv_bjet_0_q_names.push_back("h_bjet_0_q_PRE");
	hv_bjet_0_q_names.push_back("h_bjet_0_q_BJET");
	hv_bjet_0_q_names.push_back("h_bjet_0_q_HIGH_E");
	hv_bjet_0_q_names.push_back("h_bjet_0_q_TRUTH");

}

//Histogram booking function for bjet_0_type
void MC_Analysis::Book_bjet_0_type(int bins, double min, double max) {
	h_bjet_0_type = new TH1F("h_bjet_0_type", "", bins, min, max);
	h_bjet_0_type_CONTROL = new TH1F("h_bjet_0_type_CONTROL", "", bins, min, max);
	h_bjet_0_type_EXCEPT = new TH1F("h_bjet_0_type_EXCEPT", "", bins, min, max);
	h_bjet_0_type_EXCEPT_FINE = new TH1F("h_bjet_0_type_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_type_PRE = new TH1F("h_bjet_0_type_PRE", "", bins, min, max);
	h_bjet_0_type_BJET = new TH1F("h_bjet_0_type_BJET", "", bins, min, max);
	h_bjet_0_type_HIGH_E = new TH1F("h_bjet_0_type_HIGH_E", "", bins, min, max);
	h_bjet_0_type_TRUTH = new TH1F("h_bjet_0_type_TRUTH", "", bins, min, max);

	hv_bjet_0_type.push_back(h_bjet_0_type);
	hv_bjet_0_type.push_back(h_bjet_0_type_CONTROL);
	hv_bjet_0_type.push_back(h_bjet_0_type_EXCEPT);
	hv_bjet_0_type.push_back(h_bjet_0_type_EXCEPT_FINE);
	hv_bjet_0_type.push_back(h_bjet_0_type_PRE);
	hv_bjet_0_type.push_back(h_bjet_0_type_BJET);
	hv_bjet_0_type.push_back(h_bjet_0_type_HIGH_E);
	hv_bjet_0_type.push_back(h_bjet_0_type_TRUTH);

	hv_bjet_0_type_names.push_back("h_bjet_0_type");
	hv_bjet_0_type_names.push_back("h_bjet_0_type_CONTROL");
	hv_bjet_0_type_names.push_back("h_bjet_0_type_EXCEPT");
	hv_bjet_0_type_names.push_back("h_bjet_0_type_EXCEPT_FINE");
	hv_bjet_0_type_names.push_back("h_bjet_0_type_PRE");
	hv_bjet_0_type_names.push_back("h_bjet_0_type_BJET");
	hv_bjet_0_type_names.push_back("h_bjet_0_type_HIGH_E");
	hv_bjet_0_type_names.push_back("h_bjet_0_type_TRUTH");

}

//Histogram booking function for bjet_0_width
void MC_Analysis::Book_bjet_0_width(int bins, double min, double max) {
	h_bjet_0_width = new TH1F("h_bjet_0_width", "", bins, min, max);
	h_bjet_0_width_CONTROL = new TH1F("h_bjet_0_width_CONTROL", "", bins, min, max);
	h_bjet_0_width_EXCEPT = new TH1F("h_bjet_0_width_EXCEPT", "", bins, min, max);
	h_bjet_0_width_EXCEPT_FINE = new TH1F("h_bjet_0_width_EXCEPT_FINE", "", bins, min, max);
	h_bjet_0_width_PRE = new TH1F("h_bjet_0_width_PRE", "", bins, min, max);
	h_bjet_0_width_BJET = new TH1F("h_bjet_0_width_BJET", "", bins, min, max);
	h_bjet_0_width_HIGH_E = new TH1F("h_bjet_0_width_HIGH_E", "", bins, min, max);
	h_bjet_0_width_TRUTH = new TH1F("h_bjet_0_width_TRUTH", "", bins, min, max);

	hv_bjet_0_width.push_back(h_bjet_0_width);
	hv_bjet_0_width.push_back(h_bjet_0_width_CONTROL);
	hv_bjet_0_width.push_back(h_bjet_0_width_EXCEPT);
	hv_bjet_0_width.push_back(h_bjet_0_width_EXCEPT_FINE);
	hv_bjet_0_width.push_back(h_bjet_0_width_PRE);
	hv_bjet_0_width.push_back(h_bjet_0_width_BJET);
	hv_bjet_0_width.push_back(h_bjet_0_width_HIGH_E);
	hv_bjet_0_width.push_back(h_bjet_0_width_TRUTH);

	hv_bjet_0_width_names.push_back("h_bjet_0_width");
	hv_bjet_0_width_names.push_back("h_bjet_0_width_CONTROL");
	hv_bjet_0_width_names.push_back("h_bjet_0_width_EXCEPT");
	hv_bjet_0_width_names.push_back("h_bjet_0_width_EXCEPT_FINE");
	hv_bjet_0_width_names.push_back("h_bjet_0_width_PRE");
	hv_bjet_0_width_names.push_back("h_bjet_0_width_BJET");
	hv_bjet_0_width_names.push_back("h_bjet_0_width_HIGH_E");
	hv_bjet_0_width_names.push_back("h_bjet_0_width_TRUTH");

}



///------------------------------- bjet_1 --------------------------///

//Histogram booking function for bjet_1
void MC_Analysis::Book_bjet_1(int bins, double min, double max) {
	h_bjet_1 = new TH1F("h_bjet_1", "", bins, min, max);
	h_bjet_1_CONTROL = new TH1F("h_bjet_1_CONTROL", "", bins, min, max);
	h_bjet_1_EXCEPT = new TH1F("h_bjet_1_EXCEPT", "", bins, min, max);
	h_bjet_1_EXCEPT_FINE = new TH1F("h_bjet_1_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_PRE = new TH1F("h_bjet_1_PRE", "", bins, min, max);
	h_bjet_1_BJET = new TH1F("h_bjet_1_BJET", "", bins, min, max);
	h_bjet_1_HIGH_E = new TH1F("h_bjet_1_HIGH_E", "", bins, min, max);
	h_bjet_1_TRUTH = new TH1F("h_bjet_1_TRUTH", "", bins, min, max);

	hv_bjet_1.push_back(h_bjet_1);
	hv_bjet_1.push_back(h_bjet_1_CONTROL);
	hv_bjet_1.push_back(h_bjet_1_EXCEPT);
	hv_bjet_1.push_back(h_bjet_1_EXCEPT_FINE);
	hv_bjet_1.push_back(h_bjet_1_PRE);
	hv_bjet_1.push_back(h_bjet_1_BJET);
	hv_bjet_1.push_back(h_bjet_1_HIGH_E);
	hv_bjet_1.push_back(h_bjet_1_TRUTH);

	hv_bjet_1_names.push_back("h_bjet_1");
	hv_bjet_1_names.push_back("h_bjet_1_CONTROL");
	hv_bjet_1_names.push_back("h_bjet_1_EXCEPT");
	hv_bjet_1_names.push_back("h_bjet_1_EXCEPT_FINE");
	hv_bjet_1_names.push_back("h_bjet_1_PRE");
	hv_bjet_1_names.push_back("h_bjet_1_BJET");
	hv_bjet_1_names.push_back("h_bjet_1_HIGH_E");
	hv_bjet_1_names.push_back("h_bjet_1_TRUTH");

}

//Histogram booking function for bjet_1_NOMINAL_central_jets_effSF_JVT
void MC_Analysis::Book_bjet_1_NOMINAL_central_jets_effSF_JVT(int bins, double min, double max) {
	h_bjet_1_NOMINAL_central_jets_effSF_JVT = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_effSF_JVT_CONTROL = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_effSF_JVT_PRE = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT_PRE", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_effSF_JVT_BJET = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT_BJET", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_effSF_JVT_TRUTH = new TH1F("h_bjet_1_NOMINAL_central_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT);
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT_CONTROL);
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT);
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE);
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT_PRE);
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT_BJET);
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E);
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_effSF_JVT_TRUTH);

	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT");
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT_CONTROL");
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT");
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE");
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT_PRE");
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT_BJET");
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E");
	hv_bjet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for bjet_1_NOMINAL_central_jets_ineffSF_JVT
void MC_Analysis::Book_bjet_1_NOMINAL_central_jets_ineffSF_JVT(int bins, double min, double max) {
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_PRE = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_BJET = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH = new TH1F("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT);
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL);
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT);
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_PRE);
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_BJET);
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E);
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH);

	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT");
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL");
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT");
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_PRE");
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_BJET");
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E");
	hv_bjet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for bjet_1_NOMINAL_effSF_MV2c10
void MC_Analysis::Book_bjet_1_NOMINAL_effSF_MV2c10(int bins, double min, double max) {
	h_bjet_1_NOMINAL_effSF_MV2c10 = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10", "", bins, min, max);
	h_bjet_1_NOMINAL_effSF_MV2c10_CONTROL = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10_CONTROL", "", bins, min, max);
	h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT", "", bins, min, max);
	h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_NOMINAL_effSF_MV2c10_PRE = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10_PRE", "", bins, min, max);
	h_bjet_1_NOMINAL_effSF_MV2c10_BJET = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10_BJET", "", bins, min, max);
	h_bjet_1_NOMINAL_effSF_MV2c10_HIGH_E = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10_HIGH_E", "", bins, min, max);
	h_bjet_1_NOMINAL_effSF_MV2c10_TRUTH = new TH1F("h_bjet_1_NOMINAL_effSF_MV2c10_TRUTH", "", bins, min, max);

	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10);
	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10_CONTROL);
	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT);
	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE);
	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10_PRE);
	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10_BJET);
	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10_HIGH_E);
	hv_bjet_1_NOMINAL_effSF_MV2c10.push_back(h_bjet_1_NOMINAL_effSF_MV2c10_TRUTH);

	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10");
	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10_CONTROL");
	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT");
	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE");
	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10_PRE");
	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10_BJET");
	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10_HIGH_E");
	hv_bjet_1_NOMINAL_effSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_effSF_MV2c10_TRUTH");

}

//Histogram booking function for bjet_1_NOMINAL_forward_jets_effSF_JVT
void MC_Analysis::Book_bjet_1_NOMINAL_forward_jets_effSF_JVT(int bins, double min, double max) {
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT_PRE = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_PRE", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT_BJET = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_BJET", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH = new TH1F("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT);
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL);
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT);
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE);
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT_PRE);
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT_BJET);
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E);
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH);

	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT");
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL");
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT");
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE");
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_PRE");
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_BJET");
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E");
	hv_bjet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for bjet_1_NOMINAL_forward_jets_ineffSF_JVT
void MC_Analysis::Book_bjet_1_NOMINAL_forward_jets_ineffSF_JVT(int bins, double min, double max) {
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH = new TH1F("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT);
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL);
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT);
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE);
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET);
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E);
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH);

	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT");
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL");
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT");
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE");
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET");
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E");
	hv_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_bjet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for bjet_1_NOMINAL_ineffSF_MV2c10
void MC_Analysis::Book_bjet_1_NOMINAL_ineffSF_MV2c10(int bins, double min, double max) {
	h_bjet_1_NOMINAL_ineffSF_MV2c10 = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10", "", bins, min, max);
	h_bjet_1_NOMINAL_ineffSF_MV2c10_CONTROL = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10_CONTROL", "", bins, min, max);
	h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT", "", bins, min, max);
	h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_NOMINAL_ineffSF_MV2c10_PRE = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10_PRE", "", bins, min, max);
	h_bjet_1_NOMINAL_ineffSF_MV2c10_BJET = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10_BJET", "", bins, min, max);
	h_bjet_1_NOMINAL_ineffSF_MV2c10_HIGH_E = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10_HIGH_E", "", bins, min, max);
	h_bjet_1_NOMINAL_ineffSF_MV2c10_TRUTH = new TH1F("h_bjet_1_NOMINAL_ineffSF_MV2c10_TRUTH", "", bins, min, max);

	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10);
	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10_CONTROL);
	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT);
	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE);
	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10_PRE);
	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10_BJET);
	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10_HIGH_E);
	hv_bjet_1_NOMINAL_ineffSF_MV2c10.push_back(h_bjet_1_NOMINAL_ineffSF_MV2c10_TRUTH);

	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10");
	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10_CONTROL");
	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT");
	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE");
	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10_PRE");
	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10_BJET");
	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10_HIGH_E");
	hv_bjet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_bjet_1_NOMINAL_ineffSF_MV2c10_TRUTH");

}

//Histogram booking function for bjet_1_b_tag_quantile
void MC_Analysis::Book_bjet_1_b_tag_quantile(int bins, double min, double max) {
	h_bjet_1_b_tag_quantile = new TH1F("h_bjet_1_b_tag_quantile", "", bins, min, max);
	h_bjet_1_b_tag_quantile_CONTROL = new TH1F("h_bjet_1_b_tag_quantile_CONTROL", "", bins, min, max);
	h_bjet_1_b_tag_quantile_EXCEPT = new TH1F("h_bjet_1_b_tag_quantile_EXCEPT", "", bins, min, max);
	h_bjet_1_b_tag_quantile_EXCEPT_FINE = new TH1F("h_bjet_1_b_tag_quantile_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_b_tag_quantile_PRE = new TH1F("h_bjet_1_b_tag_quantile_PRE", "", bins, min, max);
	h_bjet_1_b_tag_quantile_BJET = new TH1F("h_bjet_1_b_tag_quantile_BJET", "", bins, min, max);
	h_bjet_1_b_tag_quantile_HIGH_E = new TH1F("h_bjet_1_b_tag_quantile_HIGH_E", "", bins, min, max);
	h_bjet_1_b_tag_quantile_TRUTH = new TH1F("h_bjet_1_b_tag_quantile_TRUTH", "", bins, min, max);

	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile);
	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile_CONTROL);
	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile_EXCEPT);
	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile_EXCEPT_FINE);
	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile_PRE);
	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile_BJET);
	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile_HIGH_E);
	hv_bjet_1_b_tag_quantile.push_back(h_bjet_1_b_tag_quantile_TRUTH);

	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile");
	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile_CONTROL");
	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile_EXCEPT");
	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile_EXCEPT_FINE");
	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile_PRE");
	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile_BJET");
	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile_HIGH_E");
	hv_bjet_1_b_tag_quantile_names.push_back("h_bjet_1_b_tag_quantile_TRUTH");

}

//Histogram booking function for bjet_1_b_tag_score
void MC_Analysis::Book_bjet_1_b_tag_score(int bins, double min, double max) {
	h_bjet_1_b_tag_score = new TH1F("h_bjet_1_b_tag_score", "", bins, min, max);
	h_bjet_1_b_tag_score_CONTROL = new TH1F("h_bjet_1_b_tag_score_CONTROL", "", bins, min, max);
	h_bjet_1_b_tag_score_EXCEPT = new TH1F("h_bjet_1_b_tag_score_EXCEPT", "", bins, min, max);
	h_bjet_1_b_tag_score_EXCEPT_FINE = new TH1F("h_bjet_1_b_tag_score_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_b_tag_score_PRE = new TH1F("h_bjet_1_b_tag_score_PRE", "", bins, min, max);
	h_bjet_1_b_tag_score_BJET = new TH1F("h_bjet_1_b_tag_score_BJET", "", bins, min, max);
	h_bjet_1_b_tag_score_HIGH_E = new TH1F("h_bjet_1_b_tag_score_HIGH_E", "", bins, min, max);
	h_bjet_1_b_tag_score_TRUTH = new TH1F("h_bjet_1_b_tag_score_TRUTH", "", bins, min, max);

	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score);
	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score_CONTROL);
	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score_EXCEPT);
	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score_EXCEPT_FINE);
	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score_PRE);
	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score_BJET);
	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score_HIGH_E);
	hv_bjet_1_b_tag_score.push_back(h_bjet_1_b_tag_score_TRUTH);

	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score");
	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score_CONTROL");
	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score_EXCEPT");
	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score_EXCEPT_FINE");
	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score_PRE");
	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score_BJET");
	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score_HIGH_E");
	hv_bjet_1_b_tag_score_names.push_back("h_bjet_1_b_tag_score_TRUTH");

}

//Histogram booking function for bjet_1_b_tagged
void MC_Analysis::Book_bjet_1_b_tagged(int bins, double min, double max) {
	h_bjet_1_b_tagged = new TH1F("h_bjet_1_b_tagged", "", bins, min, max);
	h_bjet_1_b_tagged_CONTROL = new TH1F("h_bjet_1_b_tagged_CONTROL", "", bins, min, max);
	h_bjet_1_b_tagged_EXCEPT = new TH1F("h_bjet_1_b_tagged_EXCEPT", "", bins, min, max);
	h_bjet_1_b_tagged_EXCEPT_FINE = new TH1F("h_bjet_1_b_tagged_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_b_tagged_PRE = new TH1F("h_bjet_1_b_tagged_PRE", "", bins, min, max);
	h_bjet_1_b_tagged_BJET = new TH1F("h_bjet_1_b_tagged_BJET", "", bins, min, max);
	h_bjet_1_b_tagged_HIGH_E = new TH1F("h_bjet_1_b_tagged_HIGH_E", "", bins, min, max);
	h_bjet_1_b_tagged_TRUTH = new TH1F("h_bjet_1_b_tagged_TRUTH", "", bins, min, max);

	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged);
	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged_CONTROL);
	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged_EXCEPT);
	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged_EXCEPT_FINE);
	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged_PRE);
	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged_BJET);
	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged_HIGH_E);
	hv_bjet_1_b_tagged.push_back(h_bjet_1_b_tagged_TRUTH);

	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged");
	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged_CONTROL");
	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged_EXCEPT");
	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged_EXCEPT_FINE");
	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged_PRE");
	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged_BJET");
	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged_HIGH_E");
	hv_bjet_1_b_tagged_names.push_back("h_bjet_1_b_tagged_TRUTH");

}

//Histogram booking function for bjet_1_fjvt
void MC_Analysis::Book_bjet_1_fjvt(int bins, double min, double max) {
	h_bjet_1_fjvt = new TH1F("h_bjet_1_fjvt", "", bins, min, max);
	h_bjet_1_fjvt_CONTROL = new TH1F("h_bjet_1_fjvt_CONTROL", "", bins, min, max);
	h_bjet_1_fjvt_EXCEPT = new TH1F("h_bjet_1_fjvt_EXCEPT", "", bins, min, max);
	h_bjet_1_fjvt_EXCEPT_FINE = new TH1F("h_bjet_1_fjvt_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_fjvt_PRE = new TH1F("h_bjet_1_fjvt_PRE", "", bins, min, max);
	h_bjet_1_fjvt_BJET = new TH1F("h_bjet_1_fjvt_BJET", "", bins, min, max);
	h_bjet_1_fjvt_HIGH_E = new TH1F("h_bjet_1_fjvt_HIGH_E", "", bins, min, max);
	h_bjet_1_fjvt_TRUTH = new TH1F("h_bjet_1_fjvt_TRUTH", "", bins, min, max);

	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt);
	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt_CONTROL);
	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt_EXCEPT);
	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt_EXCEPT_FINE);
	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt_PRE);
	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt_BJET);
	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt_HIGH_E);
	hv_bjet_1_fjvt.push_back(h_bjet_1_fjvt_TRUTH);

	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt");
	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt_CONTROL");
	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt_EXCEPT");
	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt_EXCEPT_FINE");
	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt_PRE");
	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt_BJET");
	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt_HIGH_E");
	hv_bjet_1_fjvt_names.push_back("h_bjet_1_fjvt_TRUTH");

}

//Histogram booking function for bjet_1_flavorlabel
void MC_Analysis::Book_bjet_1_flavorlabel(int bins, double min, double max) {
	h_bjet_1_flavorlabel = new TH1F("h_bjet_1_flavorlabel", "", bins, min, max);
	h_bjet_1_flavorlabel_CONTROL = new TH1F("h_bjet_1_flavorlabel_CONTROL", "", bins, min, max);
	h_bjet_1_flavorlabel_EXCEPT = new TH1F("h_bjet_1_flavorlabel_EXCEPT", "", bins, min, max);
	h_bjet_1_flavorlabel_EXCEPT_FINE = new TH1F("h_bjet_1_flavorlabel_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_flavorlabel_PRE = new TH1F("h_bjet_1_flavorlabel_PRE", "", bins, min, max);
	h_bjet_1_flavorlabel_BJET = new TH1F("h_bjet_1_flavorlabel_BJET", "", bins, min, max);
	h_bjet_1_flavorlabel_HIGH_E = new TH1F("h_bjet_1_flavorlabel_HIGH_E", "", bins, min, max);
	h_bjet_1_flavorlabel_TRUTH = new TH1F("h_bjet_1_flavorlabel_TRUTH", "", bins, min, max);

	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel);
	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel_CONTROL);
	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel_EXCEPT);
	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel_EXCEPT_FINE);
	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel_PRE);
	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel_BJET);
	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel_HIGH_E);
	hv_bjet_1_flavorlabel.push_back(h_bjet_1_flavorlabel_TRUTH);

	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel");
	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel_CONTROL");
	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel_EXCEPT");
	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel_EXCEPT_FINE");
	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel_PRE");
	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel_BJET");
	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel_HIGH_E");
	hv_bjet_1_flavorlabel_names.push_back("h_bjet_1_flavorlabel_TRUTH");

}

//Histogram booking function for bjet_1_flavorlabel_cone
void MC_Analysis::Book_bjet_1_flavorlabel_cone(int bins, double min, double max) {
	h_bjet_1_flavorlabel_cone = new TH1F("h_bjet_1_flavorlabel_cone", "", bins, min, max);
	h_bjet_1_flavorlabel_cone_CONTROL = new TH1F("h_bjet_1_flavorlabel_cone_CONTROL", "", bins, min, max);
	h_bjet_1_flavorlabel_cone_EXCEPT = new TH1F("h_bjet_1_flavorlabel_cone_EXCEPT", "", bins, min, max);
	h_bjet_1_flavorlabel_cone_EXCEPT_FINE = new TH1F("h_bjet_1_flavorlabel_cone_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_flavorlabel_cone_PRE = new TH1F("h_bjet_1_flavorlabel_cone_PRE", "", bins, min, max);
	h_bjet_1_flavorlabel_cone_BJET = new TH1F("h_bjet_1_flavorlabel_cone_BJET", "", bins, min, max);
	h_bjet_1_flavorlabel_cone_HIGH_E = new TH1F("h_bjet_1_flavorlabel_cone_HIGH_E", "", bins, min, max);
	h_bjet_1_flavorlabel_cone_TRUTH = new TH1F("h_bjet_1_flavorlabel_cone_TRUTH", "", bins, min, max);

	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone);
	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone_CONTROL);
	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone_EXCEPT);
	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone_EXCEPT_FINE);
	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone_PRE);
	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone_BJET);
	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone_HIGH_E);
	hv_bjet_1_flavorlabel_cone.push_back(h_bjet_1_flavorlabel_cone_TRUTH);

	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone");
	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone_CONTROL");
	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone_EXCEPT");
	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone_EXCEPT_FINE");
	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone_PRE");
	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone_BJET");
	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone_HIGH_E");
	hv_bjet_1_flavorlabel_cone_names.push_back("h_bjet_1_flavorlabel_cone_TRUTH");

}

//Histogram booking function for bjet_1_flavorlabel_part
void MC_Analysis::Book_bjet_1_flavorlabel_part(int bins, double min, double max) {
	h_bjet_1_flavorlabel_part = new TH1F("h_bjet_1_flavorlabel_part", "", bins, min, max);
	h_bjet_1_flavorlabel_part_CONTROL = new TH1F("h_bjet_1_flavorlabel_part_CONTROL", "", bins, min, max);
	h_bjet_1_flavorlabel_part_EXCEPT = new TH1F("h_bjet_1_flavorlabel_part_EXCEPT", "", bins, min, max);
	h_bjet_1_flavorlabel_part_EXCEPT_FINE = new TH1F("h_bjet_1_flavorlabel_part_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_flavorlabel_part_PRE = new TH1F("h_bjet_1_flavorlabel_part_PRE", "", bins, min, max);
	h_bjet_1_flavorlabel_part_BJET = new TH1F("h_bjet_1_flavorlabel_part_BJET", "", bins, min, max);
	h_bjet_1_flavorlabel_part_HIGH_E = new TH1F("h_bjet_1_flavorlabel_part_HIGH_E", "", bins, min, max);
	h_bjet_1_flavorlabel_part_TRUTH = new TH1F("h_bjet_1_flavorlabel_part_TRUTH", "", bins, min, max);

	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part);
	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part_CONTROL);
	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part_EXCEPT);
	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part_EXCEPT_FINE);
	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part_PRE);
	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part_BJET);
	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part_HIGH_E);
	hv_bjet_1_flavorlabel_part.push_back(h_bjet_1_flavorlabel_part_TRUTH);

	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part");
	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part_CONTROL");
	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part_EXCEPT");
	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part_EXCEPT_FINE");
	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part_PRE");
	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part_BJET");
	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part_HIGH_E");
	hv_bjet_1_flavorlabel_part_names.push_back("h_bjet_1_flavorlabel_part_TRUTH");

}

//Histogram booking function for bjet_1_is_Jvt_HS
void MC_Analysis::Book_bjet_1_is_Jvt_HS(int bins, double min, double max) {
	h_bjet_1_is_Jvt_HS = new TH1F("h_bjet_1_is_Jvt_HS", "", bins, min, max);
	h_bjet_1_is_Jvt_HS_CONTROL = new TH1F("h_bjet_1_is_Jvt_HS_CONTROL", "", bins, min, max);
	h_bjet_1_is_Jvt_HS_EXCEPT = new TH1F("h_bjet_1_is_Jvt_HS_EXCEPT", "", bins, min, max);
	h_bjet_1_is_Jvt_HS_EXCEPT_FINE = new TH1F("h_bjet_1_is_Jvt_HS_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_is_Jvt_HS_PRE = new TH1F("h_bjet_1_is_Jvt_HS_PRE", "", bins, min, max);
	h_bjet_1_is_Jvt_HS_BJET = new TH1F("h_bjet_1_is_Jvt_HS_BJET", "", bins, min, max);
	h_bjet_1_is_Jvt_HS_HIGH_E = new TH1F("h_bjet_1_is_Jvt_HS_HIGH_E", "", bins, min, max);
	h_bjet_1_is_Jvt_HS_TRUTH = new TH1F("h_bjet_1_is_Jvt_HS_TRUTH", "", bins, min, max);

	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS);
	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS_CONTROL);
	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS_EXCEPT);
	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS_EXCEPT_FINE);
	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS_PRE);
	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS_BJET);
	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS_HIGH_E);
	hv_bjet_1_is_Jvt_HS.push_back(h_bjet_1_is_Jvt_HS_TRUTH);

	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS");
	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS_CONTROL");
	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS_EXCEPT");
	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS_EXCEPT_FINE");
	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS_PRE");
	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS_BJET");
	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS_HIGH_E");
	hv_bjet_1_is_Jvt_HS_names.push_back("h_bjet_1_is_Jvt_HS_TRUTH");

}

//Histogram booking function for bjet_1_jvt
void MC_Analysis::Book_bjet_1_jvt(int bins, double min, double max) {
	h_bjet_1_jvt = new TH1F("h_bjet_1_jvt", "", bins, min, max);
	h_bjet_1_jvt_CONTROL = new TH1F("h_bjet_1_jvt_CONTROL", "", bins, min, max);
	h_bjet_1_jvt_EXCEPT = new TH1F("h_bjet_1_jvt_EXCEPT", "", bins, min, max);
	h_bjet_1_jvt_EXCEPT_FINE = new TH1F("h_bjet_1_jvt_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_jvt_PRE = new TH1F("h_bjet_1_jvt_PRE", "", bins, min, max);
	h_bjet_1_jvt_BJET = new TH1F("h_bjet_1_jvt_BJET", "", bins, min, max);
	h_bjet_1_jvt_HIGH_E = new TH1F("h_bjet_1_jvt_HIGH_E", "", bins, min, max);
	h_bjet_1_jvt_TRUTH = new TH1F("h_bjet_1_jvt_TRUTH", "", bins, min, max);

	hv_bjet_1_jvt.push_back(h_bjet_1_jvt);
	hv_bjet_1_jvt.push_back(h_bjet_1_jvt_CONTROL);
	hv_bjet_1_jvt.push_back(h_bjet_1_jvt_EXCEPT);
	hv_bjet_1_jvt.push_back(h_bjet_1_jvt_EXCEPT_FINE);
	hv_bjet_1_jvt.push_back(h_bjet_1_jvt_PRE);
	hv_bjet_1_jvt.push_back(h_bjet_1_jvt_BJET);
	hv_bjet_1_jvt.push_back(h_bjet_1_jvt_HIGH_E);
	hv_bjet_1_jvt.push_back(h_bjet_1_jvt_TRUTH);

	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt");
	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt_CONTROL");
	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt_EXCEPT");
	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt_EXCEPT_FINE");
	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt_PRE");
	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt_BJET");
	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt_HIGH_E");
	hv_bjet_1_jvt_names.push_back("h_bjet_1_jvt_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_1_matched_p4 ----- //
	//Histogram booking function for bjet_1_matched_p4_X
	void MC_Analysis::Book_bjet_1_matched_p4_X(int bins, double min, double max) {
		h_bjet_1_matched_p4_X = new TH1F("h_bjet_1_matched_p4_X","", bins, min, max);
		h_bjet_1_matched_p4_X_CONTROL = new TH1F("h_bjet_1_matched_p4_X_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_X_EXCEPT = new TH1F("h_bjet_1_matched_p4_X_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_X_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_X_PRE = new TH1F("h_bjet_1_matched_p4_X_PRE","", bins, min, max);
		h_bjet_1_matched_p4_X_BJET = new TH1F("h_bjet_1_matched_p4_X_BJET","", bins, min, max);
		h_bjet_1_matched_p4_X_HIGH_E = new TH1F("h_bjet_1_matched_p4_X_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_X_TRUTH = new TH1F("h_bjet_1_matched_p4_X_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X);
		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X_CONTROL);
		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X_EXCEPT);
		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X_EXCEPT_FINE);
		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X_PRE);
		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X_BJET);
		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X_HIGH_E);
		hv_bjet_1_matched_p4_X.push_back(h_bjet_1_matched_p4_X_TRUTH);

		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X");
		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X_CONTROL");
		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X_EXCEPT");
		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X_EXCEPT_FINE");
		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X_PRE");
		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X_BJET");
		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X_HIGH_E");
		hv_bjet_1_matched_p4_X_names.push_back("h_bjet_1_matched_p4_X_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Y
	void MC_Analysis::Book_bjet_1_matched_p4_Y(int bins, double min, double max) {
		h_bjet_1_matched_p4_Y = new TH1F("h_bjet_1_matched_p4_Y","", bins, min, max);
		h_bjet_1_matched_p4_Y_CONTROL = new TH1F("h_bjet_1_matched_p4_Y_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Y_EXCEPT = new TH1F("h_bjet_1_matched_p4_Y_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Y_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Y_PRE = new TH1F("h_bjet_1_matched_p4_Y_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Y_BJET = new TH1F("h_bjet_1_matched_p4_Y_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Y_HIGH_E = new TH1F("h_bjet_1_matched_p4_Y_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Y_TRUTH = new TH1F("h_bjet_1_matched_p4_Y_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y);
		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y_CONTROL);
		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y_EXCEPT);
		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y_PRE);
		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y_BJET);
		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y_HIGH_E);
		hv_bjet_1_matched_p4_Y.push_back(h_bjet_1_matched_p4_Y_TRUTH);

		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y");
		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y_CONTROL");
		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y_EXCEPT");
		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y_PRE");
		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y_BJET");
		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y_HIGH_E");
		hv_bjet_1_matched_p4_Y_names.push_back("h_bjet_1_matched_p4_Y_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Z
	void MC_Analysis::Book_bjet_1_matched_p4_Z(int bins, double min, double max) {
		h_bjet_1_matched_p4_Z = new TH1F("h_bjet_1_matched_p4_Z","", bins, min, max);
		h_bjet_1_matched_p4_Z_CONTROL = new TH1F("h_bjet_1_matched_p4_Z_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Z_EXCEPT = new TH1F("h_bjet_1_matched_p4_Z_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Z_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Z_PRE = new TH1F("h_bjet_1_matched_p4_Z_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Z_BJET = new TH1F("h_bjet_1_matched_p4_Z_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Z_HIGH_E = new TH1F("h_bjet_1_matched_p4_Z_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Z_TRUTH = new TH1F("h_bjet_1_matched_p4_Z_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z);
		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z_CONTROL);
		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z_EXCEPT);
		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z_PRE);
		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z_BJET);
		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z_HIGH_E);
		hv_bjet_1_matched_p4_Z.push_back(h_bjet_1_matched_p4_Z_TRUTH);

		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z");
		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z_CONTROL");
		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z_EXCEPT");
		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z_PRE");
		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z_BJET");
		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z_HIGH_E");
		hv_bjet_1_matched_p4_Z_names.push_back("h_bjet_1_matched_p4_Z_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_T
	void MC_Analysis::Book_bjet_1_matched_p4_T(int bins, double min, double max) {
		h_bjet_1_matched_p4_T = new TH1F("h_bjet_1_matched_p4_T","", bins, min, max);
		h_bjet_1_matched_p4_T_CONTROL = new TH1F("h_bjet_1_matched_p4_T_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_T_EXCEPT = new TH1F("h_bjet_1_matched_p4_T_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_T_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_T_PRE = new TH1F("h_bjet_1_matched_p4_T_PRE","", bins, min, max);
		h_bjet_1_matched_p4_T_BJET = new TH1F("h_bjet_1_matched_p4_T_BJET","", bins, min, max);
		h_bjet_1_matched_p4_T_HIGH_E = new TH1F("h_bjet_1_matched_p4_T_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_T_TRUTH = new TH1F("h_bjet_1_matched_p4_T_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T);
		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T_CONTROL);
		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T_EXCEPT);
		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T_EXCEPT_FINE);
		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T_PRE);
		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T_BJET);
		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T_HIGH_E);
		hv_bjet_1_matched_p4_T.push_back(h_bjet_1_matched_p4_T_TRUTH);

		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T");
		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T_CONTROL");
		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T_EXCEPT");
		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T_EXCEPT_FINE");
		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T_PRE");
		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T_BJET");
		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T_HIGH_E");
		hv_bjet_1_matched_p4_T_names.push_back("h_bjet_1_matched_p4_T_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Px
	void MC_Analysis::Book_bjet_1_matched_p4_Px(int bins, double min, double max) {
		h_bjet_1_matched_p4_Px = new TH1F("h_bjet_1_matched_p4_Px","", bins, min, max);
		h_bjet_1_matched_p4_Px_CONTROL = new TH1F("h_bjet_1_matched_p4_Px_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Px_EXCEPT = new TH1F("h_bjet_1_matched_p4_Px_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Px_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Px_PRE = new TH1F("h_bjet_1_matched_p4_Px_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Px_BJET = new TH1F("h_bjet_1_matched_p4_Px_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Px_HIGH_E = new TH1F("h_bjet_1_matched_p4_Px_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Px_TRUTH = new TH1F("h_bjet_1_matched_p4_Px_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px);
		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px_CONTROL);
		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px_EXCEPT);
		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px_PRE);
		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px_BJET);
		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px_HIGH_E);
		hv_bjet_1_matched_p4_Px.push_back(h_bjet_1_matched_p4_Px_TRUTH);

		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px");
		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px_CONTROL");
		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px_EXCEPT");
		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px_PRE");
		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px_BJET");
		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px_HIGH_E");
		hv_bjet_1_matched_p4_Px_names.push_back("h_bjet_1_matched_p4_Px_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Py
	void MC_Analysis::Book_bjet_1_matched_p4_Py(int bins, double min, double max) {
		h_bjet_1_matched_p4_Py = new TH1F("h_bjet_1_matched_p4_Py","", bins, min, max);
		h_bjet_1_matched_p4_Py_CONTROL = new TH1F("h_bjet_1_matched_p4_Py_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Py_EXCEPT = new TH1F("h_bjet_1_matched_p4_Py_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Py_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Py_PRE = new TH1F("h_bjet_1_matched_p4_Py_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Py_BJET = new TH1F("h_bjet_1_matched_p4_Py_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Py_HIGH_E = new TH1F("h_bjet_1_matched_p4_Py_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Py_TRUTH = new TH1F("h_bjet_1_matched_p4_Py_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py);
		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py_CONTROL);
		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py_EXCEPT);
		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py_PRE);
		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py_BJET);
		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py_HIGH_E);
		hv_bjet_1_matched_p4_Py.push_back(h_bjet_1_matched_p4_Py_TRUTH);

		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py");
		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py_CONTROL");
		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py_EXCEPT");
		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py_PRE");
		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py_BJET");
		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py_HIGH_E");
		hv_bjet_1_matched_p4_Py_names.push_back("h_bjet_1_matched_p4_Py_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Pz
	void MC_Analysis::Book_bjet_1_matched_p4_Pz(int bins, double min, double max) {
		h_bjet_1_matched_p4_Pz = new TH1F("h_bjet_1_matched_p4_Pz","", bins, min, max);
		h_bjet_1_matched_p4_Pz_CONTROL = new TH1F("h_bjet_1_matched_p4_Pz_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Pz_EXCEPT = new TH1F("h_bjet_1_matched_p4_Pz_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Pz_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Pz_PRE = new TH1F("h_bjet_1_matched_p4_Pz_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Pz_BJET = new TH1F("h_bjet_1_matched_p4_Pz_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Pz_HIGH_E = new TH1F("h_bjet_1_matched_p4_Pz_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Pz_TRUTH = new TH1F("h_bjet_1_matched_p4_Pz_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz);
		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz_CONTROL);
		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz_EXCEPT);
		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz_PRE);
		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz_BJET);
		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz_HIGH_E);
		hv_bjet_1_matched_p4_Pz.push_back(h_bjet_1_matched_p4_Pz_TRUTH);

		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz");
		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz_CONTROL");
		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz_EXCEPT");
		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz_PRE");
		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz_BJET");
		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz_HIGH_E");
		hv_bjet_1_matched_p4_Pz_names.push_back("h_bjet_1_matched_p4_Pz_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Energy
	void MC_Analysis::Book_bjet_1_matched_p4_Energy(int bins, double min, double max) {
		h_bjet_1_matched_p4_Energy = new TH1F("h_bjet_1_matched_p4_Energy","", bins, min, max);
		h_bjet_1_matched_p4_Energy_CONTROL = new TH1F("h_bjet_1_matched_p4_Energy_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Energy_EXCEPT = new TH1F("h_bjet_1_matched_p4_Energy_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Energy_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Energy_PRE = new TH1F("h_bjet_1_matched_p4_Energy_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Energy_BJET = new TH1F("h_bjet_1_matched_p4_Energy_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Energy_HIGH_E = new TH1F("h_bjet_1_matched_p4_Energy_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Energy_TRUTH = new TH1F("h_bjet_1_matched_p4_Energy_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy);
		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy_CONTROL);
		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy_EXCEPT);
		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy_PRE);
		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy_BJET);
		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy_HIGH_E);
		hv_bjet_1_matched_p4_Energy.push_back(h_bjet_1_matched_p4_Energy_TRUTH);

		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy");
		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy_CONTROL");
		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy_EXCEPT");
		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy_PRE");
		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy_BJET");
		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy_HIGH_E");
		hv_bjet_1_matched_p4_Energy_names.push_back("h_bjet_1_matched_p4_Energy_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Theta
	void MC_Analysis::Book_bjet_1_matched_p4_Theta(int bins, double min, double max) {
		h_bjet_1_matched_p4_Theta = new TH1F("h_bjet_1_matched_p4_Theta","", bins, min, max);
		h_bjet_1_matched_p4_Theta_CONTROL = new TH1F("h_bjet_1_matched_p4_Theta_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Theta_EXCEPT = new TH1F("h_bjet_1_matched_p4_Theta_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Theta_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Theta_PRE = new TH1F("h_bjet_1_matched_p4_Theta_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Theta_BJET = new TH1F("h_bjet_1_matched_p4_Theta_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Theta_HIGH_E = new TH1F("h_bjet_1_matched_p4_Theta_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Theta_TRUTH = new TH1F("h_bjet_1_matched_p4_Theta_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta);
		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta_CONTROL);
		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta_EXCEPT);
		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta_PRE);
		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta_BJET);
		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta_HIGH_E);
		hv_bjet_1_matched_p4_Theta.push_back(h_bjet_1_matched_p4_Theta_TRUTH);

		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta");
		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta_CONTROL");
		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta_EXCEPT");
		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta_PRE");
		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta_BJET");
		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta_HIGH_E");
		hv_bjet_1_matched_p4_Theta_names.push_back("h_bjet_1_matched_p4_Theta_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_CosTheta
	void MC_Analysis::Book_bjet_1_matched_p4_CosTheta(int bins, double min, double max) {
		h_bjet_1_matched_p4_CosTheta = new TH1F("h_bjet_1_matched_p4_CosTheta","", bins, min, max);
		h_bjet_1_matched_p4_CosTheta_CONTROL = new TH1F("h_bjet_1_matched_p4_CosTheta_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_CosTheta_EXCEPT = new TH1F("h_bjet_1_matched_p4_CosTheta_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_CosTheta_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_CosTheta_PRE = new TH1F("h_bjet_1_matched_p4_CosTheta_PRE","", bins, min, max);
		h_bjet_1_matched_p4_CosTheta_BJET = new TH1F("h_bjet_1_matched_p4_CosTheta_BJET","", bins, min, max);
		h_bjet_1_matched_p4_CosTheta_HIGH_E = new TH1F("h_bjet_1_matched_p4_CosTheta_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_CosTheta_TRUTH = new TH1F("h_bjet_1_matched_p4_CosTheta_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta);
		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta_CONTROL);
		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta_EXCEPT);
		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta_EXCEPT_FINE);
		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta_PRE);
		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta_BJET);
		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta_HIGH_E);
		hv_bjet_1_matched_p4_CosTheta.push_back(h_bjet_1_matched_p4_CosTheta_TRUTH);

		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta");
		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta_CONTROL");
		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta_EXCEPT");
		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta_EXCEPT_FINE");
		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta_PRE");
		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta_BJET");
		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta_HIGH_E");
		hv_bjet_1_matched_p4_CosTheta_names.push_back("h_bjet_1_matched_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Phi
	void MC_Analysis::Book_bjet_1_matched_p4_Phi(int bins, double min, double max) {
		h_bjet_1_matched_p4_Phi = new TH1F("h_bjet_1_matched_p4_Phi","", bins, min, max);
		h_bjet_1_matched_p4_Phi_CONTROL = new TH1F("h_bjet_1_matched_p4_Phi_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Phi_EXCEPT = new TH1F("h_bjet_1_matched_p4_Phi_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Phi_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Phi_PRE = new TH1F("h_bjet_1_matched_p4_Phi_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Phi_BJET = new TH1F("h_bjet_1_matched_p4_Phi_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Phi_HIGH_E = new TH1F("h_bjet_1_matched_p4_Phi_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Phi_TRUTH = new TH1F("h_bjet_1_matched_p4_Phi_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi);
		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi_CONTROL);
		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi_EXCEPT);
		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi_PRE);
		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi_BJET);
		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi_HIGH_E);
		hv_bjet_1_matched_p4_Phi.push_back(h_bjet_1_matched_p4_Phi_TRUTH);

		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi");
		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi_CONTROL");
		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi_EXCEPT");
		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi_PRE");
		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi_BJET");
		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi_HIGH_E");
		hv_bjet_1_matched_p4_Phi_names.push_back("h_bjet_1_matched_p4_Phi_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Rho
	void MC_Analysis::Book_bjet_1_matched_p4_Rho(int bins, double min, double max) {
		h_bjet_1_matched_p4_Rho = new TH1F("h_bjet_1_matched_p4_Rho","", bins, min, max);
		h_bjet_1_matched_p4_Rho_CONTROL = new TH1F("h_bjet_1_matched_p4_Rho_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Rho_EXCEPT = new TH1F("h_bjet_1_matched_p4_Rho_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Rho_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Rho_PRE = new TH1F("h_bjet_1_matched_p4_Rho_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Rho_BJET = new TH1F("h_bjet_1_matched_p4_Rho_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Rho_HIGH_E = new TH1F("h_bjet_1_matched_p4_Rho_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Rho_TRUTH = new TH1F("h_bjet_1_matched_p4_Rho_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho);
		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho_CONTROL);
		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho_EXCEPT);
		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho_PRE);
		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho_BJET);
		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho_HIGH_E);
		hv_bjet_1_matched_p4_Rho.push_back(h_bjet_1_matched_p4_Rho_TRUTH);

		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho");
		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho_CONTROL");
		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho_EXCEPT");
		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho_PRE");
		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho_BJET");
		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho_HIGH_E");
		hv_bjet_1_matched_p4_Rho_names.push_back("h_bjet_1_matched_p4_Rho_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Perp2
	void MC_Analysis::Book_bjet_1_matched_p4_Perp2(int bins, double min, double max) {
		h_bjet_1_matched_p4_Perp2 = new TH1F("h_bjet_1_matched_p4_Perp2","", bins, min, max);
		h_bjet_1_matched_p4_Perp2_CONTROL = new TH1F("h_bjet_1_matched_p4_Perp2_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Perp2_EXCEPT = new TH1F("h_bjet_1_matched_p4_Perp2_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Perp2_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Perp2_PRE = new TH1F("h_bjet_1_matched_p4_Perp2_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Perp2_BJET = new TH1F("h_bjet_1_matched_p4_Perp2_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Perp2_HIGH_E = new TH1F("h_bjet_1_matched_p4_Perp2_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Perp2_TRUTH = new TH1F("h_bjet_1_matched_p4_Perp2_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2);
		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2_CONTROL);
		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2_EXCEPT);
		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2_PRE);
		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2_BJET);
		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2_HIGH_E);
		hv_bjet_1_matched_p4_Perp2.push_back(h_bjet_1_matched_p4_Perp2_TRUTH);

		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2");
		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2_CONTROL");
		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2_EXCEPT");
		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2_PRE");
		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2_BJET");
		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2_HIGH_E");
		hv_bjet_1_matched_p4_Perp2_names.push_back("h_bjet_1_matched_p4_Perp2_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Pt
	void MC_Analysis::Book_bjet_1_matched_p4_Pt(int bins, double min, double max) {
		h_bjet_1_matched_p4_Pt = new TH1F("h_bjet_1_matched_p4_Pt","", bins, min, max);
		h_bjet_1_matched_p4_Pt_CONTROL = new TH1F("h_bjet_1_matched_p4_Pt_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Pt_EXCEPT = new TH1F("h_bjet_1_matched_p4_Pt_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Pt_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Pt_PRE = new TH1F("h_bjet_1_matched_p4_Pt_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Pt_BJET = new TH1F("h_bjet_1_matched_p4_Pt_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Pt_HIGH_E = new TH1F("h_bjet_1_matched_p4_Pt_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Pt_TRUTH = new TH1F("h_bjet_1_matched_p4_Pt_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt);
		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt_CONTROL);
		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt_EXCEPT);
		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt_PRE);
		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt_BJET);
		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt_HIGH_E);
		hv_bjet_1_matched_p4_Pt.push_back(h_bjet_1_matched_p4_Pt_TRUTH);

		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt");
		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt_CONTROL");
		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt_EXCEPT");
		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt_PRE");
		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt_BJET");
		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt_HIGH_E");
		hv_bjet_1_matched_p4_Pt_names.push_back("h_bjet_1_matched_p4_Pt_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Perp
	void MC_Analysis::Book_bjet_1_matched_p4_Perp(int bins, double min, double max) {
		h_bjet_1_matched_p4_Perp = new TH1F("h_bjet_1_matched_p4_Perp","", bins, min, max);
		h_bjet_1_matched_p4_Perp_CONTROL = new TH1F("h_bjet_1_matched_p4_Perp_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Perp_EXCEPT = new TH1F("h_bjet_1_matched_p4_Perp_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Perp_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Perp_PRE = new TH1F("h_bjet_1_matched_p4_Perp_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Perp_BJET = new TH1F("h_bjet_1_matched_p4_Perp_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Perp_HIGH_E = new TH1F("h_bjet_1_matched_p4_Perp_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Perp_TRUTH = new TH1F("h_bjet_1_matched_p4_Perp_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp);
		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp_CONTROL);
		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp_EXCEPT);
		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp_PRE);
		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp_BJET);
		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp_HIGH_E);
		hv_bjet_1_matched_p4_Perp.push_back(h_bjet_1_matched_p4_Perp_TRUTH);

		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp");
		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp_CONTROL");
		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp_EXCEPT");
		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp_PRE");
		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp_BJET");
		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp_HIGH_E");
		hv_bjet_1_matched_p4_Perp_names.push_back("h_bjet_1_matched_p4_Perp_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Et2
	void MC_Analysis::Book_bjet_1_matched_p4_Et2(int bins, double min, double max) {
		h_bjet_1_matched_p4_Et2 = new TH1F("h_bjet_1_matched_p4_Et2","", bins, min, max);
		h_bjet_1_matched_p4_Et2_CONTROL = new TH1F("h_bjet_1_matched_p4_Et2_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Et2_EXCEPT = new TH1F("h_bjet_1_matched_p4_Et2_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Et2_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Et2_PRE = new TH1F("h_bjet_1_matched_p4_Et2_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Et2_BJET = new TH1F("h_bjet_1_matched_p4_Et2_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Et2_HIGH_E = new TH1F("h_bjet_1_matched_p4_Et2_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Et2_TRUTH = new TH1F("h_bjet_1_matched_p4_Et2_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2);
		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2_CONTROL);
		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2_EXCEPT);
		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2_PRE);
		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2_BJET);
		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2_HIGH_E);
		hv_bjet_1_matched_p4_Et2.push_back(h_bjet_1_matched_p4_Et2_TRUTH);

		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2");
		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2_CONTROL");
		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2_EXCEPT");
		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2_PRE");
		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2_BJET");
		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2_HIGH_E");
		hv_bjet_1_matched_p4_Et2_names.push_back("h_bjet_1_matched_p4_Et2_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Et
	void MC_Analysis::Book_bjet_1_matched_p4_Et(int bins, double min, double max) {
		h_bjet_1_matched_p4_Et = new TH1F("h_bjet_1_matched_p4_Et","", bins, min, max);
		h_bjet_1_matched_p4_Et_CONTROL = new TH1F("h_bjet_1_matched_p4_Et_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Et_EXCEPT = new TH1F("h_bjet_1_matched_p4_Et_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Et_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Et_PRE = new TH1F("h_bjet_1_matched_p4_Et_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Et_BJET = new TH1F("h_bjet_1_matched_p4_Et_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Et_HIGH_E = new TH1F("h_bjet_1_matched_p4_Et_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Et_TRUTH = new TH1F("h_bjet_1_matched_p4_Et_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et);
		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et_CONTROL);
		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et_EXCEPT);
		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et_PRE);
		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et_BJET);
		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et_HIGH_E);
		hv_bjet_1_matched_p4_Et.push_back(h_bjet_1_matched_p4_Et_TRUTH);

		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et");
		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et_CONTROL");
		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et_EXCEPT");
		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et_PRE");
		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et_BJET");
		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et_HIGH_E");
		hv_bjet_1_matched_p4_Et_names.push_back("h_bjet_1_matched_p4_Et_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Mag2
	void MC_Analysis::Book_bjet_1_matched_p4_Mag2(int bins, double min, double max) {
		h_bjet_1_matched_p4_Mag2 = new TH1F("h_bjet_1_matched_p4_Mag2","", bins, min, max);
		h_bjet_1_matched_p4_Mag2_CONTROL = new TH1F("h_bjet_1_matched_p4_Mag2_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Mag2_EXCEPT = new TH1F("h_bjet_1_matched_p4_Mag2_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Mag2_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Mag2_PRE = new TH1F("h_bjet_1_matched_p4_Mag2_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Mag2_BJET = new TH1F("h_bjet_1_matched_p4_Mag2_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Mag2_HIGH_E = new TH1F("h_bjet_1_matched_p4_Mag2_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Mag2_TRUTH = new TH1F("h_bjet_1_matched_p4_Mag2_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2);
		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2_CONTROL);
		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2_EXCEPT);
		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2_PRE);
		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2_BJET);
		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2_HIGH_E);
		hv_bjet_1_matched_p4_Mag2.push_back(h_bjet_1_matched_p4_Mag2_TRUTH);

		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2");
		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2_CONTROL");
		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2_EXCEPT");
		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2_PRE");
		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2_BJET");
		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2_HIGH_E");
		hv_bjet_1_matched_p4_Mag2_names.push_back("h_bjet_1_matched_p4_Mag2_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_M2
	void MC_Analysis::Book_bjet_1_matched_p4_M2(int bins, double min, double max) {
		h_bjet_1_matched_p4_M2 = new TH1F("h_bjet_1_matched_p4_M2","", bins, min, max);
		h_bjet_1_matched_p4_M2_CONTROL = new TH1F("h_bjet_1_matched_p4_M2_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_M2_EXCEPT = new TH1F("h_bjet_1_matched_p4_M2_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_M2_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_M2_PRE = new TH1F("h_bjet_1_matched_p4_M2_PRE","", bins, min, max);
		h_bjet_1_matched_p4_M2_BJET = new TH1F("h_bjet_1_matched_p4_M2_BJET","", bins, min, max);
		h_bjet_1_matched_p4_M2_HIGH_E = new TH1F("h_bjet_1_matched_p4_M2_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_M2_TRUTH = new TH1F("h_bjet_1_matched_p4_M2_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2);
		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2_CONTROL);
		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2_EXCEPT);
		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2_EXCEPT_FINE);
		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2_PRE);
		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2_BJET);
		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2_HIGH_E);
		hv_bjet_1_matched_p4_M2.push_back(h_bjet_1_matched_p4_M2_TRUTH);

		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2");
		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2_CONTROL");
		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2_EXCEPT");
		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2_EXCEPT_FINE");
		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2_PRE");
		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2_BJET");
		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2_HIGH_E");
		hv_bjet_1_matched_p4_M2_names.push_back("h_bjet_1_matched_p4_M2_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Mag
	void MC_Analysis::Book_bjet_1_matched_p4_Mag(int bins, double min, double max) {
		h_bjet_1_matched_p4_Mag = new TH1F("h_bjet_1_matched_p4_Mag","", bins, min, max);
		h_bjet_1_matched_p4_Mag_CONTROL = new TH1F("h_bjet_1_matched_p4_Mag_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Mag_EXCEPT = new TH1F("h_bjet_1_matched_p4_Mag_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Mag_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Mag_PRE = new TH1F("h_bjet_1_matched_p4_Mag_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Mag_BJET = new TH1F("h_bjet_1_matched_p4_Mag_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Mag_HIGH_E = new TH1F("h_bjet_1_matched_p4_Mag_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Mag_TRUTH = new TH1F("h_bjet_1_matched_p4_Mag_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag);
		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag_CONTROL);
		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag_EXCEPT);
		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag_PRE);
		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag_BJET);
		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag_HIGH_E);
		hv_bjet_1_matched_p4_Mag.push_back(h_bjet_1_matched_p4_Mag_TRUTH);

		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag");
		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag_CONTROL");
		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag_EXCEPT");
		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag_PRE");
		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag_BJET");
		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag_HIGH_E");
		hv_bjet_1_matched_p4_Mag_names.push_back("h_bjet_1_matched_p4_Mag_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_M
	void MC_Analysis::Book_bjet_1_matched_p4_M(int bins, double min, double max) {
		h_bjet_1_matched_p4_M = new TH1F("h_bjet_1_matched_p4_M","", bins, min, max);
		h_bjet_1_matched_p4_M_CONTROL = new TH1F("h_bjet_1_matched_p4_M_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_M_EXCEPT = new TH1F("h_bjet_1_matched_p4_M_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_M_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_M_PRE = new TH1F("h_bjet_1_matched_p4_M_PRE","", bins, min, max);
		h_bjet_1_matched_p4_M_BJET = new TH1F("h_bjet_1_matched_p4_M_BJET","", bins, min, max);
		h_bjet_1_matched_p4_M_HIGH_E = new TH1F("h_bjet_1_matched_p4_M_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_M_TRUTH = new TH1F("h_bjet_1_matched_p4_M_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M);
		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M_CONTROL);
		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M_EXCEPT);
		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M_EXCEPT_FINE);
		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M_PRE);
		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M_BJET);
		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M_HIGH_E);
		hv_bjet_1_matched_p4_M.push_back(h_bjet_1_matched_p4_M_TRUTH);

		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M");
		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M_CONTROL");
		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M_EXCEPT");
		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M_EXCEPT_FINE");
		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M_PRE");
		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M_BJET");
		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M_HIGH_E");
		hv_bjet_1_matched_p4_M_names.push_back("h_bjet_1_matched_p4_M_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Mt2
	void MC_Analysis::Book_bjet_1_matched_p4_Mt2(int bins, double min, double max) {
		h_bjet_1_matched_p4_Mt2 = new TH1F("h_bjet_1_matched_p4_Mt2","", bins, min, max);
		h_bjet_1_matched_p4_Mt2_CONTROL = new TH1F("h_bjet_1_matched_p4_Mt2_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Mt2_EXCEPT = new TH1F("h_bjet_1_matched_p4_Mt2_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Mt2_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Mt2_PRE = new TH1F("h_bjet_1_matched_p4_Mt2_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Mt2_BJET = new TH1F("h_bjet_1_matched_p4_Mt2_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Mt2_HIGH_E = new TH1F("h_bjet_1_matched_p4_Mt2_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Mt2_TRUTH = new TH1F("h_bjet_1_matched_p4_Mt2_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2);
		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2_CONTROL);
		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2_EXCEPT);
		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2_PRE);
		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2_BJET);
		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2_HIGH_E);
		hv_bjet_1_matched_p4_Mt2.push_back(h_bjet_1_matched_p4_Mt2_TRUTH);

		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2");
		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2_CONTROL");
		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2_EXCEPT");
		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2_PRE");
		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2_BJET");
		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2_HIGH_E");
		hv_bjet_1_matched_p4_Mt2_names.push_back("h_bjet_1_matched_p4_Mt2_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Mt
	void MC_Analysis::Book_bjet_1_matched_p4_Mt(int bins, double min, double max) {
		h_bjet_1_matched_p4_Mt = new TH1F("h_bjet_1_matched_p4_Mt","", bins, min, max);
		h_bjet_1_matched_p4_Mt_CONTROL = new TH1F("h_bjet_1_matched_p4_Mt_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Mt_EXCEPT = new TH1F("h_bjet_1_matched_p4_Mt_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Mt_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Mt_PRE = new TH1F("h_bjet_1_matched_p4_Mt_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Mt_BJET = new TH1F("h_bjet_1_matched_p4_Mt_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Mt_HIGH_E = new TH1F("h_bjet_1_matched_p4_Mt_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Mt_TRUTH = new TH1F("h_bjet_1_matched_p4_Mt_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt);
		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt_CONTROL);
		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt_EXCEPT);
		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt_PRE);
		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt_BJET);
		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt_HIGH_E);
		hv_bjet_1_matched_p4_Mt.push_back(h_bjet_1_matched_p4_Mt_TRUTH);

		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt");
		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt_CONTROL");
		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt_EXCEPT");
		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt_PRE");
		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt_BJET");
		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt_HIGH_E");
		hv_bjet_1_matched_p4_Mt_names.push_back("h_bjet_1_matched_p4_Mt_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Beta
	void MC_Analysis::Book_bjet_1_matched_p4_Beta(int bins, double min, double max) {
		h_bjet_1_matched_p4_Beta = new TH1F("h_bjet_1_matched_p4_Beta","", bins, min, max);
		h_bjet_1_matched_p4_Beta_CONTROL = new TH1F("h_bjet_1_matched_p4_Beta_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Beta_EXCEPT = new TH1F("h_bjet_1_matched_p4_Beta_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Beta_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Beta_PRE = new TH1F("h_bjet_1_matched_p4_Beta_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Beta_BJET = new TH1F("h_bjet_1_matched_p4_Beta_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Beta_HIGH_E = new TH1F("h_bjet_1_matched_p4_Beta_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Beta_TRUTH = new TH1F("h_bjet_1_matched_p4_Beta_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta);
		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta_CONTROL);
		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta_EXCEPT);
		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta_PRE);
		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta_BJET);
		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta_HIGH_E);
		hv_bjet_1_matched_p4_Beta.push_back(h_bjet_1_matched_p4_Beta_TRUTH);

		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta");
		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta_CONTROL");
		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta_EXCEPT");
		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta_PRE");
		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta_BJET");
		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta_HIGH_E");
		hv_bjet_1_matched_p4_Beta_names.push_back("h_bjet_1_matched_p4_Beta_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Gamma
	void MC_Analysis::Book_bjet_1_matched_p4_Gamma(int bins, double min, double max) {
		h_bjet_1_matched_p4_Gamma = new TH1F("h_bjet_1_matched_p4_Gamma","", bins, min, max);
		h_bjet_1_matched_p4_Gamma_CONTROL = new TH1F("h_bjet_1_matched_p4_Gamma_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Gamma_EXCEPT = new TH1F("h_bjet_1_matched_p4_Gamma_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Gamma_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Gamma_PRE = new TH1F("h_bjet_1_matched_p4_Gamma_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Gamma_BJET = new TH1F("h_bjet_1_matched_p4_Gamma_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Gamma_HIGH_E = new TH1F("h_bjet_1_matched_p4_Gamma_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Gamma_TRUTH = new TH1F("h_bjet_1_matched_p4_Gamma_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma);
		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma_CONTROL);
		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma_EXCEPT);
		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma_PRE);
		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma_BJET);
		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma_HIGH_E);
		hv_bjet_1_matched_p4_Gamma.push_back(h_bjet_1_matched_p4_Gamma_TRUTH);

		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma");
		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma_CONTROL");
		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma_EXCEPT");
		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma_PRE");
		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma_BJET");
		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma_HIGH_E");
		hv_bjet_1_matched_p4_Gamma_names.push_back("h_bjet_1_matched_p4_Gamma_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Plus
	void MC_Analysis::Book_bjet_1_matched_p4_Plus(int bins, double min, double max) {
		h_bjet_1_matched_p4_Plus = new TH1F("h_bjet_1_matched_p4_Plus","", bins, min, max);
		h_bjet_1_matched_p4_Plus_CONTROL = new TH1F("h_bjet_1_matched_p4_Plus_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Plus_EXCEPT = new TH1F("h_bjet_1_matched_p4_Plus_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Plus_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Plus_PRE = new TH1F("h_bjet_1_matched_p4_Plus_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Plus_BJET = new TH1F("h_bjet_1_matched_p4_Plus_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Plus_HIGH_E = new TH1F("h_bjet_1_matched_p4_Plus_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Plus_TRUTH = new TH1F("h_bjet_1_matched_p4_Plus_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus);
		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus_CONTROL);
		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus_EXCEPT);
		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus_PRE);
		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus_BJET);
		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus_HIGH_E);
		hv_bjet_1_matched_p4_Plus.push_back(h_bjet_1_matched_p4_Plus_TRUTH);

		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus");
		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus_CONTROL");
		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus_EXCEPT");
		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus_PRE");
		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus_BJET");
		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus_HIGH_E");
		hv_bjet_1_matched_p4_Plus_names.push_back("h_bjet_1_matched_p4_Plus_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Minus
	void MC_Analysis::Book_bjet_1_matched_p4_Minus(int bins, double min, double max) {
		h_bjet_1_matched_p4_Minus = new TH1F("h_bjet_1_matched_p4_Minus","", bins, min, max);
		h_bjet_1_matched_p4_Minus_CONTROL = new TH1F("h_bjet_1_matched_p4_Minus_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Minus_EXCEPT = new TH1F("h_bjet_1_matched_p4_Minus_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Minus_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Minus_PRE = new TH1F("h_bjet_1_matched_p4_Minus_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Minus_BJET = new TH1F("h_bjet_1_matched_p4_Minus_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Minus_HIGH_E = new TH1F("h_bjet_1_matched_p4_Minus_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Minus_TRUTH = new TH1F("h_bjet_1_matched_p4_Minus_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus);
		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus_CONTROL);
		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus_EXCEPT);
		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus_PRE);
		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus_BJET);
		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus_HIGH_E);
		hv_bjet_1_matched_p4_Minus.push_back(h_bjet_1_matched_p4_Minus_TRUTH);

		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus");
		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus_CONTROL");
		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus_EXCEPT");
		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus_PRE");
		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus_BJET");
		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus_HIGH_E");
		hv_bjet_1_matched_p4_Minus_names.push_back("h_bjet_1_matched_p4_Minus_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Rapidity
	void MC_Analysis::Book_bjet_1_matched_p4_Rapidity(int bins, double min, double max) {
		h_bjet_1_matched_p4_Rapidity = new TH1F("h_bjet_1_matched_p4_Rapidity","", bins, min, max);
		h_bjet_1_matched_p4_Rapidity_CONTROL = new TH1F("h_bjet_1_matched_p4_Rapidity_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Rapidity_EXCEPT = new TH1F("h_bjet_1_matched_p4_Rapidity_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Rapidity_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Rapidity_PRE = new TH1F("h_bjet_1_matched_p4_Rapidity_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Rapidity_BJET = new TH1F("h_bjet_1_matched_p4_Rapidity_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Rapidity_HIGH_E = new TH1F("h_bjet_1_matched_p4_Rapidity_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Rapidity_TRUTH = new TH1F("h_bjet_1_matched_p4_Rapidity_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity);
		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity_CONTROL);
		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity_EXCEPT);
		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity_PRE);
		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity_BJET);
		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity_HIGH_E);
		hv_bjet_1_matched_p4_Rapidity.push_back(h_bjet_1_matched_p4_Rapidity_TRUTH);

		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity");
		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity_CONTROL");
		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity_EXCEPT");
		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity_PRE");
		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity_BJET");
		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity_HIGH_E");
		hv_bjet_1_matched_p4_Rapidity_names.push_back("h_bjet_1_matched_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_Eta
	void MC_Analysis::Book_bjet_1_matched_p4_Eta(int bins, double min, double max) {
		h_bjet_1_matched_p4_Eta = new TH1F("h_bjet_1_matched_p4_Eta","", bins, min, max);
		h_bjet_1_matched_p4_Eta_CONTROL = new TH1F("h_bjet_1_matched_p4_Eta_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_Eta_EXCEPT = new TH1F("h_bjet_1_matched_p4_Eta_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_Eta_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_Eta_PRE = new TH1F("h_bjet_1_matched_p4_Eta_PRE","", bins, min, max);
		h_bjet_1_matched_p4_Eta_BJET = new TH1F("h_bjet_1_matched_p4_Eta_BJET","", bins, min, max);
		h_bjet_1_matched_p4_Eta_HIGH_E = new TH1F("h_bjet_1_matched_p4_Eta_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_Eta_TRUTH = new TH1F("h_bjet_1_matched_p4_Eta_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta);
		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta_CONTROL);
		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta_EXCEPT);
		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta_EXCEPT_FINE);
		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta_PRE);
		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta_BJET);
		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta_HIGH_E);
		hv_bjet_1_matched_p4_Eta.push_back(h_bjet_1_matched_p4_Eta_TRUTH);

		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta");
		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta_CONTROL");
		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta_EXCEPT");
		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta_EXCEPT_FINE");
		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta_PRE");
		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta_BJET");
		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta_HIGH_E");
		hv_bjet_1_matched_p4_Eta_names.push_back("h_bjet_1_matched_p4_Eta_TRUTH");

	}
	//Histogram booking function for bjet_1_matched_p4_PseudoRapidity
	void MC_Analysis::Book_bjet_1_matched_p4_PseudoRapidity(int bins, double min, double max) {
		h_bjet_1_matched_p4_PseudoRapidity = new TH1F("h_bjet_1_matched_p4_PseudoRapidity","", bins, min, max);
		h_bjet_1_matched_p4_PseudoRapidity_CONTROL = new TH1F("h_bjet_1_matched_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_bjet_1_matched_p4_PseudoRapidity_EXCEPT = new TH1F("h_bjet_1_matched_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_bjet_1_matched_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_bjet_1_matched_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_matched_p4_PseudoRapidity_PRE = new TH1F("h_bjet_1_matched_p4_PseudoRapidity_PRE","", bins, min, max);
		h_bjet_1_matched_p4_PseudoRapidity_BJET = new TH1F("h_bjet_1_matched_p4_PseudoRapidity_BJET","", bins, min, max);
		h_bjet_1_matched_p4_PseudoRapidity_HIGH_E = new TH1F("h_bjet_1_matched_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_bjet_1_matched_p4_PseudoRapidity_TRUTH = new TH1F("h_bjet_1_matched_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity);
		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity_CONTROL);
		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity_EXCEPT);
		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity_EXCEPT_FINE);
		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity_PRE);
		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity_BJET);
		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity_HIGH_E);
		hv_bjet_1_matched_p4_PseudoRapidity.push_back(h_bjet_1_matched_p4_PseudoRapidity_TRUTH);

		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity");
		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity_CONTROL");
		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity_EXCEPT");
		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity_EXCEPT_FINE");
		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity_PRE");
		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity_BJET");
		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity_HIGH_E");
		hv_bjet_1_matched_p4_PseudoRapidity_names.push_back("h_bjet_1_matched_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_1_matched_p4 ----- ///

//Histogram booking function for bjet_1_origin
void MC_Analysis::Book_bjet_1_origin(int bins, double min, double max) {
	h_bjet_1_origin = new TH1F("h_bjet_1_origin", "", bins, min, max);
	h_bjet_1_origin_CONTROL = new TH1F("h_bjet_1_origin_CONTROL", "", bins, min, max);
	h_bjet_1_origin_EXCEPT = new TH1F("h_bjet_1_origin_EXCEPT", "", bins, min, max);
	h_bjet_1_origin_EXCEPT_FINE = new TH1F("h_bjet_1_origin_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_origin_PRE = new TH1F("h_bjet_1_origin_PRE", "", bins, min, max);
	h_bjet_1_origin_BJET = new TH1F("h_bjet_1_origin_BJET", "", bins, min, max);
	h_bjet_1_origin_HIGH_E = new TH1F("h_bjet_1_origin_HIGH_E", "", bins, min, max);
	h_bjet_1_origin_TRUTH = new TH1F("h_bjet_1_origin_TRUTH", "", bins, min, max);

	hv_bjet_1_origin.push_back(h_bjet_1_origin);
	hv_bjet_1_origin.push_back(h_bjet_1_origin_CONTROL);
	hv_bjet_1_origin.push_back(h_bjet_1_origin_EXCEPT);
	hv_bjet_1_origin.push_back(h_bjet_1_origin_EXCEPT_FINE);
	hv_bjet_1_origin.push_back(h_bjet_1_origin_PRE);
	hv_bjet_1_origin.push_back(h_bjet_1_origin_BJET);
	hv_bjet_1_origin.push_back(h_bjet_1_origin_HIGH_E);
	hv_bjet_1_origin.push_back(h_bjet_1_origin_TRUTH);

	hv_bjet_1_origin_names.push_back("h_bjet_1_origin");
	hv_bjet_1_origin_names.push_back("h_bjet_1_origin_CONTROL");
	hv_bjet_1_origin_names.push_back("h_bjet_1_origin_EXCEPT");
	hv_bjet_1_origin_names.push_back("h_bjet_1_origin_EXCEPT_FINE");
	hv_bjet_1_origin_names.push_back("h_bjet_1_origin_PRE");
	hv_bjet_1_origin_names.push_back("h_bjet_1_origin_BJET");
	hv_bjet_1_origin_names.push_back("h_bjet_1_origin_HIGH_E");
	hv_bjet_1_origin_names.push_back("h_bjet_1_origin_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_1_p4 ----- //
	//Histogram booking function for bjet_1_p4_X
	void MC_Analysis::Book_bjet_1_p4_X(int bins, double min, double max) {
		h_bjet_1_p4_X = new TH1F("h_bjet_1_p4_X","", bins, min, max);
		h_bjet_1_p4_X_CONTROL = new TH1F("h_bjet_1_p4_X_CONTROL","", bins, min, max);
		h_bjet_1_p4_X_EXCEPT = new TH1F("h_bjet_1_p4_X_EXCEPT","", bins, min, max);
		h_bjet_1_p4_X_EXCEPT_FINE = new TH1F("h_bjet_1_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_X_PRE = new TH1F("h_bjet_1_p4_X_PRE","", bins, min, max);
		h_bjet_1_p4_X_BJET = new TH1F("h_bjet_1_p4_X_BJET","", bins, min, max);
		h_bjet_1_p4_X_HIGH_E = new TH1F("h_bjet_1_p4_X_HIGH_E","", bins, min, max);
		h_bjet_1_p4_X_TRUTH = new TH1F("h_bjet_1_p4_X_TRUTH","", bins, min, max);

		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X);
		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X_CONTROL);
		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X_EXCEPT);
		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X_EXCEPT_FINE);
		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X_PRE);
		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X_BJET);
		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X_HIGH_E);
		hv_bjet_1_p4_X.push_back(h_bjet_1_p4_X_TRUTH);

		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X");
		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X_CONTROL");
		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X_EXCEPT");
		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X_EXCEPT_FINE");
		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X_PRE");
		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X_BJET");
		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X_HIGH_E");
		hv_bjet_1_p4_X_names.push_back("h_bjet_1_p4_X_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Y
	void MC_Analysis::Book_bjet_1_p4_Y(int bins, double min, double max) {
		h_bjet_1_p4_Y = new TH1F("h_bjet_1_p4_Y","", bins, min, max);
		h_bjet_1_p4_Y_CONTROL = new TH1F("h_bjet_1_p4_Y_CONTROL","", bins, min, max);
		h_bjet_1_p4_Y_EXCEPT = new TH1F("h_bjet_1_p4_Y_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Y_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Y_PRE = new TH1F("h_bjet_1_p4_Y_PRE","", bins, min, max);
		h_bjet_1_p4_Y_BJET = new TH1F("h_bjet_1_p4_Y_BJET","", bins, min, max);
		h_bjet_1_p4_Y_HIGH_E = new TH1F("h_bjet_1_p4_Y_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Y_TRUTH = new TH1F("h_bjet_1_p4_Y_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y);
		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y_CONTROL);
		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y_EXCEPT);
		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y_EXCEPT_FINE);
		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y_PRE);
		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y_BJET);
		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y_HIGH_E);
		hv_bjet_1_p4_Y.push_back(h_bjet_1_p4_Y_TRUTH);

		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y");
		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y_CONTROL");
		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y_EXCEPT");
		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y_EXCEPT_FINE");
		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y_PRE");
		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y_BJET");
		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y_HIGH_E");
		hv_bjet_1_p4_Y_names.push_back("h_bjet_1_p4_Y_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Z
	void MC_Analysis::Book_bjet_1_p4_Z(int bins, double min, double max) {
		h_bjet_1_p4_Z = new TH1F("h_bjet_1_p4_Z","", bins, min, max);
		h_bjet_1_p4_Z_CONTROL = new TH1F("h_bjet_1_p4_Z_CONTROL","", bins, min, max);
		h_bjet_1_p4_Z_EXCEPT = new TH1F("h_bjet_1_p4_Z_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Z_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Z_PRE = new TH1F("h_bjet_1_p4_Z_PRE","", bins, min, max);
		h_bjet_1_p4_Z_BJET = new TH1F("h_bjet_1_p4_Z_BJET","", bins, min, max);
		h_bjet_1_p4_Z_HIGH_E = new TH1F("h_bjet_1_p4_Z_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Z_TRUTH = new TH1F("h_bjet_1_p4_Z_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z);
		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z_CONTROL);
		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z_EXCEPT);
		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z_EXCEPT_FINE);
		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z_PRE);
		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z_BJET);
		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z_HIGH_E);
		hv_bjet_1_p4_Z.push_back(h_bjet_1_p4_Z_TRUTH);

		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z");
		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z_CONTROL");
		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z_EXCEPT");
		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z_EXCEPT_FINE");
		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z_PRE");
		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z_BJET");
		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z_HIGH_E");
		hv_bjet_1_p4_Z_names.push_back("h_bjet_1_p4_Z_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_T
	void MC_Analysis::Book_bjet_1_p4_T(int bins, double min, double max) {
		h_bjet_1_p4_T = new TH1F("h_bjet_1_p4_T","", bins, min, max);
		h_bjet_1_p4_T_CONTROL = new TH1F("h_bjet_1_p4_T_CONTROL","", bins, min, max);
		h_bjet_1_p4_T_EXCEPT = new TH1F("h_bjet_1_p4_T_EXCEPT","", bins, min, max);
		h_bjet_1_p4_T_EXCEPT_FINE = new TH1F("h_bjet_1_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_T_PRE = new TH1F("h_bjet_1_p4_T_PRE","", bins, min, max);
		h_bjet_1_p4_T_BJET = new TH1F("h_bjet_1_p4_T_BJET","", bins, min, max);
		h_bjet_1_p4_T_HIGH_E = new TH1F("h_bjet_1_p4_T_HIGH_E","", bins, min, max);
		h_bjet_1_p4_T_TRUTH = new TH1F("h_bjet_1_p4_T_TRUTH","", bins, min, max);

		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T);
		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T_CONTROL);
		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T_EXCEPT);
		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T_EXCEPT_FINE);
		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T_PRE);
		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T_BJET);
		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T_HIGH_E);
		hv_bjet_1_p4_T.push_back(h_bjet_1_p4_T_TRUTH);

		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T");
		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T_CONTROL");
		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T_EXCEPT");
		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T_EXCEPT_FINE");
		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T_PRE");
		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T_BJET");
		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T_HIGH_E");
		hv_bjet_1_p4_T_names.push_back("h_bjet_1_p4_T_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Px
	void MC_Analysis::Book_bjet_1_p4_Px(int bins, double min, double max) {
		h_bjet_1_p4_Px = new TH1F("h_bjet_1_p4_Px","", bins, min, max);
		h_bjet_1_p4_Px_CONTROL = new TH1F("h_bjet_1_p4_Px_CONTROL","", bins, min, max);
		h_bjet_1_p4_Px_EXCEPT = new TH1F("h_bjet_1_p4_Px_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Px_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Px_PRE = new TH1F("h_bjet_1_p4_Px_PRE","", bins, min, max);
		h_bjet_1_p4_Px_BJET = new TH1F("h_bjet_1_p4_Px_BJET","", bins, min, max);
		h_bjet_1_p4_Px_HIGH_E = new TH1F("h_bjet_1_p4_Px_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Px_TRUTH = new TH1F("h_bjet_1_p4_Px_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px);
		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px_CONTROL);
		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px_EXCEPT);
		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px_EXCEPT_FINE);
		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px_PRE);
		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px_BJET);
		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px_HIGH_E);
		hv_bjet_1_p4_Px.push_back(h_bjet_1_p4_Px_TRUTH);

		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px");
		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px_CONTROL");
		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px_EXCEPT");
		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px_EXCEPT_FINE");
		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px_PRE");
		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px_BJET");
		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px_HIGH_E");
		hv_bjet_1_p4_Px_names.push_back("h_bjet_1_p4_Px_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Py
	void MC_Analysis::Book_bjet_1_p4_Py(int bins, double min, double max) {
		h_bjet_1_p4_Py = new TH1F("h_bjet_1_p4_Py","", bins, min, max);
		h_bjet_1_p4_Py_CONTROL = new TH1F("h_bjet_1_p4_Py_CONTROL","", bins, min, max);
		h_bjet_1_p4_Py_EXCEPT = new TH1F("h_bjet_1_p4_Py_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Py_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Py_PRE = new TH1F("h_bjet_1_p4_Py_PRE","", bins, min, max);
		h_bjet_1_p4_Py_BJET = new TH1F("h_bjet_1_p4_Py_BJET","", bins, min, max);
		h_bjet_1_p4_Py_HIGH_E = new TH1F("h_bjet_1_p4_Py_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Py_TRUTH = new TH1F("h_bjet_1_p4_Py_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py);
		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py_CONTROL);
		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py_EXCEPT);
		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py_EXCEPT_FINE);
		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py_PRE);
		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py_BJET);
		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py_HIGH_E);
		hv_bjet_1_p4_Py.push_back(h_bjet_1_p4_Py_TRUTH);

		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py");
		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py_CONTROL");
		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py_EXCEPT");
		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py_EXCEPT_FINE");
		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py_PRE");
		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py_BJET");
		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py_HIGH_E");
		hv_bjet_1_p4_Py_names.push_back("h_bjet_1_p4_Py_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Pz
	void MC_Analysis::Book_bjet_1_p4_Pz(int bins, double min, double max) {
		h_bjet_1_p4_Pz = new TH1F("h_bjet_1_p4_Pz","", bins, min, max);
		h_bjet_1_p4_Pz_CONTROL = new TH1F("h_bjet_1_p4_Pz_CONTROL","", bins, min, max);
		h_bjet_1_p4_Pz_EXCEPT = new TH1F("h_bjet_1_p4_Pz_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Pz_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Pz_PRE = new TH1F("h_bjet_1_p4_Pz_PRE","", bins, min, max);
		h_bjet_1_p4_Pz_BJET = new TH1F("h_bjet_1_p4_Pz_BJET","", bins, min, max);
		h_bjet_1_p4_Pz_HIGH_E = new TH1F("h_bjet_1_p4_Pz_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Pz_TRUTH = new TH1F("h_bjet_1_p4_Pz_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz);
		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz_CONTROL);
		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz_EXCEPT);
		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz_EXCEPT_FINE);
		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz_PRE);
		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz_BJET);
		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz_HIGH_E);
		hv_bjet_1_p4_Pz.push_back(h_bjet_1_p4_Pz_TRUTH);

		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz");
		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz_CONTROL");
		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz_EXCEPT");
		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz_EXCEPT_FINE");
		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz_PRE");
		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz_BJET");
		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz_HIGH_E");
		hv_bjet_1_p4_Pz_names.push_back("h_bjet_1_p4_Pz_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Energy
	void MC_Analysis::Book_bjet_1_p4_Energy(int bins, double min, double max) {
		h_bjet_1_p4_Energy = new TH1F("h_bjet_1_p4_Energy","", bins, min, max);
		h_bjet_1_p4_Energy_CONTROL = new TH1F("h_bjet_1_p4_Energy_CONTROL","", bins, min, max);
		h_bjet_1_p4_Energy_EXCEPT = new TH1F("h_bjet_1_p4_Energy_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Energy_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Energy_PRE = new TH1F("h_bjet_1_p4_Energy_PRE","", bins, min, max);
		h_bjet_1_p4_Energy_BJET = new TH1F("h_bjet_1_p4_Energy_BJET","", bins, min, max);
		h_bjet_1_p4_Energy_HIGH_E = new TH1F("h_bjet_1_p4_Energy_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Energy_TRUTH = new TH1F("h_bjet_1_p4_Energy_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy);
		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy_CONTROL);
		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy_EXCEPT);
		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy_EXCEPT_FINE);
		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy_PRE);
		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy_BJET);
		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy_HIGH_E);
		hv_bjet_1_p4_Energy.push_back(h_bjet_1_p4_Energy_TRUTH);

		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy");
		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy_CONTROL");
		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy_EXCEPT");
		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy_EXCEPT_FINE");
		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy_PRE");
		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy_BJET");
		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy_HIGH_E");
		hv_bjet_1_p4_Energy_names.push_back("h_bjet_1_p4_Energy_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Theta
	void MC_Analysis::Book_bjet_1_p4_Theta(int bins, double min, double max) {
		h_bjet_1_p4_Theta = new TH1F("h_bjet_1_p4_Theta","", bins, min, max);
		h_bjet_1_p4_Theta_CONTROL = new TH1F("h_bjet_1_p4_Theta_CONTROL","", bins, min, max);
		h_bjet_1_p4_Theta_EXCEPT = new TH1F("h_bjet_1_p4_Theta_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Theta_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Theta_PRE = new TH1F("h_bjet_1_p4_Theta_PRE","", bins, min, max);
		h_bjet_1_p4_Theta_BJET = new TH1F("h_bjet_1_p4_Theta_BJET","", bins, min, max);
		h_bjet_1_p4_Theta_HIGH_E = new TH1F("h_bjet_1_p4_Theta_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Theta_TRUTH = new TH1F("h_bjet_1_p4_Theta_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta);
		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta_CONTROL);
		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta_EXCEPT);
		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta_EXCEPT_FINE);
		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta_PRE);
		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta_BJET);
		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta_HIGH_E);
		hv_bjet_1_p4_Theta.push_back(h_bjet_1_p4_Theta_TRUTH);

		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta");
		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta_CONTROL");
		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta_EXCEPT");
		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta_EXCEPT_FINE");
		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta_PRE");
		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta_BJET");
		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta_HIGH_E");
		hv_bjet_1_p4_Theta_names.push_back("h_bjet_1_p4_Theta_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_CosTheta
	void MC_Analysis::Book_bjet_1_p4_CosTheta(int bins, double min, double max) {
		h_bjet_1_p4_CosTheta = new TH1F("h_bjet_1_p4_CosTheta","", bins, min, max);
		h_bjet_1_p4_CosTheta_CONTROL = new TH1F("h_bjet_1_p4_CosTheta_CONTROL","", bins, min, max);
		h_bjet_1_p4_CosTheta_EXCEPT = new TH1F("h_bjet_1_p4_CosTheta_EXCEPT","", bins, min, max);
		h_bjet_1_p4_CosTheta_EXCEPT_FINE = new TH1F("h_bjet_1_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_CosTheta_PRE = new TH1F("h_bjet_1_p4_CosTheta_PRE","", bins, min, max);
		h_bjet_1_p4_CosTheta_BJET = new TH1F("h_bjet_1_p4_CosTheta_BJET","", bins, min, max);
		h_bjet_1_p4_CosTheta_HIGH_E = new TH1F("h_bjet_1_p4_CosTheta_HIGH_E","", bins, min, max);
		h_bjet_1_p4_CosTheta_TRUTH = new TH1F("h_bjet_1_p4_CosTheta_TRUTH","", bins, min, max);

		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta);
		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta_CONTROL);
		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta_EXCEPT);
		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta_EXCEPT_FINE);
		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta_PRE);
		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta_BJET);
		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta_HIGH_E);
		hv_bjet_1_p4_CosTheta.push_back(h_bjet_1_p4_CosTheta_TRUTH);

		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta");
		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta_CONTROL");
		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta_EXCEPT");
		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta_EXCEPT_FINE");
		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta_PRE");
		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta_BJET");
		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta_HIGH_E");
		hv_bjet_1_p4_CosTheta_names.push_back("h_bjet_1_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Phi
	void MC_Analysis::Book_bjet_1_p4_Phi(int bins, double min, double max) {
		h_bjet_1_p4_Phi = new TH1F("h_bjet_1_p4_Phi","", bins, min, max);
		h_bjet_1_p4_Phi_CONTROL = new TH1F("h_bjet_1_p4_Phi_CONTROL","", bins, min, max);
		h_bjet_1_p4_Phi_EXCEPT = new TH1F("h_bjet_1_p4_Phi_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Phi_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Phi_PRE = new TH1F("h_bjet_1_p4_Phi_PRE","", bins, min, max);
		h_bjet_1_p4_Phi_BJET = new TH1F("h_bjet_1_p4_Phi_BJET","", bins, min, max);
		h_bjet_1_p4_Phi_HIGH_E = new TH1F("h_bjet_1_p4_Phi_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Phi_TRUTH = new TH1F("h_bjet_1_p4_Phi_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi);
		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi_CONTROL);
		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi_EXCEPT);
		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi_EXCEPT_FINE);
		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi_PRE);
		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi_BJET);
		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi_HIGH_E);
		hv_bjet_1_p4_Phi.push_back(h_bjet_1_p4_Phi_TRUTH);

		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi");
		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi_CONTROL");
		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi_EXCEPT");
		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi_EXCEPT_FINE");
		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi_PRE");
		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi_BJET");
		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi_HIGH_E");
		hv_bjet_1_p4_Phi_names.push_back("h_bjet_1_p4_Phi_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Rho
	void MC_Analysis::Book_bjet_1_p4_Rho(int bins, double min, double max) {
		h_bjet_1_p4_Rho = new TH1F("h_bjet_1_p4_Rho","", bins, min, max);
		h_bjet_1_p4_Rho_CONTROL = new TH1F("h_bjet_1_p4_Rho_CONTROL","", bins, min, max);
		h_bjet_1_p4_Rho_EXCEPT = new TH1F("h_bjet_1_p4_Rho_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Rho_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Rho_PRE = new TH1F("h_bjet_1_p4_Rho_PRE","", bins, min, max);
		h_bjet_1_p4_Rho_BJET = new TH1F("h_bjet_1_p4_Rho_BJET","", bins, min, max);
		h_bjet_1_p4_Rho_HIGH_E = new TH1F("h_bjet_1_p4_Rho_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Rho_TRUTH = new TH1F("h_bjet_1_p4_Rho_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho);
		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho_CONTROL);
		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho_EXCEPT);
		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho_EXCEPT_FINE);
		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho_PRE);
		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho_BJET);
		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho_HIGH_E);
		hv_bjet_1_p4_Rho.push_back(h_bjet_1_p4_Rho_TRUTH);

		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho");
		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho_CONTROL");
		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho_EXCEPT");
		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho_EXCEPT_FINE");
		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho_PRE");
		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho_BJET");
		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho_HIGH_E");
		hv_bjet_1_p4_Rho_names.push_back("h_bjet_1_p4_Rho_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Perp2
	void MC_Analysis::Book_bjet_1_p4_Perp2(int bins, double min, double max) {
		h_bjet_1_p4_Perp2 = new TH1F("h_bjet_1_p4_Perp2","", bins, min, max);
		h_bjet_1_p4_Perp2_CONTROL = new TH1F("h_bjet_1_p4_Perp2_CONTROL","", bins, min, max);
		h_bjet_1_p4_Perp2_EXCEPT = new TH1F("h_bjet_1_p4_Perp2_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Perp2_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Perp2_PRE = new TH1F("h_bjet_1_p4_Perp2_PRE","", bins, min, max);
		h_bjet_1_p4_Perp2_BJET = new TH1F("h_bjet_1_p4_Perp2_BJET","", bins, min, max);
		h_bjet_1_p4_Perp2_HIGH_E = new TH1F("h_bjet_1_p4_Perp2_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Perp2_TRUTH = new TH1F("h_bjet_1_p4_Perp2_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2);
		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2_CONTROL);
		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2_EXCEPT);
		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2_EXCEPT_FINE);
		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2_PRE);
		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2_BJET);
		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2_HIGH_E);
		hv_bjet_1_p4_Perp2.push_back(h_bjet_1_p4_Perp2_TRUTH);

		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2");
		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2_CONTROL");
		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2_EXCEPT");
		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2_EXCEPT_FINE");
		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2_PRE");
		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2_BJET");
		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2_HIGH_E");
		hv_bjet_1_p4_Perp2_names.push_back("h_bjet_1_p4_Perp2_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Pt
	void MC_Analysis::Book_bjet_1_p4_Pt(int bins, double min, double max) {
		h_bjet_1_p4_Pt = new TH1F("h_bjet_1_p4_Pt","", bins, min, max);
		h_bjet_1_p4_Pt_CONTROL = new TH1F("h_bjet_1_p4_Pt_CONTROL","", bins, min, max);
		h_bjet_1_p4_Pt_EXCEPT = new TH1F("h_bjet_1_p4_Pt_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Pt_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Pt_PRE = new TH1F("h_bjet_1_p4_Pt_PRE","", bins, min, max);
		h_bjet_1_p4_Pt_BJET = new TH1F("h_bjet_1_p4_Pt_BJET","", bins, min, max);
		h_bjet_1_p4_Pt_HIGH_E = new TH1F("h_bjet_1_p4_Pt_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Pt_TRUTH = new TH1F("h_bjet_1_p4_Pt_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt);
		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt_CONTROL);
		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt_EXCEPT);
		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt_EXCEPT_FINE);
		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt_PRE);
		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt_BJET);
		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt_HIGH_E);
		hv_bjet_1_p4_Pt.push_back(h_bjet_1_p4_Pt_TRUTH);

		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt");
		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt_CONTROL");
		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt_EXCEPT");
		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt_EXCEPT_FINE");
		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt_PRE");
		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt_BJET");
		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt_HIGH_E");
		hv_bjet_1_p4_Pt_names.push_back("h_bjet_1_p4_Pt_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Perp
	void MC_Analysis::Book_bjet_1_p4_Perp(int bins, double min, double max) {
		h_bjet_1_p4_Perp = new TH1F("h_bjet_1_p4_Perp","", bins, min, max);
		h_bjet_1_p4_Perp_CONTROL = new TH1F("h_bjet_1_p4_Perp_CONTROL","", bins, min, max);
		h_bjet_1_p4_Perp_EXCEPT = new TH1F("h_bjet_1_p4_Perp_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Perp_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Perp_PRE = new TH1F("h_bjet_1_p4_Perp_PRE","", bins, min, max);
		h_bjet_1_p4_Perp_BJET = new TH1F("h_bjet_1_p4_Perp_BJET","", bins, min, max);
		h_bjet_1_p4_Perp_HIGH_E = new TH1F("h_bjet_1_p4_Perp_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Perp_TRUTH = new TH1F("h_bjet_1_p4_Perp_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp);
		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp_CONTROL);
		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp_EXCEPT);
		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp_EXCEPT_FINE);
		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp_PRE);
		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp_BJET);
		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp_HIGH_E);
		hv_bjet_1_p4_Perp.push_back(h_bjet_1_p4_Perp_TRUTH);

		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp");
		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp_CONTROL");
		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp_EXCEPT");
		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp_EXCEPT_FINE");
		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp_PRE");
		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp_BJET");
		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp_HIGH_E");
		hv_bjet_1_p4_Perp_names.push_back("h_bjet_1_p4_Perp_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Et2
	void MC_Analysis::Book_bjet_1_p4_Et2(int bins, double min, double max) {
		h_bjet_1_p4_Et2 = new TH1F("h_bjet_1_p4_Et2","", bins, min, max);
		h_bjet_1_p4_Et2_CONTROL = new TH1F("h_bjet_1_p4_Et2_CONTROL","", bins, min, max);
		h_bjet_1_p4_Et2_EXCEPT = new TH1F("h_bjet_1_p4_Et2_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Et2_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Et2_PRE = new TH1F("h_bjet_1_p4_Et2_PRE","", bins, min, max);
		h_bjet_1_p4_Et2_BJET = new TH1F("h_bjet_1_p4_Et2_BJET","", bins, min, max);
		h_bjet_1_p4_Et2_HIGH_E = new TH1F("h_bjet_1_p4_Et2_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Et2_TRUTH = new TH1F("h_bjet_1_p4_Et2_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2);
		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2_CONTROL);
		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2_EXCEPT);
		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2_EXCEPT_FINE);
		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2_PRE);
		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2_BJET);
		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2_HIGH_E);
		hv_bjet_1_p4_Et2.push_back(h_bjet_1_p4_Et2_TRUTH);

		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2");
		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2_CONTROL");
		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2_EXCEPT");
		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2_EXCEPT_FINE");
		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2_PRE");
		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2_BJET");
		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2_HIGH_E");
		hv_bjet_1_p4_Et2_names.push_back("h_bjet_1_p4_Et2_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Et
	void MC_Analysis::Book_bjet_1_p4_Et(int bins, double min, double max) {
		h_bjet_1_p4_Et = new TH1F("h_bjet_1_p4_Et","", bins, min, max);
		h_bjet_1_p4_Et_CONTROL = new TH1F("h_bjet_1_p4_Et_CONTROL","", bins, min, max);
		h_bjet_1_p4_Et_EXCEPT = new TH1F("h_bjet_1_p4_Et_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Et_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Et_PRE = new TH1F("h_bjet_1_p4_Et_PRE","", bins, min, max);
		h_bjet_1_p4_Et_BJET = new TH1F("h_bjet_1_p4_Et_BJET","", bins, min, max);
		h_bjet_1_p4_Et_HIGH_E = new TH1F("h_bjet_1_p4_Et_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Et_TRUTH = new TH1F("h_bjet_1_p4_Et_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et);
		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et_CONTROL);
		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et_EXCEPT);
		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et_EXCEPT_FINE);
		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et_PRE);
		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et_BJET);
		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et_HIGH_E);
		hv_bjet_1_p4_Et.push_back(h_bjet_1_p4_Et_TRUTH);

		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et");
		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et_CONTROL");
		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et_EXCEPT");
		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et_EXCEPT_FINE");
		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et_PRE");
		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et_BJET");
		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et_HIGH_E");
		hv_bjet_1_p4_Et_names.push_back("h_bjet_1_p4_Et_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Mag2
	void MC_Analysis::Book_bjet_1_p4_Mag2(int bins, double min, double max) {
		h_bjet_1_p4_Mag2 = new TH1F("h_bjet_1_p4_Mag2","", bins, min, max);
		h_bjet_1_p4_Mag2_CONTROL = new TH1F("h_bjet_1_p4_Mag2_CONTROL","", bins, min, max);
		h_bjet_1_p4_Mag2_EXCEPT = new TH1F("h_bjet_1_p4_Mag2_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Mag2_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Mag2_PRE = new TH1F("h_bjet_1_p4_Mag2_PRE","", bins, min, max);
		h_bjet_1_p4_Mag2_BJET = new TH1F("h_bjet_1_p4_Mag2_BJET","", bins, min, max);
		h_bjet_1_p4_Mag2_HIGH_E = new TH1F("h_bjet_1_p4_Mag2_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Mag2_TRUTH = new TH1F("h_bjet_1_p4_Mag2_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2);
		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2_CONTROL);
		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2_EXCEPT);
		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2_EXCEPT_FINE);
		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2_PRE);
		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2_BJET);
		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2_HIGH_E);
		hv_bjet_1_p4_Mag2.push_back(h_bjet_1_p4_Mag2_TRUTH);

		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2");
		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2_CONTROL");
		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2_EXCEPT");
		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2_EXCEPT_FINE");
		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2_PRE");
		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2_BJET");
		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2_HIGH_E");
		hv_bjet_1_p4_Mag2_names.push_back("h_bjet_1_p4_Mag2_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_M2
	void MC_Analysis::Book_bjet_1_p4_M2(int bins, double min, double max) {
		h_bjet_1_p4_M2 = new TH1F("h_bjet_1_p4_M2","", bins, min, max);
		h_bjet_1_p4_M2_CONTROL = new TH1F("h_bjet_1_p4_M2_CONTROL","", bins, min, max);
		h_bjet_1_p4_M2_EXCEPT = new TH1F("h_bjet_1_p4_M2_EXCEPT","", bins, min, max);
		h_bjet_1_p4_M2_EXCEPT_FINE = new TH1F("h_bjet_1_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_M2_PRE = new TH1F("h_bjet_1_p4_M2_PRE","", bins, min, max);
		h_bjet_1_p4_M2_BJET = new TH1F("h_bjet_1_p4_M2_BJET","", bins, min, max);
		h_bjet_1_p4_M2_HIGH_E = new TH1F("h_bjet_1_p4_M2_HIGH_E","", bins, min, max);
		h_bjet_1_p4_M2_TRUTH = new TH1F("h_bjet_1_p4_M2_TRUTH","", bins, min, max);

		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2);
		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2_CONTROL);
		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2_EXCEPT);
		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2_EXCEPT_FINE);
		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2_PRE);
		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2_BJET);
		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2_HIGH_E);
		hv_bjet_1_p4_M2.push_back(h_bjet_1_p4_M2_TRUTH);

		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2");
		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2_CONTROL");
		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2_EXCEPT");
		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2_EXCEPT_FINE");
		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2_PRE");
		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2_BJET");
		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2_HIGH_E");
		hv_bjet_1_p4_M2_names.push_back("h_bjet_1_p4_M2_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Mag
	void MC_Analysis::Book_bjet_1_p4_Mag(int bins, double min, double max) {
		h_bjet_1_p4_Mag = new TH1F("h_bjet_1_p4_Mag","", bins, min, max);
		h_bjet_1_p4_Mag_CONTROL = new TH1F("h_bjet_1_p4_Mag_CONTROL","", bins, min, max);
		h_bjet_1_p4_Mag_EXCEPT = new TH1F("h_bjet_1_p4_Mag_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Mag_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Mag_PRE = new TH1F("h_bjet_1_p4_Mag_PRE","", bins, min, max);
		h_bjet_1_p4_Mag_BJET = new TH1F("h_bjet_1_p4_Mag_BJET","", bins, min, max);
		h_bjet_1_p4_Mag_HIGH_E = new TH1F("h_bjet_1_p4_Mag_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Mag_TRUTH = new TH1F("h_bjet_1_p4_Mag_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag);
		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag_CONTROL);
		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag_EXCEPT);
		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag_EXCEPT_FINE);
		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag_PRE);
		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag_BJET);
		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag_HIGH_E);
		hv_bjet_1_p4_Mag.push_back(h_bjet_1_p4_Mag_TRUTH);

		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag");
		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag_CONTROL");
		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag_EXCEPT");
		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag_EXCEPT_FINE");
		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag_PRE");
		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag_BJET");
		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag_HIGH_E");
		hv_bjet_1_p4_Mag_names.push_back("h_bjet_1_p4_Mag_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_M
	void MC_Analysis::Book_bjet_1_p4_M(int bins, double min, double max) {
		h_bjet_1_p4_M = new TH1F("h_bjet_1_p4_M","", bins, min, max);
		h_bjet_1_p4_M_CONTROL = new TH1F("h_bjet_1_p4_M_CONTROL","", bins, min, max);
		h_bjet_1_p4_M_EXCEPT = new TH1F("h_bjet_1_p4_M_EXCEPT","", bins, min, max);
		h_bjet_1_p4_M_EXCEPT_FINE = new TH1F("h_bjet_1_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_M_PRE = new TH1F("h_bjet_1_p4_M_PRE","", bins, min, max);
		h_bjet_1_p4_M_BJET = new TH1F("h_bjet_1_p4_M_BJET","", bins, min, max);
		h_bjet_1_p4_M_HIGH_E = new TH1F("h_bjet_1_p4_M_HIGH_E","", bins, min, max);
		h_bjet_1_p4_M_TRUTH = new TH1F("h_bjet_1_p4_M_TRUTH","", bins, min, max);

		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M);
		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M_CONTROL);
		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M_EXCEPT);
		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M_EXCEPT_FINE);
		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M_PRE);
		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M_BJET);
		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M_HIGH_E);
		hv_bjet_1_p4_M.push_back(h_bjet_1_p4_M_TRUTH);

		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M");
		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M_CONTROL");
		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M_EXCEPT");
		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M_EXCEPT_FINE");
		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M_PRE");
		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M_BJET");
		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M_HIGH_E");
		hv_bjet_1_p4_M_names.push_back("h_bjet_1_p4_M_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Mt2
	void MC_Analysis::Book_bjet_1_p4_Mt2(int bins, double min, double max) {
		h_bjet_1_p4_Mt2 = new TH1F("h_bjet_1_p4_Mt2","", bins, min, max);
		h_bjet_1_p4_Mt2_CONTROL = new TH1F("h_bjet_1_p4_Mt2_CONTROL","", bins, min, max);
		h_bjet_1_p4_Mt2_EXCEPT = new TH1F("h_bjet_1_p4_Mt2_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Mt2_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Mt2_PRE = new TH1F("h_bjet_1_p4_Mt2_PRE","", bins, min, max);
		h_bjet_1_p4_Mt2_BJET = new TH1F("h_bjet_1_p4_Mt2_BJET","", bins, min, max);
		h_bjet_1_p4_Mt2_HIGH_E = new TH1F("h_bjet_1_p4_Mt2_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Mt2_TRUTH = new TH1F("h_bjet_1_p4_Mt2_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2);
		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2_CONTROL);
		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2_EXCEPT);
		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2_EXCEPT_FINE);
		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2_PRE);
		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2_BJET);
		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2_HIGH_E);
		hv_bjet_1_p4_Mt2.push_back(h_bjet_1_p4_Mt2_TRUTH);

		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2");
		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2_CONTROL");
		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2_EXCEPT");
		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2_EXCEPT_FINE");
		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2_PRE");
		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2_BJET");
		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2_HIGH_E");
		hv_bjet_1_p4_Mt2_names.push_back("h_bjet_1_p4_Mt2_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Mt
	void MC_Analysis::Book_bjet_1_p4_Mt(int bins, double min, double max) {
		h_bjet_1_p4_Mt = new TH1F("h_bjet_1_p4_Mt","", bins, min, max);
		h_bjet_1_p4_Mt_CONTROL = new TH1F("h_bjet_1_p4_Mt_CONTROL","", bins, min, max);
		h_bjet_1_p4_Mt_EXCEPT = new TH1F("h_bjet_1_p4_Mt_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Mt_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Mt_PRE = new TH1F("h_bjet_1_p4_Mt_PRE","", bins, min, max);
		h_bjet_1_p4_Mt_BJET = new TH1F("h_bjet_1_p4_Mt_BJET","", bins, min, max);
		h_bjet_1_p4_Mt_HIGH_E = new TH1F("h_bjet_1_p4_Mt_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Mt_TRUTH = new TH1F("h_bjet_1_p4_Mt_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt);
		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt_CONTROL);
		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt_EXCEPT);
		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt_EXCEPT_FINE);
		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt_PRE);
		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt_BJET);
		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt_HIGH_E);
		hv_bjet_1_p4_Mt.push_back(h_bjet_1_p4_Mt_TRUTH);

		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt");
		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt_CONTROL");
		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt_EXCEPT");
		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt_EXCEPT_FINE");
		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt_PRE");
		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt_BJET");
		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt_HIGH_E");
		hv_bjet_1_p4_Mt_names.push_back("h_bjet_1_p4_Mt_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Beta
	void MC_Analysis::Book_bjet_1_p4_Beta(int bins, double min, double max) {
		h_bjet_1_p4_Beta = new TH1F("h_bjet_1_p4_Beta","", bins, min, max);
		h_bjet_1_p4_Beta_CONTROL = new TH1F("h_bjet_1_p4_Beta_CONTROL","", bins, min, max);
		h_bjet_1_p4_Beta_EXCEPT = new TH1F("h_bjet_1_p4_Beta_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Beta_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Beta_PRE = new TH1F("h_bjet_1_p4_Beta_PRE","", bins, min, max);
		h_bjet_1_p4_Beta_BJET = new TH1F("h_bjet_1_p4_Beta_BJET","", bins, min, max);
		h_bjet_1_p4_Beta_HIGH_E = new TH1F("h_bjet_1_p4_Beta_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Beta_TRUTH = new TH1F("h_bjet_1_p4_Beta_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta);
		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta_CONTROL);
		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta_EXCEPT);
		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta_EXCEPT_FINE);
		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta_PRE);
		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta_BJET);
		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta_HIGH_E);
		hv_bjet_1_p4_Beta.push_back(h_bjet_1_p4_Beta_TRUTH);

		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta");
		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta_CONTROL");
		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta_EXCEPT");
		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta_EXCEPT_FINE");
		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta_PRE");
		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta_BJET");
		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta_HIGH_E");
		hv_bjet_1_p4_Beta_names.push_back("h_bjet_1_p4_Beta_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Gamma
	void MC_Analysis::Book_bjet_1_p4_Gamma(int bins, double min, double max) {
		h_bjet_1_p4_Gamma = new TH1F("h_bjet_1_p4_Gamma","", bins, min, max);
		h_bjet_1_p4_Gamma_CONTROL = new TH1F("h_bjet_1_p4_Gamma_CONTROL","", bins, min, max);
		h_bjet_1_p4_Gamma_EXCEPT = new TH1F("h_bjet_1_p4_Gamma_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Gamma_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Gamma_PRE = new TH1F("h_bjet_1_p4_Gamma_PRE","", bins, min, max);
		h_bjet_1_p4_Gamma_BJET = new TH1F("h_bjet_1_p4_Gamma_BJET","", bins, min, max);
		h_bjet_1_p4_Gamma_HIGH_E = new TH1F("h_bjet_1_p4_Gamma_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Gamma_TRUTH = new TH1F("h_bjet_1_p4_Gamma_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma);
		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma_CONTROL);
		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma_EXCEPT);
		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma_EXCEPT_FINE);
		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma_PRE);
		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma_BJET);
		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma_HIGH_E);
		hv_bjet_1_p4_Gamma.push_back(h_bjet_1_p4_Gamma_TRUTH);

		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma");
		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma_CONTROL");
		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma_EXCEPT");
		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma_EXCEPT_FINE");
		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma_PRE");
		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma_BJET");
		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma_HIGH_E");
		hv_bjet_1_p4_Gamma_names.push_back("h_bjet_1_p4_Gamma_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Plus
	void MC_Analysis::Book_bjet_1_p4_Plus(int bins, double min, double max) {
		h_bjet_1_p4_Plus = new TH1F("h_bjet_1_p4_Plus","", bins, min, max);
		h_bjet_1_p4_Plus_CONTROL = new TH1F("h_bjet_1_p4_Plus_CONTROL","", bins, min, max);
		h_bjet_1_p4_Plus_EXCEPT = new TH1F("h_bjet_1_p4_Plus_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Plus_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Plus_PRE = new TH1F("h_bjet_1_p4_Plus_PRE","", bins, min, max);
		h_bjet_1_p4_Plus_BJET = new TH1F("h_bjet_1_p4_Plus_BJET","", bins, min, max);
		h_bjet_1_p4_Plus_HIGH_E = new TH1F("h_bjet_1_p4_Plus_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Plus_TRUTH = new TH1F("h_bjet_1_p4_Plus_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus);
		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus_CONTROL);
		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus_EXCEPT);
		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus_EXCEPT_FINE);
		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus_PRE);
		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus_BJET);
		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus_HIGH_E);
		hv_bjet_1_p4_Plus.push_back(h_bjet_1_p4_Plus_TRUTH);

		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus");
		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus_CONTROL");
		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus_EXCEPT");
		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus_EXCEPT_FINE");
		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus_PRE");
		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus_BJET");
		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus_HIGH_E");
		hv_bjet_1_p4_Plus_names.push_back("h_bjet_1_p4_Plus_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Minus
	void MC_Analysis::Book_bjet_1_p4_Minus(int bins, double min, double max) {
		h_bjet_1_p4_Minus = new TH1F("h_bjet_1_p4_Minus","", bins, min, max);
		h_bjet_1_p4_Minus_CONTROL = new TH1F("h_bjet_1_p4_Minus_CONTROL","", bins, min, max);
		h_bjet_1_p4_Minus_EXCEPT = new TH1F("h_bjet_1_p4_Minus_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Minus_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Minus_PRE = new TH1F("h_bjet_1_p4_Minus_PRE","", bins, min, max);
		h_bjet_1_p4_Minus_BJET = new TH1F("h_bjet_1_p4_Minus_BJET","", bins, min, max);
		h_bjet_1_p4_Minus_HIGH_E = new TH1F("h_bjet_1_p4_Minus_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Minus_TRUTH = new TH1F("h_bjet_1_p4_Minus_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus);
		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus_CONTROL);
		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus_EXCEPT);
		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus_EXCEPT_FINE);
		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus_PRE);
		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus_BJET);
		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus_HIGH_E);
		hv_bjet_1_p4_Minus.push_back(h_bjet_1_p4_Minus_TRUTH);

		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus");
		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus_CONTROL");
		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus_EXCEPT");
		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus_EXCEPT_FINE");
		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus_PRE");
		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus_BJET");
		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus_HIGH_E");
		hv_bjet_1_p4_Minus_names.push_back("h_bjet_1_p4_Minus_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Rapidity
	void MC_Analysis::Book_bjet_1_p4_Rapidity(int bins, double min, double max) {
		h_bjet_1_p4_Rapidity = new TH1F("h_bjet_1_p4_Rapidity","", bins, min, max);
		h_bjet_1_p4_Rapidity_CONTROL = new TH1F("h_bjet_1_p4_Rapidity_CONTROL","", bins, min, max);
		h_bjet_1_p4_Rapidity_EXCEPT = new TH1F("h_bjet_1_p4_Rapidity_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Rapidity_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Rapidity_PRE = new TH1F("h_bjet_1_p4_Rapidity_PRE","", bins, min, max);
		h_bjet_1_p4_Rapidity_BJET = new TH1F("h_bjet_1_p4_Rapidity_BJET","", bins, min, max);
		h_bjet_1_p4_Rapidity_HIGH_E = new TH1F("h_bjet_1_p4_Rapidity_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Rapidity_TRUTH = new TH1F("h_bjet_1_p4_Rapidity_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity);
		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity_CONTROL);
		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity_EXCEPT);
		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity_EXCEPT_FINE);
		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity_PRE);
		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity_BJET);
		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity_HIGH_E);
		hv_bjet_1_p4_Rapidity.push_back(h_bjet_1_p4_Rapidity_TRUTH);

		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity");
		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity_CONTROL");
		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity_EXCEPT");
		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity_EXCEPT_FINE");
		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity_PRE");
		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity_BJET");
		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity_HIGH_E");
		hv_bjet_1_p4_Rapidity_names.push_back("h_bjet_1_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_Eta
	void MC_Analysis::Book_bjet_1_p4_Eta(int bins, double min, double max) {
		h_bjet_1_p4_Eta = new TH1F("h_bjet_1_p4_Eta","", bins, min, max);
		h_bjet_1_p4_Eta_CONTROL = new TH1F("h_bjet_1_p4_Eta_CONTROL","", bins, min, max);
		h_bjet_1_p4_Eta_EXCEPT = new TH1F("h_bjet_1_p4_Eta_EXCEPT","", bins, min, max);
		h_bjet_1_p4_Eta_EXCEPT_FINE = new TH1F("h_bjet_1_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_Eta_PRE = new TH1F("h_bjet_1_p4_Eta_PRE","", bins, min, max);
		h_bjet_1_p4_Eta_BJET = new TH1F("h_bjet_1_p4_Eta_BJET","", bins, min, max);
		h_bjet_1_p4_Eta_HIGH_E = new TH1F("h_bjet_1_p4_Eta_HIGH_E","", bins, min, max);
		h_bjet_1_p4_Eta_TRUTH = new TH1F("h_bjet_1_p4_Eta_TRUTH","", bins, min, max);

		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta);
		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta_CONTROL);
		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta_EXCEPT);
		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta_EXCEPT_FINE);
		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta_PRE);
		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta_BJET);
		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta_HIGH_E);
		hv_bjet_1_p4_Eta.push_back(h_bjet_1_p4_Eta_TRUTH);

		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta");
		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta_CONTROL");
		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta_EXCEPT");
		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta_EXCEPT_FINE");
		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta_PRE");
		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta_BJET");
		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta_HIGH_E");
		hv_bjet_1_p4_Eta_names.push_back("h_bjet_1_p4_Eta_TRUTH");

	}
	//Histogram booking function for bjet_1_p4_PseudoRapidity
	void MC_Analysis::Book_bjet_1_p4_PseudoRapidity(int bins, double min, double max) {
		h_bjet_1_p4_PseudoRapidity = new TH1F("h_bjet_1_p4_PseudoRapidity","", bins, min, max);
		h_bjet_1_p4_PseudoRapidity_CONTROL = new TH1F("h_bjet_1_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_bjet_1_p4_PseudoRapidity_EXCEPT = new TH1F("h_bjet_1_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_bjet_1_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_bjet_1_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_bjet_1_p4_PseudoRapidity_PRE = new TH1F("h_bjet_1_p4_PseudoRapidity_PRE","", bins, min, max);
		h_bjet_1_p4_PseudoRapidity_BJET = new TH1F("h_bjet_1_p4_PseudoRapidity_BJET","", bins, min, max);
		h_bjet_1_p4_PseudoRapidity_HIGH_E = new TH1F("h_bjet_1_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_bjet_1_p4_PseudoRapidity_TRUTH = new TH1F("h_bjet_1_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity);
		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity_CONTROL);
		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity_EXCEPT);
		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity_EXCEPT_FINE);
		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity_PRE);
		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity_BJET);
		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity_HIGH_E);
		hv_bjet_1_p4_PseudoRapidity.push_back(h_bjet_1_p4_PseudoRapidity_TRUTH);

		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity");
		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity_CONTROL");
		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity_EXCEPT");
		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity_EXCEPT_FINE");
		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity_PRE");
		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity_BJET");
		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity_HIGH_E");
		hv_bjet_1_p4_PseudoRapidity_names.push_back("h_bjet_1_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector bjet_1_p4 ----- ///

//Histogram booking function for bjet_1_q
void MC_Analysis::Book_bjet_1_q(int bins, double min, double max) {
	h_bjet_1_q = new TH1F("h_bjet_1_q", "", bins, min, max);
	h_bjet_1_q_CONTROL = new TH1F("h_bjet_1_q_CONTROL", "", bins, min, max);
	h_bjet_1_q_EXCEPT = new TH1F("h_bjet_1_q_EXCEPT", "", bins, min, max);
	h_bjet_1_q_EXCEPT_FINE = new TH1F("h_bjet_1_q_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_q_PRE = new TH1F("h_bjet_1_q_PRE", "", bins, min, max);
	h_bjet_1_q_BJET = new TH1F("h_bjet_1_q_BJET", "", bins, min, max);
	h_bjet_1_q_HIGH_E = new TH1F("h_bjet_1_q_HIGH_E", "", bins, min, max);
	h_bjet_1_q_TRUTH = new TH1F("h_bjet_1_q_TRUTH", "", bins, min, max);

	hv_bjet_1_q.push_back(h_bjet_1_q);
	hv_bjet_1_q.push_back(h_bjet_1_q_CONTROL);
	hv_bjet_1_q.push_back(h_bjet_1_q_EXCEPT);
	hv_bjet_1_q.push_back(h_bjet_1_q_EXCEPT_FINE);
	hv_bjet_1_q.push_back(h_bjet_1_q_PRE);
	hv_bjet_1_q.push_back(h_bjet_1_q_BJET);
	hv_bjet_1_q.push_back(h_bjet_1_q_HIGH_E);
	hv_bjet_1_q.push_back(h_bjet_1_q_TRUTH);

	hv_bjet_1_q_names.push_back("h_bjet_1_q");
	hv_bjet_1_q_names.push_back("h_bjet_1_q_CONTROL");
	hv_bjet_1_q_names.push_back("h_bjet_1_q_EXCEPT");
	hv_bjet_1_q_names.push_back("h_bjet_1_q_EXCEPT_FINE");
	hv_bjet_1_q_names.push_back("h_bjet_1_q_PRE");
	hv_bjet_1_q_names.push_back("h_bjet_1_q_BJET");
	hv_bjet_1_q_names.push_back("h_bjet_1_q_HIGH_E");
	hv_bjet_1_q_names.push_back("h_bjet_1_q_TRUTH");

}

//Histogram booking function for bjet_1_type
void MC_Analysis::Book_bjet_1_type(int bins, double min, double max) {
	h_bjet_1_type = new TH1F("h_bjet_1_type", "", bins, min, max);
	h_bjet_1_type_CONTROL = new TH1F("h_bjet_1_type_CONTROL", "", bins, min, max);
	h_bjet_1_type_EXCEPT = new TH1F("h_bjet_1_type_EXCEPT", "", bins, min, max);
	h_bjet_1_type_EXCEPT_FINE = new TH1F("h_bjet_1_type_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_type_PRE = new TH1F("h_bjet_1_type_PRE", "", bins, min, max);
	h_bjet_1_type_BJET = new TH1F("h_bjet_1_type_BJET", "", bins, min, max);
	h_bjet_1_type_HIGH_E = new TH1F("h_bjet_1_type_HIGH_E", "", bins, min, max);
	h_bjet_1_type_TRUTH = new TH1F("h_bjet_1_type_TRUTH", "", bins, min, max);

	hv_bjet_1_type.push_back(h_bjet_1_type);
	hv_bjet_1_type.push_back(h_bjet_1_type_CONTROL);
	hv_bjet_1_type.push_back(h_bjet_1_type_EXCEPT);
	hv_bjet_1_type.push_back(h_bjet_1_type_EXCEPT_FINE);
	hv_bjet_1_type.push_back(h_bjet_1_type_PRE);
	hv_bjet_1_type.push_back(h_bjet_1_type_BJET);
	hv_bjet_1_type.push_back(h_bjet_1_type_HIGH_E);
	hv_bjet_1_type.push_back(h_bjet_1_type_TRUTH);

	hv_bjet_1_type_names.push_back("h_bjet_1_type");
	hv_bjet_1_type_names.push_back("h_bjet_1_type_CONTROL");
	hv_bjet_1_type_names.push_back("h_bjet_1_type_EXCEPT");
	hv_bjet_1_type_names.push_back("h_bjet_1_type_EXCEPT_FINE");
	hv_bjet_1_type_names.push_back("h_bjet_1_type_PRE");
	hv_bjet_1_type_names.push_back("h_bjet_1_type_BJET");
	hv_bjet_1_type_names.push_back("h_bjet_1_type_HIGH_E");
	hv_bjet_1_type_names.push_back("h_bjet_1_type_TRUTH");

}

//Histogram booking function for bjet_1_width
void MC_Analysis::Book_bjet_1_width(int bins, double min, double max) {
	h_bjet_1_width = new TH1F("h_bjet_1_width", "", bins, min, max);
	h_bjet_1_width_CONTROL = new TH1F("h_bjet_1_width_CONTROL", "", bins, min, max);
	h_bjet_1_width_EXCEPT = new TH1F("h_bjet_1_width_EXCEPT", "", bins, min, max);
	h_bjet_1_width_EXCEPT_FINE = new TH1F("h_bjet_1_width_EXCEPT_FINE", "", bins, min, max);
	h_bjet_1_width_PRE = new TH1F("h_bjet_1_width_PRE", "", bins, min, max);
	h_bjet_1_width_BJET = new TH1F("h_bjet_1_width_BJET", "", bins, min, max);
	h_bjet_1_width_HIGH_E = new TH1F("h_bjet_1_width_HIGH_E", "", bins, min, max);
	h_bjet_1_width_TRUTH = new TH1F("h_bjet_1_width_TRUTH", "", bins, min, max);

	hv_bjet_1_width.push_back(h_bjet_1_width);
	hv_bjet_1_width.push_back(h_bjet_1_width_CONTROL);
	hv_bjet_1_width.push_back(h_bjet_1_width_EXCEPT);
	hv_bjet_1_width.push_back(h_bjet_1_width_EXCEPT_FINE);
	hv_bjet_1_width.push_back(h_bjet_1_width_PRE);
	hv_bjet_1_width.push_back(h_bjet_1_width_BJET);
	hv_bjet_1_width.push_back(h_bjet_1_width_HIGH_E);
	hv_bjet_1_width.push_back(h_bjet_1_width_TRUTH);

	hv_bjet_1_width_names.push_back("h_bjet_1_width");
	hv_bjet_1_width_names.push_back("h_bjet_1_width_CONTROL");
	hv_bjet_1_width_names.push_back("h_bjet_1_width_EXCEPT");
	hv_bjet_1_width_names.push_back("h_bjet_1_width_EXCEPT_FINE");
	hv_bjet_1_width_names.push_back("h_bjet_1_width_PRE");
	hv_bjet_1_width_names.push_back("h_bjet_1_width_BJET");
	hv_bjet_1_width_names.push_back("h_bjet_1_width_HIGH_E");
	hv_bjet_1_width_names.push_back("h_bjet_1_width_TRUTH");

}



///------------------------------- ljet_0 --------------------------///

//Histogram booking function for ljet_0
void MC_Analysis::Book_ljet_0(int bins, double min, double max) {
	h_ljet_0 = new TH1F("h_ljet_0", "", bins, min, max);
	h_ljet_0_CONTROL = new TH1F("h_ljet_0_CONTROL", "", bins, min, max);
	h_ljet_0_EXCEPT = new TH1F("h_ljet_0_EXCEPT", "", bins, min, max);
	h_ljet_0_EXCEPT_FINE = new TH1F("h_ljet_0_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_PRE = new TH1F("h_ljet_0_PRE", "", bins, min, max);
	h_ljet_0_BJET = new TH1F("h_ljet_0_BJET", "", bins, min, max);
	h_ljet_0_HIGH_E = new TH1F("h_ljet_0_HIGH_E", "", bins, min, max);
	h_ljet_0_TRUTH = new TH1F("h_ljet_0_TRUTH", "", bins, min, max);

	hv_ljet_0.push_back(h_ljet_0);
	hv_ljet_0.push_back(h_ljet_0_CONTROL);
	hv_ljet_0.push_back(h_ljet_0_EXCEPT);
	hv_ljet_0.push_back(h_ljet_0_EXCEPT_FINE);
	hv_ljet_0.push_back(h_ljet_0_PRE);
	hv_ljet_0.push_back(h_ljet_0_BJET);
	hv_ljet_0.push_back(h_ljet_0_HIGH_E);
	hv_ljet_0.push_back(h_ljet_0_TRUTH);

	hv_ljet_0_names.push_back("h_ljet_0");
	hv_ljet_0_names.push_back("h_ljet_0_CONTROL");
	hv_ljet_0_names.push_back("h_ljet_0_EXCEPT");
	hv_ljet_0_names.push_back("h_ljet_0_EXCEPT_FINE");
	hv_ljet_0_names.push_back("h_ljet_0_PRE");
	hv_ljet_0_names.push_back("h_ljet_0_BJET");
	hv_ljet_0_names.push_back("h_ljet_0_HIGH_E");
	hv_ljet_0_names.push_back("h_ljet_0_TRUTH");

}

//Histogram booking function for ljet_0_NOMINAL_central_jets_effSF_JVT
void MC_Analysis::Book_ljet_0_NOMINAL_central_jets_effSF_JVT(int bins, double min, double max) {
	h_ljet_0_NOMINAL_central_jets_effSF_JVT = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_effSF_JVT_CONTROL = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_effSF_JVT_PRE = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT_PRE", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_effSF_JVT_BJET = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT_BJET", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_effSF_JVT_TRUTH = new TH1F("h_ljet_0_NOMINAL_central_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT);
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT_CONTROL);
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT);
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE);
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT_PRE);
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT_BJET);
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E);
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_effSF_JVT_TRUTH);

	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT");
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT_CONTROL");
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT");
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE");
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT_PRE");
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT_BJET");
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT_HIGH_E");
	hv_ljet_0_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for ljet_0_NOMINAL_central_jets_ineffSF_JVT
void MC_Analysis::Book_ljet_0_NOMINAL_central_jets_ineffSF_JVT(int bins, double min, double max) {
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_PRE = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_BJET = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH = new TH1F("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT);
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL);
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT);
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_PRE);
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_BJET);
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E);
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH);

	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT");
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_CONTROL");
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT");
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_PRE");
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_BJET");
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_HIGH_E");
	hv_ljet_0_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_central_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for ljet_0_NOMINAL_effSF_MV2c10
void MC_Analysis::Book_ljet_0_NOMINAL_effSF_MV2c10(int bins, double min, double max) {
	h_ljet_0_NOMINAL_effSF_MV2c10 = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10", "", bins, min, max);
	h_ljet_0_NOMINAL_effSF_MV2c10_CONTROL = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10_CONTROL", "", bins, min, max);
	h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT", "", bins, min, max);
	h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_NOMINAL_effSF_MV2c10_PRE = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10_PRE", "", bins, min, max);
	h_ljet_0_NOMINAL_effSF_MV2c10_BJET = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10_BJET", "", bins, min, max);
	h_ljet_0_NOMINAL_effSF_MV2c10_HIGH_E = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10_HIGH_E", "", bins, min, max);
	h_ljet_0_NOMINAL_effSF_MV2c10_TRUTH = new TH1F("h_ljet_0_NOMINAL_effSF_MV2c10_TRUTH", "", bins, min, max);

	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10);
	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10_CONTROL);
	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT);
	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE);
	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10_PRE);
	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10_BJET);
	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10_HIGH_E);
	hv_ljet_0_NOMINAL_effSF_MV2c10.push_back(h_ljet_0_NOMINAL_effSF_MV2c10_TRUTH);

	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10");
	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10_CONTROL");
	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT");
	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10_EXCEPT_FINE");
	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10_PRE");
	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10_BJET");
	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10_HIGH_E");
	hv_ljet_0_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_effSF_MV2c10_TRUTH");

}

//Histogram booking function for ljet_0_NOMINAL_forward_jets_effSF_JVT
void MC_Analysis::Book_ljet_0_NOMINAL_forward_jets_effSF_JVT(int bins, double min, double max) {
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT_PRE = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_PRE", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT_BJET = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_BJET", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH = new TH1F("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT);
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL);
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT);
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE);
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT_PRE);
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT_BJET);
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E);
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH);

	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT");
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_CONTROL");
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT");
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE");
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_PRE");
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_BJET");
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_HIGH_E");
	hv_ljet_0_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for ljet_0_NOMINAL_forward_jets_ineffSF_JVT
void MC_Analysis::Book_ljet_0_NOMINAL_forward_jets_ineffSF_JVT(int bins, double min, double max) {
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH = new TH1F("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT);
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL);
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT);
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE);
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET);
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E);
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH);

	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT");
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_CONTROL");
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT");
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_PRE");
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_BJET");
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E");
	hv_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_0_NOMINAL_forward_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for ljet_0_NOMINAL_ineffSF_MV2c10
void MC_Analysis::Book_ljet_0_NOMINAL_ineffSF_MV2c10(int bins, double min, double max) {
	h_ljet_0_NOMINAL_ineffSF_MV2c10 = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10", "", bins, min, max);
	h_ljet_0_NOMINAL_ineffSF_MV2c10_CONTROL = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10_CONTROL", "", bins, min, max);
	h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT", "", bins, min, max);
	h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_NOMINAL_ineffSF_MV2c10_PRE = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10_PRE", "", bins, min, max);
	h_ljet_0_NOMINAL_ineffSF_MV2c10_BJET = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10_BJET", "", bins, min, max);
	h_ljet_0_NOMINAL_ineffSF_MV2c10_HIGH_E = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10_HIGH_E", "", bins, min, max);
	h_ljet_0_NOMINAL_ineffSF_MV2c10_TRUTH = new TH1F("h_ljet_0_NOMINAL_ineffSF_MV2c10_TRUTH", "", bins, min, max);

	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10);
	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10_CONTROL);
	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT);
	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE);
	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10_PRE);
	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10_BJET);
	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10_HIGH_E);
	hv_ljet_0_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_0_NOMINAL_ineffSF_MV2c10_TRUTH);

	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10");
	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10_CONTROL");
	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT");
	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE");
	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10_PRE");
	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10_BJET");
	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10_HIGH_E");
	hv_ljet_0_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_0_NOMINAL_ineffSF_MV2c10_TRUTH");

}

//Histogram booking function for ljet_0_b_tag_quantile
void MC_Analysis::Book_ljet_0_b_tag_quantile(int bins, double min, double max) {
	h_ljet_0_b_tag_quantile = new TH1F("h_ljet_0_b_tag_quantile", "", bins, min, max);
	h_ljet_0_b_tag_quantile_CONTROL = new TH1F("h_ljet_0_b_tag_quantile_CONTROL", "", bins, min, max);
	h_ljet_0_b_tag_quantile_EXCEPT = new TH1F("h_ljet_0_b_tag_quantile_EXCEPT", "", bins, min, max);
	h_ljet_0_b_tag_quantile_EXCEPT_FINE = new TH1F("h_ljet_0_b_tag_quantile_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_b_tag_quantile_PRE = new TH1F("h_ljet_0_b_tag_quantile_PRE", "", bins, min, max);
	h_ljet_0_b_tag_quantile_BJET = new TH1F("h_ljet_0_b_tag_quantile_BJET", "", bins, min, max);
	h_ljet_0_b_tag_quantile_HIGH_E = new TH1F("h_ljet_0_b_tag_quantile_HIGH_E", "", bins, min, max);
	h_ljet_0_b_tag_quantile_TRUTH = new TH1F("h_ljet_0_b_tag_quantile_TRUTH", "", bins, min, max);

	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile);
	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile_CONTROL);
	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile_EXCEPT);
	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile_EXCEPT_FINE);
	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile_PRE);
	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile_BJET);
	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile_HIGH_E);
	hv_ljet_0_b_tag_quantile.push_back(h_ljet_0_b_tag_quantile_TRUTH);

	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile");
	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile_CONTROL");
	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile_EXCEPT");
	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile_EXCEPT_FINE");
	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile_PRE");
	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile_BJET");
	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile_HIGH_E");
	hv_ljet_0_b_tag_quantile_names.push_back("h_ljet_0_b_tag_quantile_TRUTH");

}

//Histogram booking function for ljet_0_b_tag_score
void MC_Analysis::Book_ljet_0_b_tag_score(int bins, double min, double max) {
	h_ljet_0_b_tag_score = new TH1F("h_ljet_0_b_tag_score", "", bins, min, max);
	h_ljet_0_b_tag_score_CONTROL = new TH1F("h_ljet_0_b_tag_score_CONTROL", "", bins, min, max);
	h_ljet_0_b_tag_score_EXCEPT = new TH1F("h_ljet_0_b_tag_score_EXCEPT", "", bins, min, max);
	h_ljet_0_b_tag_score_EXCEPT_FINE = new TH1F("h_ljet_0_b_tag_score_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_b_tag_score_PRE = new TH1F("h_ljet_0_b_tag_score_PRE", "", bins, min, max);
	h_ljet_0_b_tag_score_BJET = new TH1F("h_ljet_0_b_tag_score_BJET", "", bins, min, max);
	h_ljet_0_b_tag_score_HIGH_E = new TH1F("h_ljet_0_b_tag_score_HIGH_E", "", bins, min, max);
	h_ljet_0_b_tag_score_TRUTH = new TH1F("h_ljet_0_b_tag_score_TRUTH", "", bins, min, max);

	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score);
	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score_CONTROL);
	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score_EXCEPT);
	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score_EXCEPT_FINE);
	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score_PRE);
	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score_BJET);
	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score_HIGH_E);
	hv_ljet_0_b_tag_score.push_back(h_ljet_0_b_tag_score_TRUTH);

	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score");
	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score_CONTROL");
	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score_EXCEPT");
	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score_EXCEPT_FINE");
	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score_PRE");
	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score_BJET");
	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score_HIGH_E");
	hv_ljet_0_b_tag_score_names.push_back("h_ljet_0_b_tag_score_TRUTH");

}

//Histogram booking function for ljet_0_b_tagged
void MC_Analysis::Book_ljet_0_b_tagged(int bins, double min, double max) {
	h_ljet_0_b_tagged = new TH1F("h_ljet_0_b_tagged", "", bins, min, max);
	h_ljet_0_b_tagged_CONTROL = new TH1F("h_ljet_0_b_tagged_CONTROL", "", bins, min, max);
	h_ljet_0_b_tagged_EXCEPT = new TH1F("h_ljet_0_b_tagged_EXCEPT", "", bins, min, max);
	h_ljet_0_b_tagged_EXCEPT_FINE = new TH1F("h_ljet_0_b_tagged_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_b_tagged_PRE = new TH1F("h_ljet_0_b_tagged_PRE", "", bins, min, max);
	h_ljet_0_b_tagged_BJET = new TH1F("h_ljet_0_b_tagged_BJET", "", bins, min, max);
	h_ljet_0_b_tagged_HIGH_E = new TH1F("h_ljet_0_b_tagged_HIGH_E", "", bins, min, max);
	h_ljet_0_b_tagged_TRUTH = new TH1F("h_ljet_0_b_tagged_TRUTH", "", bins, min, max);

	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged);
	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged_CONTROL);
	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged_EXCEPT);
	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged_EXCEPT_FINE);
	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged_PRE);
	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged_BJET);
	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged_HIGH_E);
	hv_ljet_0_b_tagged.push_back(h_ljet_0_b_tagged_TRUTH);

	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged");
	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged_CONTROL");
	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged_EXCEPT");
	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged_EXCEPT_FINE");
	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged_PRE");
	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged_BJET");
	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged_HIGH_E");
	hv_ljet_0_b_tagged_names.push_back("h_ljet_0_b_tagged_TRUTH");

}

//Histogram booking function for ljet_0_fjvt
void MC_Analysis::Book_ljet_0_fjvt(int bins, double min, double max) {
	h_ljet_0_fjvt = new TH1F("h_ljet_0_fjvt", "", bins, min, max);
	h_ljet_0_fjvt_CONTROL = new TH1F("h_ljet_0_fjvt_CONTROL", "", bins, min, max);
	h_ljet_0_fjvt_EXCEPT = new TH1F("h_ljet_0_fjvt_EXCEPT", "", bins, min, max);
	h_ljet_0_fjvt_EXCEPT_FINE = new TH1F("h_ljet_0_fjvt_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_fjvt_PRE = new TH1F("h_ljet_0_fjvt_PRE", "", bins, min, max);
	h_ljet_0_fjvt_BJET = new TH1F("h_ljet_0_fjvt_BJET", "", bins, min, max);
	h_ljet_0_fjvt_HIGH_E = new TH1F("h_ljet_0_fjvt_HIGH_E", "", bins, min, max);
	h_ljet_0_fjvt_TRUTH = new TH1F("h_ljet_0_fjvt_TRUTH", "", bins, min, max);

	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt);
	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt_CONTROL);
	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt_EXCEPT);
	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt_EXCEPT_FINE);
	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt_PRE);
	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt_BJET);
	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt_HIGH_E);
	hv_ljet_0_fjvt.push_back(h_ljet_0_fjvt_TRUTH);

	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt");
	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt_CONTROL");
	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt_EXCEPT");
	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt_EXCEPT_FINE");
	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt_PRE");
	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt_BJET");
	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt_HIGH_E");
	hv_ljet_0_fjvt_names.push_back("h_ljet_0_fjvt_TRUTH");

}

//Histogram booking function for ljet_0_flavorlabel
void MC_Analysis::Book_ljet_0_flavorlabel(int bins, double min, double max) {
	h_ljet_0_flavorlabel = new TH1F("h_ljet_0_flavorlabel", "", bins, min, max);
	h_ljet_0_flavorlabel_CONTROL = new TH1F("h_ljet_0_flavorlabel_CONTROL", "", bins, min, max);
	h_ljet_0_flavorlabel_EXCEPT = new TH1F("h_ljet_0_flavorlabel_EXCEPT", "", bins, min, max);
	h_ljet_0_flavorlabel_EXCEPT_FINE = new TH1F("h_ljet_0_flavorlabel_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_flavorlabel_PRE = new TH1F("h_ljet_0_flavorlabel_PRE", "", bins, min, max);
	h_ljet_0_flavorlabel_BJET = new TH1F("h_ljet_0_flavorlabel_BJET", "", bins, min, max);
	h_ljet_0_flavorlabel_HIGH_E = new TH1F("h_ljet_0_flavorlabel_HIGH_E", "", bins, min, max);
	h_ljet_0_flavorlabel_TRUTH = new TH1F("h_ljet_0_flavorlabel_TRUTH", "", bins, min, max);

	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel);
	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel_CONTROL);
	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel_EXCEPT);
	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel_EXCEPT_FINE);
	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel_PRE);
	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel_BJET);
	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel_HIGH_E);
	hv_ljet_0_flavorlabel.push_back(h_ljet_0_flavorlabel_TRUTH);

	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel");
	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel_CONTROL");
	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel_EXCEPT");
	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel_EXCEPT_FINE");
	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel_PRE");
	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel_BJET");
	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel_HIGH_E");
	hv_ljet_0_flavorlabel_names.push_back("h_ljet_0_flavorlabel_TRUTH");

}

//Histogram booking function for ljet_0_flavorlabel_cone
void MC_Analysis::Book_ljet_0_flavorlabel_cone(int bins, double min, double max) {
	h_ljet_0_flavorlabel_cone = new TH1F("h_ljet_0_flavorlabel_cone", "", bins, min, max);
	h_ljet_0_flavorlabel_cone_CONTROL = new TH1F("h_ljet_0_flavorlabel_cone_CONTROL", "", bins, min, max);
	h_ljet_0_flavorlabel_cone_EXCEPT = new TH1F("h_ljet_0_flavorlabel_cone_EXCEPT", "", bins, min, max);
	h_ljet_0_flavorlabel_cone_EXCEPT_FINE = new TH1F("h_ljet_0_flavorlabel_cone_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_flavorlabel_cone_PRE = new TH1F("h_ljet_0_flavorlabel_cone_PRE", "", bins, min, max);
	h_ljet_0_flavorlabel_cone_BJET = new TH1F("h_ljet_0_flavorlabel_cone_BJET", "", bins, min, max);
	h_ljet_0_flavorlabel_cone_HIGH_E = new TH1F("h_ljet_0_flavorlabel_cone_HIGH_E", "", bins, min, max);
	h_ljet_0_flavorlabel_cone_TRUTH = new TH1F("h_ljet_0_flavorlabel_cone_TRUTH", "", bins, min, max);

	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone);
	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone_CONTROL);
	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone_EXCEPT);
	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone_EXCEPT_FINE);
	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone_PRE);
	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone_BJET);
	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone_HIGH_E);
	hv_ljet_0_flavorlabel_cone.push_back(h_ljet_0_flavorlabel_cone_TRUTH);

	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone");
	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone_CONTROL");
	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone_EXCEPT");
	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone_EXCEPT_FINE");
	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone_PRE");
	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone_BJET");
	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone_HIGH_E");
	hv_ljet_0_flavorlabel_cone_names.push_back("h_ljet_0_flavorlabel_cone_TRUTH");

}

//Histogram booking function for ljet_0_flavorlabel_part
void MC_Analysis::Book_ljet_0_flavorlabel_part(int bins, double min, double max) {
	h_ljet_0_flavorlabel_part = new TH1F("h_ljet_0_flavorlabel_part", "", bins, min, max);
	h_ljet_0_flavorlabel_part_CONTROL = new TH1F("h_ljet_0_flavorlabel_part_CONTROL", "", bins, min, max);
	h_ljet_0_flavorlabel_part_EXCEPT = new TH1F("h_ljet_0_flavorlabel_part_EXCEPT", "", bins, min, max);
	h_ljet_0_flavorlabel_part_EXCEPT_FINE = new TH1F("h_ljet_0_flavorlabel_part_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_flavorlabel_part_PRE = new TH1F("h_ljet_0_flavorlabel_part_PRE", "", bins, min, max);
	h_ljet_0_flavorlabel_part_BJET = new TH1F("h_ljet_0_flavorlabel_part_BJET", "", bins, min, max);
	h_ljet_0_flavorlabel_part_HIGH_E = new TH1F("h_ljet_0_flavorlabel_part_HIGH_E", "", bins, min, max);
	h_ljet_0_flavorlabel_part_TRUTH = new TH1F("h_ljet_0_flavorlabel_part_TRUTH", "", bins, min, max);

	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part);
	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part_CONTROL);
	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part_EXCEPT);
	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part_EXCEPT_FINE);
	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part_PRE);
	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part_BJET);
	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part_HIGH_E);
	hv_ljet_0_flavorlabel_part.push_back(h_ljet_0_flavorlabel_part_TRUTH);

	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part");
	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part_CONTROL");
	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part_EXCEPT");
	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part_EXCEPT_FINE");
	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part_PRE");
	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part_BJET");
	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part_HIGH_E");
	hv_ljet_0_flavorlabel_part_names.push_back("h_ljet_0_flavorlabel_part_TRUTH");

}

//Histogram booking function for ljet_0_is_Jvt_HS
void MC_Analysis::Book_ljet_0_is_Jvt_HS(int bins, double min, double max) {
	h_ljet_0_is_Jvt_HS = new TH1F("h_ljet_0_is_Jvt_HS", "", bins, min, max);
	h_ljet_0_is_Jvt_HS_CONTROL = new TH1F("h_ljet_0_is_Jvt_HS_CONTROL", "", bins, min, max);
	h_ljet_0_is_Jvt_HS_EXCEPT = new TH1F("h_ljet_0_is_Jvt_HS_EXCEPT", "", bins, min, max);
	h_ljet_0_is_Jvt_HS_EXCEPT_FINE = new TH1F("h_ljet_0_is_Jvt_HS_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_is_Jvt_HS_PRE = new TH1F("h_ljet_0_is_Jvt_HS_PRE", "", bins, min, max);
	h_ljet_0_is_Jvt_HS_BJET = new TH1F("h_ljet_0_is_Jvt_HS_BJET", "", bins, min, max);
	h_ljet_0_is_Jvt_HS_HIGH_E = new TH1F("h_ljet_0_is_Jvt_HS_HIGH_E", "", bins, min, max);
	h_ljet_0_is_Jvt_HS_TRUTH = new TH1F("h_ljet_0_is_Jvt_HS_TRUTH", "", bins, min, max);

	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS);
	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS_CONTROL);
	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS_EXCEPT);
	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS_EXCEPT_FINE);
	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS_PRE);
	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS_BJET);
	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS_HIGH_E);
	hv_ljet_0_is_Jvt_HS.push_back(h_ljet_0_is_Jvt_HS_TRUTH);

	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS");
	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS_CONTROL");
	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS_EXCEPT");
	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS_EXCEPT_FINE");
	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS_PRE");
	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS_BJET");
	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS_HIGH_E");
	hv_ljet_0_is_Jvt_HS_names.push_back("h_ljet_0_is_Jvt_HS_TRUTH");

}

//Histogram booking function for ljet_0_jvt
void MC_Analysis::Book_ljet_0_jvt(int bins, double min, double max) {
	h_ljet_0_jvt = new TH1F("h_ljet_0_jvt", "", bins, min, max);
	h_ljet_0_jvt_CONTROL = new TH1F("h_ljet_0_jvt_CONTROL", "", bins, min, max);
	h_ljet_0_jvt_EXCEPT = new TH1F("h_ljet_0_jvt_EXCEPT", "", bins, min, max);
	h_ljet_0_jvt_EXCEPT_FINE = new TH1F("h_ljet_0_jvt_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_jvt_PRE = new TH1F("h_ljet_0_jvt_PRE", "", bins, min, max);
	h_ljet_0_jvt_BJET = new TH1F("h_ljet_0_jvt_BJET", "", bins, min, max);
	h_ljet_0_jvt_HIGH_E = new TH1F("h_ljet_0_jvt_HIGH_E", "", bins, min, max);
	h_ljet_0_jvt_TRUTH = new TH1F("h_ljet_0_jvt_TRUTH", "", bins, min, max);

	hv_ljet_0_jvt.push_back(h_ljet_0_jvt);
	hv_ljet_0_jvt.push_back(h_ljet_0_jvt_CONTROL);
	hv_ljet_0_jvt.push_back(h_ljet_0_jvt_EXCEPT);
	hv_ljet_0_jvt.push_back(h_ljet_0_jvt_EXCEPT_FINE);
	hv_ljet_0_jvt.push_back(h_ljet_0_jvt_PRE);
	hv_ljet_0_jvt.push_back(h_ljet_0_jvt_BJET);
	hv_ljet_0_jvt.push_back(h_ljet_0_jvt_HIGH_E);
	hv_ljet_0_jvt.push_back(h_ljet_0_jvt_TRUTH);

	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt");
	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt_CONTROL");
	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt_EXCEPT");
	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt_EXCEPT_FINE");
	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt_PRE");
	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt_BJET");
	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt_HIGH_E");
	hv_ljet_0_jvt_names.push_back("h_ljet_0_jvt_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_0_matched_p4 ----- //
	//Histogram booking function for ljet_0_matched_p4_X
	void MC_Analysis::Book_ljet_0_matched_p4_X(int bins, double min, double max) {
		h_ljet_0_matched_p4_X = new TH1F("h_ljet_0_matched_p4_X","", bins, min, max);
		h_ljet_0_matched_p4_X_CONTROL = new TH1F("h_ljet_0_matched_p4_X_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_X_EXCEPT = new TH1F("h_ljet_0_matched_p4_X_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_X_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_X_PRE = new TH1F("h_ljet_0_matched_p4_X_PRE","", bins, min, max);
		h_ljet_0_matched_p4_X_BJET = new TH1F("h_ljet_0_matched_p4_X_BJET","", bins, min, max);
		h_ljet_0_matched_p4_X_HIGH_E = new TH1F("h_ljet_0_matched_p4_X_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_X_TRUTH = new TH1F("h_ljet_0_matched_p4_X_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X);
		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X_CONTROL);
		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X_EXCEPT);
		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X_EXCEPT_FINE);
		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X_PRE);
		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X_BJET);
		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X_HIGH_E);
		hv_ljet_0_matched_p4_X.push_back(h_ljet_0_matched_p4_X_TRUTH);

		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X");
		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X_CONTROL");
		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X_EXCEPT");
		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X_EXCEPT_FINE");
		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X_PRE");
		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X_BJET");
		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X_HIGH_E");
		hv_ljet_0_matched_p4_X_names.push_back("h_ljet_0_matched_p4_X_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Y
	void MC_Analysis::Book_ljet_0_matched_p4_Y(int bins, double min, double max) {
		h_ljet_0_matched_p4_Y = new TH1F("h_ljet_0_matched_p4_Y","", bins, min, max);
		h_ljet_0_matched_p4_Y_CONTROL = new TH1F("h_ljet_0_matched_p4_Y_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Y_EXCEPT = new TH1F("h_ljet_0_matched_p4_Y_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Y_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Y_PRE = new TH1F("h_ljet_0_matched_p4_Y_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Y_BJET = new TH1F("h_ljet_0_matched_p4_Y_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Y_HIGH_E = new TH1F("h_ljet_0_matched_p4_Y_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Y_TRUTH = new TH1F("h_ljet_0_matched_p4_Y_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y);
		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y_CONTROL);
		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y_EXCEPT);
		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y_PRE);
		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y_BJET);
		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y_HIGH_E);
		hv_ljet_0_matched_p4_Y.push_back(h_ljet_0_matched_p4_Y_TRUTH);

		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y");
		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y_CONTROL");
		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y_EXCEPT");
		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y_PRE");
		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y_BJET");
		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y_HIGH_E");
		hv_ljet_0_matched_p4_Y_names.push_back("h_ljet_0_matched_p4_Y_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Z
	void MC_Analysis::Book_ljet_0_matched_p4_Z(int bins, double min, double max) {
		h_ljet_0_matched_p4_Z = new TH1F("h_ljet_0_matched_p4_Z","", bins, min, max);
		h_ljet_0_matched_p4_Z_CONTROL = new TH1F("h_ljet_0_matched_p4_Z_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Z_EXCEPT = new TH1F("h_ljet_0_matched_p4_Z_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Z_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Z_PRE = new TH1F("h_ljet_0_matched_p4_Z_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Z_BJET = new TH1F("h_ljet_0_matched_p4_Z_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Z_HIGH_E = new TH1F("h_ljet_0_matched_p4_Z_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Z_TRUTH = new TH1F("h_ljet_0_matched_p4_Z_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z);
		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z_CONTROL);
		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z_EXCEPT);
		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z_PRE);
		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z_BJET);
		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z_HIGH_E);
		hv_ljet_0_matched_p4_Z.push_back(h_ljet_0_matched_p4_Z_TRUTH);

		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z");
		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z_CONTROL");
		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z_EXCEPT");
		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z_PRE");
		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z_BJET");
		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z_HIGH_E");
		hv_ljet_0_matched_p4_Z_names.push_back("h_ljet_0_matched_p4_Z_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_T
	void MC_Analysis::Book_ljet_0_matched_p4_T(int bins, double min, double max) {
		h_ljet_0_matched_p4_T = new TH1F("h_ljet_0_matched_p4_T","", bins, min, max);
		h_ljet_0_matched_p4_T_CONTROL = new TH1F("h_ljet_0_matched_p4_T_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_T_EXCEPT = new TH1F("h_ljet_0_matched_p4_T_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_T_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_T_PRE = new TH1F("h_ljet_0_matched_p4_T_PRE","", bins, min, max);
		h_ljet_0_matched_p4_T_BJET = new TH1F("h_ljet_0_matched_p4_T_BJET","", bins, min, max);
		h_ljet_0_matched_p4_T_HIGH_E = new TH1F("h_ljet_0_matched_p4_T_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_T_TRUTH = new TH1F("h_ljet_0_matched_p4_T_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T);
		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T_CONTROL);
		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T_EXCEPT);
		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T_EXCEPT_FINE);
		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T_PRE);
		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T_BJET);
		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T_HIGH_E);
		hv_ljet_0_matched_p4_T.push_back(h_ljet_0_matched_p4_T_TRUTH);

		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T");
		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T_CONTROL");
		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T_EXCEPT");
		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T_EXCEPT_FINE");
		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T_PRE");
		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T_BJET");
		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T_HIGH_E");
		hv_ljet_0_matched_p4_T_names.push_back("h_ljet_0_matched_p4_T_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Px
	void MC_Analysis::Book_ljet_0_matched_p4_Px(int bins, double min, double max) {
		h_ljet_0_matched_p4_Px = new TH1F("h_ljet_0_matched_p4_Px","", bins, min, max);
		h_ljet_0_matched_p4_Px_CONTROL = new TH1F("h_ljet_0_matched_p4_Px_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Px_EXCEPT = new TH1F("h_ljet_0_matched_p4_Px_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Px_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Px_PRE = new TH1F("h_ljet_0_matched_p4_Px_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Px_BJET = new TH1F("h_ljet_0_matched_p4_Px_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Px_HIGH_E = new TH1F("h_ljet_0_matched_p4_Px_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Px_TRUTH = new TH1F("h_ljet_0_matched_p4_Px_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px);
		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px_CONTROL);
		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px_EXCEPT);
		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px_PRE);
		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px_BJET);
		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px_HIGH_E);
		hv_ljet_0_matched_p4_Px.push_back(h_ljet_0_matched_p4_Px_TRUTH);

		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px");
		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px_CONTROL");
		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px_EXCEPT");
		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px_PRE");
		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px_BJET");
		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px_HIGH_E");
		hv_ljet_0_matched_p4_Px_names.push_back("h_ljet_0_matched_p4_Px_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Py
	void MC_Analysis::Book_ljet_0_matched_p4_Py(int bins, double min, double max) {
		h_ljet_0_matched_p4_Py = new TH1F("h_ljet_0_matched_p4_Py","", bins, min, max);
		h_ljet_0_matched_p4_Py_CONTROL = new TH1F("h_ljet_0_matched_p4_Py_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Py_EXCEPT = new TH1F("h_ljet_0_matched_p4_Py_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Py_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Py_PRE = new TH1F("h_ljet_0_matched_p4_Py_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Py_BJET = new TH1F("h_ljet_0_matched_p4_Py_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Py_HIGH_E = new TH1F("h_ljet_0_matched_p4_Py_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Py_TRUTH = new TH1F("h_ljet_0_matched_p4_Py_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py);
		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py_CONTROL);
		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py_EXCEPT);
		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py_PRE);
		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py_BJET);
		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py_HIGH_E);
		hv_ljet_0_matched_p4_Py.push_back(h_ljet_0_matched_p4_Py_TRUTH);

		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py");
		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py_CONTROL");
		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py_EXCEPT");
		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py_PRE");
		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py_BJET");
		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py_HIGH_E");
		hv_ljet_0_matched_p4_Py_names.push_back("h_ljet_0_matched_p4_Py_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Pz
	void MC_Analysis::Book_ljet_0_matched_p4_Pz(int bins, double min, double max) {
		h_ljet_0_matched_p4_Pz = new TH1F("h_ljet_0_matched_p4_Pz","", bins, min, max);
		h_ljet_0_matched_p4_Pz_CONTROL = new TH1F("h_ljet_0_matched_p4_Pz_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Pz_EXCEPT = new TH1F("h_ljet_0_matched_p4_Pz_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Pz_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Pz_PRE = new TH1F("h_ljet_0_matched_p4_Pz_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Pz_BJET = new TH1F("h_ljet_0_matched_p4_Pz_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Pz_HIGH_E = new TH1F("h_ljet_0_matched_p4_Pz_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Pz_TRUTH = new TH1F("h_ljet_0_matched_p4_Pz_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz);
		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz_CONTROL);
		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz_EXCEPT);
		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz_PRE);
		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz_BJET);
		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz_HIGH_E);
		hv_ljet_0_matched_p4_Pz.push_back(h_ljet_0_matched_p4_Pz_TRUTH);

		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz");
		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz_CONTROL");
		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz_EXCEPT");
		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz_PRE");
		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz_BJET");
		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz_HIGH_E");
		hv_ljet_0_matched_p4_Pz_names.push_back("h_ljet_0_matched_p4_Pz_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Energy
	void MC_Analysis::Book_ljet_0_matched_p4_Energy(int bins, double min, double max) {
		h_ljet_0_matched_p4_Energy = new TH1F("h_ljet_0_matched_p4_Energy","", bins, min, max);
		h_ljet_0_matched_p4_Energy_CONTROL = new TH1F("h_ljet_0_matched_p4_Energy_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Energy_EXCEPT = new TH1F("h_ljet_0_matched_p4_Energy_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Energy_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Energy_PRE = new TH1F("h_ljet_0_matched_p4_Energy_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Energy_BJET = new TH1F("h_ljet_0_matched_p4_Energy_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Energy_HIGH_E = new TH1F("h_ljet_0_matched_p4_Energy_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Energy_TRUTH = new TH1F("h_ljet_0_matched_p4_Energy_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy);
		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy_CONTROL);
		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy_EXCEPT);
		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy_PRE);
		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy_BJET);
		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy_HIGH_E);
		hv_ljet_0_matched_p4_Energy.push_back(h_ljet_0_matched_p4_Energy_TRUTH);

		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy");
		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy_CONTROL");
		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy_EXCEPT");
		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy_PRE");
		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy_BJET");
		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy_HIGH_E");
		hv_ljet_0_matched_p4_Energy_names.push_back("h_ljet_0_matched_p4_Energy_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Theta
	void MC_Analysis::Book_ljet_0_matched_p4_Theta(int bins, double min, double max) {
		h_ljet_0_matched_p4_Theta = new TH1F("h_ljet_0_matched_p4_Theta","", bins, min, max);
		h_ljet_0_matched_p4_Theta_CONTROL = new TH1F("h_ljet_0_matched_p4_Theta_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Theta_EXCEPT = new TH1F("h_ljet_0_matched_p4_Theta_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Theta_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Theta_PRE = new TH1F("h_ljet_0_matched_p4_Theta_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Theta_BJET = new TH1F("h_ljet_0_matched_p4_Theta_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Theta_HIGH_E = new TH1F("h_ljet_0_matched_p4_Theta_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Theta_TRUTH = new TH1F("h_ljet_0_matched_p4_Theta_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta);
		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta_CONTROL);
		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta_EXCEPT);
		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta_PRE);
		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta_BJET);
		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta_HIGH_E);
		hv_ljet_0_matched_p4_Theta.push_back(h_ljet_0_matched_p4_Theta_TRUTH);

		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta");
		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta_CONTROL");
		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta_EXCEPT");
		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta_PRE");
		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta_BJET");
		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta_HIGH_E");
		hv_ljet_0_matched_p4_Theta_names.push_back("h_ljet_0_matched_p4_Theta_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_CosTheta
	void MC_Analysis::Book_ljet_0_matched_p4_CosTheta(int bins, double min, double max) {
		h_ljet_0_matched_p4_CosTheta = new TH1F("h_ljet_0_matched_p4_CosTheta","", bins, min, max);
		h_ljet_0_matched_p4_CosTheta_CONTROL = new TH1F("h_ljet_0_matched_p4_CosTheta_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_CosTheta_EXCEPT = new TH1F("h_ljet_0_matched_p4_CosTheta_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_CosTheta_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_CosTheta_PRE = new TH1F("h_ljet_0_matched_p4_CosTheta_PRE","", bins, min, max);
		h_ljet_0_matched_p4_CosTheta_BJET = new TH1F("h_ljet_0_matched_p4_CosTheta_BJET","", bins, min, max);
		h_ljet_0_matched_p4_CosTheta_HIGH_E = new TH1F("h_ljet_0_matched_p4_CosTheta_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_CosTheta_TRUTH = new TH1F("h_ljet_0_matched_p4_CosTheta_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta);
		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta_CONTROL);
		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta_EXCEPT);
		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta_EXCEPT_FINE);
		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta_PRE);
		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta_BJET);
		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta_HIGH_E);
		hv_ljet_0_matched_p4_CosTheta.push_back(h_ljet_0_matched_p4_CosTheta_TRUTH);

		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta");
		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta_CONTROL");
		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta_EXCEPT");
		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta_EXCEPT_FINE");
		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta_PRE");
		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta_BJET");
		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta_HIGH_E");
		hv_ljet_0_matched_p4_CosTheta_names.push_back("h_ljet_0_matched_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Phi
	void MC_Analysis::Book_ljet_0_matched_p4_Phi(int bins, double min, double max) {
		h_ljet_0_matched_p4_Phi = new TH1F("h_ljet_0_matched_p4_Phi","", bins, min, max);
		h_ljet_0_matched_p4_Phi_CONTROL = new TH1F("h_ljet_0_matched_p4_Phi_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Phi_EXCEPT = new TH1F("h_ljet_0_matched_p4_Phi_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Phi_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Phi_PRE = new TH1F("h_ljet_0_matched_p4_Phi_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Phi_BJET = new TH1F("h_ljet_0_matched_p4_Phi_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Phi_HIGH_E = new TH1F("h_ljet_0_matched_p4_Phi_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Phi_TRUTH = new TH1F("h_ljet_0_matched_p4_Phi_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi);
		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi_CONTROL);
		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi_EXCEPT);
		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi_PRE);
		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi_BJET);
		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi_HIGH_E);
		hv_ljet_0_matched_p4_Phi.push_back(h_ljet_0_matched_p4_Phi_TRUTH);

		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi");
		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi_CONTROL");
		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi_EXCEPT");
		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi_PRE");
		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi_BJET");
		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi_HIGH_E");
		hv_ljet_0_matched_p4_Phi_names.push_back("h_ljet_0_matched_p4_Phi_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Rho
	void MC_Analysis::Book_ljet_0_matched_p4_Rho(int bins, double min, double max) {
		h_ljet_0_matched_p4_Rho = new TH1F("h_ljet_0_matched_p4_Rho","", bins, min, max);
		h_ljet_0_matched_p4_Rho_CONTROL = new TH1F("h_ljet_0_matched_p4_Rho_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Rho_EXCEPT = new TH1F("h_ljet_0_matched_p4_Rho_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Rho_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Rho_PRE = new TH1F("h_ljet_0_matched_p4_Rho_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Rho_BJET = new TH1F("h_ljet_0_matched_p4_Rho_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Rho_HIGH_E = new TH1F("h_ljet_0_matched_p4_Rho_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Rho_TRUTH = new TH1F("h_ljet_0_matched_p4_Rho_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho);
		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho_CONTROL);
		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho_EXCEPT);
		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho_PRE);
		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho_BJET);
		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho_HIGH_E);
		hv_ljet_0_matched_p4_Rho.push_back(h_ljet_0_matched_p4_Rho_TRUTH);

		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho");
		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho_CONTROL");
		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho_EXCEPT");
		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho_PRE");
		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho_BJET");
		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho_HIGH_E");
		hv_ljet_0_matched_p4_Rho_names.push_back("h_ljet_0_matched_p4_Rho_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Perp2
	void MC_Analysis::Book_ljet_0_matched_p4_Perp2(int bins, double min, double max) {
		h_ljet_0_matched_p4_Perp2 = new TH1F("h_ljet_0_matched_p4_Perp2","", bins, min, max);
		h_ljet_0_matched_p4_Perp2_CONTROL = new TH1F("h_ljet_0_matched_p4_Perp2_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Perp2_EXCEPT = new TH1F("h_ljet_0_matched_p4_Perp2_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Perp2_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Perp2_PRE = new TH1F("h_ljet_0_matched_p4_Perp2_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Perp2_BJET = new TH1F("h_ljet_0_matched_p4_Perp2_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Perp2_HIGH_E = new TH1F("h_ljet_0_matched_p4_Perp2_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Perp2_TRUTH = new TH1F("h_ljet_0_matched_p4_Perp2_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2);
		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2_CONTROL);
		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2_EXCEPT);
		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2_PRE);
		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2_BJET);
		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2_HIGH_E);
		hv_ljet_0_matched_p4_Perp2.push_back(h_ljet_0_matched_p4_Perp2_TRUTH);

		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2");
		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2_CONTROL");
		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2_EXCEPT");
		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2_PRE");
		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2_BJET");
		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2_HIGH_E");
		hv_ljet_0_matched_p4_Perp2_names.push_back("h_ljet_0_matched_p4_Perp2_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Pt
	void MC_Analysis::Book_ljet_0_matched_p4_Pt(int bins, double min, double max) {
		h_ljet_0_matched_p4_Pt = new TH1F("h_ljet_0_matched_p4_Pt","", bins, min, max);
		h_ljet_0_matched_p4_Pt_CONTROL = new TH1F("h_ljet_0_matched_p4_Pt_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Pt_EXCEPT = new TH1F("h_ljet_0_matched_p4_Pt_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Pt_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Pt_PRE = new TH1F("h_ljet_0_matched_p4_Pt_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Pt_BJET = new TH1F("h_ljet_0_matched_p4_Pt_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Pt_HIGH_E = new TH1F("h_ljet_0_matched_p4_Pt_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Pt_TRUTH = new TH1F("h_ljet_0_matched_p4_Pt_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt);
		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt_CONTROL);
		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt_EXCEPT);
		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt_PRE);
		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt_BJET);
		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt_HIGH_E);
		hv_ljet_0_matched_p4_Pt.push_back(h_ljet_0_matched_p4_Pt_TRUTH);

		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt");
		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt_CONTROL");
		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt_EXCEPT");
		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt_PRE");
		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt_BJET");
		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt_HIGH_E");
		hv_ljet_0_matched_p4_Pt_names.push_back("h_ljet_0_matched_p4_Pt_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Perp
	void MC_Analysis::Book_ljet_0_matched_p4_Perp(int bins, double min, double max) {
		h_ljet_0_matched_p4_Perp = new TH1F("h_ljet_0_matched_p4_Perp","", bins, min, max);
		h_ljet_0_matched_p4_Perp_CONTROL = new TH1F("h_ljet_0_matched_p4_Perp_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Perp_EXCEPT = new TH1F("h_ljet_0_matched_p4_Perp_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Perp_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Perp_PRE = new TH1F("h_ljet_0_matched_p4_Perp_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Perp_BJET = new TH1F("h_ljet_0_matched_p4_Perp_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Perp_HIGH_E = new TH1F("h_ljet_0_matched_p4_Perp_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Perp_TRUTH = new TH1F("h_ljet_0_matched_p4_Perp_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp);
		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp_CONTROL);
		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp_EXCEPT);
		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp_PRE);
		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp_BJET);
		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp_HIGH_E);
		hv_ljet_0_matched_p4_Perp.push_back(h_ljet_0_matched_p4_Perp_TRUTH);

		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp");
		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp_CONTROL");
		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp_EXCEPT");
		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp_PRE");
		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp_BJET");
		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp_HIGH_E");
		hv_ljet_0_matched_p4_Perp_names.push_back("h_ljet_0_matched_p4_Perp_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Et2
	void MC_Analysis::Book_ljet_0_matched_p4_Et2(int bins, double min, double max) {
		h_ljet_0_matched_p4_Et2 = new TH1F("h_ljet_0_matched_p4_Et2","", bins, min, max);
		h_ljet_0_matched_p4_Et2_CONTROL = new TH1F("h_ljet_0_matched_p4_Et2_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Et2_EXCEPT = new TH1F("h_ljet_0_matched_p4_Et2_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Et2_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Et2_PRE = new TH1F("h_ljet_0_matched_p4_Et2_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Et2_BJET = new TH1F("h_ljet_0_matched_p4_Et2_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Et2_HIGH_E = new TH1F("h_ljet_0_matched_p4_Et2_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Et2_TRUTH = new TH1F("h_ljet_0_matched_p4_Et2_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2);
		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2_CONTROL);
		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2_EXCEPT);
		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2_PRE);
		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2_BJET);
		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2_HIGH_E);
		hv_ljet_0_matched_p4_Et2.push_back(h_ljet_0_matched_p4_Et2_TRUTH);

		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2");
		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2_CONTROL");
		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2_EXCEPT");
		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2_PRE");
		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2_BJET");
		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2_HIGH_E");
		hv_ljet_0_matched_p4_Et2_names.push_back("h_ljet_0_matched_p4_Et2_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Et
	void MC_Analysis::Book_ljet_0_matched_p4_Et(int bins, double min, double max) {
		h_ljet_0_matched_p4_Et = new TH1F("h_ljet_0_matched_p4_Et","", bins, min, max);
		h_ljet_0_matched_p4_Et_CONTROL = new TH1F("h_ljet_0_matched_p4_Et_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Et_EXCEPT = new TH1F("h_ljet_0_matched_p4_Et_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Et_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Et_PRE = new TH1F("h_ljet_0_matched_p4_Et_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Et_BJET = new TH1F("h_ljet_0_matched_p4_Et_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Et_HIGH_E = new TH1F("h_ljet_0_matched_p4_Et_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Et_TRUTH = new TH1F("h_ljet_0_matched_p4_Et_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et);
		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et_CONTROL);
		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et_EXCEPT);
		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et_PRE);
		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et_BJET);
		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et_HIGH_E);
		hv_ljet_0_matched_p4_Et.push_back(h_ljet_0_matched_p4_Et_TRUTH);

		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et");
		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et_CONTROL");
		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et_EXCEPT");
		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et_PRE");
		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et_BJET");
		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et_HIGH_E");
		hv_ljet_0_matched_p4_Et_names.push_back("h_ljet_0_matched_p4_Et_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Mag2
	void MC_Analysis::Book_ljet_0_matched_p4_Mag2(int bins, double min, double max) {
		h_ljet_0_matched_p4_Mag2 = new TH1F("h_ljet_0_matched_p4_Mag2","", bins, min, max);
		h_ljet_0_matched_p4_Mag2_CONTROL = new TH1F("h_ljet_0_matched_p4_Mag2_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Mag2_EXCEPT = new TH1F("h_ljet_0_matched_p4_Mag2_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Mag2_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Mag2_PRE = new TH1F("h_ljet_0_matched_p4_Mag2_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Mag2_BJET = new TH1F("h_ljet_0_matched_p4_Mag2_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Mag2_HIGH_E = new TH1F("h_ljet_0_matched_p4_Mag2_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Mag2_TRUTH = new TH1F("h_ljet_0_matched_p4_Mag2_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2);
		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2_CONTROL);
		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2_EXCEPT);
		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2_PRE);
		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2_BJET);
		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2_HIGH_E);
		hv_ljet_0_matched_p4_Mag2.push_back(h_ljet_0_matched_p4_Mag2_TRUTH);

		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2");
		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2_CONTROL");
		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2_EXCEPT");
		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2_PRE");
		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2_BJET");
		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2_HIGH_E");
		hv_ljet_0_matched_p4_Mag2_names.push_back("h_ljet_0_matched_p4_Mag2_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_M2
	void MC_Analysis::Book_ljet_0_matched_p4_M2(int bins, double min, double max) {
		h_ljet_0_matched_p4_M2 = new TH1F("h_ljet_0_matched_p4_M2","", bins, min, max);
		h_ljet_0_matched_p4_M2_CONTROL = new TH1F("h_ljet_0_matched_p4_M2_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_M2_EXCEPT = new TH1F("h_ljet_0_matched_p4_M2_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_M2_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_M2_PRE = new TH1F("h_ljet_0_matched_p4_M2_PRE","", bins, min, max);
		h_ljet_0_matched_p4_M2_BJET = new TH1F("h_ljet_0_matched_p4_M2_BJET","", bins, min, max);
		h_ljet_0_matched_p4_M2_HIGH_E = new TH1F("h_ljet_0_matched_p4_M2_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_M2_TRUTH = new TH1F("h_ljet_0_matched_p4_M2_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2);
		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2_CONTROL);
		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2_EXCEPT);
		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2_EXCEPT_FINE);
		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2_PRE);
		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2_BJET);
		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2_HIGH_E);
		hv_ljet_0_matched_p4_M2.push_back(h_ljet_0_matched_p4_M2_TRUTH);

		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2");
		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2_CONTROL");
		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2_EXCEPT");
		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2_EXCEPT_FINE");
		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2_PRE");
		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2_BJET");
		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2_HIGH_E");
		hv_ljet_0_matched_p4_M2_names.push_back("h_ljet_0_matched_p4_M2_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Mag
	void MC_Analysis::Book_ljet_0_matched_p4_Mag(int bins, double min, double max) {
		h_ljet_0_matched_p4_Mag = new TH1F("h_ljet_0_matched_p4_Mag","", bins, min, max);
		h_ljet_0_matched_p4_Mag_CONTROL = new TH1F("h_ljet_0_matched_p4_Mag_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Mag_EXCEPT = new TH1F("h_ljet_0_matched_p4_Mag_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Mag_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Mag_PRE = new TH1F("h_ljet_0_matched_p4_Mag_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Mag_BJET = new TH1F("h_ljet_0_matched_p4_Mag_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Mag_HIGH_E = new TH1F("h_ljet_0_matched_p4_Mag_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Mag_TRUTH = new TH1F("h_ljet_0_matched_p4_Mag_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag);
		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag_CONTROL);
		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag_EXCEPT);
		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag_PRE);
		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag_BJET);
		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag_HIGH_E);
		hv_ljet_0_matched_p4_Mag.push_back(h_ljet_0_matched_p4_Mag_TRUTH);

		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag");
		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag_CONTROL");
		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag_EXCEPT");
		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag_PRE");
		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag_BJET");
		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag_HIGH_E");
		hv_ljet_0_matched_p4_Mag_names.push_back("h_ljet_0_matched_p4_Mag_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_M
	void MC_Analysis::Book_ljet_0_matched_p4_M(int bins, double min, double max) {
		h_ljet_0_matched_p4_M = new TH1F("h_ljet_0_matched_p4_M","", bins, min, max);
		h_ljet_0_matched_p4_M_CONTROL = new TH1F("h_ljet_0_matched_p4_M_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_M_EXCEPT = new TH1F("h_ljet_0_matched_p4_M_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_M_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_M_PRE = new TH1F("h_ljet_0_matched_p4_M_PRE","", bins, min, max);
		h_ljet_0_matched_p4_M_BJET = new TH1F("h_ljet_0_matched_p4_M_BJET","", bins, min, max);
		h_ljet_0_matched_p4_M_HIGH_E = new TH1F("h_ljet_0_matched_p4_M_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_M_TRUTH = new TH1F("h_ljet_0_matched_p4_M_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M);
		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M_CONTROL);
		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M_EXCEPT);
		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M_EXCEPT_FINE);
		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M_PRE);
		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M_BJET);
		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M_HIGH_E);
		hv_ljet_0_matched_p4_M.push_back(h_ljet_0_matched_p4_M_TRUTH);

		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M");
		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M_CONTROL");
		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M_EXCEPT");
		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M_EXCEPT_FINE");
		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M_PRE");
		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M_BJET");
		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M_HIGH_E");
		hv_ljet_0_matched_p4_M_names.push_back("h_ljet_0_matched_p4_M_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Mt2
	void MC_Analysis::Book_ljet_0_matched_p4_Mt2(int bins, double min, double max) {
		h_ljet_0_matched_p4_Mt2 = new TH1F("h_ljet_0_matched_p4_Mt2","", bins, min, max);
		h_ljet_0_matched_p4_Mt2_CONTROL = new TH1F("h_ljet_0_matched_p4_Mt2_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Mt2_EXCEPT = new TH1F("h_ljet_0_matched_p4_Mt2_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Mt2_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Mt2_PRE = new TH1F("h_ljet_0_matched_p4_Mt2_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Mt2_BJET = new TH1F("h_ljet_0_matched_p4_Mt2_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Mt2_HIGH_E = new TH1F("h_ljet_0_matched_p4_Mt2_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Mt2_TRUTH = new TH1F("h_ljet_0_matched_p4_Mt2_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2);
		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2_CONTROL);
		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2_EXCEPT);
		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2_PRE);
		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2_BJET);
		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2_HIGH_E);
		hv_ljet_0_matched_p4_Mt2.push_back(h_ljet_0_matched_p4_Mt2_TRUTH);

		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2");
		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2_CONTROL");
		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2_EXCEPT");
		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2_PRE");
		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2_BJET");
		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2_HIGH_E");
		hv_ljet_0_matched_p4_Mt2_names.push_back("h_ljet_0_matched_p4_Mt2_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Mt
	void MC_Analysis::Book_ljet_0_matched_p4_Mt(int bins, double min, double max) {
		h_ljet_0_matched_p4_Mt = new TH1F("h_ljet_0_matched_p4_Mt","", bins, min, max);
		h_ljet_0_matched_p4_Mt_CONTROL = new TH1F("h_ljet_0_matched_p4_Mt_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Mt_EXCEPT = new TH1F("h_ljet_0_matched_p4_Mt_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Mt_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Mt_PRE = new TH1F("h_ljet_0_matched_p4_Mt_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Mt_BJET = new TH1F("h_ljet_0_matched_p4_Mt_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Mt_HIGH_E = new TH1F("h_ljet_0_matched_p4_Mt_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Mt_TRUTH = new TH1F("h_ljet_0_matched_p4_Mt_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt);
		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt_CONTROL);
		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt_EXCEPT);
		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt_PRE);
		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt_BJET);
		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt_HIGH_E);
		hv_ljet_0_matched_p4_Mt.push_back(h_ljet_0_matched_p4_Mt_TRUTH);

		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt");
		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt_CONTROL");
		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt_EXCEPT");
		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt_PRE");
		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt_BJET");
		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt_HIGH_E");
		hv_ljet_0_matched_p4_Mt_names.push_back("h_ljet_0_matched_p4_Mt_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Beta
	void MC_Analysis::Book_ljet_0_matched_p4_Beta(int bins, double min, double max) {
		h_ljet_0_matched_p4_Beta = new TH1F("h_ljet_0_matched_p4_Beta","", bins, min, max);
		h_ljet_0_matched_p4_Beta_CONTROL = new TH1F("h_ljet_0_matched_p4_Beta_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Beta_EXCEPT = new TH1F("h_ljet_0_matched_p4_Beta_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Beta_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Beta_PRE = new TH1F("h_ljet_0_matched_p4_Beta_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Beta_BJET = new TH1F("h_ljet_0_matched_p4_Beta_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Beta_HIGH_E = new TH1F("h_ljet_0_matched_p4_Beta_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Beta_TRUTH = new TH1F("h_ljet_0_matched_p4_Beta_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta);
		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta_CONTROL);
		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta_EXCEPT);
		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta_PRE);
		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta_BJET);
		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta_HIGH_E);
		hv_ljet_0_matched_p4_Beta.push_back(h_ljet_0_matched_p4_Beta_TRUTH);

		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta");
		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta_CONTROL");
		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta_EXCEPT");
		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta_PRE");
		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta_BJET");
		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta_HIGH_E");
		hv_ljet_0_matched_p4_Beta_names.push_back("h_ljet_0_matched_p4_Beta_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Gamma
	void MC_Analysis::Book_ljet_0_matched_p4_Gamma(int bins, double min, double max) {
		h_ljet_0_matched_p4_Gamma = new TH1F("h_ljet_0_matched_p4_Gamma","", bins, min, max);
		h_ljet_0_matched_p4_Gamma_CONTROL = new TH1F("h_ljet_0_matched_p4_Gamma_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Gamma_EXCEPT = new TH1F("h_ljet_0_matched_p4_Gamma_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Gamma_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Gamma_PRE = new TH1F("h_ljet_0_matched_p4_Gamma_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Gamma_BJET = new TH1F("h_ljet_0_matched_p4_Gamma_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Gamma_HIGH_E = new TH1F("h_ljet_0_matched_p4_Gamma_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Gamma_TRUTH = new TH1F("h_ljet_0_matched_p4_Gamma_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma);
		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma_CONTROL);
		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma_EXCEPT);
		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma_PRE);
		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma_BJET);
		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma_HIGH_E);
		hv_ljet_0_matched_p4_Gamma.push_back(h_ljet_0_matched_p4_Gamma_TRUTH);

		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma");
		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma_CONTROL");
		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma_EXCEPT");
		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma_PRE");
		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma_BJET");
		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma_HIGH_E");
		hv_ljet_0_matched_p4_Gamma_names.push_back("h_ljet_0_matched_p4_Gamma_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Plus
	void MC_Analysis::Book_ljet_0_matched_p4_Plus(int bins, double min, double max) {
		h_ljet_0_matched_p4_Plus = new TH1F("h_ljet_0_matched_p4_Plus","", bins, min, max);
		h_ljet_0_matched_p4_Plus_CONTROL = new TH1F("h_ljet_0_matched_p4_Plus_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Plus_EXCEPT = new TH1F("h_ljet_0_matched_p4_Plus_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Plus_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Plus_PRE = new TH1F("h_ljet_0_matched_p4_Plus_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Plus_BJET = new TH1F("h_ljet_0_matched_p4_Plus_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Plus_HIGH_E = new TH1F("h_ljet_0_matched_p4_Plus_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Plus_TRUTH = new TH1F("h_ljet_0_matched_p4_Plus_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus);
		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus_CONTROL);
		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus_EXCEPT);
		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus_PRE);
		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus_BJET);
		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus_HIGH_E);
		hv_ljet_0_matched_p4_Plus.push_back(h_ljet_0_matched_p4_Plus_TRUTH);

		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus");
		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus_CONTROL");
		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus_EXCEPT");
		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus_PRE");
		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus_BJET");
		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus_HIGH_E");
		hv_ljet_0_matched_p4_Plus_names.push_back("h_ljet_0_matched_p4_Plus_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Minus
	void MC_Analysis::Book_ljet_0_matched_p4_Minus(int bins, double min, double max) {
		h_ljet_0_matched_p4_Minus = new TH1F("h_ljet_0_matched_p4_Minus","", bins, min, max);
		h_ljet_0_matched_p4_Minus_CONTROL = new TH1F("h_ljet_0_matched_p4_Minus_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Minus_EXCEPT = new TH1F("h_ljet_0_matched_p4_Minus_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Minus_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Minus_PRE = new TH1F("h_ljet_0_matched_p4_Minus_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Minus_BJET = new TH1F("h_ljet_0_matched_p4_Minus_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Minus_HIGH_E = new TH1F("h_ljet_0_matched_p4_Minus_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Minus_TRUTH = new TH1F("h_ljet_0_matched_p4_Minus_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus);
		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus_CONTROL);
		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus_EXCEPT);
		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus_PRE);
		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus_BJET);
		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus_HIGH_E);
		hv_ljet_0_matched_p4_Minus.push_back(h_ljet_0_matched_p4_Minus_TRUTH);

		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus");
		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus_CONTROL");
		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus_EXCEPT");
		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus_PRE");
		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus_BJET");
		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus_HIGH_E");
		hv_ljet_0_matched_p4_Minus_names.push_back("h_ljet_0_matched_p4_Minus_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Rapidity
	void MC_Analysis::Book_ljet_0_matched_p4_Rapidity(int bins, double min, double max) {
		h_ljet_0_matched_p4_Rapidity = new TH1F("h_ljet_0_matched_p4_Rapidity","", bins, min, max);
		h_ljet_0_matched_p4_Rapidity_CONTROL = new TH1F("h_ljet_0_matched_p4_Rapidity_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Rapidity_EXCEPT = new TH1F("h_ljet_0_matched_p4_Rapidity_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Rapidity_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Rapidity_PRE = new TH1F("h_ljet_0_matched_p4_Rapidity_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Rapidity_BJET = new TH1F("h_ljet_0_matched_p4_Rapidity_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Rapidity_HIGH_E = new TH1F("h_ljet_0_matched_p4_Rapidity_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Rapidity_TRUTH = new TH1F("h_ljet_0_matched_p4_Rapidity_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity);
		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity_CONTROL);
		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity_EXCEPT);
		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity_PRE);
		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity_BJET);
		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity_HIGH_E);
		hv_ljet_0_matched_p4_Rapidity.push_back(h_ljet_0_matched_p4_Rapidity_TRUTH);

		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity");
		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity_CONTROL");
		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity_EXCEPT");
		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity_PRE");
		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity_BJET");
		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity_HIGH_E");
		hv_ljet_0_matched_p4_Rapidity_names.push_back("h_ljet_0_matched_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_Eta
	void MC_Analysis::Book_ljet_0_matched_p4_Eta(int bins, double min, double max) {
		h_ljet_0_matched_p4_Eta = new TH1F("h_ljet_0_matched_p4_Eta","", bins, min, max);
		h_ljet_0_matched_p4_Eta_CONTROL = new TH1F("h_ljet_0_matched_p4_Eta_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_Eta_EXCEPT = new TH1F("h_ljet_0_matched_p4_Eta_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_Eta_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_Eta_PRE = new TH1F("h_ljet_0_matched_p4_Eta_PRE","", bins, min, max);
		h_ljet_0_matched_p4_Eta_BJET = new TH1F("h_ljet_0_matched_p4_Eta_BJET","", bins, min, max);
		h_ljet_0_matched_p4_Eta_HIGH_E = new TH1F("h_ljet_0_matched_p4_Eta_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_Eta_TRUTH = new TH1F("h_ljet_0_matched_p4_Eta_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta);
		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta_CONTROL);
		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta_EXCEPT);
		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta_EXCEPT_FINE);
		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta_PRE);
		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta_BJET);
		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta_HIGH_E);
		hv_ljet_0_matched_p4_Eta.push_back(h_ljet_0_matched_p4_Eta_TRUTH);

		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta");
		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta_CONTROL");
		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta_EXCEPT");
		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta_EXCEPT_FINE");
		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta_PRE");
		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta_BJET");
		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta_HIGH_E");
		hv_ljet_0_matched_p4_Eta_names.push_back("h_ljet_0_matched_p4_Eta_TRUTH");

	}
	//Histogram booking function for ljet_0_matched_p4_PseudoRapidity
	void MC_Analysis::Book_ljet_0_matched_p4_PseudoRapidity(int bins, double min, double max) {
		h_ljet_0_matched_p4_PseudoRapidity = new TH1F("h_ljet_0_matched_p4_PseudoRapidity","", bins, min, max);
		h_ljet_0_matched_p4_PseudoRapidity_CONTROL = new TH1F("h_ljet_0_matched_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_ljet_0_matched_p4_PseudoRapidity_EXCEPT = new TH1F("h_ljet_0_matched_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_ljet_0_matched_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_ljet_0_matched_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_matched_p4_PseudoRapidity_PRE = new TH1F("h_ljet_0_matched_p4_PseudoRapidity_PRE","", bins, min, max);
		h_ljet_0_matched_p4_PseudoRapidity_BJET = new TH1F("h_ljet_0_matched_p4_PseudoRapidity_BJET","", bins, min, max);
		h_ljet_0_matched_p4_PseudoRapidity_HIGH_E = new TH1F("h_ljet_0_matched_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_ljet_0_matched_p4_PseudoRapidity_TRUTH = new TH1F("h_ljet_0_matched_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity);
		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity_CONTROL);
		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity_EXCEPT);
		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity_EXCEPT_FINE);
		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity_PRE);
		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity_BJET);
		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity_HIGH_E);
		hv_ljet_0_matched_p4_PseudoRapidity.push_back(h_ljet_0_matched_p4_PseudoRapidity_TRUTH);

		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity");
		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity_CONTROL");
		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity_EXCEPT");
		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity_EXCEPT_FINE");
		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity_PRE");
		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity_BJET");
		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity_HIGH_E");
		hv_ljet_0_matched_p4_PseudoRapidity_names.push_back("h_ljet_0_matched_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_0_matched_p4 ----- ///

//Histogram booking function for ljet_0_origin
void MC_Analysis::Book_ljet_0_origin(int bins, double min, double max) {
	h_ljet_0_origin = new TH1F("h_ljet_0_origin", "", bins, min, max);
	h_ljet_0_origin_CONTROL = new TH1F("h_ljet_0_origin_CONTROL", "", bins, min, max);
	h_ljet_0_origin_EXCEPT = new TH1F("h_ljet_0_origin_EXCEPT", "", bins, min, max);
	h_ljet_0_origin_EXCEPT_FINE = new TH1F("h_ljet_0_origin_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_origin_PRE = new TH1F("h_ljet_0_origin_PRE", "", bins, min, max);
	h_ljet_0_origin_BJET = new TH1F("h_ljet_0_origin_BJET", "", bins, min, max);
	h_ljet_0_origin_HIGH_E = new TH1F("h_ljet_0_origin_HIGH_E", "", bins, min, max);
	h_ljet_0_origin_TRUTH = new TH1F("h_ljet_0_origin_TRUTH", "", bins, min, max);

	hv_ljet_0_origin.push_back(h_ljet_0_origin);
	hv_ljet_0_origin.push_back(h_ljet_0_origin_CONTROL);
	hv_ljet_0_origin.push_back(h_ljet_0_origin_EXCEPT);
	hv_ljet_0_origin.push_back(h_ljet_0_origin_EXCEPT_FINE);
	hv_ljet_0_origin.push_back(h_ljet_0_origin_PRE);
	hv_ljet_0_origin.push_back(h_ljet_0_origin_BJET);
	hv_ljet_0_origin.push_back(h_ljet_0_origin_HIGH_E);
	hv_ljet_0_origin.push_back(h_ljet_0_origin_TRUTH);

	hv_ljet_0_origin_names.push_back("h_ljet_0_origin");
	hv_ljet_0_origin_names.push_back("h_ljet_0_origin_CONTROL");
	hv_ljet_0_origin_names.push_back("h_ljet_0_origin_EXCEPT");
	hv_ljet_0_origin_names.push_back("h_ljet_0_origin_EXCEPT_FINE");
	hv_ljet_0_origin_names.push_back("h_ljet_0_origin_PRE");
	hv_ljet_0_origin_names.push_back("h_ljet_0_origin_BJET");
	hv_ljet_0_origin_names.push_back("h_ljet_0_origin_HIGH_E");
	hv_ljet_0_origin_names.push_back("h_ljet_0_origin_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_0_p4 ----- //
	//Histogram booking function for ljet_0_p4_X
	void MC_Analysis::Book_ljet_0_p4_X(int bins, double min, double max) {
		h_ljet_0_p4_X = new TH1F("h_ljet_0_p4_X","", bins, min, max);
		h_ljet_0_p4_X_CONTROL = new TH1F("h_ljet_0_p4_X_CONTROL","", bins, min, max);
		h_ljet_0_p4_X_EXCEPT = new TH1F("h_ljet_0_p4_X_EXCEPT","", bins, min, max);
		h_ljet_0_p4_X_EXCEPT_FINE = new TH1F("h_ljet_0_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_X_PRE = new TH1F("h_ljet_0_p4_X_PRE","", bins, min, max);
		h_ljet_0_p4_X_BJET = new TH1F("h_ljet_0_p4_X_BJET","", bins, min, max);
		h_ljet_0_p4_X_HIGH_E = new TH1F("h_ljet_0_p4_X_HIGH_E","", bins, min, max);
		h_ljet_0_p4_X_TRUTH = new TH1F("h_ljet_0_p4_X_TRUTH","", bins, min, max);

		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X);
		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X_CONTROL);
		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X_EXCEPT);
		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X_EXCEPT_FINE);
		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X_PRE);
		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X_BJET);
		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X_HIGH_E);
		hv_ljet_0_p4_X.push_back(h_ljet_0_p4_X_TRUTH);

		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X");
		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X_CONTROL");
		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X_EXCEPT");
		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X_EXCEPT_FINE");
		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X_PRE");
		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X_BJET");
		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X_HIGH_E");
		hv_ljet_0_p4_X_names.push_back("h_ljet_0_p4_X_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Y
	void MC_Analysis::Book_ljet_0_p4_Y(int bins, double min, double max) {
		h_ljet_0_p4_Y = new TH1F("h_ljet_0_p4_Y","", bins, min, max);
		h_ljet_0_p4_Y_CONTROL = new TH1F("h_ljet_0_p4_Y_CONTROL","", bins, min, max);
		h_ljet_0_p4_Y_EXCEPT = new TH1F("h_ljet_0_p4_Y_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Y_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Y_PRE = new TH1F("h_ljet_0_p4_Y_PRE","", bins, min, max);
		h_ljet_0_p4_Y_BJET = new TH1F("h_ljet_0_p4_Y_BJET","", bins, min, max);
		h_ljet_0_p4_Y_HIGH_E = new TH1F("h_ljet_0_p4_Y_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Y_TRUTH = new TH1F("h_ljet_0_p4_Y_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y);
		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y_CONTROL);
		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y_EXCEPT);
		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y_EXCEPT_FINE);
		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y_PRE);
		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y_BJET);
		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y_HIGH_E);
		hv_ljet_0_p4_Y.push_back(h_ljet_0_p4_Y_TRUTH);

		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y");
		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y_CONTROL");
		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y_EXCEPT");
		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y_EXCEPT_FINE");
		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y_PRE");
		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y_BJET");
		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y_HIGH_E");
		hv_ljet_0_p4_Y_names.push_back("h_ljet_0_p4_Y_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Z
	void MC_Analysis::Book_ljet_0_p4_Z(int bins, double min, double max) {
		h_ljet_0_p4_Z = new TH1F("h_ljet_0_p4_Z","", bins, min, max);
		h_ljet_0_p4_Z_CONTROL = new TH1F("h_ljet_0_p4_Z_CONTROL","", bins, min, max);
		h_ljet_0_p4_Z_EXCEPT = new TH1F("h_ljet_0_p4_Z_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Z_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Z_PRE = new TH1F("h_ljet_0_p4_Z_PRE","", bins, min, max);
		h_ljet_0_p4_Z_BJET = new TH1F("h_ljet_0_p4_Z_BJET","", bins, min, max);
		h_ljet_0_p4_Z_HIGH_E = new TH1F("h_ljet_0_p4_Z_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Z_TRUTH = new TH1F("h_ljet_0_p4_Z_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z);
		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z_CONTROL);
		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z_EXCEPT);
		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z_EXCEPT_FINE);
		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z_PRE);
		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z_BJET);
		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z_HIGH_E);
		hv_ljet_0_p4_Z.push_back(h_ljet_0_p4_Z_TRUTH);

		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z");
		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z_CONTROL");
		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z_EXCEPT");
		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z_EXCEPT_FINE");
		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z_PRE");
		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z_BJET");
		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z_HIGH_E");
		hv_ljet_0_p4_Z_names.push_back("h_ljet_0_p4_Z_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_T
	void MC_Analysis::Book_ljet_0_p4_T(int bins, double min, double max) {
		h_ljet_0_p4_T = new TH1F("h_ljet_0_p4_T","", bins, min, max);
		h_ljet_0_p4_T_CONTROL = new TH1F("h_ljet_0_p4_T_CONTROL","", bins, min, max);
		h_ljet_0_p4_T_EXCEPT = new TH1F("h_ljet_0_p4_T_EXCEPT","", bins, min, max);
		h_ljet_0_p4_T_EXCEPT_FINE = new TH1F("h_ljet_0_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_T_PRE = new TH1F("h_ljet_0_p4_T_PRE","", bins, min, max);
		h_ljet_0_p4_T_BJET = new TH1F("h_ljet_0_p4_T_BJET","", bins, min, max);
		h_ljet_0_p4_T_HIGH_E = new TH1F("h_ljet_0_p4_T_HIGH_E","", bins, min, max);
		h_ljet_0_p4_T_TRUTH = new TH1F("h_ljet_0_p4_T_TRUTH","", bins, min, max);

		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T);
		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T_CONTROL);
		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T_EXCEPT);
		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T_EXCEPT_FINE);
		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T_PRE);
		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T_BJET);
		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T_HIGH_E);
		hv_ljet_0_p4_T.push_back(h_ljet_0_p4_T_TRUTH);

		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T");
		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T_CONTROL");
		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T_EXCEPT");
		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T_EXCEPT_FINE");
		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T_PRE");
		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T_BJET");
		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T_HIGH_E");
		hv_ljet_0_p4_T_names.push_back("h_ljet_0_p4_T_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Px
	void MC_Analysis::Book_ljet_0_p4_Px(int bins, double min, double max) {
		h_ljet_0_p4_Px = new TH1F("h_ljet_0_p4_Px","", bins, min, max);
		h_ljet_0_p4_Px_CONTROL = new TH1F("h_ljet_0_p4_Px_CONTROL","", bins, min, max);
		h_ljet_0_p4_Px_EXCEPT = new TH1F("h_ljet_0_p4_Px_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Px_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Px_PRE = new TH1F("h_ljet_0_p4_Px_PRE","", bins, min, max);
		h_ljet_0_p4_Px_BJET = new TH1F("h_ljet_0_p4_Px_BJET","", bins, min, max);
		h_ljet_0_p4_Px_HIGH_E = new TH1F("h_ljet_0_p4_Px_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Px_TRUTH = new TH1F("h_ljet_0_p4_Px_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px);
		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px_CONTROL);
		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px_EXCEPT);
		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px_EXCEPT_FINE);
		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px_PRE);
		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px_BJET);
		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px_HIGH_E);
		hv_ljet_0_p4_Px.push_back(h_ljet_0_p4_Px_TRUTH);

		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px");
		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px_CONTROL");
		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px_EXCEPT");
		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px_EXCEPT_FINE");
		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px_PRE");
		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px_BJET");
		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px_HIGH_E");
		hv_ljet_0_p4_Px_names.push_back("h_ljet_0_p4_Px_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Py
	void MC_Analysis::Book_ljet_0_p4_Py(int bins, double min, double max) {
		h_ljet_0_p4_Py = new TH1F("h_ljet_0_p4_Py","", bins, min, max);
		h_ljet_0_p4_Py_CONTROL = new TH1F("h_ljet_0_p4_Py_CONTROL","", bins, min, max);
		h_ljet_0_p4_Py_EXCEPT = new TH1F("h_ljet_0_p4_Py_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Py_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Py_PRE = new TH1F("h_ljet_0_p4_Py_PRE","", bins, min, max);
		h_ljet_0_p4_Py_BJET = new TH1F("h_ljet_0_p4_Py_BJET","", bins, min, max);
		h_ljet_0_p4_Py_HIGH_E = new TH1F("h_ljet_0_p4_Py_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Py_TRUTH = new TH1F("h_ljet_0_p4_Py_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py);
		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py_CONTROL);
		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py_EXCEPT);
		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py_EXCEPT_FINE);
		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py_PRE);
		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py_BJET);
		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py_HIGH_E);
		hv_ljet_0_p4_Py.push_back(h_ljet_0_p4_Py_TRUTH);

		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py");
		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py_CONTROL");
		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py_EXCEPT");
		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py_EXCEPT_FINE");
		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py_PRE");
		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py_BJET");
		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py_HIGH_E");
		hv_ljet_0_p4_Py_names.push_back("h_ljet_0_p4_Py_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Pz
	void MC_Analysis::Book_ljet_0_p4_Pz(int bins, double min, double max) {
		h_ljet_0_p4_Pz = new TH1F("h_ljet_0_p4_Pz","", bins, min, max);
		h_ljet_0_p4_Pz_CONTROL = new TH1F("h_ljet_0_p4_Pz_CONTROL","", bins, min, max);
		h_ljet_0_p4_Pz_EXCEPT = new TH1F("h_ljet_0_p4_Pz_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Pz_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Pz_PRE = new TH1F("h_ljet_0_p4_Pz_PRE","", bins, min, max);
		h_ljet_0_p4_Pz_BJET = new TH1F("h_ljet_0_p4_Pz_BJET","", bins, min, max);
		h_ljet_0_p4_Pz_HIGH_E = new TH1F("h_ljet_0_p4_Pz_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Pz_TRUTH = new TH1F("h_ljet_0_p4_Pz_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz);
		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz_CONTROL);
		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz_EXCEPT);
		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz_EXCEPT_FINE);
		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz_PRE);
		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz_BJET);
		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz_HIGH_E);
		hv_ljet_0_p4_Pz.push_back(h_ljet_0_p4_Pz_TRUTH);

		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz");
		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz_CONTROL");
		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz_EXCEPT");
		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz_EXCEPT_FINE");
		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz_PRE");
		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz_BJET");
		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz_HIGH_E");
		hv_ljet_0_p4_Pz_names.push_back("h_ljet_0_p4_Pz_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Energy
	void MC_Analysis::Book_ljet_0_p4_Energy(int bins, double min, double max) {
		h_ljet_0_p4_Energy = new TH1F("h_ljet_0_p4_Energy","", bins, min, max);
		h_ljet_0_p4_Energy_CONTROL = new TH1F("h_ljet_0_p4_Energy_CONTROL","", bins, min, max);
		h_ljet_0_p4_Energy_EXCEPT = new TH1F("h_ljet_0_p4_Energy_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Energy_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Energy_PRE = new TH1F("h_ljet_0_p4_Energy_PRE","", bins, min, max);
		h_ljet_0_p4_Energy_BJET = new TH1F("h_ljet_0_p4_Energy_BJET","", bins, min, max);
		h_ljet_0_p4_Energy_HIGH_E = new TH1F("h_ljet_0_p4_Energy_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Energy_TRUTH = new TH1F("h_ljet_0_p4_Energy_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy);
		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy_CONTROL);
		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy_EXCEPT);
		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy_EXCEPT_FINE);
		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy_PRE);
		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy_BJET);
		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy_HIGH_E);
		hv_ljet_0_p4_Energy.push_back(h_ljet_0_p4_Energy_TRUTH);

		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy");
		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy_CONTROL");
		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy_EXCEPT");
		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy_EXCEPT_FINE");
		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy_PRE");
		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy_BJET");
		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy_HIGH_E");
		hv_ljet_0_p4_Energy_names.push_back("h_ljet_0_p4_Energy_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Theta
	void MC_Analysis::Book_ljet_0_p4_Theta(int bins, double min, double max) {
		h_ljet_0_p4_Theta = new TH1F("h_ljet_0_p4_Theta","", bins, min, max);
		h_ljet_0_p4_Theta_CONTROL = new TH1F("h_ljet_0_p4_Theta_CONTROL","", bins, min, max);
		h_ljet_0_p4_Theta_EXCEPT = new TH1F("h_ljet_0_p4_Theta_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Theta_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Theta_PRE = new TH1F("h_ljet_0_p4_Theta_PRE","", bins, min, max);
		h_ljet_0_p4_Theta_BJET = new TH1F("h_ljet_0_p4_Theta_BJET","", bins, min, max);
		h_ljet_0_p4_Theta_HIGH_E = new TH1F("h_ljet_0_p4_Theta_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Theta_TRUTH = new TH1F("h_ljet_0_p4_Theta_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta);
		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta_CONTROL);
		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta_EXCEPT);
		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta_EXCEPT_FINE);
		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta_PRE);
		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta_BJET);
		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta_HIGH_E);
		hv_ljet_0_p4_Theta.push_back(h_ljet_0_p4_Theta_TRUTH);

		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta");
		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta_CONTROL");
		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta_EXCEPT");
		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta_EXCEPT_FINE");
		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta_PRE");
		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta_BJET");
		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta_HIGH_E");
		hv_ljet_0_p4_Theta_names.push_back("h_ljet_0_p4_Theta_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_CosTheta
	void MC_Analysis::Book_ljet_0_p4_CosTheta(int bins, double min, double max) {
		h_ljet_0_p4_CosTheta = new TH1F("h_ljet_0_p4_CosTheta","", bins, min, max);
		h_ljet_0_p4_CosTheta_CONTROL = new TH1F("h_ljet_0_p4_CosTheta_CONTROL","", bins, min, max);
		h_ljet_0_p4_CosTheta_EXCEPT = new TH1F("h_ljet_0_p4_CosTheta_EXCEPT","", bins, min, max);
		h_ljet_0_p4_CosTheta_EXCEPT_FINE = new TH1F("h_ljet_0_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_CosTheta_PRE = new TH1F("h_ljet_0_p4_CosTheta_PRE","", bins, min, max);
		h_ljet_0_p4_CosTheta_BJET = new TH1F("h_ljet_0_p4_CosTheta_BJET","", bins, min, max);
		h_ljet_0_p4_CosTheta_HIGH_E = new TH1F("h_ljet_0_p4_CosTheta_HIGH_E","", bins, min, max);
		h_ljet_0_p4_CosTheta_TRUTH = new TH1F("h_ljet_0_p4_CosTheta_TRUTH","", bins, min, max);

		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta);
		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta_CONTROL);
		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta_EXCEPT);
		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta_EXCEPT_FINE);
		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta_PRE);
		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta_BJET);
		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta_HIGH_E);
		hv_ljet_0_p4_CosTheta.push_back(h_ljet_0_p4_CosTheta_TRUTH);

		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta");
		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta_CONTROL");
		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta_EXCEPT");
		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta_EXCEPT_FINE");
		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta_PRE");
		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta_BJET");
		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta_HIGH_E");
		hv_ljet_0_p4_CosTheta_names.push_back("h_ljet_0_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Phi
	void MC_Analysis::Book_ljet_0_p4_Phi(int bins, double min, double max) {
		h_ljet_0_p4_Phi = new TH1F("h_ljet_0_p4_Phi","", bins, min, max);
		h_ljet_0_p4_Phi_CONTROL = new TH1F("h_ljet_0_p4_Phi_CONTROL","", bins, min, max);
		h_ljet_0_p4_Phi_EXCEPT = new TH1F("h_ljet_0_p4_Phi_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Phi_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Phi_PRE = new TH1F("h_ljet_0_p4_Phi_PRE","", bins, min, max);
		h_ljet_0_p4_Phi_BJET = new TH1F("h_ljet_0_p4_Phi_BJET","", bins, min, max);
		h_ljet_0_p4_Phi_HIGH_E = new TH1F("h_ljet_0_p4_Phi_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Phi_TRUTH = new TH1F("h_ljet_0_p4_Phi_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi);
		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi_CONTROL);
		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi_EXCEPT);
		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi_EXCEPT_FINE);
		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi_PRE);
		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi_BJET);
		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi_HIGH_E);
		hv_ljet_0_p4_Phi.push_back(h_ljet_0_p4_Phi_TRUTH);

		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi");
		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi_CONTROL");
		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi_EXCEPT");
		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi_EXCEPT_FINE");
		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi_PRE");
		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi_BJET");
		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi_HIGH_E");
		hv_ljet_0_p4_Phi_names.push_back("h_ljet_0_p4_Phi_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Rho
	void MC_Analysis::Book_ljet_0_p4_Rho(int bins, double min, double max) {
		h_ljet_0_p4_Rho = new TH1F("h_ljet_0_p4_Rho","", bins, min, max);
		h_ljet_0_p4_Rho_CONTROL = new TH1F("h_ljet_0_p4_Rho_CONTROL","", bins, min, max);
		h_ljet_0_p4_Rho_EXCEPT = new TH1F("h_ljet_0_p4_Rho_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Rho_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Rho_PRE = new TH1F("h_ljet_0_p4_Rho_PRE","", bins, min, max);
		h_ljet_0_p4_Rho_BJET = new TH1F("h_ljet_0_p4_Rho_BJET","", bins, min, max);
		h_ljet_0_p4_Rho_HIGH_E = new TH1F("h_ljet_0_p4_Rho_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Rho_TRUTH = new TH1F("h_ljet_0_p4_Rho_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho);
		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho_CONTROL);
		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho_EXCEPT);
		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho_EXCEPT_FINE);
		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho_PRE);
		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho_BJET);
		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho_HIGH_E);
		hv_ljet_0_p4_Rho.push_back(h_ljet_0_p4_Rho_TRUTH);

		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho");
		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho_CONTROL");
		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho_EXCEPT");
		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho_EXCEPT_FINE");
		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho_PRE");
		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho_BJET");
		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho_HIGH_E");
		hv_ljet_0_p4_Rho_names.push_back("h_ljet_0_p4_Rho_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Perp2
	void MC_Analysis::Book_ljet_0_p4_Perp2(int bins, double min, double max) {
		h_ljet_0_p4_Perp2 = new TH1F("h_ljet_0_p4_Perp2","", bins, min, max);
		h_ljet_0_p4_Perp2_CONTROL = new TH1F("h_ljet_0_p4_Perp2_CONTROL","", bins, min, max);
		h_ljet_0_p4_Perp2_EXCEPT = new TH1F("h_ljet_0_p4_Perp2_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Perp2_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Perp2_PRE = new TH1F("h_ljet_0_p4_Perp2_PRE","", bins, min, max);
		h_ljet_0_p4_Perp2_BJET = new TH1F("h_ljet_0_p4_Perp2_BJET","", bins, min, max);
		h_ljet_0_p4_Perp2_HIGH_E = new TH1F("h_ljet_0_p4_Perp2_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Perp2_TRUTH = new TH1F("h_ljet_0_p4_Perp2_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2);
		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2_CONTROL);
		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2_EXCEPT);
		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2_EXCEPT_FINE);
		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2_PRE);
		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2_BJET);
		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2_HIGH_E);
		hv_ljet_0_p4_Perp2.push_back(h_ljet_0_p4_Perp2_TRUTH);

		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2");
		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2_CONTROL");
		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2_EXCEPT");
		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2_EXCEPT_FINE");
		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2_PRE");
		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2_BJET");
		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2_HIGH_E");
		hv_ljet_0_p4_Perp2_names.push_back("h_ljet_0_p4_Perp2_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Pt
	void MC_Analysis::Book_ljet_0_p4_Pt(int bins, double min, double max) {
		h_ljet_0_p4_Pt = new TH1F("h_ljet_0_p4_Pt","", bins, min, max);
		h_ljet_0_p4_Pt_CONTROL = new TH1F("h_ljet_0_p4_Pt_CONTROL","", bins, min, max);
		h_ljet_0_p4_Pt_EXCEPT = new TH1F("h_ljet_0_p4_Pt_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Pt_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Pt_PRE = new TH1F("h_ljet_0_p4_Pt_PRE","", bins, min, max);
		h_ljet_0_p4_Pt_BJET = new TH1F("h_ljet_0_p4_Pt_BJET","", bins, min, max);
		h_ljet_0_p4_Pt_HIGH_E = new TH1F("h_ljet_0_p4_Pt_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Pt_TRUTH = new TH1F("h_ljet_0_p4_Pt_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt);
		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt_CONTROL);
		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt_EXCEPT);
		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt_EXCEPT_FINE);
		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt_PRE);
		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt_BJET);
		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt_HIGH_E);
		hv_ljet_0_p4_Pt.push_back(h_ljet_0_p4_Pt_TRUTH);

		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt");
		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt_CONTROL");
		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt_EXCEPT");
		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt_EXCEPT_FINE");
		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt_PRE");
		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt_BJET");
		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt_HIGH_E");
		hv_ljet_0_p4_Pt_names.push_back("h_ljet_0_p4_Pt_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Perp
	void MC_Analysis::Book_ljet_0_p4_Perp(int bins, double min, double max) {
		h_ljet_0_p4_Perp = new TH1F("h_ljet_0_p4_Perp","", bins, min, max);
		h_ljet_0_p4_Perp_CONTROL = new TH1F("h_ljet_0_p4_Perp_CONTROL","", bins, min, max);
		h_ljet_0_p4_Perp_EXCEPT = new TH1F("h_ljet_0_p4_Perp_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Perp_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Perp_PRE = new TH1F("h_ljet_0_p4_Perp_PRE","", bins, min, max);
		h_ljet_0_p4_Perp_BJET = new TH1F("h_ljet_0_p4_Perp_BJET","", bins, min, max);
		h_ljet_0_p4_Perp_HIGH_E = new TH1F("h_ljet_0_p4_Perp_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Perp_TRUTH = new TH1F("h_ljet_0_p4_Perp_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp);
		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp_CONTROL);
		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp_EXCEPT);
		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp_EXCEPT_FINE);
		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp_PRE);
		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp_BJET);
		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp_HIGH_E);
		hv_ljet_0_p4_Perp.push_back(h_ljet_0_p4_Perp_TRUTH);

		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp");
		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp_CONTROL");
		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp_EXCEPT");
		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp_EXCEPT_FINE");
		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp_PRE");
		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp_BJET");
		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp_HIGH_E");
		hv_ljet_0_p4_Perp_names.push_back("h_ljet_0_p4_Perp_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Et2
	void MC_Analysis::Book_ljet_0_p4_Et2(int bins, double min, double max) {
		h_ljet_0_p4_Et2 = new TH1F("h_ljet_0_p4_Et2","", bins, min, max);
		h_ljet_0_p4_Et2_CONTROL = new TH1F("h_ljet_0_p4_Et2_CONTROL","", bins, min, max);
		h_ljet_0_p4_Et2_EXCEPT = new TH1F("h_ljet_0_p4_Et2_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Et2_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Et2_PRE = new TH1F("h_ljet_0_p4_Et2_PRE","", bins, min, max);
		h_ljet_0_p4_Et2_BJET = new TH1F("h_ljet_0_p4_Et2_BJET","", bins, min, max);
		h_ljet_0_p4_Et2_HIGH_E = new TH1F("h_ljet_0_p4_Et2_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Et2_TRUTH = new TH1F("h_ljet_0_p4_Et2_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2);
		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2_CONTROL);
		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2_EXCEPT);
		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2_EXCEPT_FINE);
		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2_PRE);
		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2_BJET);
		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2_HIGH_E);
		hv_ljet_0_p4_Et2.push_back(h_ljet_0_p4_Et2_TRUTH);

		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2");
		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2_CONTROL");
		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2_EXCEPT");
		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2_EXCEPT_FINE");
		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2_PRE");
		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2_BJET");
		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2_HIGH_E");
		hv_ljet_0_p4_Et2_names.push_back("h_ljet_0_p4_Et2_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Et
	void MC_Analysis::Book_ljet_0_p4_Et(int bins, double min, double max) {
		h_ljet_0_p4_Et = new TH1F("h_ljet_0_p4_Et","", bins, min, max);
		h_ljet_0_p4_Et_CONTROL = new TH1F("h_ljet_0_p4_Et_CONTROL","", bins, min, max);
		h_ljet_0_p4_Et_EXCEPT = new TH1F("h_ljet_0_p4_Et_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Et_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Et_PRE = new TH1F("h_ljet_0_p4_Et_PRE","", bins, min, max);
		h_ljet_0_p4_Et_BJET = new TH1F("h_ljet_0_p4_Et_BJET","", bins, min, max);
		h_ljet_0_p4_Et_HIGH_E = new TH1F("h_ljet_0_p4_Et_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Et_TRUTH = new TH1F("h_ljet_0_p4_Et_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et);
		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et_CONTROL);
		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et_EXCEPT);
		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et_EXCEPT_FINE);
		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et_PRE);
		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et_BJET);
		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et_HIGH_E);
		hv_ljet_0_p4_Et.push_back(h_ljet_0_p4_Et_TRUTH);

		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et");
		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et_CONTROL");
		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et_EXCEPT");
		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et_EXCEPT_FINE");
		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et_PRE");
		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et_BJET");
		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et_HIGH_E");
		hv_ljet_0_p4_Et_names.push_back("h_ljet_0_p4_Et_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Mag2
	void MC_Analysis::Book_ljet_0_p4_Mag2(int bins, double min, double max) {
		h_ljet_0_p4_Mag2 = new TH1F("h_ljet_0_p4_Mag2","", bins, min, max);
		h_ljet_0_p4_Mag2_CONTROL = new TH1F("h_ljet_0_p4_Mag2_CONTROL","", bins, min, max);
		h_ljet_0_p4_Mag2_EXCEPT = new TH1F("h_ljet_0_p4_Mag2_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Mag2_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Mag2_PRE = new TH1F("h_ljet_0_p4_Mag2_PRE","", bins, min, max);
		h_ljet_0_p4_Mag2_BJET = new TH1F("h_ljet_0_p4_Mag2_BJET","", bins, min, max);
		h_ljet_0_p4_Mag2_HIGH_E = new TH1F("h_ljet_0_p4_Mag2_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Mag2_TRUTH = new TH1F("h_ljet_0_p4_Mag2_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2);
		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2_CONTROL);
		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2_EXCEPT);
		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2_EXCEPT_FINE);
		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2_PRE);
		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2_BJET);
		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2_HIGH_E);
		hv_ljet_0_p4_Mag2.push_back(h_ljet_0_p4_Mag2_TRUTH);

		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2");
		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2_CONTROL");
		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2_EXCEPT");
		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2_EXCEPT_FINE");
		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2_PRE");
		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2_BJET");
		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2_HIGH_E");
		hv_ljet_0_p4_Mag2_names.push_back("h_ljet_0_p4_Mag2_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_M2
	void MC_Analysis::Book_ljet_0_p4_M2(int bins, double min, double max) {
		h_ljet_0_p4_M2 = new TH1F("h_ljet_0_p4_M2","", bins, min, max);
		h_ljet_0_p4_M2_CONTROL = new TH1F("h_ljet_0_p4_M2_CONTROL","", bins, min, max);
		h_ljet_0_p4_M2_EXCEPT = new TH1F("h_ljet_0_p4_M2_EXCEPT","", bins, min, max);
		h_ljet_0_p4_M2_EXCEPT_FINE = new TH1F("h_ljet_0_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_M2_PRE = new TH1F("h_ljet_0_p4_M2_PRE","", bins, min, max);
		h_ljet_0_p4_M2_BJET = new TH1F("h_ljet_0_p4_M2_BJET","", bins, min, max);
		h_ljet_0_p4_M2_HIGH_E = new TH1F("h_ljet_0_p4_M2_HIGH_E","", bins, min, max);
		h_ljet_0_p4_M2_TRUTH = new TH1F("h_ljet_0_p4_M2_TRUTH","", bins, min, max);

		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2);
		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2_CONTROL);
		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2_EXCEPT);
		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2_EXCEPT_FINE);
		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2_PRE);
		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2_BJET);
		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2_HIGH_E);
		hv_ljet_0_p4_M2.push_back(h_ljet_0_p4_M2_TRUTH);

		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2");
		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2_CONTROL");
		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2_EXCEPT");
		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2_EXCEPT_FINE");
		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2_PRE");
		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2_BJET");
		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2_HIGH_E");
		hv_ljet_0_p4_M2_names.push_back("h_ljet_0_p4_M2_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Mag
	void MC_Analysis::Book_ljet_0_p4_Mag(int bins, double min, double max) {
		h_ljet_0_p4_Mag = new TH1F("h_ljet_0_p4_Mag","", bins, min, max);
		h_ljet_0_p4_Mag_CONTROL = new TH1F("h_ljet_0_p4_Mag_CONTROL","", bins, min, max);
		h_ljet_0_p4_Mag_EXCEPT = new TH1F("h_ljet_0_p4_Mag_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Mag_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Mag_PRE = new TH1F("h_ljet_0_p4_Mag_PRE","", bins, min, max);
		h_ljet_0_p4_Mag_BJET = new TH1F("h_ljet_0_p4_Mag_BJET","", bins, min, max);
		h_ljet_0_p4_Mag_HIGH_E = new TH1F("h_ljet_0_p4_Mag_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Mag_TRUTH = new TH1F("h_ljet_0_p4_Mag_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag);
		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag_CONTROL);
		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag_EXCEPT);
		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag_EXCEPT_FINE);
		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag_PRE);
		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag_BJET);
		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag_HIGH_E);
		hv_ljet_0_p4_Mag.push_back(h_ljet_0_p4_Mag_TRUTH);

		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag");
		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag_CONTROL");
		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag_EXCEPT");
		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag_EXCEPT_FINE");
		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag_PRE");
		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag_BJET");
		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag_HIGH_E");
		hv_ljet_0_p4_Mag_names.push_back("h_ljet_0_p4_Mag_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_M
	void MC_Analysis::Book_ljet_0_p4_M(int bins, double min, double max) {
		h_ljet_0_p4_M = new TH1F("h_ljet_0_p4_M","", bins, min, max);
		h_ljet_0_p4_M_CONTROL = new TH1F("h_ljet_0_p4_M_CONTROL","", bins, min, max);
		h_ljet_0_p4_M_EXCEPT = new TH1F("h_ljet_0_p4_M_EXCEPT","", bins, min, max);
		h_ljet_0_p4_M_EXCEPT_FINE = new TH1F("h_ljet_0_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_M_PRE = new TH1F("h_ljet_0_p4_M_PRE","", bins, min, max);
		h_ljet_0_p4_M_BJET = new TH1F("h_ljet_0_p4_M_BJET","", bins, min, max);
		h_ljet_0_p4_M_HIGH_E = new TH1F("h_ljet_0_p4_M_HIGH_E","", bins, min, max);
		h_ljet_0_p4_M_TRUTH = new TH1F("h_ljet_0_p4_M_TRUTH","", bins, min, max);

		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M);
		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M_CONTROL);
		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M_EXCEPT);
		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M_EXCEPT_FINE);
		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M_PRE);
		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M_BJET);
		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M_HIGH_E);
		hv_ljet_0_p4_M.push_back(h_ljet_0_p4_M_TRUTH);

		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M");
		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M_CONTROL");
		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M_EXCEPT");
		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M_EXCEPT_FINE");
		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M_PRE");
		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M_BJET");
		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M_HIGH_E");
		hv_ljet_0_p4_M_names.push_back("h_ljet_0_p4_M_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Mt2
	void MC_Analysis::Book_ljet_0_p4_Mt2(int bins, double min, double max) {
		h_ljet_0_p4_Mt2 = new TH1F("h_ljet_0_p4_Mt2","", bins, min, max);
		h_ljet_0_p4_Mt2_CONTROL = new TH1F("h_ljet_0_p4_Mt2_CONTROL","", bins, min, max);
		h_ljet_0_p4_Mt2_EXCEPT = new TH1F("h_ljet_0_p4_Mt2_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Mt2_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Mt2_PRE = new TH1F("h_ljet_0_p4_Mt2_PRE","", bins, min, max);
		h_ljet_0_p4_Mt2_BJET = new TH1F("h_ljet_0_p4_Mt2_BJET","", bins, min, max);
		h_ljet_0_p4_Mt2_HIGH_E = new TH1F("h_ljet_0_p4_Mt2_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Mt2_TRUTH = new TH1F("h_ljet_0_p4_Mt2_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2);
		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2_CONTROL);
		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2_EXCEPT);
		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2_EXCEPT_FINE);
		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2_PRE);
		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2_BJET);
		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2_HIGH_E);
		hv_ljet_0_p4_Mt2.push_back(h_ljet_0_p4_Mt2_TRUTH);

		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2");
		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2_CONTROL");
		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2_EXCEPT");
		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2_EXCEPT_FINE");
		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2_PRE");
		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2_BJET");
		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2_HIGH_E");
		hv_ljet_0_p4_Mt2_names.push_back("h_ljet_0_p4_Mt2_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Mt
	void MC_Analysis::Book_ljet_0_p4_Mt(int bins, double min, double max) {
		h_ljet_0_p4_Mt = new TH1F("h_ljet_0_p4_Mt","", bins, min, max);
		h_ljet_0_p4_Mt_CONTROL = new TH1F("h_ljet_0_p4_Mt_CONTROL","", bins, min, max);
		h_ljet_0_p4_Mt_EXCEPT = new TH1F("h_ljet_0_p4_Mt_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Mt_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Mt_PRE = new TH1F("h_ljet_0_p4_Mt_PRE","", bins, min, max);
		h_ljet_0_p4_Mt_BJET = new TH1F("h_ljet_0_p4_Mt_BJET","", bins, min, max);
		h_ljet_0_p4_Mt_HIGH_E = new TH1F("h_ljet_0_p4_Mt_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Mt_TRUTH = new TH1F("h_ljet_0_p4_Mt_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt);
		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt_CONTROL);
		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt_EXCEPT);
		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt_EXCEPT_FINE);
		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt_PRE);
		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt_BJET);
		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt_HIGH_E);
		hv_ljet_0_p4_Mt.push_back(h_ljet_0_p4_Mt_TRUTH);

		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt");
		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt_CONTROL");
		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt_EXCEPT");
		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt_EXCEPT_FINE");
		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt_PRE");
		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt_BJET");
		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt_HIGH_E");
		hv_ljet_0_p4_Mt_names.push_back("h_ljet_0_p4_Mt_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Beta
	void MC_Analysis::Book_ljet_0_p4_Beta(int bins, double min, double max) {
		h_ljet_0_p4_Beta = new TH1F("h_ljet_0_p4_Beta","", bins, min, max);
		h_ljet_0_p4_Beta_CONTROL = new TH1F("h_ljet_0_p4_Beta_CONTROL","", bins, min, max);
		h_ljet_0_p4_Beta_EXCEPT = new TH1F("h_ljet_0_p4_Beta_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Beta_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Beta_PRE = new TH1F("h_ljet_0_p4_Beta_PRE","", bins, min, max);
		h_ljet_0_p4_Beta_BJET = new TH1F("h_ljet_0_p4_Beta_BJET","", bins, min, max);
		h_ljet_0_p4_Beta_HIGH_E = new TH1F("h_ljet_0_p4_Beta_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Beta_TRUTH = new TH1F("h_ljet_0_p4_Beta_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta);
		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta_CONTROL);
		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta_EXCEPT);
		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta_EXCEPT_FINE);
		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta_PRE);
		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta_BJET);
		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta_HIGH_E);
		hv_ljet_0_p4_Beta.push_back(h_ljet_0_p4_Beta_TRUTH);

		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta");
		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta_CONTROL");
		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta_EXCEPT");
		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta_EXCEPT_FINE");
		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta_PRE");
		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta_BJET");
		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta_HIGH_E");
		hv_ljet_0_p4_Beta_names.push_back("h_ljet_0_p4_Beta_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Gamma
	void MC_Analysis::Book_ljet_0_p4_Gamma(int bins, double min, double max) {
		h_ljet_0_p4_Gamma = new TH1F("h_ljet_0_p4_Gamma","", bins, min, max);
		h_ljet_0_p4_Gamma_CONTROL = new TH1F("h_ljet_0_p4_Gamma_CONTROL","", bins, min, max);
		h_ljet_0_p4_Gamma_EXCEPT = new TH1F("h_ljet_0_p4_Gamma_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Gamma_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Gamma_PRE = new TH1F("h_ljet_0_p4_Gamma_PRE","", bins, min, max);
		h_ljet_0_p4_Gamma_BJET = new TH1F("h_ljet_0_p4_Gamma_BJET","", bins, min, max);
		h_ljet_0_p4_Gamma_HIGH_E = new TH1F("h_ljet_0_p4_Gamma_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Gamma_TRUTH = new TH1F("h_ljet_0_p4_Gamma_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma);
		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma_CONTROL);
		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma_EXCEPT);
		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma_EXCEPT_FINE);
		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma_PRE);
		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma_BJET);
		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma_HIGH_E);
		hv_ljet_0_p4_Gamma.push_back(h_ljet_0_p4_Gamma_TRUTH);

		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma");
		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma_CONTROL");
		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma_EXCEPT");
		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma_EXCEPT_FINE");
		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma_PRE");
		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma_BJET");
		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma_HIGH_E");
		hv_ljet_0_p4_Gamma_names.push_back("h_ljet_0_p4_Gamma_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Plus
	void MC_Analysis::Book_ljet_0_p4_Plus(int bins, double min, double max) {
		h_ljet_0_p4_Plus = new TH1F("h_ljet_0_p4_Plus","", bins, min, max);
		h_ljet_0_p4_Plus_CONTROL = new TH1F("h_ljet_0_p4_Plus_CONTROL","", bins, min, max);
		h_ljet_0_p4_Plus_EXCEPT = new TH1F("h_ljet_0_p4_Plus_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Plus_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Plus_PRE = new TH1F("h_ljet_0_p4_Plus_PRE","", bins, min, max);
		h_ljet_0_p4_Plus_BJET = new TH1F("h_ljet_0_p4_Plus_BJET","", bins, min, max);
		h_ljet_0_p4_Plus_HIGH_E = new TH1F("h_ljet_0_p4_Plus_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Plus_TRUTH = new TH1F("h_ljet_0_p4_Plus_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus);
		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus_CONTROL);
		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus_EXCEPT);
		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus_EXCEPT_FINE);
		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus_PRE);
		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus_BJET);
		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus_HIGH_E);
		hv_ljet_0_p4_Plus.push_back(h_ljet_0_p4_Plus_TRUTH);

		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus");
		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus_CONTROL");
		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus_EXCEPT");
		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus_EXCEPT_FINE");
		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus_PRE");
		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus_BJET");
		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus_HIGH_E");
		hv_ljet_0_p4_Plus_names.push_back("h_ljet_0_p4_Plus_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Minus
	void MC_Analysis::Book_ljet_0_p4_Minus(int bins, double min, double max) {
		h_ljet_0_p4_Minus = new TH1F("h_ljet_0_p4_Minus","", bins, min, max);
		h_ljet_0_p4_Minus_CONTROL = new TH1F("h_ljet_0_p4_Minus_CONTROL","", bins, min, max);
		h_ljet_0_p4_Minus_EXCEPT = new TH1F("h_ljet_0_p4_Minus_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Minus_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Minus_PRE = new TH1F("h_ljet_0_p4_Minus_PRE","", bins, min, max);
		h_ljet_0_p4_Minus_BJET = new TH1F("h_ljet_0_p4_Minus_BJET","", bins, min, max);
		h_ljet_0_p4_Minus_HIGH_E = new TH1F("h_ljet_0_p4_Minus_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Minus_TRUTH = new TH1F("h_ljet_0_p4_Minus_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus);
		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus_CONTROL);
		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus_EXCEPT);
		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus_EXCEPT_FINE);
		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus_PRE);
		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus_BJET);
		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus_HIGH_E);
		hv_ljet_0_p4_Minus.push_back(h_ljet_0_p4_Minus_TRUTH);

		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus");
		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus_CONTROL");
		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus_EXCEPT");
		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus_EXCEPT_FINE");
		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus_PRE");
		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus_BJET");
		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus_HIGH_E");
		hv_ljet_0_p4_Minus_names.push_back("h_ljet_0_p4_Minus_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Rapidity
	void MC_Analysis::Book_ljet_0_p4_Rapidity(int bins, double min, double max) {
		h_ljet_0_p4_Rapidity = new TH1F("h_ljet_0_p4_Rapidity","", bins, min, max);
		h_ljet_0_p4_Rapidity_CONTROL = new TH1F("h_ljet_0_p4_Rapidity_CONTROL","", bins, min, max);
		h_ljet_0_p4_Rapidity_EXCEPT = new TH1F("h_ljet_0_p4_Rapidity_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Rapidity_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Rapidity_PRE = new TH1F("h_ljet_0_p4_Rapidity_PRE","", bins, min, max);
		h_ljet_0_p4_Rapidity_BJET = new TH1F("h_ljet_0_p4_Rapidity_BJET","", bins, min, max);
		h_ljet_0_p4_Rapidity_HIGH_E = new TH1F("h_ljet_0_p4_Rapidity_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Rapidity_TRUTH = new TH1F("h_ljet_0_p4_Rapidity_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity);
		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity_CONTROL);
		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity_EXCEPT);
		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity_EXCEPT_FINE);
		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity_PRE);
		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity_BJET);
		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity_HIGH_E);
		hv_ljet_0_p4_Rapidity.push_back(h_ljet_0_p4_Rapidity_TRUTH);

		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity");
		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity_CONTROL");
		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity_EXCEPT");
		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity_EXCEPT_FINE");
		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity_PRE");
		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity_BJET");
		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity_HIGH_E");
		hv_ljet_0_p4_Rapidity_names.push_back("h_ljet_0_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_Eta
	void MC_Analysis::Book_ljet_0_p4_Eta(int bins, double min, double max) {
		h_ljet_0_p4_Eta = new TH1F("h_ljet_0_p4_Eta","", bins, min, max);
		h_ljet_0_p4_Eta_CONTROL = new TH1F("h_ljet_0_p4_Eta_CONTROL","", bins, min, max);
		h_ljet_0_p4_Eta_EXCEPT = new TH1F("h_ljet_0_p4_Eta_EXCEPT","", bins, min, max);
		h_ljet_0_p4_Eta_EXCEPT_FINE = new TH1F("h_ljet_0_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_Eta_PRE = new TH1F("h_ljet_0_p4_Eta_PRE","", bins, min, max);
		h_ljet_0_p4_Eta_BJET = new TH1F("h_ljet_0_p4_Eta_BJET","", bins, min, max);
		h_ljet_0_p4_Eta_HIGH_E = new TH1F("h_ljet_0_p4_Eta_HIGH_E","", bins, min, max);
		h_ljet_0_p4_Eta_TRUTH = new TH1F("h_ljet_0_p4_Eta_TRUTH","", bins, min, max);

		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta);
		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta_CONTROL);
		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta_EXCEPT);
		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta_EXCEPT_FINE);
		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta_PRE);
		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta_BJET);
		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta_HIGH_E);
		hv_ljet_0_p4_Eta.push_back(h_ljet_0_p4_Eta_TRUTH);

		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta");
		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta_CONTROL");
		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta_EXCEPT");
		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta_EXCEPT_FINE");
		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta_PRE");
		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta_BJET");
		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta_HIGH_E");
		hv_ljet_0_p4_Eta_names.push_back("h_ljet_0_p4_Eta_TRUTH");

	}
	//Histogram booking function for ljet_0_p4_PseudoRapidity
	void MC_Analysis::Book_ljet_0_p4_PseudoRapidity(int bins, double min, double max) {
		h_ljet_0_p4_PseudoRapidity = new TH1F("h_ljet_0_p4_PseudoRapidity","", bins, min, max);
		h_ljet_0_p4_PseudoRapidity_CONTROL = new TH1F("h_ljet_0_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_ljet_0_p4_PseudoRapidity_EXCEPT = new TH1F("h_ljet_0_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_ljet_0_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_ljet_0_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_0_p4_PseudoRapidity_PRE = new TH1F("h_ljet_0_p4_PseudoRapidity_PRE","", bins, min, max);
		h_ljet_0_p4_PseudoRapidity_BJET = new TH1F("h_ljet_0_p4_PseudoRapidity_BJET","", bins, min, max);
		h_ljet_0_p4_PseudoRapidity_HIGH_E = new TH1F("h_ljet_0_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_ljet_0_p4_PseudoRapidity_TRUTH = new TH1F("h_ljet_0_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity);
		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity_CONTROL);
		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity_EXCEPT);
		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity_EXCEPT_FINE);
		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity_PRE);
		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity_BJET);
		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity_HIGH_E);
		hv_ljet_0_p4_PseudoRapidity.push_back(h_ljet_0_p4_PseudoRapidity_TRUTH);

		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity");
		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity_CONTROL");
		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity_EXCEPT");
		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity_EXCEPT_FINE");
		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity_PRE");
		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity_BJET");
		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity_HIGH_E");
		hv_ljet_0_p4_PseudoRapidity_names.push_back("h_ljet_0_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_0_p4 ----- ///

//Histogram booking function for ljet_0_q
void MC_Analysis::Book_ljet_0_q(int bins, double min, double max) {
	h_ljet_0_q = new TH1F("h_ljet_0_q", "", bins, min, max);
	h_ljet_0_q_CONTROL = new TH1F("h_ljet_0_q_CONTROL", "", bins, min, max);
	h_ljet_0_q_EXCEPT = new TH1F("h_ljet_0_q_EXCEPT", "", bins, min, max);
	h_ljet_0_q_EXCEPT_FINE = new TH1F("h_ljet_0_q_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_q_PRE = new TH1F("h_ljet_0_q_PRE", "", bins, min, max);
	h_ljet_0_q_BJET = new TH1F("h_ljet_0_q_BJET", "", bins, min, max);
	h_ljet_0_q_HIGH_E = new TH1F("h_ljet_0_q_HIGH_E", "", bins, min, max);
	h_ljet_0_q_TRUTH = new TH1F("h_ljet_0_q_TRUTH", "", bins, min, max);

	hv_ljet_0_q.push_back(h_ljet_0_q);
	hv_ljet_0_q.push_back(h_ljet_0_q_CONTROL);
	hv_ljet_0_q.push_back(h_ljet_0_q_EXCEPT);
	hv_ljet_0_q.push_back(h_ljet_0_q_EXCEPT_FINE);
	hv_ljet_0_q.push_back(h_ljet_0_q_PRE);
	hv_ljet_0_q.push_back(h_ljet_0_q_BJET);
	hv_ljet_0_q.push_back(h_ljet_0_q_HIGH_E);
	hv_ljet_0_q.push_back(h_ljet_0_q_TRUTH);

	hv_ljet_0_q_names.push_back("h_ljet_0_q");
	hv_ljet_0_q_names.push_back("h_ljet_0_q_CONTROL");
	hv_ljet_0_q_names.push_back("h_ljet_0_q_EXCEPT");
	hv_ljet_0_q_names.push_back("h_ljet_0_q_EXCEPT_FINE");
	hv_ljet_0_q_names.push_back("h_ljet_0_q_PRE");
	hv_ljet_0_q_names.push_back("h_ljet_0_q_BJET");
	hv_ljet_0_q_names.push_back("h_ljet_0_q_HIGH_E");
	hv_ljet_0_q_names.push_back("h_ljet_0_q_TRUTH");

}

//Histogram booking function for ljet_0_type
void MC_Analysis::Book_ljet_0_type(int bins, double min, double max) {
	h_ljet_0_type = new TH1F("h_ljet_0_type", "", bins, min, max);
	h_ljet_0_type_CONTROL = new TH1F("h_ljet_0_type_CONTROL", "", bins, min, max);
	h_ljet_0_type_EXCEPT = new TH1F("h_ljet_0_type_EXCEPT", "", bins, min, max);
	h_ljet_0_type_EXCEPT_FINE = new TH1F("h_ljet_0_type_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_type_PRE = new TH1F("h_ljet_0_type_PRE", "", bins, min, max);
	h_ljet_0_type_BJET = new TH1F("h_ljet_0_type_BJET", "", bins, min, max);
	h_ljet_0_type_HIGH_E = new TH1F("h_ljet_0_type_HIGH_E", "", bins, min, max);
	h_ljet_0_type_TRUTH = new TH1F("h_ljet_0_type_TRUTH", "", bins, min, max);

	hv_ljet_0_type.push_back(h_ljet_0_type);
	hv_ljet_0_type.push_back(h_ljet_0_type_CONTROL);
	hv_ljet_0_type.push_back(h_ljet_0_type_EXCEPT);
	hv_ljet_0_type.push_back(h_ljet_0_type_EXCEPT_FINE);
	hv_ljet_0_type.push_back(h_ljet_0_type_PRE);
	hv_ljet_0_type.push_back(h_ljet_0_type_BJET);
	hv_ljet_0_type.push_back(h_ljet_0_type_HIGH_E);
	hv_ljet_0_type.push_back(h_ljet_0_type_TRUTH);

	hv_ljet_0_type_names.push_back("h_ljet_0_type");
	hv_ljet_0_type_names.push_back("h_ljet_0_type_CONTROL");
	hv_ljet_0_type_names.push_back("h_ljet_0_type_EXCEPT");
	hv_ljet_0_type_names.push_back("h_ljet_0_type_EXCEPT_FINE");
	hv_ljet_0_type_names.push_back("h_ljet_0_type_PRE");
	hv_ljet_0_type_names.push_back("h_ljet_0_type_BJET");
	hv_ljet_0_type_names.push_back("h_ljet_0_type_HIGH_E");
	hv_ljet_0_type_names.push_back("h_ljet_0_type_TRUTH");

}

//Histogram booking function for ljet_0_width
void MC_Analysis::Book_ljet_0_width(int bins, double min, double max) {
	h_ljet_0_width = new TH1F("h_ljet_0_width", "", bins, min, max);
	h_ljet_0_width_CONTROL = new TH1F("h_ljet_0_width_CONTROL", "", bins, min, max);
	h_ljet_0_width_EXCEPT = new TH1F("h_ljet_0_width_EXCEPT", "", bins, min, max);
	h_ljet_0_width_EXCEPT_FINE = new TH1F("h_ljet_0_width_EXCEPT_FINE", "", bins, min, max);
	h_ljet_0_width_PRE = new TH1F("h_ljet_0_width_PRE", "", bins, min, max);
	h_ljet_0_width_BJET = new TH1F("h_ljet_0_width_BJET", "", bins, min, max);
	h_ljet_0_width_HIGH_E = new TH1F("h_ljet_0_width_HIGH_E", "", bins, min, max);
	h_ljet_0_width_TRUTH = new TH1F("h_ljet_0_width_TRUTH", "", bins, min, max);

	hv_ljet_0_width.push_back(h_ljet_0_width);
	hv_ljet_0_width.push_back(h_ljet_0_width_CONTROL);
	hv_ljet_0_width.push_back(h_ljet_0_width_EXCEPT);
	hv_ljet_0_width.push_back(h_ljet_0_width_EXCEPT_FINE);
	hv_ljet_0_width.push_back(h_ljet_0_width_PRE);
	hv_ljet_0_width.push_back(h_ljet_0_width_BJET);
	hv_ljet_0_width.push_back(h_ljet_0_width_HIGH_E);
	hv_ljet_0_width.push_back(h_ljet_0_width_TRUTH);

	hv_ljet_0_width_names.push_back("h_ljet_0_width");
	hv_ljet_0_width_names.push_back("h_ljet_0_width_CONTROL");
	hv_ljet_0_width_names.push_back("h_ljet_0_width_EXCEPT");
	hv_ljet_0_width_names.push_back("h_ljet_0_width_EXCEPT_FINE");
	hv_ljet_0_width_names.push_back("h_ljet_0_width_PRE");
	hv_ljet_0_width_names.push_back("h_ljet_0_width_BJET");
	hv_ljet_0_width_names.push_back("h_ljet_0_width_HIGH_E");
	hv_ljet_0_width_names.push_back("h_ljet_0_width_TRUTH");

}



///------------------------------- ljet_1 --------------------------///

//Histogram booking function for ljet_1
void MC_Analysis::Book_ljet_1(int bins, double min, double max) {
	h_ljet_1 = new TH1F("h_ljet_1", "", bins, min, max);
	h_ljet_1_CONTROL = new TH1F("h_ljet_1_CONTROL", "", bins, min, max);
	h_ljet_1_EXCEPT = new TH1F("h_ljet_1_EXCEPT", "", bins, min, max);
	h_ljet_1_EXCEPT_FINE = new TH1F("h_ljet_1_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_PRE = new TH1F("h_ljet_1_PRE", "", bins, min, max);
	h_ljet_1_BJET = new TH1F("h_ljet_1_BJET", "", bins, min, max);
	h_ljet_1_HIGH_E = new TH1F("h_ljet_1_HIGH_E", "", bins, min, max);
	h_ljet_1_TRUTH = new TH1F("h_ljet_1_TRUTH", "", bins, min, max);

	hv_ljet_1.push_back(h_ljet_1);
	hv_ljet_1.push_back(h_ljet_1_CONTROL);
	hv_ljet_1.push_back(h_ljet_1_EXCEPT);
	hv_ljet_1.push_back(h_ljet_1_EXCEPT_FINE);
	hv_ljet_1.push_back(h_ljet_1_PRE);
	hv_ljet_1.push_back(h_ljet_1_BJET);
	hv_ljet_1.push_back(h_ljet_1_HIGH_E);
	hv_ljet_1.push_back(h_ljet_1_TRUTH);

	hv_ljet_1_names.push_back("h_ljet_1");
	hv_ljet_1_names.push_back("h_ljet_1_CONTROL");
	hv_ljet_1_names.push_back("h_ljet_1_EXCEPT");
	hv_ljet_1_names.push_back("h_ljet_1_EXCEPT_FINE");
	hv_ljet_1_names.push_back("h_ljet_1_PRE");
	hv_ljet_1_names.push_back("h_ljet_1_BJET");
	hv_ljet_1_names.push_back("h_ljet_1_HIGH_E");
	hv_ljet_1_names.push_back("h_ljet_1_TRUTH");

}

//Histogram booking function for ljet_1_NOMINAL_central_jets_effSF_JVT
void MC_Analysis::Book_ljet_1_NOMINAL_central_jets_effSF_JVT(int bins, double min, double max) {
	h_ljet_1_NOMINAL_central_jets_effSF_JVT = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_effSF_JVT_CONTROL = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_effSF_JVT_PRE = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT_PRE", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_effSF_JVT_BJET = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT_BJET", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_effSF_JVT_TRUTH = new TH1F("h_ljet_1_NOMINAL_central_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT);
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT_CONTROL);
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT);
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE);
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT_PRE);
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT_BJET);
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E);
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_effSF_JVT_TRUTH);

	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT");
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT_CONTROL");
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT");
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT_EXCEPT_FINE");
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT_PRE");
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT_BJET");
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT_HIGH_E");
	hv_ljet_1_NOMINAL_central_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for ljet_1_NOMINAL_central_jets_ineffSF_JVT
void MC_Analysis::Book_ljet_1_NOMINAL_central_jets_ineffSF_JVT(int bins, double min, double max) {
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_PRE = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_BJET = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH = new TH1F("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT);
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL);
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT);
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_PRE);
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_BJET);
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E);
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH);

	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT");
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_CONTROL");
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT");
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_PRE");
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_BJET");
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_HIGH_E");
	hv_ljet_1_NOMINAL_central_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_central_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for ljet_1_NOMINAL_effSF_MV2c10
void MC_Analysis::Book_ljet_1_NOMINAL_effSF_MV2c10(int bins, double min, double max) {
	h_ljet_1_NOMINAL_effSF_MV2c10 = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10", "", bins, min, max);
	h_ljet_1_NOMINAL_effSF_MV2c10_CONTROL = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10_CONTROL", "", bins, min, max);
	h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT", "", bins, min, max);
	h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_NOMINAL_effSF_MV2c10_PRE = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10_PRE", "", bins, min, max);
	h_ljet_1_NOMINAL_effSF_MV2c10_BJET = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10_BJET", "", bins, min, max);
	h_ljet_1_NOMINAL_effSF_MV2c10_HIGH_E = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10_HIGH_E", "", bins, min, max);
	h_ljet_1_NOMINAL_effSF_MV2c10_TRUTH = new TH1F("h_ljet_1_NOMINAL_effSF_MV2c10_TRUTH", "", bins, min, max);

	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10);
	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10_CONTROL);
	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT);
	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE);
	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10_PRE);
	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10_BJET);
	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10_HIGH_E);
	hv_ljet_1_NOMINAL_effSF_MV2c10.push_back(h_ljet_1_NOMINAL_effSF_MV2c10_TRUTH);

	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10");
	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10_CONTROL");
	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT");
	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10_EXCEPT_FINE");
	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10_PRE");
	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10_BJET");
	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10_HIGH_E");
	hv_ljet_1_NOMINAL_effSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_effSF_MV2c10_TRUTH");

}

//Histogram booking function for ljet_1_NOMINAL_forward_jets_effSF_JVT
void MC_Analysis::Book_ljet_1_NOMINAL_forward_jets_effSF_JVT(int bins, double min, double max) {
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT_PRE = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_PRE", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT_BJET = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_BJET", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH = new TH1F("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT);
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL);
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT);
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE);
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT_PRE);
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT_BJET);
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E);
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH);

	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT");
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_CONTROL");
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT");
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_EXCEPT_FINE");
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_PRE");
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_BJET");
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_HIGH_E");
	hv_ljet_1_NOMINAL_forward_jets_effSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_effSF_JVT_TRUTH");

}

//Histogram booking function for ljet_1_NOMINAL_forward_jets_ineffSF_JVT
void MC_Analysis::Book_ljet_1_NOMINAL_forward_jets_ineffSF_JVT(int bins, double min, double max) {
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E", "", bins, min, max);
	h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH = new TH1F("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH", "", bins, min, max);

	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT);
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL);
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT);
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE);
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE);
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET);
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E);
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT.push_back(h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH);

	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT");
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_CONTROL");
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT");
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_EXCEPT_FINE");
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_PRE");
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_BJET");
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_HIGH_E");
	hv_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_names.push_back("h_ljet_1_NOMINAL_forward_jets_ineffSF_JVT_TRUTH");

}

//Histogram booking function for ljet_1_NOMINAL_ineffSF_MV2c10
void MC_Analysis::Book_ljet_1_NOMINAL_ineffSF_MV2c10(int bins, double min, double max) {
	h_ljet_1_NOMINAL_ineffSF_MV2c10 = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10", "", bins, min, max);
	h_ljet_1_NOMINAL_ineffSF_MV2c10_CONTROL = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10_CONTROL", "", bins, min, max);
	h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT", "", bins, min, max);
	h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_NOMINAL_ineffSF_MV2c10_PRE = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10_PRE", "", bins, min, max);
	h_ljet_1_NOMINAL_ineffSF_MV2c10_BJET = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10_BJET", "", bins, min, max);
	h_ljet_1_NOMINAL_ineffSF_MV2c10_HIGH_E = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10_HIGH_E", "", bins, min, max);
	h_ljet_1_NOMINAL_ineffSF_MV2c10_TRUTH = new TH1F("h_ljet_1_NOMINAL_ineffSF_MV2c10_TRUTH", "", bins, min, max);

	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10);
	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10_CONTROL);
	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT);
	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE);
	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10_PRE);
	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10_BJET);
	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10_HIGH_E);
	hv_ljet_1_NOMINAL_ineffSF_MV2c10.push_back(h_ljet_1_NOMINAL_ineffSF_MV2c10_TRUTH);

	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10");
	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10_CONTROL");
	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT");
	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10_EXCEPT_FINE");
	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10_PRE");
	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10_BJET");
	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10_HIGH_E");
	hv_ljet_1_NOMINAL_ineffSF_MV2c10_names.push_back("h_ljet_1_NOMINAL_ineffSF_MV2c10_TRUTH");

}

//Histogram booking function for ljet_1_b_tag_quantile
void MC_Analysis::Book_ljet_1_b_tag_quantile(int bins, double min, double max) {
	h_ljet_1_b_tag_quantile = new TH1F("h_ljet_1_b_tag_quantile", "", bins, min, max);
	h_ljet_1_b_tag_quantile_CONTROL = new TH1F("h_ljet_1_b_tag_quantile_CONTROL", "", bins, min, max);
	h_ljet_1_b_tag_quantile_EXCEPT = new TH1F("h_ljet_1_b_tag_quantile_EXCEPT", "", bins, min, max);
	h_ljet_1_b_tag_quantile_EXCEPT_FINE = new TH1F("h_ljet_1_b_tag_quantile_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_b_tag_quantile_PRE = new TH1F("h_ljet_1_b_tag_quantile_PRE", "", bins, min, max);
	h_ljet_1_b_tag_quantile_BJET = new TH1F("h_ljet_1_b_tag_quantile_BJET", "", bins, min, max);
	h_ljet_1_b_tag_quantile_HIGH_E = new TH1F("h_ljet_1_b_tag_quantile_HIGH_E", "", bins, min, max);
	h_ljet_1_b_tag_quantile_TRUTH = new TH1F("h_ljet_1_b_tag_quantile_TRUTH", "", bins, min, max);

	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile);
	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile_CONTROL);
	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile_EXCEPT);
	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile_EXCEPT_FINE);
	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile_PRE);
	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile_BJET);
	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile_HIGH_E);
	hv_ljet_1_b_tag_quantile.push_back(h_ljet_1_b_tag_quantile_TRUTH);

	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile");
	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile_CONTROL");
	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile_EXCEPT");
	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile_EXCEPT_FINE");
	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile_PRE");
	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile_BJET");
	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile_HIGH_E");
	hv_ljet_1_b_tag_quantile_names.push_back("h_ljet_1_b_tag_quantile_TRUTH");

}

//Histogram booking function for ljet_1_b_tag_score
void MC_Analysis::Book_ljet_1_b_tag_score(int bins, double min, double max) {
	h_ljet_1_b_tag_score = new TH1F("h_ljet_1_b_tag_score", "", bins, min, max);
	h_ljet_1_b_tag_score_CONTROL = new TH1F("h_ljet_1_b_tag_score_CONTROL", "", bins, min, max);
	h_ljet_1_b_tag_score_EXCEPT = new TH1F("h_ljet_1_b_tag_score_EXCEPT", "", bins, min, max);
	h_ljet_1_b_tag_score_EXCEPT_FINE = new TH1F("h_ljet_1_b_tag_score_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_b_tag_score_PRE = new TH1F("h_ljet_1_b_tag_score_PRE", "", bins, min, max);
	h_ljet_1_b_tag_score_BJET = new TH1F("h_ljet_1_b_tag_score_BJET", "", bins, min, max);
	h_ljet_1_b_tag_score_HIGH_E = new TH1F("h_ljet_1_b_tag_score_HIGH_E", "", bins, min, max);
	h_ljet_1_b_tag_score_TRUTH = new TH1F("h_ljet_1_b_tag_score_TRUTH", "", bins, min, max);

	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score);
	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score_CONTROL);
	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score_EXCEPT);
	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score_EXCEPT_FINE);
	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score_PRE);
	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score_BJET);
	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score_HIGH_E);
	hv_ljet_1_b_tag_score.push_back(h_ljet_1_b_tag_score_TRUTH);

	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score");
	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score_CONTROL");
	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score_EXCEPT");
	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score_EXCEPT_FINE");
	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score_PRE");
	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score_BJET");
	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score_HIGH_E");
	hv_ljet_1_b_tag_score_names.push_back("h_ljet_1_b_tag_score_TRUTH");

}

//Histogram booking function for ljet_1_b_tagged
void MC_Analysis::Book_ljet_1_b_tagged(int bins, double min, double max) {
	h_ljet_1_b_tagged = new TH1F("h_ljet_1_b_tagged", "", bins, min, max);
	h_ljet_1_b_tagged_CONTROL = new TH1F("h_ljet_1_b_tagged_CONTROL", "", bins, min, max);
	h_ljet_1_b_tagged_EXCEPT = new TH1F("h_ljet_1_b_tagged_EXCEPT", "", bins, min, max);
	h_ljet_1_b_tagged_EXCEPT_FINE = new TH1F("h_ljet_1_b_tagged_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_b_tagged_PRE = new TH1F("h_ljet_1_b_tagged_PRE", "", bins, min, max);
	h_ljet_1_b_tagged_BJET = new TH1F("h_ljet_1_b_tagged_BJET", "", bins, min, max);
	h_ljet_1_b_tagged_HIGH_E = new TH1F("h_ljet_1_b_tagged_HIGH_E", "", bins, min, max);
	h_ljet_1_b_tagged_TRUTH = new TH1F("h_ljet_1_b_tagged_TRUTH", "", bins, min, max);

	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged);
	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged_CONTROL);
	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged_EXCEPT);
	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged_EXCEPT_FINE);
	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged_PRE);
	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged_BJET);
	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged_HIGH_E);
	hv_ljet_1_b_tagged.push_back(h_ljet_1_b_tagged_TRUTH);

	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged");
	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged_CONTROL");
	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged_EXCEPT");
	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged_EXCEPT_FINE");
	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged_PRE");
	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged_BJET");
	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged_HIGH_E");
	hv_ljet_1_b_tagged_names.push_back("h_ljet_1_b_tagged_TRUTH");

}

//Histogram booking function for ljet_1_fjvt
void MC_Analysis::Book_ljet_1_fjvt(int bins, double min, double max) {
	h_ljet_1_fjvt = new TH1F("h_ljet_1_fjvt", "", bins, min, max);
	h_ljet_1_fjvt_CONTROL = new TH1F("h_ljet_1_fjvt_CONTROL", "", bins, min, max);
	h_ljet_1_fjvt_EXCEPT = new TH1F("h_ljet_1_fjvt_EXCEPT", "", bins, min, max);
	h_ljet_1_fjvt_EXCEPT_FINE = new TH1F("h_ljet_1_fjvt_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_fjvt_PRE = new TH1F("h_ljet_1_fjvt_PRE", "", bins, min, max);
	h_ljet_1_fjvt_BJET = new TH1F("h_ljet_1_fjvt_BJET", "", bins, min, max);
	h_ljet_1_fjvt_HIGH_E = new TH1F("h_ljet_1_fjvt_HIGH_E", "", bins, min, max);
	h_ljet_1_fjvt_TRUTH = new TH1F("h_ljet_1_fjvt_TRUTH", "", bins, min, max);

	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt);
	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt_CONTROL);
	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt_EXCEPT);
	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt_EXCEPT_FINE);
	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt_PRE);
	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt_BJET);
	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt_HIGH_E);
	hv_ljet_1_fjvt.push_back(h_ljet_1_fjvt_TRUTH);

	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt");
	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt_CONTROL");
	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt_EXCEPT");
	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt_EXCEPT_FINE");
	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt_PRE");
	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt_BJET");
	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt_HIGH_E");
	hv_ljet_1_fjvt_names.push_back("h_ljet_1_fjvt_TRUTH");

}

//Histogram booking function for ljet_1_flavorlabel
void MC_Analysis::Book_ljet_1_flavorlabel(int bins, double min, double max) {
	h_ljet_1_flavorlabel = new TH1F("h_ljet_1_flavorlabel", "", bins, min, max);
	h_ljet_1_flavorlabel_CONTROL = new TH1F("h_ljet_1_flavorlabel_CONTROL", "", bins, min, max);
	h_ljet_1_flavorlabel_EXCEPT = new TH1F("h_ljet_1_flavorlabel_EXCEPT", "", bins, min, max);
	h_ljet_1_flavorlabel_EXCEPT_FINE = new TH1F("h_ljet_1_flavorlabel_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_flavorlabel_PRE = new TH1F("h_ljet_1_flavorlabel_PRE", "", bins, min, max);
	h_ljet_1_flavorlabel_BJET = new TH1F("h_ljet_1_flavorlabel_BJET", "", bins, min, max);
	h_ljet_1_flavorlabel_HIGH_E = new TH1F("h_ljet_1_flavorlabel_HIGH_E", "", bins, min, max);
	h_ljet_1_flavorlabel_TRUTH = new TH1F("h_ljet_1_flavorlabel_TRUTH", "", bins, min, max);

	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel);
	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel_CONTROL);
	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel_EXCEPT);
	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel_EXCEPT_FINE);
	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel_PRE);
	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel_BJET);
	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel_HIGH_E);
	hv_ljet_1_flavorlabel.push_back(h_ljet_1_flavorlabel_TRUTH);

	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel");
	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel_CONTROL");
	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel_EXCEPT");
	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel_EXCEPT_FINE");
	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel_PRE");
	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel_BJET");
	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel_HIGH_E");
	hv_ljet_1_flavorlabel_names.push_back("h_ljet_1_flavorlabel_TRUTH");

}

//Histogram booking function for ljet_1_flavorlabel_cone
void MC_Analysis::Book_ljet_1_flavorlabel_cone(int bins, double min, double max) {
	h_ljet_1_flavorlabel_cone = new TH1F("h_ljet_1_flavorlabel_cone", "", bins, min, max);
	h_ljet_1_flavorlabel_cone_CONTROL = new TH1F("h_ljet_1_flavorlabel_cone_CONTROL", "", bins, min, max);
	h_ljet_1_flavorlabel_cone_EXCEPT = new TH1F("h_ljet_1_flavorlabel_cone_EXCEPT", "", bins, min, max);
	h_ljet_1_flavorlabel_cone_EXCEPT_FINE = new TH1F("h_ljet_1_flavorlabel_cone_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_flavorlabel_cone_PRE = new TH1F("h_ljet_1_flavorlabel_cone_PRE", "", bins, min, max);
	h_ljet_1_flavorlabel_cone_BJET = new TH1F("h_ljet_1_flavorlabel_cone_BJET", "", bins, min, max);
	h_ljet_1_flavorlabel_cone_HIGH_E = new TH1F("h_ljet_1_flavorlabel_cone_HIGH_E", "", bins, min, max);
	h_ljet_1_flavorlabel_cone_TRUTH = new TH1F("h_ljet_1_flavorlabel_cone_TRUTH", "", bins, min, max);

	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone);
	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone_CONTROL);
	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone_EXCEPT);
	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone_EXCEPT_FINE);
	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone_PRE);
	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone_BJET);
	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone_HIGH_E);
	hv_ljet_1_flavorlabel_cone.push_back(h_ljet_1_flavorlabel_cone_TRUTH);

	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone");
	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone_CONTROL");
	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone_EXCEPT");
	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone_EXCEPT_FINE");
	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone_PRE");
	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone_BJET");
	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone_HIGH_E");
	hv_ljet_1_flavorlabel_cone_names.push_back("h_ljet_1_flavorlabel_cone_TRUTH");

}

//Histogram booking function for ljet_1_flavorlabel_part
void MC_Analysis::Book_ljet_1_flavorlabel_part(int bins, double min, double max) {
	h_ljet_1_flavorlabel_part = new TH1F("h_ljet_1_flavorlabel_part", "", bins, min, max);
	h_ljet_1_flavorlabel_part_CONTROL = new TH1F("h_ljet_1_flavorlabel_part_CONTROL", "", bins, min, max);
	h_ljet_1_flavorlabel_part_EXCEPT = new TH1F("h_ljet_1_flavorlabel_part_EXCEPT", "", bins, min, max);
	h_ljet_1_flavorlabel_part_EXCEPT_FINE = new TH1F("h_ljet_1_flavorlabel_part_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_flavorlabel_part_PRE = new TH1F("h_ljet_1_flavorlabel_part_PRE", "", bins, min, max);
	h_ljet_1_flavorlabel_part_BJET = new TH1F("h_ljet_1_flavorlabel_part_BJET", "", bins, min, max);
	h_ljet_1_flavorlabel_part_HIGH_E = new TH1F("h_ljet_1_flavorlabel_part_HIGH_E", "", bins, min, max);
	h_ljet_1_flavorlabel_part_TRUTH = new TH1F("h_ljet_1_flavorlabel_part_TRUTH", "", bins, min, max);

	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part);
	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part_CONTROL);
	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part_EXCEPT);
	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part_EXCEPT_FINE);
	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part_PRE);
	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part_BJET);
	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part_HIGH_E);
	hv_ljet_1_flavorlabel_part.push_back(h_ljet_1_flavorlabel_part_TRUTH);

	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part");
	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part_CONTROL");
	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part_EXCEPT");
	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part_EXCEPT_FINE");
	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part_PRE");
	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part_BJET");
	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part_HIGH_E");
	hv_ljet_1_flavorlabel_part_names.push_back("h_ljet_1_flavorlabel_part_TRUTH");

}

//Histogram booking function for ljet_1_is_Jvt_HS
void MC_Analysis::Book_ljet_1_is_Jvt_HS(int bins, double min, double max) {
	h_ljet_1_is_Jvt_HS = new TH1F("h_ljet_1_is_Jvt_HS", "", bins, min, max);
	h_ljet_1_is_Jvt_HS_CONTROL = new TH1F("h_ljet_1_is_Jvt_HS_CONTROL", "", bins, min, max);
	h_ljet_1_is_Jvt_HS_EXCEPT = new TH1F("h_ljet_1_is_Jvt_HS_EXCEPT", "", bins, min, max);
	h_ljet_1_is_Jvt_HS_EXCEPT_FINE = new TH1F("h_ljet_1_is_Jvt_HS_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_is_Jvt_HS_PRE = new TH1F("h_ljet_1_is_Jvt_HS_PRE", "", bins, min, max);
	h_ljet_1_is_Jvt_HS_BJET = new TH1F("h_ljet_1_is_Jvt_HS_BJET", "", bins, min, max);
	h_ljet_1_is_Jvt_HS_HIGH_E = new TH1F("h_ljet_1_is_Jvt_HS_HIGH_E", "", bins, min, max);
	h_ljet_1_is_Jvt_HS_TRUTH = new TH1F("h_ljet_1_is_Jvt_HS_TRUTH", "", bins, min, max);

	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS);
	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS_CONTROL);
	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS_EXCEPT);
	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS_EXCEPT_FINE);
	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS_PRE);
	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS_BJET);
	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS_HIGH_E);
	hv_ljet_1_is_Jvt_HS.push_back(h_ljet_1_is_Jvt_HS_TRUTH);

	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS");
	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS_CONTROL");
	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS_EXCEPT");
	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS_EXCEPT_FINE");
	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS_PRE");
	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS_BJET");
	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS_HIGH_E");
	hv_ljet_1_is_Jvt_HS_names.push_back("h_ljet_1_is_Jvt_HS_TRUTH");

}

//Histogram booking function for ljet_1_jvt
void MC_Analysis::Book_ljet_1_jvt(int bins, double min, double max) {
	h_ljet_1_jvt = new TH1F("h_ljet_1_jvt", "", bins, min, max);
	h_ljet_1_jvt_CONTROL = new TH1F("h_ljet_1_jvt_CONTROL", "", bins, min, max);
	h_ljet_1_jvt_EXCEPT = new TH1F("h_ljet_1_jvt_EXCEPT", "", bins, min, max);
	h_ljet_1_jvt_EXCEPT_FINE = new TH1F("h_ljet_1_jvt_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_jvt_PRE = new TH1F("h_ljet_1_jvt_PRE", "", bins, min, max);
	h_ljet_1_jvt_BJET = new TH1F("h_ljet_1_jvt_BJET", "", bins, min, max);
	h_ljet_1_jvt_HIGH_E = new TH1F("h_ljet_1_jvt_HIGH_E", "", bins, min, max);
	h_ljet_1_jvt_TRUTH = new TH1F("h_ljet_1_jvt_TRUTH", "", bins, min, max);

	hv_ljet_1_jvt.push_back(h_ljet_1_jvt);
	hv_ljet_1_jvt.push_back(h_ljet_1_jvt_CONTROL);
	hv_ljet_1_jvt.push_back(h_ljet_1_jvt_EXCEPT);
	hv_ljet_1_jvt.push_back(h_ljet_1_jvt_EXCEPT_FINE);
	hv_ljet_1_jvt.push_back(h_ljet_1_jvt_PRE);
	hv_ljet_1_jvt.push_back(h_ljet_1_jvt_BJET);
	hv_ljet_1_jvt.push_back(h_ljet_1_jvt_HIGH_E);
	hv_ljet_1_jvt.push_back(h_ljet_1_jvt_TRUTH);

	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt");
	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt_CONTROL");
	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt_EXCEPT");
	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt_EXCEPT_FINE");
	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt_PRE");
	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt_BJET");
	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt_HIGH_E");
	hv_ljet_1_jvt_names.push_back("h_ljet_1_jvt_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_1_matched_p4 ----- //
	//Histogram booking function for ljet_1_matched_p4_X
	void MC_Analysis::Book_ljet_1_matched_p4_X(int bins, double min, double max) {
		h_ljet_1_matched_p4_X = new TH1F("h_ljet_1_matched_p4_X","", bins, min, max);
		h_ljet_1_matched_p4_X_CONTROL = new TH1F("h_ljet_1_matched_p4_X_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_X_EXCEPT = new TH1F("h_ljet_1_matched_p4_X_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_X_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_X_PRE = new TH1F("h_ljet_1_matched_p4_X_PRE","", bins, min, max);
		h_ljet_1_matched_p4_X_BJET = new TH1F("h_ljet_1_matched_p4_X_BJET","", bins, min, max);
		h_ljet_1_matched_p4_X_HIGH_E = new TH1F("h_ljet_1_matched_p4_X_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_X_TRUTH = new TH1F("h_ljet_1_matched_p4_X_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X);
		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X_CONTROL);
		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X_EXCEPT);
		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X_EXCEPT_FINE);
		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X_PRE);
		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X_BJET);
		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X_HIGH_E);
		hv_ljet_1_matched_p4_X.push_back(h_ljet_1_matched_p4_X_TRUTH);

		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X");
		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X_CONTROL");
		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X_EXCEPT");
		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X_EXCEPT_FINE");
		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X_PRE");
		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X_BJET");
		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X_HIGH_E");
		hv_ljet_1_matched_p4_X_names.push_back("h_ljet_1_matched_p4_X_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Y
	void MC_Analysis::Book_ljet_1_matched_p4_Y(int bins, double min, double max) {
		h_ljet_1_matched_p4_Y = new TH1F("h_ljet_1_matched_p4_Y","", bins, min, max);
		h_ljet_1_matched_p4_Y_CONTROL = new TH1F("h_ljet_1_matched_p4_Y_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Y_EXCEPT = new TH1F("h_ljet_1_matched_p4_Y_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Y_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Y_PRE = new TH1F("h_ljet_1_matched_p4_Y_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Y_BJET = new TH1F("h_ljet_1_matched_p4_Y_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Y_HIGH_E = new TH1F("h_ljet_1_matched_p4_Y_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Y_TRUTH = new TH1F("h_ljet_1_matched_p4_Y_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y);
		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y_CONTROL);
		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y_EXCEPT);
		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y_PRE);
		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y_BJET);
		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y_HIGH_E);
		hv_ljet_1_matched_p4_Y.push_back(h_ljet_1_matched_p4_Y_TRUTH);

		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y");
		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y_CONTROL");
		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y_EXCEPT");
		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y_PRE");
		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y_BJET");
		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y_HIGH_E");
		hv_ljet_1_matched_p4_Y_names.push_back("h_ljet_1_matched_p4_Y_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Z
	void MC_Analysis::Book_ljet_1_matched_p4_Z(int bins, double min, double max) {
		h_ljet_1_matched_p4_Z = new TH1F("h_ljet_1_matched_p4_Z","", bins, min, max);
		h_ljet_1_matched_p4_Z_CONTROL = new TH1F("h_ljet_1_matched_p4_Z_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Z_EXCEPT = new TH1F("h_ljet_1_matched_p4_Z_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Z_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Z_PRE = new TH1F("h_ljet_1_matched_p4_Z_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Z_BJET = new TH1F("h_ljet_1_matched_p4_Z_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Z_HIGH_E = new TH1F("h_ljet_1_matched_p4_Z_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Z_TRUTH = new TH1F("h_ljet_1_matched_p4_Z_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z);
		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z_CONTROL);
		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z_EXCEPT);
		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z_PRE);
		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z_BJET);
		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z_HIGH_E);
		hv_ljet_1_matched_p4_Z.push_back(h_ljet_1_matched_p4_Z_TRUTH);

		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z");
		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z_CONTROL");
		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z_EXCEPT");
		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z_PRE");
		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z_BJET");
		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z_HIGH_E");
		hv_ljet_1_matched_p4_Z_names.push_back("h_ljet_1_matched_p4_Z_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_T
	void MC_Analysis::Book_ljet_1_matched_p4_T(int bins, double min, double max) {
		h_ljet_1_matched_p4_T = new TH1F("h_ljet_1_matched_p4_T","", bins, min, max);
		h_ljet_1_matched_p4_T_CONTROL = new TH1F("h_ljet_1_matched_p4_T_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_T_EXCEPT = new TH1F("h_ljet_1_matched_p4_T_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_T_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_T_PRE = new TH1F("h_ljet_1_matched_p4_T_PRE","", bins, min, max);
		h_ljet_1_matched_p4_T_BJET = new TH1F("h_ljet_1_matched_p4_T_BJET","", bins, min, max);
		h_ljet_1_matched_p4_T_HIGH_E = new TH1F("h_ljet_1_matched_p4_T_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_T_TRUTH = new TH1F("h_ljet_1_matched_p4_T_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T);
		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T_CONTROL);
		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T_EXCEPT);
		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T_EXCEPT_FINE);
		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T_PRE);
		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T_BJET);
		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T_HIGH_E);
		hv_ljet_1_matched_p4_T.push_back(h_ljet_1_matched_p4_T_TRUTH);

		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T");
		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T_CONTROL");
		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T_EXCEPT");
		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T_EXCEPT_FINE");
		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T_PRE");
		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T_BJET");
		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T_HIGH_E");
		hv_ljet_1_matched_p4_T_names.push_back("h_ljet_1_matched_p4_T_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Px
	void MC_Analysis::Book_ljet_1_matched_p4_Px(int bins, double min, double max) {
		h_ljet_1_matched_p4_Px = new TH1F("h_ljet_1_matched_p4_Px","", bins, min, max);
		h_ljet_1_matched_p4_Px_CONTROL = new TH1F("h_ljet_1_matched_p4_Px_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Px_EXCEPT = new TH1F("h_ljet_1_matched_p4_Px_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Px_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Px_PRE = new TH1F("h_ljet_1_matched_p4_Px_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Px_BJET = new TH1F("h_ljet_1_matched_p4_Px_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Px_HIGH_E = new TH1F("h_ljet_1_matched_p4_Px_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Px_TRUTH = new TH1F("h_ljet_1_matched_p4_Px_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px);
		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px_CONTROL);
		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px_EXCEPT);
		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px_PRE);
		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px_BJET);
		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px_HIGH_E);
		hv_ljet_1_matched_p4_Px.push_back(h_ljet_1_matched_p4_Px_TRUTH);

		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px");
		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px_CONTROL");
		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px_EXCEPT");
		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px_PRE");
		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px_BJET");
		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px_HIGH_E");
		hv_ljet_1_matched_p4_Px_names.push_back("h_ljet_1_matched_p4_Px_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Py
	void MC_Analysis::Book_ljet_1_matched_p4_Py(int bins, double min, double max) {
		h_ljet_1_matched_p4_Py = new TH1F("h_ljet_1_matched_p4_Py","", bins, min, max);
		h_ljet_1_matched_p4_Py_CONTROL = new TH1F("h_ljet_1_matched_p4_Py_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Py_EXCEPT = new TH1F("h_ljet_1_matched_p4_Py_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Py_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Py_PRE = new TH1F("h_ljet_1_matched_p4_Py_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Py_BJET = new TH1F("h_ljet_1_matched_p4_Py_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Py_HIGH_E = new TH1F("h_ljet_1_matched_p4_Py_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Py_TRUTH = new TH1F("h_ljet_1_matched_p4_Py_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py);
		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py_CONTROL);
		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py_EXCEPT);
		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py_PRE);
		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py_BJET);
		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py_HIGH_E);
		hv_ljet_1_matched_p4_Py.push_back(h_ljet_1_matched_p4_Py_TRUTH);

		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py");
		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py_CONTROL");
		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py_EXCEPT");
		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py_PRE");
		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py_BJET");
		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py_HIGH_E");
		hv_ljet_1_matched_p4_Py_names.push_back("h_ljet_1_matched_p4_Py_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Pz
	void MC_Analysis::Book_ljet_1_matched_p4_Pz(int bins, double min, double max) {
		h_ljet_1_matched_p4_Pz = new TH1F("h_ljet_1_matched_p4_Pz","", bins, min, max);
		h_ljet_1_matched_p4_Pz_CONTROL = new TH1F("h_ljet_1_matched_p4_Pz_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Pz_EXCEPT = new TH1F("h_ljet_1_matched_p4_Pz_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Pz_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Pz_PRE = new TH1F("h_ljet_1_matched_p4_Pz_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Pz_BJET = new TH1F("h_ljet_1_matched_p4_Pz_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Pz_HIGH_E = new TH1F("h_ljet_1_matched_p4_Pz_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Pz_TRUTH = new TH1F("h_ljet_1_matched_p4_Pz_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz);
		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz_CONTROL);
		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz_EXCEPT);
		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz_PRE);
		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz_BJET);
		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz_HIGH_E);
		hv_ljet_1_matched_p4_Pz.push_back(h_ljet_1_matched_p4_Pz_TRUTH);

		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz");
		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz_CONTROL");
		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz_EXCEPT");
		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz_PRE");
		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz_BJET");
		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz_HIGH_E");
		hv_ljet_1_matched_p4_Pz_names.push_back("h_ljet_1_matched_p4_Pz_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Energy
	void MC_Analysis::Book_ljet_1_matched_p4_Energy(int bins, double min, double max) {
		h_ljet_1_matched_p4_Energy = new TH1F("h_ljet_1_matched_p4_Energy","", bins, min, max);
		h_ljet_1_matched_p4_Energy_CONTROL = new TH1F("h_ljet_1_matched_p4_Energy_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Energy_EXCEPT = new TH1F("h_ljet_1_matched_p4_Energy_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Energy_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Energy_PRE = new TH1F("h_ljet_1_matched_p4_Energy_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Energy_BJET = new TH1F("h_ljet_1_matched_p4_Energy_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Energy_HIGH_E = new TH1F("h_ljet_1_matched_p4_Energy_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Energy_TRUTH = new TH1F("h_ljet_1_matched_p4_Energy_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy);
		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy_CONTROL);
		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy_EXCEPT);
		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy_PRE);
		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy_BJET);
		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy_HIGH_E);
		hv_ljet_1_matched_p4_Energy.push_back(h_ljet_1_matched_p4_Energy_TRUTH);

		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy");
		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy_CONTROL");
		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy_EXCEPT");
		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy_PRE");
		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy_BJET");
		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy_HIGH_E");
		hv_ljet_1_matched_p4_Energy_names.push_back("h_ljet_1_matched_p4_Energy_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Theta
	void MC_Analysis::Book_ljet_1_matched_p4_Theta(int bins, double min, double max) {
		h_ljet_1_matched_p4_Theta = new TH1F("h_ljet_1_matched_p4_Theta","", bins, min, max);
		h_ljet_1_matched_p4_Theta_CONTROL = new TH1F("h_ljet_1_matched_p4_Theta_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Theta_EXCEPT = new TH1F("h_ljet_1_matched_p4_Theta_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Theta_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Theta_PRE = new TH1F("h_ljet_1_matched_p4_Theta_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Theta_BJET = new TH1F("h_ljet_1_matched_p4_Theta_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Theta_HIGH_E = new TH1F("h_ljet_1_matched_p4_Theta_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Theta_TRUTH = new TH1F("h_ljet_1_matched_p4_Theta_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta);
		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta_CONTROL);
		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta_EXCEPT);
		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta_PRE);
		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta_BJET);
		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta_HIGH_E);
		hv_ljet_1_matched_p4_Theta.push_back(h_ljet_1_matched_p4_Theta_TRUTH);

		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta");
		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta_CONTROL");
		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta_EXCEPT");
		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta_PRE");
		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta_BJET");
		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta_HIGH_E");
		hv_ljet_1_matched_p4_Theta_names.push_back("h_ljet_1_matched_p4_Theta_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_CosTheta
	void MC_Analysis::Book_ljet_1_matched_p4_CosTheta(int bins, double min, double max) {
		h_ljet_1_matched_p4_CosTheta = new TH1F("h_ljet_1_matched_p4_CosTheta","", bins, min, max);
		h_ljet_1_matched_p4_CosTheta_CONTROL = new TH1F("h_ljet_1_matched_p4_CosTheta_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_CosTheta_EXCEPT = new TH1F("h_ljet_1_matched_p4_CosTheta_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_CosTheta_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_CosTheta_PRE = new TH1F("h_ljet_1_matched_p4_CosTheta_PRE","", bins, min, max);
		h_ljet_1_matched_p4_CosTheta_BJET = new TH1F("h_ljet_1_matched_p4_CosTheta_BJET","", bins, min, max);
		h_ljet_1_matched_p4_CosTheta_HIGH_E = new TH1F("h_ljet_1_matched_p4_CosTheta_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_CosTheta_TRUTH = new TH1F("h_ljet_1_matched_p4_CosTheta_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta);
		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta_CONTROL);
		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta_EXCEPT);
		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta_EXCEPT_FINE);
		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta_PRE);
		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta_BJET);
		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta_HIGH_E);
		hv_ljet_1_matched_p4_CosTheta.push_back(h_ljet_1_matched_p4_CosTheta_TRUTH);

		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta");
		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta_CONTROL");
		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta_EXCEPT");
		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta_EXCEPT_FINE");
		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta_PRE");
		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta_BJET");
		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta_HIGH_E");
		hv_ljet_1_matched_p4_CosTheta_names.push_back("h_ljet_1_matched_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Phi
	void MC_Analysis::Book_ljet_1_matched_p4_Phi(int bins, double min, double max) {
		h_ljet_1_matched_p4_Phi = new TH1F("h_ljet_1_matched_p4_Phi","", bins, min, max);
		h_ljet_1_matched_p4_Phi_CONTROL = new TH1F("h_ljet_1_matched_p4_Phi_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Phi_EXCEPT = new TH1F("h_ljet_1_matched_p4_Phi_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Phi_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Phi_PRE = new TH1F("h_ljet_1_matched_p4_Phi_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Phi_BJET = new TH1F("h_ljet_1_matched_p4_Phi_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Phi_HIGH_E = new TH1F("h_ljet_1_matched_p4_Phi_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Phi_TRUTH = new TH1F("h_ljet_1_matched_p4_Phi_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi);
		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi_CONTROL);
		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi_EXCEPT);
		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi_PRE);
		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi_BJET);
		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi_HIGH_E);
		hv_ljet_1_matched_p4_Phi.push_back(h_ljet_1_matched_p4_Phi_TRUTH);

		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi");
		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi_CONTROL");
		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi_EXCEPT");
		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi_PRE");
		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi_BJET");
		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi_HIGH_E");
		hv_ljet_1_matched_p4_Phi_names.push_back("h_ljet_1_matched_p4_Phi_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Rho
	void MC_Analysis::Book_ljet_1_matched_p4_Rho(int bins, double min, double max) {
		h_ljet_1_matched_p4_Rho = new TH1F("h_ljet_1_matched_p4_Rho","", bins, min, max);
		h_ljet_1_matched_p4_Rho_CONTROL = new TH1F("h_ljet_1_matched_p4_Rho_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Rho_EXCEPT = new TH1F("h_ljet_1_matched_p4_Rho_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Rho_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Rho_PRE = new TH1F("h_ljet_1_matched_p4_Rho_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Rho_BJET = new TH1F("h_ljet_1_matched_p4_Rho_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Rho_HIGH_E = new TH1F("h_ljet_1_matched_p4_Rho_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Rho_TRUTH = new TH1F("h_ljet_1_matched_p4_Rho_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho);
		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho_CONTROL);
		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho_EXCEPT);
		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho_PRE);
		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho_BJET);
		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho_HIGH_E);
		hv_ljet_1_matched_p4_Rho.push_back(h_ljet_1_matched_p4_Rho_TRUTH);

		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho");
		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho_CONTROL");
		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho_EXCEPT");
		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho_PRE");
		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho_BJET");
		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho_HIGH_E");
		hv_ljet_1_matched_p4_Rho_names.push_back("h_ljet_1_matched_p4_Rho_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Perp2
	void MC_Analysis::Book_ljet_1_matched_p4_Perp2(int bins, double min, double max) {
		h_ljet_1_matched_p4_Perp2 = new TH1F("h_ljet_1_matched_p4_Perp2","", bins, min, max);
		h_ljet_1_matched_p4_Perp2_CONTROL = new TH1F("h_ljet_1_matched_p4_Perp2_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Perp2_EXCEPT = new TH1F("h_ljet_1_matched_p4_Perp2_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Perp2_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Perp2_PRE = new TH1F("h_ljet_1_matched_p4_Perp2_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Perp2_BJET = new TH1F("h_ljet_1_matched_p4_Perp2_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Perp2_HIGH_E = new TH1F("h_ljet_1_matched_p4_Perp2_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Perp2_TRUTH = new TH1F("h_ljet_1_matched_p4_Perp2_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2);
		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2_CONTROL);
		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2_EXCEPT);
		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2_PRE);
		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2_BJET);
		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2_HIGH_E);
		hv_ljet_1_matched_p4_Perp2.push_back(h_ljet_1_matched_p4_Perp2_TRUTH);

		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2");
		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2_CONTROL");
		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2_EXCEPT");
		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2_PRE");
		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2_BJET");
		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2_HIGH_E");
		hv_ljet_1_matched_p4_Perp2_names.push_back("h_ljet_1_matched_p4_Perp2_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Pt
	void MC_Analysis::Book_ljet_1_matched_p4_Pt(int bins, double min, double max) {
		h_ljet_1_matched_p4_Pt = new TH1F("h_ljet_1_matched_p4_Pt","", bins, min, max);
		h_ljet_1_matched_p4_Pt_CONTROL = new TH1F("h_ljet_1_matched_p4_Pt_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Pt_EXCEPT = new TH1F("h_ljet_1_matched_p4_Pt_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Pt_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Pt_PRE = new TH1F("h_ljet_1_matched_p4_Pt_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Pt_BJET = new TH1F("h_ljet_1_matched_p4_Pt_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Pt_HIGH_E = new TH1F("h_ljet_1_matched_p4_Pt_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Pt_TRUTH = new TH1F("h_ljet_1_matched_p4_Pt_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt);
		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt_CONTROL);
		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt_EXCEPT);
		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt_PRE);
		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt_BJET);
		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt_HIGH_E);
		hv_ljet_1_matched_p4_Pt.push_back(h_ljet_1_matched_p4_Pt_TRUTH);

		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt");
		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt_CONTROL");
		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt_EXCEPT");
		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt_PRE");
		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt_BJET");
		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt_HIGH_E");
		hv_ljet_1_matched_p4_Pt_names.push_back("h_ljet_1_matched_p4_Pt_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Perp
	void MC_Analysis::Book_ljet_1_matched_p4_Perp(int bins, double min, double max) {
		h_ljet_1_matched_p4_Perp = new TH1F("h_ljet_1_matched_p4_Perp","", bins, min, max);
		h_ljet_1_matched_p4_Perp_CONTROL = new TH1F("h_ljet_1_matched_p4_Perp_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Perp_EXCEPT = new TH1F("h_ljet_1_matched_p4_Perp_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Perp_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Perp_PRE = new TH1F("h_ljet_1_matched_p4_Perp_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Perp_BJET = new TH1F("h_ljet_1_matched_p4_Perp_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Perp_HIGH_E = new TH1F("h_ljet_1_matched_p4_Perp_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Perp_TRUTH = new TH1F("h_ljet_1_matched_p4_Perp_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp);
		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp_CONTROL);
		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp_EXCEPT);
		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp_PRE);
		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp_BJET);
		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp_HIGH_E);
		hv_ljet_1_matched_p4_Perp.push_back(h_ljet_1_matched_p4_Perp_TRUTH);

		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp");
		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp_CONTROL");
		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp_EXCEPT");
		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp_PRE");
		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp_BJET");
		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp_HIGH_E");
		hv_ljet_1_matched_p4_Perp_names.push_back("h_ljet_1_matched_p4_Perp_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Et2
	void MC_Analysis::Book_ljet_1_matched_p4_Et2(int bins, double min, double max) {
		h_ljet_1_matched_p4_Et2 = new TH1F("h_ljet_1_matched_p4_Et2","", bins, min, max);
		h_ljet_1_matched_p4_Et2_CONTROL = new TH1F("h_ljet_1_matched_p4_Et2_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Et2_EXCEPT = new TH1F("h_ljet_1_matched_p4_Et2_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Et2_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Et2_PRE = new TH1F("h_ljet_1_matched_p4_Et2_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Et2_BJET = new TH1F("h_ljet_1_matched_p4_Et2_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Et2_HIGH_E = new TH1F("h_ljet_1_matched_p4_Et2_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Et2_TRUTH = new TH1F("h_ljet_1_matched_p4_Et2_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2);
		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2_CONTROL);
		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2_EXCEPT);
		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2_PRE);
		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2_BJET);
		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2_HIGH_E);
		hv_ljet_1_matched_p4_Et2.push_back(h_ljet_1_matched_p4_Et2_TRUTH);

		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2");
		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2_CONTROL");
		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2_EXCEPT");
		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2_PRE");
		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2_BJET");
		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2_HIGH_E");
		hv_ljet_1_matched_p4_Et2_names.push_back("h_ljet_1_matched_p4_Et2_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Et
	void MC_Analysis::Book_ljet_1_matched_p4_Et(int bins, double min, double max) {
		h_ljet_1_matched_p4_Et = new TH1F("h_ljet_1_matched_p4_Et","", bins, min, max);
		h_ljet_1_matched_p4_Et_CONTROL = new TH1F("h_ljet_1_matched_p4_Et_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Et_EXCEPT = new TH1F("h_ljet_1_matched_p4_Et_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Et_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Et_PRE = new TH1F("h_ljet_1_matched_p4_Et_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Et_BJET = new TH1F("h_ljet_1_matched_p4_Et_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Et_HIGH_E = new TH1F("h_ljet_1_matched_p4_Et_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Et_TRUTH = new TH1F("h_ljet_1_matched_p4_Et_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et);
		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et_CONTROL);
		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et_EXCEPT);
		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et_PRE);
		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et_BJET);
		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et_HIGH_E);
		hv_ljet_1_matched_p4_Et.push_back(h_ljet_1_matched_p4_Et_TRUTH);

		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et");
		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et_CONTROL");
		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et_EXCEPT");
		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et_PRE");
		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et_BJET");
		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et_HIGH_E");
		hv_ljet_1_matched_p4_Et_names.push_back("h_ljet_1_matched_p4_Et_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Mag2
	void MC_Analysis::Book_ljet_1_matched_p4_Mag2(int bins, double min, double max) {
		h_ljet_1_matched_p4_Mag2 = new TH1F("h_ljet_1_matched_p4_Mag2","", bins, min, max);
		h_ljet_1_matched_p4_Mag2_CONTROL = new TH1F("h_ljet_1_matched_p4_Mag2_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Mag2_EXCEPT = new TH1F("h_ljet_1_matched_p4_Mag2_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Mag2_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Mag2_PRE = new TH1F("h_ljet_1_matched_p4_Mag2_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Mag2_BJET = new TH1F("h_ljet_1_matched_p4_Mag2_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Mag2_HIGH_E = new TH1F("h_ljet_1_matched_p4_Mag2_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Mag2_TRUTH = new TH1F("h_ljet_1_matched_p4_Mag2_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2);
		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2_CONTROL);
		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2_EXCEPT);
		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2_PRE);
		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2_BJET);
		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2_HIGH_E);
		hv_ljet_1_matched_p4_Mag2.push_back(h_ljet_1_matched_p4_Mag2_TRUTH);

		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2");
		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2_CONTROL");
		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2_EXCEPT");
		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2_PRE");
		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2_BJET");
		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2_HIGH_E");
		hv_ljet_1_matched_p4_Mag2_names.push_back("h_ljet_1_matched_p4_Mag2_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_M2
	void MC_Analysis::Book_ljet_1_matched_p4_M2(int bins, double min, double max) {
		h_ljet_1_matched_p4_M2 = new TH1F("h_ljet_1_matched_p4_M2","", bins, min, max);
		h_ljet_1_matched_p4_M2_CONTROL = new TH1F("h_ljet_1_matched_p4_M2_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_M2_EXCEPT = new TH1F("h_ljet_1_matched_p4_M2_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_M2_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_M2_PRE = new TH1F("h_ljet_1_matched_p4_M2_PRE","", bins, min, max);
		h_ljet_1_matched_p4_M2_BJET = new TH1F("h_ljet_1_matched_p4_M2_BJET","", bins, min, max);
		h_ljet_1_matched_p4_M2_HIGH_E = new TH1F("h_ljet_1_matched_p4_M2_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_M2_TRUTH = new TH1F("h_ljet_1_matched_p4_M2_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2);
		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2_CONTROL);
		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2_EXCEPT);
		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2_EXCEPT_FINE);
		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2_PRE);
		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2_BJET);
		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2_HIGH_E);
		hv_ljet_1_matched_p4_M2.push_back(h_ljet_1_matched_p4_M2_TRUTH);

		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2");
		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2_CONTROL");
		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2_EXCEPT");
		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2_EXCEPT_FINE");
		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2_PRE");
		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2_BJET");
		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2_HIGH_E");
		hv_ljet_1_matched_p4_M2_names.push_back("h_ljet_1_matched_p4_M2_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Mag
	void MC_Analysis::Book_ljet_1_matched_p4_Mag(int bins, double min, double max) {
		h_ljet_1_matched_p4_Mag = new TH1F("h_ljet_1_matched_p4_Mag","", bins, min, max);
		h_ljet_1_matched_p4_Mag_CONTROL = new TH1F("h_ljet_1_matched_p4_Mag_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Mag_EXCEPT = new TH1F("h_ljet_1_matched_p4_Mag_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Mag_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Mag_PRE = new TH1F("h_ljet_1_matched_p4_Mag_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Mag_BJET = new TH1F("h_ljet_1_matched_p4_Mag_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Mag_HIGH_E = new TH1F("h_ljet_1_matched_p4_Mag_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Mag_TRUTH = new TH1F("h_ljet_1_matched_p4_Mag_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag);
		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag_CONTROL);
		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag_EXCEPT);
		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag_PRE);
		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag_BJET);
		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag_HIGH_E);
		hv_ljet_1_matched_p4_Mag.push_back(h_ljet_1_matched_p4_Mag_TRUTH);

		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag");
		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag_CONTROL");
		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag_EXCEPT");
		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag_PRE");
		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag_BJET");
		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag_HIGH_E");
		hv_ljet_1_matched_p4_Mag_names.push_back("h_ljet_1_matched_p4_Mag_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_M
	void MC_Analysis::Book_ljet_1_matched_p4_M(int bins, double min, double max) {
		h_ljet_1_matched_p4_M = new TH1F("h_ljet_1_matched_p4_M","", bins, min, max);
		h_ljet_1_matched_p4_M_CONTROL = new TH1F("h_ljet_1_matched_p4_M_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_M_EXCEPT = new TH1F("h_ljet_1_matched_p4_M_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_M_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_M_PRE = new TH1F("h_ljet_1_matched_p4_M_PRE","", bins, min, max);
		h_ljet_1_matched_p4_M_BJET = new TH1F("h_ljet_1_matched_p4_M_BJET","", bins, min, max);
		h_ljet_1_matched_p4_M_HIGH_E = new TH1F("h_ljet_1_matched_p4_M_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_M_TRUTH = new TH1F("h_ljet_1_matched_p4_M_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M);
		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M_CONTROL);
		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M_EXCEPT);
		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M_EXCEPT_FINE);
		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M_PRE);
		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M_BJET);
		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M_HIGH_E);
		hv_ljet_1_matched_p4_M.push_back(h_ljet_1_matched_p4_M_TRUTH);

		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M");
		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M_CONTROL");
		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M_EXCEPT");
		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M_EXCEPT_FINE");
		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M_PRE");
		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M_BJET");
		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M_HIGH_E");
		hv_ljet_1_matched_p4_M_names.push_back("h_ljet_1_matched_p4_M_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Mt2
	void MC_Analysis::Book_ljet_1_matched_p4_Mt2(int bins, double min, double max) {
		h_ljet_1_matched_p4_Mt2 = new TH1F("h_ljet_1_matched_p4_Mt2","", bins, min, max);
		h_ljet_1_matched_p4_Mt2_CONTROL = new TH1F("h_ljet_1_matched_p4_Mt2_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Mt2_EXCEPT = new TH1F("h_ljet_1_matched_p4_Mt2_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Mt2_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Mt2_PRE = new TH1F("h_ljet_1_matched_p4_Mt2_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Mt2_BJET = new TH1F("h_ljet_1_matched_p4_Mt2_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Mt2_HIGH_E = new TH1F("h_ljet_1_matched_p4_Mt2_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Mt2_TRUTH = new TH1F("h_ljet_1_matched_p4_Mt2_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2);
		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2_CONTROL);
		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2_EXCEPT);
		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2_PRE);
		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2_BJET);
		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2_HIGH_E);
		hv_ljet_1_matched_p4_Mt2.push_back(h_ljet_1_matched_p4_Mt2_TRUTH);

		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2");
		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2_CONTROL");
		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2_EXCEPT");
		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2_PRE");
		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2_BJET");
		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2_HIGH_E");
		hv_ljet_1_matched_p4_Mt2_names.push_back("h_ljet_1_matched_p4_Mt2_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Mt
	void MC_Analysis::Book_ljet_1_matched_p4_Mt(int bins, double min, double max) {
		h_ljet_1_matched_p4_Mt = new TH1F("h_ljet_1_matched_p4_Mt","", bins, min, max);
		h_ljet_1_matched_p4_Mt_CONTROL = new TH1F("h_ljet_1_matched_p4_Mt_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Mt_EXCEPT = new TH1F("h_ljet_1_matched_p4_Mt_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Mt_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Mt_PRE = new TH1F("h_ljet_1_matched_p4_Mt_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Mt_BJET = new TH1F("h_ljet_1_matched_p4_Mt_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Mt_HIGH_E = new TH1F("h_ljet_1_matched_p4_Mt_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Mt_TRUTH = new TH1F("h_ljet_1_matched_p4_Mt_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt);
		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt_CONTROL);
		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt_EXCEPT);
		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt_PRE);
		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt_BJET);
		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt_HIGH_E);
		hv_ljet_1_matched_p4_Mt.push_back(h_ljet_1_matched_p4_Mt_TRUTH);

		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt");
		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt_CONTROL");
		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt_EXCEPT");
		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt_PRE");
		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt_BJET");
		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt_HIGH_E");
		hv_ljet_1_matched_p4_Mt_names.push_back("h_ljet_1_matched_p4_Mt_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Beta
	void MC_Analysis::Book_ljet_1_matched_p4_Beta(int bins, double min, double max) {
		h_ljet_1_matched_p4_Beta = new TH1F("h_ljet_1_matched_p4_Beta","", bins, min, max);
		h_ljet_1_matched_p4_Beta_CONTROL = new TH1F("h_ljet_1_matched_p4_Beta_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Beta_EXCEPT = new TH1F("h_ljet_1_matched_p4_Beta_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Beta_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Beta_PRE = new TH1F("h_ljet_1_matched_p4_Beta_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Beta_BJET = new TH1F("h_ljet_1_matched_p4_Beta_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Beta_HIGH_E = new TH1F("h_ljet_1_matched_p4_Beta_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Beta_TRUTH = new TH1F("h_ljet_1_matched_p4_Beta_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta);
		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta_CONTROL);
		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta_EXCEPT);
		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta_PRE);
		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta_BJET);
		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta_HIGH_E);
		hv_ljet_1_matched_p4_Beta.push_back(h_ljet_1_matched_p4_Beta_TRUTH);

		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta");
		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta_CONTROL");
		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta_EXCEPT");
		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta_PRE");
		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta_BJET");
		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta_HIGH_E");
		hv_ljet_1_matched_p4_Beta_names.push_back("h_ljet_1_matched_p4_Beta_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Gamma
	void MC_Analysis::Book_ljet_1_matched_p4_Gamma(int bins, double min, double max) {
		h_ljet_1_matched_p4_Gamma = new TH1F("h_ljet_1_matched_p4_Gamma","", bins, min, max);
		h_ljet_1_matched_p4_Gamma_CONTROL = new TH1F("h_ljet_1_matched_p4_Gamma_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Gamma_EXCEPT = new TH1F("h_ljet_1_matched_p4_Gamma_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Gamma_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Gamma_PRE = new TH1F("h_ljet_1_matched_p4_Gamma_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Gamma_BJET = new TH1F("h_ljet_1_matched_p4_Gamma_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Gamma_HIGH_E = new TH1F("h_ljet_1_matched_p4_Gamma_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Gamma_TRUTH = new TH1F("h_ljet_1_matched_p4_Gamma_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma);
		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma_CONTROL);
		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma_EXCEPT);
		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma_PRE);
		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma_BJET);
		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma_HIGH_E);
		hv_ljet_1_matched_p4_Gamma.push_back(h_ljet_1_matched_p4_Gamma_TRUTH);

		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma");
		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma_CONTROL");
		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma_EXCEPT");
		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma_PRE");
		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma_BJET");
		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma_HIGH_E");
		hv_ljet_1_matched_p4_Gamma_names.push_back("h_ljet_1_matched_p4_Gamma_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Plus
	void MC_Analysis::Book_ljet_1_matched_p4_Plus(int bins, double min, double max) {
		h_ljet_1_matched_p4_Plus = new TH1F("h_ljet_1_matched_p4_Plus","", bins, min, max);
		h_ljet_1_matched_p4_Plus_CONTROL = new TH1F("h_ljet_1_matched_p4_Plus_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Plus_EXCEPT = new TH1F("h_ljet_1_matched_p4_Plus_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Plus_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Plus_PRE = new TH1F("h_ljet_1_matched_p4_Plus_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Plus_BJET = new TH1F("h_ljet_1_matched_p4_Plus_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Plus_HIGH_E = new TH1F("h_ljet_1_matched_p4_Plus_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Plus_TRUTH = new TH1F("h_ljet_1_matched_p4_Plus_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus);
		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus_CONTROL);
		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus_EXCEPT);
		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus_PRE);
		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus_BJET);
		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus_HIGH_E);
		hv_ljet_1_matched_p4_Plus.push_back(h_ljet_1_matched_p4_Plus_TRUTH);

		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus");
		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus_CONTROL");
		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus_EXCEPT");
		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus_PRE");
		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus_BJET");
		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus_HIGH_E");
		hv_ljet_1_matched_p4_Plus_names.push_back("h_ljet_1_matched_p4_Plus_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Minus
	void MC_Analysis::Book_ljet_1_matched_p4_Minus(int bins, double min, double max) {
		h_ljet_1_matched_p4_Minus = new TH1F("h_ljet_1_matched_p4_Minus","", bins, min, max);
		h_ljet_1_matched_p4_Minus_CONTROL = new TH1F("h_ljet_1_matched_p4_Minus_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Minus_EXCEPT = new TH1F("h_ljet_1_matched_p4_Minus_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Minus_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Minus_PRE = new TH1F("h_ljet_1_matched_p4_Minus_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Minus_BJET = new TH1F("h_ljet_1_matched_p4_Minus_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Minus_HIGH_E = new TH1F("h_ljet_1_matched_p4_Minus_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Minus_TRUTH = new TH1F("h_ljet_1_matched_p4_Minus_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus);
		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus_CONTROL);
		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus_EXCEPT);
		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus_PRE);
		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus_BJET);
		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus_HIGH_E);
		hv_ljet_1_matched_p4_Minus.push_back(h_ljet_1_matched_p4_Minus_TRUTH);

		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus");
		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus_CONTROL");
		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus_EXCEPT");
		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus_PRE");
		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus_BJET");
		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus_HIGH_E");
		hv_ljet_1_matched_p4_Minus_names.push_back("h_ljet_1_matched_p4_Minus_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Rapidity
	void MC_Analysis::Book_ljet_1_matched_p4_Rapidity(int bins, double min, double max) {
		h_ljet_1_matched_p4_Rapidity = new TH1F("h_ljet_1_matched_p4_Rapidity","", bins, min, max);
		h_ljet_1_matched_p4_Rapidity_CONTROL = new TH1F("h_ljet_1_matched_p4_Rapidity_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Rapidity_EXCEPT = new TH1F("h_ljet_1_matched_p4_Rapidity_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Rapidity_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Rapidity_PRE = new TH1F("h_ljet_1_matched_p4_Rapidity_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Rapidity_BJET = new TH1F("h_ljet_1_matched_p4_Rapidity_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Rapidity_HIGH_E = new TH1F("h_ljet_1_matched_p4_Rapidity_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Rapidity_TRUTH = new TH1F("h_ljet_1_matched_p4_Rapidity_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity);
		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity_CONTROL);
		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity_EXCEPT);
		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity_PRE);
		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity_BJET);
		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity_HIGH_E);
		hv_ljet_1_matched_p4_Rapidity.push_back(h_ljet_1_matched_p4_Rapidity_TRUTH);

		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity");
		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity_CONTROL");
		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity_EXCEPT");
		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity_PRE");
		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity_BJET");
		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity_HIGH_E");
		hv_ljet_1_matched_p4_Rapidity_names.push_back("h_ljet_1_matched_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_Eta
	void MC_Analysis::Book_ljet_1_matched_p4_Eta(int bins, double min, double max) {
		h_ljet_1_matched_p4_Eta = new TH1F("h_ljet_1_matched_p4_Eta","", bins, min, max);
		h_ljet_1_matched_p4_Eta_CONTROL = new TH1F("h_ljet_1_matched_p4_Eta_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_Eta_EXCEPT = new TH1F("h_ljet_1_matched_p4_Eta_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_Eta_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_Eta_PRE = new TH1F("h_ljet_1_matched_p4_Eta_PRE","", bins, min, max);
		h_ljet_1_matched_p4_Eta_BJET = new TH1F("h_ljet_1_matched_p4_Eta_BJET","", bins, min, max);
		h_ljet_1_matched_p4_Eta_HIGH_E = new TH1F("h_ljet_1_matched_p4_Eta_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_Eta_TRUTH = new TH1F("h_ljet_1_matched_p4_Eta_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta);
		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta_CONTROL);
		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta_EXCEPT);
		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta_EXCEPT_FINE);
		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta_PRE);
		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta_BJET);
		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta_HIGH_E);
		hv_ljet_1_matched_p4_Eta.push_back(h_ljet_1_matched_p4_Eta_TRUTH);

		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta");
		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta_CONTROL");
		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta_EXCEPT");
		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta_EXCEPT_FINE");
		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta_PRE");
		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta_BJET");
		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta_HIGH_E");
		hv_ljet_1_matched_p4_Eta_names.push_back("h_ljet_1_matched_p4_Eta_TRUTH");

	}
	//Histogram booking function for ljet_1_matched_p4_PseudoRapidity
	void MC_Analysis::Book_ljet_1_matched_p4_PseudoRapidity(int bins, double min, double max) {
		h_ljet_1_matched_p4_PseudoRapidity = new TH1F("h_ljet_1_matched_p4_PseudoRapidity","", bins, min, max);
		h_ljet_1_matched_p4_PseudoRapidity_CONTROL = new TH1F("h_ljet_1_matched_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_ljet_1_matched_p4_PseudoRapidity_EXCEPT = new TH1F("h_ljet_1_matched_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_ljet_1_matched_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_ljet_1_matched_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_matched_p4_PseudoRapidity_PRE = new TH1F("h_ljet_1_matched_p4_PseudoRapidity_PRE","", bins, min, max);
		h_ljet_1_matched_p4_PseudoRapidity_BJET = new TH1F("h_ljet_1_matched_p4_PseudoRapidity_BJET","", bins, min, max);
		h_ljet_1_matched_p4_PseudoRapidity_HIGH_E = new TH1F("h_ljet_1_matched_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_ljet_1_matched_p4_PseudoRapidity_TRUTH = new TH1F("h_ljet_1_matched_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity);
		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity_CONTROL);
		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity_EXCEPT);
		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity_EXCEPT_FINE);
		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity_PRE);
		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity_BJET);
		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity_HIGH_E);
		hv_ljet_1_matched_p4_PseudoRapidity.push_back(h_ljet_1_matched_p4_PseudoRapidity_TRUTH);

		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity");
		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity_CONTROL");
		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity_EXCEPT");
		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity_EXCEPT_FINE");
		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity_PRE");
		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity_BJET");
		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity_HIGH_E");
		hv_ljet_1_matched_p4_PseudoRapidity_names.push_back("h_ljet_1_matched_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_1_matched_p4 ----- ///

//Histogram booking function for ljet_1_origin
void MC_Analysis::Book_ljet_1_origin(int bins, double min, double max) {
	h_ljet_1_origin = new TH1F("h_ljet_1_origin", "", bins, min, max);
	h_ljet_1_origin_CONTROL = new TH1F("h_ljet_1_origin_CONTROL", "", bins, min, max);
	h_ljet_1_origin_EXCEPT = new TH1F("h_ljet_1_origin_EXCEPT", "", bins, min, max);
	h_ljet_1_origin_EXCEPT_FINE = new TH1F("h_ljet_1_origin_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_origin_PRE = new TH1F("h_ljet_1_origin_PRE", "", bins, min, max);
	h_ljet_1_origin_BJET = new TH1F("h_ljet_1_origin_BJET", "", bins, min, max);
	h_ljet_1_origin_HIGH_E = new TH1F("h_ljet_1_origin_HIGH_E", "", bins, min, max);
	h_ljet_1_origin_TRUTH = new TH1F("h_ljet_1_origin_TRUTH", "", bins, min, max);

	hv_ljet_1_origin.push_back(h_ljet_1_origin);
	hv_ljet_1_origin.push_back(h_ljet_1_origin_CONTROL);
	hv_ljet_1_origin.push_back(h_ljet_1_origin_EXCEPT);
	hv_ljet_1_origin.push_back(h_ljet_1_origin_EXCEPT_FINE);
	hv_ljet_1_origin.push_back(h_ljet_1_origin_PRE);
	hv_ljet_1_origin.push_back(h_ljet_1_origin_BJET);
	hv_ljet_1_origin.push_back(h_ljet_1_origin_HIGH_E);
	hv_ljet_1_origin.push_back(h_ljet_1_origin_TRUTH);

	hv_ljet_1_origin_names.push_back("h_ljet_1_origin");
	hv_ljet_1_origin_names.push_back("h_ljet_1_origin_CONTROL");
	hv_ljet_1_origin_names.push_back("h_ljet_1_origin_EXCEPT");
	hv_ljet_1_origin_names.push_back("h_ljet_1_origin_EXCEPT_FINE");
	hv_ljet_1_origin_names.push_back("h_ljet_1_origin_PRE");
	hv_ljet_1_origin_names.push_back("h_ljet_1_origin_BJET");
	hv_ljet_1_origin_names.push_back("h_ljet_1_origin_HIGH_E");
	hv_ljet_1_origin_names.push_back("h_ljet_1_origin_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_1_p4 ----- //
	//Histogram booking function for ljet_1_p4_X
	void MC_Analysis::Book_ljet_1_p4_X(int bins, double min, double max) {
		h_ljet_1_p4_X = new TH1F("h_ljet_1_p4_X","", bins, min, max);
		h_ljet_1_p4_X_CONTROL = new TH1F("h_ljet_1_p4_X_CONTROL","", bins, min, max);
		h_ljet_1_p4_X_EXCEPT = new TH1F("h_ljet_1_p4_X_EXCEPT","", bins, min, max);
		h_ljet_1_p4_X_EXCEPT_FINE = new TH1F("h_ljet_1_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_X_PRE = new TH1F("h_ljet_1_p4_X_PRE","", bins, min, max);
		h_ljet_1_p4_X_BJET = new TH1F("h_ljet_1_p4_X_BJET","", bins, min, max);
		h_ljet_1_p4_X_HIGH_E = new TH1F("h_ljet_1_p4_X_HIGH_E","", bins, min, max);
		h_ljet_1_p4_X_TRUTH = new TH1F("h_ljet_1_p4_X_TRUTH","", bins, min, max);

		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X);
		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X_CONTROL);
		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X_EXCEPT);
		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X_EXCEPT_FINE);
		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X_PRE);
		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X_BJET);
		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X_HIGH_E);
		hv_ljet_1_p4_X.push_back(h_ljet_1_p4_X_TRUTH);

		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X");
		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X_CONTROL");
		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X_EXCEPT");
		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X_EXCEPT_FINE");
		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X_PRE");
		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X_BJET");
		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X_HIGH_E");
		hv_ljet_1_p4_X_names.push_back("h_ljet_1_p4_X_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Y
	void MC_Analysis::Book_ljet_1_p4_Y(int bins, double min, double max) {
		h_ljet_1_p4_Y = new TH1F("h_ljet_1_p4_Y","", bins, min, max);
		h_ljet_1_p4_Y_CONTROL = new TH1F("h_ljet_1_p4_Y_CONTROL","", bins, min, max);
		h_ljet_1_p4_Y_EXCEPT = new TH1F("h_ljet_1_p4_Y_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Y_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Y_PRE = new TH1F("h_ljet_1_p4_Y_PRE","", bins, min, max);
		h_ljet_1_p4_Y_BJET = new TH1F("h_ljet_1_p4_Y_BJET","", bins, min, max);
		h_ljet_1_p4_Y_HIGH_E = new TH1F("h_ljet_1_p4_Y_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Y_TRUTH = new TH1F("h_ljet_1_p4_Y_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y);
		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y_CONTROL);
		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y_EXCEPT);
		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y_EXCEPT_FINE);
		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y_PRE);
		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y_BJET);
		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y_HIGH_E);
		hv_ljet_1_p4_Y.push_back(h_ljet_1_p4_Y_TRUTH);

		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y");
		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y_CONTROL");
		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y_EXCEPT");
		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y_EXCEPT_FINE");
		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y_PRE");
		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y_BJET");
		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y_HIGH_E");
		hv_ljet_1_p4_Y_names.push_back("h_ljet_1_p4_Y_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Z
	void MC_Analysis::Book_ljet_1_p4_Z(int bins, double min, double max) {
		h_ljet_1_p4_Z = new TH1F("h_ljet_1_p4_Z","", bins, min, max);
		h_ljet_1_p4_Z_CONTROL = new TH1F("h_ljet_1_p4_Z_CONTROL","", bins, min, max);
		h_ljet_1_p4_Z_EXCEPT = new TH1F("h_ljet_1_p4_Z_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Z_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Z_PRE = new TH1F("h_ljet_1_p4_Z_PRE","", bins, min, max);
		h_ljet_1_p4_Z_BJET = new TH1F("h_ljet_1_p4_Z_BJET","", bins, min, max);
		h_ljet_1_p4_Z_HIGH_E = new TH1F("h_ljet_1_p4_Z_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Z_TRUTH = new TH1F("h_ljet_1_p4_Z_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z);
		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z_CONTROL);
		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z_EXCEPT);
		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z_EXCEPT_FINE);
		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z_PRE);
		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z_BJET);
		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z_HIGH_E);
		hv_ljet_1_p4_Z.push_back(h_ljet_1_p4_Z_TRUTH);

		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z");
		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z_CONTROL");
		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z_EXCEPT");
		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z_EXCEPT_FINE");
		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z_PRE");
		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z_BJET");
		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z_HIGH_E");
		hv_ljet_1_p4_Z_names.push_back("h_ljet_1_p4_Z_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_T
	void MC_Analysis::Book_ljet_1_p4_T(int bins, double min, double max) {
		h_ljet_1_p4_T = new TH1F("h_ljet_1_p4_T","", bins, min, max);
		h_ljet_1_p4_T_CONTROL = new TH1F("h_ljet_1_p4_T_CONTROL","", bins, min, max);
		h_ljet_1_p4_T_EXCEPT = new TH1F("h_ljet_1_p4_T_EXCEPT","", bins, min, max);
		h_ljet_1_p4_T_EXCEPT_FINE = new TH1F("h_ljet_1_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_T_PRE = new TH1F("h_ljet_1_p4_T_PRE","", bins, min, max);
		h_ljet_1_p4_T_BJET = new TH1F("h_ljet_1_p4_T_BJET","", bins, min, max);
		h_ljet_1_p4_T_HIGH_E = new TH1F("h_ljet_1_p4_T_HIGH_E","", bins, min, max);
		h_ljet_1_p4_T_TRUTH = new TH1F("h_ljet_1_p4_T_TRUTH","", bins, min, max);

		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T);
		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T_CONTROL);
		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T_EXCEPT);
		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T_EXCEPT_FINE);
		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T_PRE);
		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T_BJET);
		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T_HIGH_E);
		hv_ljet_1_p4_T.push_back(h_ljet_1_p4_T_TRUTH);

		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T");
		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T_CONTROL");
		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T_EXCEPT");
		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T_EXCEPT_FINE");
		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T_PRE");
		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T_BJET");
		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T_HIGH_E");
		hv_ljet_1_p4_T_names.push_back("h_ljet_1_p4_T_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Px
	void MC_Analysis::Book_ljet_1_p4_Px(int bins, double min, double max) {
		h_ljet_1_p4_Px = new TH1F("h_ljet_1_p4_Px","", bins, min, max);
		h_ljet_1_p4_Px_CONTROL = new TH1F("h_ljet_1_p4_Px_CONTROL","", bins, min, max);
		h_ljet_1_p4_Px_EXCEPT = new TH1F("h_ljet_1_p4_Px_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Px_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Px_PRE = new TH1F("h_ljet_1_p4_Px_PRE","", bins, min, max);
		h_ljet_1_p4_Px_BJET = new TH1F("h_ljet_1_p4_Px_BJET","", bins, min, max);
		h_ljet_1_p4_Px_HIGH_E = new TH1F("h_ljet_1_p4_Px_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Px_TRUTH = new TH1F("h_ljet_1_p4_Px_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px);
		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px_CONTROL);
		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px_EXCEPT);
		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px_EXCEPT_FINE);
		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px_PRE);
		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px_BJET);
		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px_HIGH_E);
		hv_ljet_1_p4_Px.push_back(h_ljet_1_p4_Px_TRUTH);

		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px");
		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px_CONTROL");
		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px_EXCEPT");
		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px_EXCEPT_FINE");
		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px_PRE");
		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px_BJET");
		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px_HIGH_E");
		hv_ljet_1_p4_Px_names.push_back("h_ljet_1_p4_Px_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Py
	void MC_Analysis::Book_ljet_1_p4_Py(int bins, double min, double max) {
		h_ljet_1_p4_Py = new TH1F("h_ljet_1_p4_Py","", bins, min, max);
		h_ljet_1_p4_Py_CONTROL = new TH1F("h_ljet_1_p4_Py_CONTROL","", bins, min, max);
		h_ljet_1_p4_Py_EXCEPT = new TH1F("h_ljet_1_p4_Py_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Py_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Py_PRE = new TH1F("h_ljet_1_p4_Py_PRE","", bins, min, max);
		h_ljet_1_p4_Py_BJET = new TH1F("h_ljet_1_p4_Py_BJET","", bins, min, max);
		h_ljet_1_p4_Py_HIGH_E = new TH1F("h_ljet_1_p4_Py_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Py_TRUTH = new TH1F("h_ljet_1_p4_Py_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py);
		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py_CONTROL);
		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py_EXCEPT);
		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py_EXCEPT_FINE);
		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py_PRE);
		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py_BJET);
		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py_HIGH_E);
		hv_ljet_1_p4_Py.push_back(h_ljet_1_p4_Py_TRUTH);

		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py");
		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py_CONTROL");
		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py_EXCEPT");
		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py_EXCEPT_FINE");
		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py_PRE");
		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py_BJET");
		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py_HIGH_E");
		hv_ljet_1_p4_Py_names.push_back("h_ljet_1_p4_Py_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Pz
	void MC_Analysis::Book_ljet_1_p4_Pz(int bins, double min, double max) {
		h_ljet_1_p4_Pz = new TH1F("h_ljet_1_p4_Pz","", bins, min, max);
		h_ljet_1_p4_Pz_CONTROL = new TH1F("h_ljet_1_p4_Pz_CONTROL","", bins, min, max);
		h_ljet_1_p4_Pz_EXCEPT = new TH1F("h_ljet_1_p4_Pz_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Pz_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Pz_PRE = new TH1F("h_ljet_1_p4_Pz_PRE","", bins, min, max);
		h_ljet_1_p4_Pz_BJET = new TH1F("h_ljet_1_p4_Pz_BJET","", bins, min, max);
		h_ljet_1_p4_Pz_HIGH_E = new TH1F("h_ljet_1_p4_Pz_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Pz_TRUTH = new TH1F("h_ljet_1_p4_Pz_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz);
		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz_CONTROL);
		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz_EXCEPT);
		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz_EXCEPT_FINE);
		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz_PRE);
		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz_BJET);
		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz_HIGH_E);
		hv_ljet_1_p4_Pz.push_back(h_ljet_1_p4_Pz_TRUTH);

		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz");
		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz_CONTROL");
		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz_EXCEPT");
		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz_EXCEPT_FINE");
		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz_PRE");
		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz_BJET");
		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz_HIGH_E");
		hv_ljet_1_p4_Pz_names.push_back("h_ljet_1_p4_Pz_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Energy
	void MC_Analysis::Book_ljet_1_p4_Energy(int bins, double min, double max) {
		h_ljet_1_p4_Energy = new TH1F("h_ljet_1_p4_Energy","", bins, min, max);
		h_ljet_1_p4_Energy_CONTROL = new TH1F("h_ljet_1_p4_Energy_CONTROL","", bins, min, max);
		h_ljet_1_p4_Energy_EXCEPT = new TH1F("h_ljet_1_p4_Energy_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Energy_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Energy_PRE = new TH1F("h_ljet_1_p4_Energy_PRE","", bins, min, max);
		h_ljet_1_p4_Energy_BJET = new TH1F("h_ljet_1_p4_Energy_BJET","", bins, min, max);
		h_ljet_1_p4_Energy_HIGH_E = new TH1F("h_ljet_1_p4_Energy_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Energy_TRUTH = new TH1F("h_ljet_1_p4_Energy_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy);
		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy_CONTROL);
		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy_EXCEPT);
		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy_EXCEPT_FINE);
		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy_PRE);
		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy_BJET);
		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy_HIGH_E);
		hv_ljet_1_p4_Energy.push_back(h_ljet_1_p4_Energy_TRUTH);

		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy");
		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy_CONTROL");
		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy_EXCEPT");
		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy_EXCEPT_FINE");
		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy_PRE");
		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy_BJET");
		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy_HIGH_E");
		hv_ljet_1_p4_Energy_names.push_back("h_ljet_1_p4_Energy_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Theta
	void MC_Analysis::Book_ljet_1_p4_Theta(int bins, double min, double max) {
		h_ljet_1_p4_Theta = new TH1F("h_ljet_1_p4_Theta","", bins, min, max);
		h_ljet_1_p4_Theta_CONTROL = new TH1F("h_ljet_1_p4_Theta_CONTROL","", bins, min, max);
		h_ljet_1_p4_Theta_EXCEPT = new TH1F("h_ljet_1_p4_Theta_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Theta_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Theta_PRE = new TH1F("h_ljet_1_p4_Theta_PRE","", bins, min, max);
		h_ljet_1_p4_Theta_BJET = new TH1F("h_ljet_1_p4_Theta_BJET","", bins, min, max);
		h_ljet_1_p4_Theta_HIGH_E = new TH1F("h_ljet_1_p4_Theta_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Theta_TRUTH = new TH1F("h_ljet_1_p4_Theta_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta);
		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta_CONTROL);
		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta_EXCEPT);
		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta_EXCEPT_FINE);
		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta_PRE);
		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta_BJET);
		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta_HIGH_E);
		hv_ljet_1_p4_Theta.push_back(h_ljet_1_p4_Theta_TRUTH);

		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta");
		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta_CONTROL");
		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta_EXCEPT");
		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta_EXCEPT_FINE");
		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta_PRE");
		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta_BJET");
		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta_HIGH_E");
		hv_ljet_1_p4_Theta_names.push_back("h_ljet_1_p4_Theta_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_CosTheta
	void MC_Analysis::Book_ljet_1_p4_CosTheta(int bins, double min, double max) {
		h_ljet_1_p4_CosTheta = new TH1F("h_ljet_1_p4_CosTheta","", bins, min, max);
		h_ljet_1_p4_CosTheta_CONTROL = new TH1F("h_ljet_1_p4_CosTheta_CONTROL","", bins, min, max);
		h_ljet_1_p4_CosTheta_EXCEPT = new TH1F("h_ljet_1_p4_CosTheta_EXCEPT","", bins, min, max);
		h_ljet_1_p4_CosTheta_EXCEPT_FINE = new TH1F("h_ljet_1_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_CosTheta_PRE = new TH1F("h_ljet_1_p4_CosTheta_PRE","", bins, min, max);
		h_ljet_1_p4_CosTheta_BJET = new TH1F("h_ljet_1_p4_CosTheta_BJET","", bins, min, max);
		h_ljet_1_p4_CosTheta_HIGH_E = new TH1F("h_ljet_1_p4_CosTheta_HIGH_E","", bins, min, max);
		h_ljet_1_p4_CosTheta_TRUTH = new TH1F("h_ljet_1_p4_CosTheta_TRUTH","", bins, min, max);

		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta);
		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta_CONTROL);
		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta_EXCEPT);
		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta_EXCEPT_FINE);
		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta_PRE);
		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta_BJET);
		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta_HIGH_E);
		hv_ljet_1_p4_CosTheta.push_back(h_ljet_1_p4_CosTheta_TRUTH);

		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta");
		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta_CONTROL");
		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta_EXCEPT");
		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta_EXCEPT_FINE");
		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta_PRE");
		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta_BJET");
		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta_HIGH_E");
		hv_ljet_1_p4_CosTheta_names.push_back("h_ljet_1_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Phi
	void MC_Analysis::Book_ljet_1_p4_Phi(int bins, double min, double max) {
		h_ljet_1_p4_Phi = new TH1F("h_ljet_1_p4_Phi","", bins, min, max);
		h_ljet_1_p4_Phi_CONTROL = new TH1F("h_ljet_1_p4_Phi_CONTROL","", bins, min, max);
		h_ljet_1_p4_Phi_EXCEPT = new TH1F("h_ljet_1_p4_Phi_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Phi_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Phi_PRE = new TH1F("h_ljet_1_p4_Phi_PRE","", bins, min, max);
		h_ljet_1_p4_Phi_BJET = new TH1F("h_ljet_1_p4_Phi_BJET","", bins, min, max);
		h_ljet_1_p4_Phi_HIGH_E = new TH1F("h_ljet_1_p4_Phi_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Phi_TRUTH = new TH1F("h_ljet_1_p4_Phi_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi);
		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi_CONTROL);
		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi_EXCEPT);
		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi_EXCEPT_FINE);
		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi_PRE);
		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi_BJET);
		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi_HIGH_E);
		hv_ljet_1_p4_Phi.push_back(h_ljet_1_p4_Phi_TRUTH);

		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi");
		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi_CONTROL");
		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi_EXCEPT");
		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi_EXCEPT_FINE");
		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi_PRE");
		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi_BJET");
		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi_HIGH_E");
		hv_ljet_1_p4_Phi_names.push_back("h_ljet_1_p4_Phi_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Rho
	void MC_Analysis::Book_ljet_1_p4_Rho(int bins, double min, double max) {
		h_ljet_1_p4_Rho = new TH1F("h_ljet_1_p4_Rho","", bins, min, max);
		h_ljet_1_p4_Rho_CONTROL = new TH1F("h_ljet_1_p4_Rho_CONTROL","", bins, min, max);
		h_ljet_1_p4_Rho_EXCEPT = new TH1F("h_ljet_1_p4_Rho_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Rho_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Rho_PRE = new TH1F("h_ljet_1_p4_Rho_PRE","", bins, min, max);
		h_ljet_1_p4_Rho_BJET = new TH1F("h_ljet_1_p4_Rho_BJET","", bins, min, max);
		h_ljet_1_p4_Rho_HIGH_E = new TH1F("h_ljet_1_p4_Rho_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Rho_TRUTH = new TH1F("h_ljet_1_p4_Rho_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho);
		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho_CONTROL);
		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho_EXCEPT);
		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho_EXCEPT_FINE);
		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho_PRE);
		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho_BJET);
		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho_HIGH_E);
		hv_ljet_1_p4_Rho.push_back(h_ljet_1_p4_Rho_TRUTH);

		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho");
		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho_CONTROL");
		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho_EXCEPT");
		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho_EXCEPT_FINE");
		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho_PRE");
		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho_BJET");
		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho_HIGH_E");
		hv_ljet_1_p4_Rho_names.push_back("h_ljet_1_p4_Rho_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Perp2
	void MC_Analysis::Book_ljet_1_p4_Perp2(int bins, double min, double max) {
		h_ljet_1_p4_Perp2 = new TH1F("h_ljet_1_p4_Perp2","", bins, min, max);
		h_ljet_1_p4_Perp2_CONTROL = new TH1F("h_ljet_1_p4_Perp2_CONTROL","", bins, min, max);
		h_ljet_1_p4_Perp2_EXCEPT = new TH1F("h_ljet_1_p4_Perp2_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Perp2_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Perp2_PRE = new TH1F("h_ljet_1_p4_Perp2_PRE","", bins, min, max);
		h_ljet_1_p4_Perp2_BJET = new TH1F("h_ljet_1_p4_Perp2_BJET","", bins, min, max);
		h_ljet_1_p4_Perp2_HIGH_E = new TH1F("h_ljet_1_p4_Perp2_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Perp2_TRUTH = new TH1F("h_ljet_1_p4_Perp2_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2);
		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2_CONTROL);
		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2_EXCEPT);
		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2_EXCEPT_FINE);
		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2_PRE);
		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2_BJET);
		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2_HIGH_E);
		hv_ljet_1_p4_Perp2.push_back(h_ljet_1_p4_Perp2_TRUTH);

		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2");
		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2_CONTROL");
		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2_EXCEPT");
		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2_EXCEPT_FINE");
		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2_PRE");
		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2_BJET");
		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2_HIGH_E");
		hv_ljet_1_p4_Perp2_names.push_back("h_ljet_1_p4_Perp2_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Pt
	void MC_Analysis::Book_ljet_1_p4_Pt(int bins, double min, double max) {
		h_ljet_1_p4_Pt = new TH1F("h_ljet_1_p4_Pt","", bins, min, max);
		h_ljet_1_p4_Pt_CONTROL = new TH1F("h_ljet_1_p4_Pt_CONTROL","", bins, min, max);
		h_ljet_1_p4_Pt_EXCEPT = new TH1F("h_ljet_1_p4_Pt_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Pt_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Pt_PRE = new TH1F("h_ljet_1_p4_Pt_PRE","", bins, min, max);
		h_ljet_1_p4_Pt_BJET = new TH1F("h_ljet_1_p4_Pt_BJET","", bins, min, max);
		h_ljet_1_p4_Pt_HIGH_E = new TH1F("h_ljet_1_p4_Pt_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Pt_TRUTH = new TH1F("h_ljet_1_p4_Pt_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt);
		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt_CONTROL);
		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt_EXCEPT);
		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt_EXCEPT_FINE);
		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt_PRE);
		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt_BJET);
		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt_HIGH_E);
		hv_ljet_1_p4_Pt.push_back(h_ljet_1_p4_Pt_TRUTH);

		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt");
		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt_CONTROL");
		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt_EXCEPT");
		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt_EXCEPT_FINE");
		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt_PRE");
		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt_BJET");
		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt_HIGH_E");
		hv_ljet_1_p4_Pt_names.push_back("h_ljet_1_p4_Pt_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Perp
	void MC_Analysis::Book_ljet_1_p4_Perp(int bins, double min, double max) {
		h_ljet_1_p4_Perp = new TH1F("h_ljet_1_p4_Perp","", bins, min, max);
		h_ljet_1_p4_Perp_CONTROL = new TH1F("h_ljet_1_p4_Perp_CONTROL","", bins, min, max);
		h_ljet_1_p4_Perp_EXCEPT = new TH1F("h_ljet_1_p4_Perp_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Perp_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Perp_PRE = new TH1F("h_ljet_1_p4_Perp_PRE","", bins, min, max);
		h_ljet_1_p4_Perp_BJET = new TH1F("h_ljet_1_p4_Perp_BJET","", bins, min, max);
		h_ljet_1_p4_Perp_HIGH_E = new TH1F("h_ljet_1_p4_Perp_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Perp_TRUTH = new TH1F("h_ljet_1_p4_Perp_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp);
		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp_CONTROL);
		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp_EXCEPT);
		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp_EXCEPT_FINE);
		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp_PRE);
		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp_BJET);
		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp_HIGH_E);
		hv_ljet_1_p4_Perp.push_back(h_ljet_1_p4_Perp_TRUTH);

		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp");
		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp_CONTROL");
		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp_EXCEPT");
		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp_EXCEPT_FINE");
		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp_PRE");
		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp_BJET");
		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp_HIGH_E");
		hv_ljet_1_p4_Perp_names.push_back("h_ljet_1_p4_Perp_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Et2
	void MC_Analysis::Book_ljet_1_p4_Et2(int bins, double min, double max) {
		h_ljet_1_p4_Et2 = new TH1F("h_ljet_1_p4_Et2","", bins, min, max);
		h_ljet_1_p4_Et2_CONTROL = new TH1F("h_ljet_1_p4_Et2_CONTROL","", bins, min, max);
		h_ljet_1_p4_Et2_EXCEPT = new TH1F("h_ljet_1_p4_Et2_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Et2_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Et2_PRE = new TH1F("h_ljet_1_p4_Et2_PRE","", bins, min, max);
		h_ljet_1_p4_Et2_BJET = new TH1F("h_ljet_1_p4_Et2_BJET","", bins, min, max);
		h_ljet_1_p4_Et2_HIGH_E = new TH1F("h_ljet_1_p4_Et2_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Et2_TRUTH = new TH1F("h_ljet_1_p4_Et2_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2);
		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2_CONTROL);
		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2_EXCEPT);
		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2_EXCEPT_FINE);
		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2_PRE);
		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2_BJET);
		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2_HIGH_E);
		hv_ljet_1_p4_Et2.push_back(h_ljet_1_p4_Et2_TRUTH);

		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2");
		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2_CONTROL");
		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2_EXCEPT");
		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2_EXCEPT_FINE");
		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2_PRE");
		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2_BJET");
		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2_HIGH_E");
		hv_ljet_1_p4_Et2_names.push_back("h_ljet_1_p4_Et2_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Et
	void MC_Analysis::Book_ljet_1_p4_Et(int bins, double min, double max) {
		h_ljet_1_p4_Et = new TH1F("h_ljet_1_p4_Et","", bins, min, max);
		h_ljet_1_p4_Et_CONTROL = new TH1F("h_ljet_1_p4_Et_CONTROL","", bins, min, max);
		h_ljet_1_p4_Et_EXCEPT = new TH1F("h_ljet_1_p4_Et_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Et_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Et_PRE = new TH1F("h_ljet_1_p4_Et_PRE","", bins, min, max);
		h_ljet_1_p4_Et_BJET = new TH1F("h_ljet_1_p4_Et_BJET","", bins, min, max);
		h_ljet_1_p4_Et_HIGH_E = new TH1F("h_ljet_1_p4_Et_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Et_TRUTH = new TH1F("h_ljet_1_p4_Et_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et);
		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et_CONTROL);
		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et_EXCEPT);
		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et_EXCEPT_FINE);
		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et_PRE);
		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et_BJET);
		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et_HIGH_E);
		hv_ljet_1_p4_Et.push_back(h_ljet_1_p4_Et_TRUTH);

		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et");
		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et_CONTROL");
		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et_EXCEPT");
		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et_EXCEPT_FINE");
		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et_PRE");
		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et_BJET");
		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et_HIGH_E");
		hv_ljet_1_p4_Et_names.push_back("h_ljet_1_p4_Et_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Mag2
	void MC_Analysis::Book_ljet_1_p4_Mag2(int bins, double min, double max) {
		h_ljet_1_p4_Mag2 = new TH1F("h_ljet_1_p4_Mag2","", bins, min, max);
		h_ljet_1_p4_Mag2_CONTROL = new TH1F("h_ljet_1_p4_Mag2_CONTROL","", bins, min, max);
		h_ljet_1_p4_Mag2_EXCEPT = new TH1F("h_ljet_1_p4_Mag2_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Mag2_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Mag2_PRE = new TH1F("h_ljet_1_p4_Mag2_PRE","", bins, min, max);
		h_ljet_1_p4_Mag2_BJET = new TH1F("h_ljet_1_p4_Mag2_BJET","", bins, min, max);
		h_ljet_1_p4_Mag2_HIGH_E = new TH1F("h_ljet_1_p4_Mag2_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Mag2_TRUTH = new TH1F("h_ljet_1_p4_Mag2_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2);
		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2_CONTROL);
		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2_EXCEPT);
		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2_EXCEPT_FINE);
		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2_PRE);
		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2_BJET);
		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2_HIGH_E);
		hv_ljet_1_p4_Mag2.push_back(h_ljet_1_p4_Mag2_TRUTH);

		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2");
		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2_CONTROL");
		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2_EXCEPT");
		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2_EXCEPT_FINE");
		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2_PRE");
		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2_BJET");
		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2_HIGH_E");
		hv_ljet_1_p4_Mag2_names.push_back("h_ljet_1_p4_Mag2_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_M2
	void MC_Analysis::Book_ljet_1_p4_M2(int bins, double min, double max) {
		h_ljet_1_p4_M2 = new TH1F("h_ljet_1_p4_M2","", bins, min, max);
		h_ljet_1_p4_M2_CONTROL = new TH1F("h_ljet_1_p4_M2_CONTROL","", bins, min, max);
		h_ljet_1_p4_M2_EXCEPT = new TH1F("h_ljet_1_p4_M2_EXCEPT","", bins, min, max);
		h_ljet_1_p4_M2_EXCEPT_FINE = new TH1F("h_ljet_1_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_M2_PRE = new TH1F("h_ljet_1_p4_M2_PRE","", bins, min, max);
		h_ljet_1_p4_M2_BJET = new TH1F("h_ljet_1_p4_M2_BJET","", bins, min, max);
		h_ljet_1_p4_M2_HIGH_E = new TH1F("h_ljet_1_p4_M2_HIGH_E","", bins, min, max);
		h_ljet_1_p4_M2_TRUTH = new TH1F("h_ljet_1_p4_M2_TRUTH","", bins, min, max);

		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2);
		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2_CONTROL);
		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2_EXCEPT);
		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2_EXCEPT_FINE);
		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2_PRE);
		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2_BJET);
		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2_HIGH_E);
		hv_ljet_1_p4_M2.push_back(h_ljet_1_p4_M2_TRUTH);

		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2");
		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2_CONTROL");
		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2_EXCEPT");
		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2_EXCEPT_FINE");
		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2_PRE");
		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2_BJET");
		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2_HIGH_E");
		hv_ljet_1_p4_M2_names.push_back("h_ljet_1_p4_M2_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Mag
	void MC_Analysis::Book_ljet_1_p4_Mag(int bins, double min, double max) {
		h_ljet_1_p4_Mag = new TH1F("h_ljet_1_p4_Mag","", bins, min, max);
		h_ljet_1_p4_Mag_CONTROL = new TH1F("h_ljet_1_p4_Mag_CONTROL","", bins, min, max);
		h_ljet_1_p4_Mag_EXCEPT = new TH1F("h_ljet_1_p4_Mag_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Mag_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Mag_PRE = new TH1F("h_ljet_1_p4_Mag_PRE","", bins, min, max);
		h_ljet_1_p4_Mag_BJET = new TH1F("h_ljet_1_p4_Mag_BJET","", bins, min, max);
		h_ljet_1_p4_Mag_HIGH_E = new TH1F("h_ljet_1_p4_Mag_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Mag_TRUTH = new TH1F("h_ljet_1_p4_Mag_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag);
		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag_CONTROL);
		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag_EXCEPT);
		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag_EXCEPT_FINE);
		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag_PRE);
		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag_BJET);
		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag_HIGH_E);
		hv_ljet_1_p4_Mag.push_back(h_ljet_1_p4_Mag_TRUTH);

		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag");
		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag_CONTROL");
		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag_EXCEPT");
		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag_EXCEPT_FINE");
		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag_PRE");
		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag_BJET");
		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag_HIGH_E");
		hv_ljet_1_p4_Mag_names.push_back("h_ljet_1_p4_Mag_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_M
	void MC_Analysis::Book_ljet_1_p4_M(int bins, double min, double max) {
		h_ljet_1_p4_M = new TH1F("h_ljet_1_p4_M","", bins, min, max);
		h_ljet_1_p4_M_CONTROL = new TH1F("h_ljet_1_p4_M_CONTROL","", bins, min, max);
		h_ljet_1_p4_M_EXCEPT = new TH1F("h_ljet_1_p4_M_EXCEPT","", bins, min, max);
		h_ljet_1_p4_M_EXCEPT_FINE = new TH1F("h_ljet_1_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_M_PRE = new TH1F("h_ljet_1_p4_M_PRE","", bins, min, max);
		h_ljet_1_p4_M_BJET = new TH1F("h_ljet_1_p4_M_BJET","", bins, min, max);
		h_ljet_1_p4_M_HIGH_E = new TH1F("h_ljet_1_p4_M_HIGH_E","", bins, min, max);
		h_ljet_1_p4_M_TRUTH = new TH1F("h_ljet_1_p4_M_TRUTH","", bins, min, max);

		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M);
		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M_CONTROL);
		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M_EXCEPT);
		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M_EXCEPT_FINE);
		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M_PRE);
		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M_BJET);
		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M_HIGH_E);
		hv_ljet_1_p4_M.push_back(h_ljet_1_p4_M_TRUTH);

		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M");
		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M_CONTROL");
		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M_EXCEPT");
		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M_EXCEPT_FINE");
		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M_PRE");
		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M_BJET");
		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M_HIGH_E");
		hv_ljet_1_p4_M_names.push_back("h_ljet_1_p4_M_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Mt2
	void MC_Analysis::Book_ljet_1_p4_Mt2(int bins, double min, double max) {
		h_ljet_1_p4_Mt2 = new TH1F("h_ljet_1_p4_Mt2","", bins, min, max);
		h_ljet_1_p4_Mt2_CONTROL = new TH1F("h_ljet_1_p4_Mt2_CONTROL","", bins, min, max);
		h_ljet_1_p4_Mt2_EXCEPT = new TH1F("h_ljet_1_p4_Mt2_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Mt2_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Mt2_PRE = new TH1F("h_ljet_1_p4_Mt2_PRE","", bins, min, max);
		h_ljet_1_p4_Mt2_BJET = new TH1F("h_ljet_1_p4_Mt2_BJET","", bins, min, max);
		h_ljet_1_p4_Mt2_HIGH_E = new TH1F("h_ljet_1_p4_Mt2_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Mt2_TRUTH = new TH1F("h_ljet_1_p4_Mt2_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2);
		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2_CONTROL);
		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2_EXCEPT);
		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2_EXCEPT_FINE);
		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2_PRE);
		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2_BJET);
		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2_HIGH_E);
		hv_ljet_1_p4_Mt2.push_back(h_ljet_1_p4_Mt2_TRUTH);

		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2");
		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2_CONTROL");
		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2_EXCEPT");
		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2_EXCEPT_FINE");
		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2_PRE");
		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2_BJET");
		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2_HIGH_E");
		hv_ljet_1_p4_Mt2_names.push_back("h_ljet_1_p4_Mt2_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Mt
	void MC_Analysis::Book_ljet_1_p4_Mt(int bins, double min, double max) {
		h_ljet_1_p4_Mt = new TH1F("h_ljet_1_p4_Mt","", bins, min, max);
		h_ljet_1_p4_Mt_CONTROL = new TH1F("h_ljet_1_p4_Mt_CONTROL","", bins, min, max);
		h_ljet_1_p4_Mt_EXCEPT = new TH1F("h_ljet_1_p4_Mt_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Mt_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Mt_PRE = new TH1F("h_ljet_1_p4_Mt_PRE","", bins, min, max);
		h_ljet_1_p4_Mt_BJET = new TH1F("h_ljet_1_p4_Mt_BJET","", bins, min, max);
		h_ljet_1_p4_Mt_HIGH_E = new TH1F("h_ljet_1_p4_Mt_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Mt_TRUTH = new TH1F("h_ljet_1_p4_Mt_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt);
		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt_CONTROL);
		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt_EXCEPT);
		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt_EXCEPT_FINE);
		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt_PRE);
		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt_BJET);
		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt_HIGH_E);
		hv_ljet_1_p4_Mt.push_back(h_ljet_1_p4_Mt_TRUTH);

		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt");
		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt_CONTROL");
		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt_EXCEPT");
		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt_EXCEPT_FINE");
		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt_PRE");
		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt_BJET");
		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt_HIGH_E");
		hv_ljet_1_p4_Mt_names.push_back("h_ljet_1_p4_Mt_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Beta
	void MC_Analysis::Book_ljet_1_p4_Beta(int bins, double min, double max) {
		h_ljet_1_p4_Beta = new TH1F("h_ljet_1_p4_Beta","", bins, min, max);
		h_ljet_1_p4_Beta_CONTROL = new TH1F("h_ljet_1_p4_Beta_CONTROL","", bins, min, max);
		h_ljet_1_p4_Beta_EXCEPT = new TH1F("h_ljet_1_p4_Beta_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Beta_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Beta_PRE = new TH1F("h_ljet_1_p4_Beta_PRE","", bins, min, max);
		h_ljet_1_p4_Beta_BJET = new TH1F("h_ljet_1_p4_Beta_BJET","", bins, min, max);
		h_ljet_1_p4_Beta_HIGH_E = new TH1F("h_ljet_1_p4_Beta_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Beta_TRUTH = new TH1F("h_ljet_1_p4_Beta_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta);
		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta_CONTROL);
		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta_EXCEPT);
		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta_EXCEPT_FINE);
		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta_PRE);
		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta_BJET);
		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta_HIGH_E);
		hv_ljet_1_p4_Beta.push_back(h_ljet_1_p4_Beta_TRUTH);

		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta");
		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta_CONTROL");
		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta_EXCEPT");
		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta_EXCEPT_FINE");
		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta_PRE");
		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta_BJET");
		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta_HIGH_E");
		hv_ljet_1_p4_Beta_names.push_back("h_ljet_1_p4_Beta_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Gamma
	void MC_Analysis::Book_ljet_1_p4_Gamma(int bins, double min, double max) {
		h_ljet_1_p4_Gamma = new TH1F("h_ljet_1_p4_Gamma","", bins, min, max);
		h_ljet_1_p4_Gamma_CONTROL = new TH1F("h_ljet_1_p4_Gamma_CONTROL","", bins, min, max);
		h_ljet_1_p4_Gamma_EXCEPT = new TH1F("h_ljet_1_p4_Gamma_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Gamma_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Gamma_PRE = new TH1F("h_ljet_1_p4_Gamma_PRE","", bins, min, max);
		h_ljet_1_p4_Gamma_BJET = new TH1F("h_ljet_1_p4_Gamma_BJET","", bins, min, max);
		h_ljet_1_p4_Gamma_HIGH_E = new TH1F("h_ljet_1_p4_Gamma_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Gamma_TRUTH = new TH1F("h_ljet_1_p4_Gamma_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma);
		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma_CONTROL);
		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma_EXCEPT);
		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma_EXCEPT_FINE);
		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma_PRE);
		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma_BJET);
		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma_HIGH_E);
		hv_ljet_1_p4_Gamma.push_back(h_ljet_1_p4_Gamma_TRUTH);

		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma");
		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma_CONTROL");
		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma_EXCEPT");
		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma_EXCEPT_FINE");
		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma_PRE");
		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma_BJET");
		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma_HIGH_E");
		hv_ljet_1_p4_Gamma_names.push_back("h_ljet_1_p4_Gamma_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Plus
	void MC_Analysis::Book_ljet_1_p4_Plus(int bins, double min, double max) {
		h_ljet_1_p4_Plus = new TH1F("h_ljet_1_p4_Plus","", bins, min, max);
		h_ljet_1_p4_Plus_CONTROL = new TH1F("h_ljet_1_p4_Plus_CONTROL","", bins, min, max);
		h_ljet_1_p4_Plus_EXCEPT = new TH1F("h_ljet_1_p4_Plus_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Plus_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Plus_PRE = new TH1F("h_ljet_1_p4_Plus_PRE","", bins, min, max);
		h_ljet_1_p4_Plus_BJET = new TH1F("h_ljet_1_p4_Plus_BJET","", bins, min, max);
		h_ljet_1_p4_Plus_HIGH_E = new TH1F("h_ljet_1_p4_Plus_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Plus_TRUTH = new TH1F("h_ljet_1_p4_Plus_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus);
		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus_CONTROL);
		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus_EXCEPT);
		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus_EXCEPT_FINE);
		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus_PRE);
		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus_BJET);
		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus_HIGH_E);
		hv_ljet_1_p4_Plus.push_back(h_ljet_1_p4_Plus_TRUTH);

		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus");
		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus_CONTROL");
		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus_EXCEPT");
		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus_EXCEPT_FINE");
		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus_PRE");
		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus_BJET");
		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus_HIGH_E");
		hv_ljet_1_p4_Plus_names.push_back("h_ljet_1_p4_Plus_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Minus
	void MC_Analysis::Book_ljet_1_p4_Minus(int bins, double min, double max) {
		h_ljet_1_p4_Minus = new TH1F("h_ljet_1_p4_Minus","", bins, min, max);
		h_ljet_1_p4_Minus_CONTROL = new TH1F("h_ljet_1_p4_Minus_CONTROL","", bins, min, max);
		h_ljet_1_p4_Minus_EXCEPT = new TH1F("h_ljet_1_p4_Minus_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Minus_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Minus_PRE = new TH1F("h_ljet_1_p4_Minus_PRE","", bins, min, max);
		h_ljet_1_p4_Minus_BJET = new TH1F("h_ljet_1_p4_Minus_BJET","", bins, min, max);
		h_ljet_1_p4_Minus_HIGH_E = new TH1F("h_ljet_1_p4_Minus_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Minus_TRUTH = new TH1F("h_ljet_1_p4_Minus_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus);
		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus_CONTROL);
		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus_EXCEPT);
		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus_EXCEPT_FINE);
		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus_PRE);
		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus_BJET);
		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus_HIGH_E);
		hv_ljet_1_p4_Minus.push_back(h_ljet_1_p4_Minus_TRUTH);

		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus");
		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus_CONTROL");
		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus_EXCEPT");
		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus_EXCEPT_FINE");
		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus_PRE");
		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus_BJET");
		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus_HIGH_E");
		hv_ljet_1_p4_Minus_names.push_back("h_ljet_1_p4_Minus_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Rapidity
	void MC_Analysis::Book_ljet_1_p4_Rapidity(int bins, double min, double max) {
		h_ljet_1_p4_Rapidity = new TH1F("h_ljet_1_p4_Rapidity","", bins, min, max);
		h_ljet_1_p4_Rapidity_CONTROL = new TH1F("h_ljet_1_p4_Rapidity_CONTROL","", bins, min, max);
		h_ljet_1_p4_Rapidity_EXCEPT = new TH1F("h_ljet_1_p4_Rapidity_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Rapidity_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Rapidity_PRE = new TH1F("h_ljet_1_p4_Rapidity_PRE","", bins, min, max);
		h_ljet_1_p4_Rapidity_BJET = new TH1F("h_ljet_1_p4_Rapidity_BJET","", bins, min, max);
		h_ljet_1_p4_Rapidity_HIGH_E = new TH1F("h_ljet_1_p4_Rapidity_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Rapidity_TRUTH = new TH1F("h_ljet_1_p4_Rapidity_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity);
		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity_CONTROL);
		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity_EXCEPT);
		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity_EXCEPT_FINE);
		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity_PRE);
		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity_BJET);
		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity_HIGH_E);
		hv_ljet_1_p4_Rapidity.push_back(h_ljet_1_p4_Rapidity_TRUTH);

		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity");
		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity_CONTROL");
		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity_EXCEPT");
		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity_EXCEPT_FINE");
		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity_PRE");
		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity_BJET");
		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity_HIGH_E");
		hv_ljet_1_p4_Rapidity_names.push_back("h_ljet_1_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_Eta
	void MC_Analysis::Book_ljet_1_p4_Eta(int bins, double min, double max) {
		h_ljet_1_p4_Eta = new TH1F("h_ljet_1_p4_Eta","", bins, min, max);
		h_ljet_1_p4_Eta_CONTROL = new TH1F("h_ljet_1_p4_Eta_CONTROL","", bins, min, max);
		h_ljet_1_p4_Eta_EXCEPT = new TH1F("h_ljet_1_p4_Eta_EXCEPT","", bins, min, max);
		h_ljet_1_p4_Eta_EXCEPT_FINE = new TH1F("h_ljet_1_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_Eta_PRE = new TH1F("h_ljet_1_p4_Eta_PRE","", bins, min, max);
		h_ljet_1_p4_Eta_BJET = new TH1F("h_ljet_1_p4_Eta_BJET","", bins, min, max);
		h_ljet_1_p4_Eta_HIGH_E = new TH1F("h_ljet_1_p4_Eta_HIGH_E","", bins, min, max);
		h_ljet_1_p4_Eta_TRUTH = new TH1F("h_ljet_1_p4_Eta_TRUTH","", bins, min, max);

		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta);
		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta_CONTROL);
		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta_EXCEPT);
		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta_EXCEPT_FINE);
		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta_PRE);
		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta_BJET);
		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta_HIGH_E);
		hv_ljet_1_p4_Eta.push_back(h_ljet_1_p4_Eta_TRUTH);

		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta");
		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta_CONTROL");
		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta_EXCEPT");
		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta_EXCEPT_FINE");
		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta_PRE");
		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta_BJET");
		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta_HIGH_E");
		hv_ljet_1_p4_Eta_names.push_back("h_ljet_1_p4_Eta_TRUTH");

	}
	//Histogram booking function for ljet_1_p4_PseudoRapidity
	void MC_Analysis::Book_ljet_1_p4_PseudoRapidity(int bins, double min, double max) {
		h_ljet_1_p4_PseudoRapidity = new TH1F("h_ljet_1_p4_PseudoRapidity","", bins, min, max);
		h_ljet_1_p4_PseudoRapidity_CONTROL = new TH1F("h_ljet_1_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_ljet_1_p4_PseudoRapidity_EXCEPT = new TH1F("h_ljet_1_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_ljet_1_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_ljet_1_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_ljet_1_p4_PseudoRapidity_PRE = new TH1F("h_ljet_1_p4_PseudoRapidity_PRE","", bins, min, max);
		h_ljet_1_p4_PseudoRapidity_BJET = new TH1F("h_ljet_1_p4_PseudoRapidity_BJET","", bins, min, max);
		h_ljet_1_p4_PseudoRapidity_HIGH_E = new TH1F("h_ljet_1_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_ljet_1_p4_PseudoRapidity_TRUTH = new TH1F("h_ljet_1_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity);
		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity_CONTROL);
		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity_EXCEPT);
		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity_EXCEPT_FINE);
		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity_PRE);
		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity_BJET);
		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity_HIGH_E);
		hv_ljet_1_p4_PseudoRapidity.push_back(h_ljet_1_p4_PseudoRapidity_TRUTH);

		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity");
		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity_CONTROL");
		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity_EXCEPT");
		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity_EXCEPT_FINE");
		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity_PRE");
		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity_BJET");
		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity_HIGH_E");
		hv_ljet_1_p4_PseudoRapidity_names.push_back("h_ljet_1_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector ljet_1_p4 ----- ///

//Histogram booking function for ljet_1_q
void MC_Analysis::Book_ljet_1_q(int bins, double min, double max) {
	h_ljet_1_q = new TH1F("h_ljet_1_q", "", bins, min, max);
	h_ljet_1_q_CONTROL = new TH1F("h_ljet_1_q_CONTROL", "", bins, min, max);
	h_ljet_1_q_EXCEPT = new TH1F("h_ljet_1_q_EXCEPT", "", bins, min, max);
	h_ljet_1_q_EXCEPT_FINE = new TH1F("h_ljet_1_q_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_q_PRE = new TH1F("h_ljet_1_q_PRE", "", bins, min, max);
	h_ljet_1_q_BJET = new TH1F("h_ljet_1_q_BJET", "", bins, min, max);
	h_ljet_1_q_HIGH_E = new TH1F("h_ljet_1_q_HIGH_E", "", bins, min, max);
	h_ljet_1_q_TRUTH = new TH1F("h_ljet_1_q_TRUTH", "", bins, min, max);

	hv_ljet_1_q.push_back(h_ljet_1_q);
	hv_ljet_1_q.push_back(h_ljet_1_q_CONTROL);
	hv_ljet_1_q.push_back(h_ljet_1_q_EXCEPT);
	hv_ljet_1_q.push_back(h_ljet_1_q_EXCEPT_FINE);
	hv_ljet_1_q.push_back(h_ljet_1_q_PRE);
	hv_ljet_1_q.push_back(h_ljet_1_q_BJET);
	hv_ljet_1_q.push_back(h_ljet_1_q_HIGH_E);
	hv_ljet_1_q.push_back(h_ljet_1_q_TRUTH);

	hv_ljet_1_q_names.push_back("h_ljet_1_q");
	hv_ljet_1_q_names.push_back("h_ljet_1_q_CONTROL");
	hv_ljet_1_q_names.push_back("h_ljet_1_q_EXCEPT");
	hv_ljet_1_q_names.push_back("h_ljet_1_q_EXCEPT_FINE");
	hv_ljet_1_q_names.push_back("h_ljet_1_q_PRE");
	hv_ljet_1_q_names.push_back("h_ljet_1_q_BJET");
	hv_ljet_1_q_names.push_back("h_ljet_1_q_HIGH_E");
	hv_ljet_1_q_names.push_back("h_ljet_1_q_TRUTH");

}

//Histogram booking function for ljet_1_type
void MC_Analysis::Book_ljet_1_type(int bins, double min, double max) {
	h_ljet_1_type = new TH1F("h_ljet_1_type", "", bins, min, max);
	h_ljet_1_type_CONTROL = new TH1F("h_ljet_1_type_CONTROL", "", bins, min, max);
	h_ljet_1_type_EXCEPT = new TH1F("h_ljet_1_type_EXCEPT", "", bins, min, max);
	h_ljet_1_type_EXCEPT_FINE = new TH1F("h_ljet_1_type_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_type_PRE = new TH1F("h_ljet_1_type_PRE", "", bins, min, max);
	h_ljet_1_type_BJET = new TH1F("h_ljet_1_type_BJET", "", bins, min, max);
	h_ljet_1_type_HIGH_E = new TH1F("h_ljet_1_type_HIGH_E", "", bins, min, max);
	h_ljet_1_type_TRUTH = new TH1F("h_ljet_1_type_TRUTH", "", bins, min, max);

	hv_ljet_1_type.push_back(h_ljet_1_type);
	hv_ljet_1_type.push_back(h_ljet_1_type_CONTROL);
	hv_ljet_1_type.push_back(h_ljet_1_type_EXCEPT);
	hv_ljet_1_type.push_back(h_ljet_1_type_EXCEPT_FINE);
	hv_ljet_1_type.push_back(h_ljet_1_type_PRE);
	hv_ljet_1_type.push_back(h_ljet_1_type_BJET);
	hv_ljet_1_type.push_back(h_ljet_1_type_HIGH_E);
	hv_ljet_1_type.push_back(h_ljet_1_type_TRUTH);

	hv_ljet_1_type_names.push_back("h_ljet_1_type");
	hv_ljet_1_type_names.push_back("h_ljet_1_type_CONTROL");
	hv_ljet_1_type_names.push_back("h_ljet_1_type_EXCEPT");
	hv_ljet_1_type_names.push_back("h_ljet_1_type_EXCEPT_FINE");
	hv_ljet_1_type_names.push_back("h_ljet_1_type_PRE");
	hv_ljet_1_type_names.push_back("h_ljet_1_type_BJET");
	hv_ljet_1_type_names.push_back("h_ljet_1_type_HIGH_E");
	hv_ljet_1_type_names.push_back("h_ljet_1_type_TRUTH");

}

//Histogram booking function for ljet_1_width
void MC_Analysis::Book_ljet_1_width(int bins, double min, double max) {
	h_ljet_1_width = new TH1F("h_ljet_1_width", "", bins, min, max);
	h_ljet_1_width_CONTROL = new TH1F("h_ljet_1_width_CONTROL", "", bins, min, max);
	h_ljet_1_width_EXCEPT = new TH1F("h_ljet_1_width_EXCEPT", "", bins, min, max);
	h_ljet_1_width_EXCEPT_FINE = new TH1F("h_ljet_1_width_EXCEPT_FINE", "", bins, min, max);
	h_ljet_1_width_PRE = new TH1F("h_ljet_1_width_PRE", "", bins, min, max);
	h_ljet_1_width_BJET = new TH1F("h_ljet_1_width_BJET", "", bins, min, max);
	h_ljet_1_width_HIGH_E = new TH1F("h_ljet_1_width_HIGH_E", "", bins, min, max);
	h_ljet_1_width_TRUTH = new TH1F("h_ljet_1_width_TRUTH", "", bins, min, max);

	hv_ljet_1_width.push_back(h_ljet_1_width);
	hv_ljet_1_width.push_back(h_ljet_1_width_CONTROL);
	hv_ljet_1_width.push_back(h_ljet_1_width_EXCEPT);
	hv_ljet_1_width.push_back(h_ljet_1_width_EXCEPT_FINE);
	hv_ljet_1_width.push_back(h_ljet_1_width_PRE);
	hv_ljet_1_width.push_back(h_ljet_1_width_BJET);
	hv_ljet_1_width.push_back(h_ljet_1_width_HIGH_E);
	hv_ljet_1_width.push_back(h_ljet_1_width_TRUTH);

	hv_ljet_1_width_names.push_back("h_ljet_1_width");
	hv_ljet_1_width_names.push_back("h_ljet_1_width_CONTROL");
	hv_ljet_1_width_names.push_back("h_ljet_1_width_EXCEPT");
	hv_ljet_1_width_names.push_back("h_ljet_1_width_EXCEPT_FINE");
	hv_ljet_1_width_names.push_back("h_ljet_1_width_PRE");
	hv_ljet_1_width_names.push_back("h_ljet_1_width_BJET");
	hv_ljet_1_width_names.push_back("h_ljet_1_width_HIGH_E");
	hv_ljet_1_width_names.push_back("h_ljet_1_width_TRUTH");

}

// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector met_reco_p4 ----- //
	//Histogram booking function for met_reco_p4_X
	void MC_Analysis::Book_met_reco_p4_X(int bins, double min, double max) {
		h_met_reco_p4_X = new TH1F("h_met_reco_p4_X","", bins, min, max);
		h_met_reco_p4_X_CONTROL = new TH1F("h_met_reco_p4_X_CONTROL","", bins, min, max);
		h_met_reco_p4_X_EXCEPT = new TH1F("h_met_reco_p4_X_EXCEPT","", bins, min, max);
		h_met_reco_p4_X_EXCEPT_FINE = new TH1F("h_met_reco_p4_X_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_X_PRE = new TH1F("h_met_reco_p4_X_PRE","", bins, min, max);
		h_met_reco_p4_X_BJET = new TH1F("h_met_reco_p4_X_BJET","", bins, min, max);
		h_met_reco_p4_X_HIGH_E = new TH1F("h_met_reco_p4_X_HIGH_E","", bins, min, max);
		h_met_reco_p4_X_TRUTH = new TH1F("h_met_reco_p4_X_TRUTH","", bins, min, max);

		hv_met_reco_p4_X.push_back(h_met_reco_p4_X);
		hv_met_reco_p4_X.push_back(h_met_reco_p4_X_CONTROL);
		hv_met_reco_p4_X.push_back(h_met_reco_p4_X_EXCEPT);
		hv_met_reco_p4_X.push_back(h_met_reco_p4_X_EXCEPT_FINE);
		hv_met_reco_p4_X.push_back(h_met_reco_p4_X_PRE);
		hv_met_reco_p4_X.push_back(h_met_reco_p4_X_BJET);
		hv_met_reco_p4_X.push_back(h_met_reco_p4_X_HIGH_E);
		hv_met_reco_p4_X.push_back(h_met_reco_p4_X_TRUTH);

		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X");
		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X_CONTROL");
		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X_EXCEPT");
		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X_EXCEPT_FINE");
		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X_PRE");
		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X_BJET");
		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X_HIGH_E");
		hv_met_reco_p4_X_names.push_back("h_met_reco_p4_X_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Y
	void MC_Analysis::Book_met_reco_p4_Y(int bins, double min, double max) {
		h_met_reco_p4_Y = new TH1F("h_met_reco_p4_Y","", bins, min, max);
		h_met_reco_p4_Y_CONTROL = new TH1F("h_met_reco_p4_Y_CONTROL","", bins, min, max);
		h_met_reco_p4_Y_EXCEPT = new TH1F("h_met_reco_p4_Y_EXCEPT","", bins, min, max);
		h_met_reco_p4_Y_EXCEPT_FINE = new TH1F("h_met_reco_p4_Y_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Y_PRE = new TH1F("h_met_reco_p4_Y_PRE","", bins, min, max);
		h_met_reco_p4_Y_BJET = new TH1F("h_met_reco_p4_Y_BJET","", bins, min, max);
		h_met_reco_p4_Y_HIGH_E = new TH1F("h_met_reco_p4_Y_HIGH_E","", bins, min, max);
		h_met_reco_p4_Y_TRUTH = new TH1F("h_met_reco_p4_Y_TRUTH","", bins, min, max);

		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y);
		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y_CONTROL);
		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y_EXCEPT);
		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y_EXCEPT_FINE);
		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y_PRE);
		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y_BJET);
		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y_HIGH_E);
		hv_met_reco_p4_Y.push_back(h_met_reco_p4_Y_TRUTH);

		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y");
		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y_CONTROL");
		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y_EXCEPT");
		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y_EXCEPT_FINE");
		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y_PRE");
		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y_BJET");
		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y_HIGH_E");
		hv_met_reco_p4_Y_names.push_back("h_met_reco_p4_Y_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Z
	void MC_Analysis::Book_met_reco_p4_Z(int bins, double min, double max) {
		h_met_reco_p4_Z = new TH1F("h_met_reco_p4_Z","", bins, min, max);
		h_met_reco_p4_Z_CONTROL = new TH1F("h_met_reco_p4_Z_CONTROL","", bins, min, max);
		h_met_reco_p4_Z_EXCEPT = new TH1F("h_met_reco_p4_Z_EXCEPT","", bins, min, max);
		h_met_reco_p4_Z_EXCEPT_FINE = new TH1F("h_met_reco_p4_Z_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Z_PRE = new TH1F("h_met_reco_p4_Z_PRE","", bins, min, max);
		h_met_reco_p4_Z_BJET = new TH1F("h_met_reco_p4_Z_BJET","", bins, min, max);
		h_met_reco_p4_Z_HIGH_E = new TH1F("h_met_reco_p4_Z_HIGH_E","", bins, min, max);
		h_met_reco_p4_Z_TRUTH = new TH1F("h_met_reco_p4_Z_TRUTH","", bins, min, max);

		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z);
		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z_CONTROL);
		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z_EXCEPT);
		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z_EXCEPT_FINE);
		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z_PRE);
		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z_BJET);
		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z_HIGH_E);
		hv_met_reco_p4_Z.push_back(h_met_reco_p4_Z_TRUTH);

		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z");
		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z_CONTROL");
		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z_EXCEPT");
		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z_EXCEPT_FINE");
		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z_PRE");
		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z_BJET");
		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z_HIGH_E");
		hv_met_reco_p4_Z_names.push_back("h_met_reco_p4_Z_TRUTH");

	}
	//Histogram booking function for met_reco_p4_T
	void MC_Analysis::Book_met_reco_p4_T(int bins, double min, double max) {
		h_met_reco_p4_T = new TH1F("h_met_reco_p4_T","", bins, min, max);
		h_met_reco_p4_T_CONTROL = new TH1F("h_met_reco_p4_T_CONTROL","", bins, min, max);
		h_met_reco_p4_T_EXCEPT = new TH1F("h_met_reco_p4_T_EXCEPT","", bins, min, max);
		h_met_reco_p4_T_EXCEPT_FINE = new TH1F("h_met_reco_p4_T_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_T_PRE = new TH1F("h_met_reco_p4_T_PRE","", bins, min, max);
		h_met_reco_p4_T_BJET = new TH1F("h_met_reco_p4_T_BJET","", bins, min, max);
		h_met_reco_p4_T_HIGH_E = new TH1F("h_met_reco_p4_T_HIGH_E","", bins, min, max);
		h_met_reco_p4_T_TRUTH = new TH1F("h_met_reco_p4_T_TRUTH","", bins, min, max);

		hv_met_reco_p4_T.push_back(h_met_reco_p4_T);
		hv_met_reco_p4_T.push_back(h_met_reco_p4_T_CONTROL);
		hv_met_reco_p4_T.push_back(h_met_reco_p4_T_EXCEPT);
		hv_met_reco_p4_T.push_back(h_met_reco_p4_T_EXCEPT_FINE);
		hv_met_reco_p4_T.push_back(h_met_reco_p4_T_PRE);
		hv_met_reco_p4_T.push_back(h_met_reco_p4_T_BJET);
		hv_met_reco_p4_T.push_back(h_met_reco_p4_T_HIGH_E);
		hv_met_reco_p4_T.push_back(h_met_reco_p4_T_TRUTH);

		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T");
		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T_CONTROL");
		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T_EXCEPT");
		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T_EXCEPT_FINE");
		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T_PRE");
		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T_BJET");
		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T_HIGH_E");
		hv_met_reco_p4_T_names.push_back("h_met_reco_p4_T_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Px
	void MC_Analysis::Book_met_reco_p4_Px(int bins, double min, double max) {
		h_met_reco_p4_Px = new TH1F("h_met_reco_p4_Px","", bins, min, max);
		h_met_reco_p4_Px_CONTROL = new TH1F("h_met_reco_p4_Px_CONTROL","", bins, min, max);
		h_met_reco_p4_Px_EXCEPT = new TH1F("h_met_reco_p4_Px_EXCEPT","", bins, min, max);
		h_met_reco_p4_Px_EXCEPT_FINE = new TH1F("h_met_reco_p4_Px_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Px_PRE = new TH1F("h_met_reco_p4_Px_PRE","", bins, min, max);
		h_met_reco_p4_Px_BJET = new TH1F("h_met_reco_p4_Px_BJET","", bins, min, max);
		h_met_reco_p4_Px_HIGH_E = new TH1F("h_met_reco_p4_Px_HIGH_E","", bins, min, max);
		h_met_reco_p4_Px_TRUTH = new TH1F("h_met_reco_p4_Px_TRUTH","", bins, min, max);

		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px);
		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px_CONTROL);
		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px_EXCEPT);
		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px_EXCEPT_FINE);
		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px_PRE);
		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px_BJET);
		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px_HIGH_E);
		hv_met_reco_p4_Px.push_back(h_met_reco_p4_Px_TRUTH);

		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px");
		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px_CONTROL");
		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px_EXCEPT");
		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px_EXCEPT_FINE");
		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px_PRE");
		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px_BJET");
		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px_HIGH_E");
		hv_met_reco_p4_Px_names.push_back("h_met_reco_p4_Px_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Py
	void MC_Analysis::Book_met_reco_p4_Py(int bins, double min, double max) {
		h_met_reco_p4_Py = new TH1F("h_met_reco_p4_Py","", bins, min, max);
		h_met_reco_p4_Py_CONTROL = new TH1F("h_met_reco_p4_Py_CONTROL","", bins, min, max);
		h_met_reco_p4_Py_EXCEPT = new TH1F("h_met_reco_p4_Py_EXCEPT","", bins, min, max);
		h_met_reco_p4_Py_EXCEPT_FINE = new TH1F("h_met_reco_p4_Py_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Py_PRE = new TH1F("h_met_reco_p4_Py_PRE","", bins, min, max);
		h_met_reco_p4_Py_BJET = new TH1F("h_met_reco_p4_Py_BJET","", bins, min, max);
		h_met_reco_p4_Py_HIGH_E = new TH1F("h_met_reco_p4_Py_HIGH_E","", bins, min, max);
		h_met_reco_p4_Py_TRUTH = new TH1F("h_met_reco_p4_Py_TRUTH","", bins, min, max);

		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py);
		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py_CONTROL);
		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py_EXCEPT);
		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py_EXCEPT_FINE);
		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py_PRE);
		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py_BJET);
		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py_HIGH_E);
		hv_met_reco_p4_Py.push_back(h_met_reco_p4_Py_TRUTH);

		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py");
		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py_CONTROL");
		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py_EXCEPT");
		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py_EXCEPT_FINE");
		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py_PRE");
		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py_BJET");
		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py_HIGH_E");
		hv_met_reco_p4_Py_names.push_back("h_met_reco_p4_Py_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Pz
	void MC_Analysis::Book_met_reco_p4_Pz(int bins, double min, double max) {
		h_met_reco_p4_Pz = new TH1F("h_met_reco_p4_Pz","", bins, min, max);
		h_met_reco_p4_Pz_CONTROL = new TH1F("h_met_reco_p4_Pz_CONTROL","", bins, min, max);
		h_met_reco_p4_Pz_EXCEPT = new TH1F("h_met_reco_p4_Pz_EXCEPT","", bins, min, max);
		h_met_reco_p4_Pz_EXCEPT_FINE = new TH1F("h_met_reco_p4_Pz_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Pz_PRE = new TH1F("h_met_reco_p4_Pz_PRE","", bins, min, max);
		h_met_reco_p4_Pz_BJET = new TH1F("h_met_reco_p4_Pz_BJET","", bins, min, max);
		h_met_reco_p4_Pz_HIGH_E = new TH1F("h_met_reco_p4_Pz_HIGH_E","", bins, min, max);
		h_met_reco_p4_Pz_TRUTH = new TH1F("h_met_reco_p4_Pz_TRUTH","", bins, min, max);

		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz);
		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz_CONTROL);
		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz_EXCEPT);
		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz_EXCEPT_FINE);
		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz_PRE);
		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz_BJET);
		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz_HIGH_E);
		hv_met_reco_p4_Pz.push_back(h_met_reco_p4_Pz_TRUTH);

		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz");
		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz_CONTROL");
		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz_EXCEPT");
		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz_EXCEPT_FINE");
		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz_PRE");
		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz_BJET");
		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz_HIGH_E");
		hv_met_reco_p4_Pz_names.push_back("h_met_reco_p4_Pz_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Energy
	void MC_Analysis::Book_met_reco_p4_Energy(int bins, double min, double max) {
		h_met_reco_p4_Energy = new TH1F("h_met_reco_p4_Energy","", bins, min, max);
		h_met_reco_p4_Energy_CONTROL = new TH1F("h_met_reco_p4_Energy_CONTROL","", bins, min, max);
		h_met_reco_p4_Energy_EXCEPT = new TH1F("h_met_reco_p4_Energy_EXCEPT","", bins, min, max);
		h_met_reco_p4_Energy_EXCEPT_FINE = new TH1F("h_met_reco_p4_Energy_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Energy_PRE = new TH1F("h_met_reco_p4_Energy_PRE","", bins, min, max);
		h_met_reco_p4_Energy_BJET = new TH1F("h_met_reco_p4_Energy_BJET","", bins, min, max);
		h_met_reco_p4_Energy_HIGH_E = new TH1F("h_met_reco_p4_Energy_HIGH_E","", bins, min, max);
		h_met_reco_p4_Energy_TRUTH = new TH1F("h_met_reco_p4_Energy_TRUTH","", bins, min, max);

		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy);
		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy_CONTROL);
		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy_EXCEPT);
		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy_EXCEPT_FINE);
		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy_PRE);
		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy_BJET);
		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy_HIGH_E);
		hv_met_reco_p4_Energy.push_back(h_met_reco_p4_Energy_TRUTH);

		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy");
		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy_CONTROL");
		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy_EXCEPT");
		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy_EXCEPT_FINE");
		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy_PRE");
		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy_BJET");
		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy_HIGH_E");
		hv_met_reco_p4_Energy_names.push_back("h_met_reco_p4_Energy_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Theta
	void MC_Analysis::Book_met_reco_p4_Theta(int bins, double min, double max) {
		h_met_reco_p4_Theta = new TH1F("h_met_reco_p4_Theta","", bins, min, max);
		h_met_reco_p4_Theta_CONTROL = new TH1F("h_met_reco_p4_Theta_CONTROL","", bins, min, max);
		h_met_reco_p4_Theta_EXCEPT = new TH1F("h_met_reco_p4_Theta_EXCEPT","", bins, min, max);
		h_met_reco_p4_Theta_EXCEPT_FINE = new TH1F("h_met_reco_p4_Theta_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Theta_PRE = new TH1F("h_met_reco_p4_Theta_PRE","", bins, min, max);
		h_met_reco_p4_Theta_BJET = new TH1F("h_met_reco_p4_Theta_BJET","", bins, min, max);
		h_met_reco_p4_Theta_HIGH_E = new TH1F("h_met_reco_p4_Theta_HIGH_E","", bins, min, max);
		h_met_reco_p4_Theta_TRUTH = new TH1F("h_met_reco_p4_Theta_TRUTH","", bins, min, max);

		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta);
		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta_CONTROL);
		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta_EXCEPT);
		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta_EXCEPT_FINE);
		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta_PRE);
		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta_BJET);
		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta_HIGH_E);
		hv_met_reco_p4_Theta.push_back(h_met_reco_p4_Theta_TRUTH);

		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta");
		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta_CONTROL");
		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta_EXCEPT");
		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta_EXCEPT_FINE");
		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta_PRE");
		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta_BJET");
		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta_HIGH_E");
		hv_met_reco_p4_Theta_names.push_back("h_met_reco_p4_Theta_TRUTH");

	}
	//Histogram booking function for met_reco_p4_CosTheta
	void MC_Analysis::Book_met_reco_p4_CosTheta(int bins, double min, double max) {
		h_met_reco_p4_CosTheta = new TH1F("h_met_reco_p4_CosTheta","", bins, min, max);
		h_met_reco_p4_CosTheta_CONTROL = new TH1F("h_met_reco_p4_CosTheta_CONTROL","", bins, min, max);
		h_met_reco_p4_CosTheta_EXCEPT = new TH1F("h_met_reco_p4_CosTheta_EXCEPT","", bins, min, max);
		h_met_reco_p4_CosTheta_EXCEPT_FINE = new TH1F("h_met_reco_p4_CosTheta_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_CosTheta_PRE = new TH1F("h_met_reco_p4_CosTheta_PRE","", bins, min, max);
		h_met_reco_p4_CosTheta_BJET = new TH1F("h_met_reco_p4_CosTheta_BJET","", bins, min, max);
		h_met_reco_p4_CosTheta_HIGH_E = new TH1F("h_met_reco_p4_CosTheta_HIGH_E","", bins, min, max);
		h_met_reco_p4_CosTheta_TRUTH = new TH1F("h_met_reco_p4_CosTheta_TRUTH","", bins, min, max);

		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta);
		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta_CONTROL);
		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta_EXCEPT);
		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta_EXCEPT_FINE);
		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta_PRE);
		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta_BJET);
		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta_HIGH_E);
		hv_met_reco_p4_CosTheta.push_back(h_met_reco_p4_CosTheta_TRUTH);

		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta");
		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta_CONTROL");
		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta_EXCEPT");
		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta_EXCEPT_FINE");
		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta_PRE");
		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta_BJET");
		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta_HIGH_E");
		hv_met_reco_p4_CosTheta_names.push_back("h_met_reco_p4_CosTheta_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Phi
	void MC_Analysis::Book_met_reco_p4_Phi(int bins, double min, double max) {
		h_met_reco_p4_Phi = new TH1F("h_met_reco_p4_Phi","", bins, min, max);
		h_met_reco_p4_Phi_CONTROL = new TH1F("h_met_reco_p4_Phi_CONTROL","", bins, min, max);
		h_met_reco_p4_Phi_EXCEPT = new TH1F("h_met_reco_p4_Phi_EXCEPT","", bins, min, max);
		h_met_reco_p4_Phi_EXCEPT_FINE = new TH1F("h_met_reco_p4_Phi_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Phi_PRE = new TH1F("h_met_reco_p4_Phi_PRE","", bins, min, max);
		h_met_reco_p4_Phi_BJET = new TH1F("h_met_reco_p4_Phi_BJET","", bins, min, max);
		h_met_reco_p4_Phi_HIGH_E = new TH1F("h_met_reco_p4_Phi_HIGH_E","", bins, min, max);
		h_met_reco_p4_Phi_TRUTH = new TH1F("h_met_reco_p4_Phi_TRUTH","", bins, min, max);

		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi);
		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi_CONTROL);
		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi_EXCEPT);
		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi_EXCEPT_FINE);
		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi_PRE);
		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi_BJET);
		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi_HIGH_E);
		hv_met_reco_p4_Phi.push_back(h_met_reco_p4_Phi_TRUTH);

		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi");
		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi_CONTROL");
		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi_EXCEPT");
		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi_EXCEPT_FINE");
		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi_PRE");
		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi_BJET");
		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi_HIGH_E");
		hv_met_reco_p4_Phi_names.push_back("h_met_reco_p4_Phi_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Rho
	void MC_Analysis::Book_met_reco_p4_Rho(int bins, double min, double max) {
		h_met_reco_p4_Rho = new TH1F("h_met_reco_p4_Rho","", bins, min, max);
		h_met_reco_p4_Rho_CONTROL = new TH1F("h_met_reco_p4_Rho_CONTROL","", bins, min, max);
		h_met_reco_p4_Rho_EXCEPT = new TH1F("h_met_reco_p4_Rho_EXCEPT","", bins, min, max);
		h_met_reco_p4_Rho_EXCEPT_FINE = new TH1F("h_met_reco_p4_Rho_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Rho_PRE = new TH1F("h_met_reco_p4_Rho_PRE","", bins, min, max);
		h_met_reco_p4_Rho_BJET = new TH1F("h_met_reco_p4_Rho_BJET","", bins, min, max);
		h_met_reco_p4_Rho_HIGH_E = new TH1F("h_met_reco_p4_Rho_HIGH_E","", bins, min, max);
		h_met_reco_p4_Rho_TRUTH = new TH1F("h_met_reco_p4_Rho_TRUTH","", bins, min, max);

		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho);
		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho_CONTROL);
		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho_EXCEPT);
		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho_EXCEPT_FINE);
		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho_PRE);
		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho_BJET);
		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho_HIGH_E);
		hv_met_reco_p4_Rho.push_back(h_met_reco_p4_Rho_TRUTH);

		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho");
		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho_CONTROL");
		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho_EXCEPT");
		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho_EXCEPT_FINE");
		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho_PRE");
		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho_BJET");
		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho_HIGH_E");
		hv_met_reco_p4_Rho_names.push_back("h_met_reco_p4_Rho_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Perp2
	void MC_Analysis::Book_met_reco_p4_Perp2(int bins, double min, double max) {
		h_met_reco_p4_Perp2 = new TH1F("h_met_reco_p4_Perp2","", bins, min, max);
		h_met_reco_p4_Perp2_CONTROL = new TH1F("h_met_reco_p4_Perp2_CONTROL","", bins, min, max);
		h_met_reco_p4_Perp2_EXCEPT = new TH1F("h_met_reco_p4_Perp2_EXCEPT","", bins, min, max);
		h_met_reco_p4_Perp2_EXCEPT_FINE = new TH1F("h_met_reco_p4_Perp2_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Perp2_PRE = new TH1F("h_met_reco_p4_Perp2_PRE","", bins, min, max);
		h_met_reco_p4_Perp2_BJET = new TH1F("h_met_reco_p4_Perp2_BJET","", bins, min, max);
		h_met_reco_p4_Perp2_HIGH_E = new TH1F("h_met_reco_p4_Perp2_HIGH_E","", bins, min, max);
		h_met_reco_p4_Perp2_TRUTH = new TH1F("h_met_reco_p4_Perp2_TRUTH","", bins, min, max);

		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2);
		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2_CONTROL);
		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2_EXCEPT);
		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2_EXCEPT_FINE);
		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2_PRE);
		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2_BJET);
		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2_HIGH_E);
		hv_met_reco_p4_Perp2.push_back(h_met_reco_p4_Perp2_TRUTH);

		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2");
		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2_CONTROL");
		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2_EXCEPT");
		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2_EXCEPT_FINE");
		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2_PRE");
		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2_BJET");
		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2_HIGH_E");
		hv_met_reco_p4_Perp2_names.push_back("h_met_reco_p4_Perp2_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Pt
	void MC_Analysis::Book_met_reco_p4_Pt(int bins, double min, double max) {
		h_met_reco_p4_Pt = new TH1F("h_met_reco_p4_Pt","", bins, min, max);
		h_met_reco_p4_Pt_CONTROL = new TH1F("h_met_reco_p4_Pt_CONTROL","", bins, min, max);
		h_met_reco_p4_Pt_EXCEPT = new TH1F("h_met_reco_p4_Pt_EXCEPT","", bins, min, max);
		h_met_reco_p4_Pt_EXCEPT_FINE = new TH1F("h_met_reco_p4_Pt_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Pt_PRE = new TH1F("h_met_reco_p4_Pt_PRE","", bins, min, max);
		h_met_reco_p4_Pt_BJET = new TH1F("h_met_reco_p4_Pt_BJET","", bins, min, max);
		h_met_reco_p4_Pt_HIGH_E = new TH1F("h_met_reco_p4_Pt_HIGH_E","", bins, min, max);
		h_met_reco_p4_Pt_TRUTH = new TH1F("h_met_reco_p4_Pt_TRUTH","", bins, min, max);

		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt);
		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt_CONTROL);
		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt_EXCEPT);
		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt_EXCEPT_FINE);
		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt_PRE);
		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt_BJET);
		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt_HIGH_E);
		hv_met_reco_p4_Pt.push_back(h_met_reco_p4_Pt_TRUTH);

		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt");
		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt_CONTROL");
		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt_EXCEPT");
		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt_EXCEPT_FINE");
		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt_PRE");
		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt_BJET");
		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt_HIGH_E");
		hv_met_reco_p4_Pt_names.push_back("h_met_reco_p4_Pt_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Perp
	void MC_Analysis::Book_met_reco_p4_Perp(int bins, double min, double max) {
		h_met_reco_p4_Perp = new TH1F("h_met_reco_p4_Perp","", bins, min, max);
		h_met_reco_p4_Perp_CONTROL = new TH1F("h_met_reco_p4_Perp_CONTROL","", bins, min, max);
		h_met_reco_p4_Perp_EXCEPT = new TH1F("h_met_reco_p4_Perp_EXCEPT","", bins, min, max);
		h_met_reco_p4_Perp_EXCEPT_FINE = new TH1F("h_met_reco_p4_Perp_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Perp_PRE = new TH1F("h_met_reco_p4_Perp_PRE","", bins, min, max);
		h_met_reco_p4_Perp_BJET = new TH1F("h_met_reco_p4_Perp_BJET","", bins, min, max);
		h_met_reco_p4_Perp_HIGH_E = new TH1F("h_met_reco_p4_Perp_HIGH_E","", bins, min, max);
		h_met_reco_p4_Perp_TRUTH = new TH1F("h_met_reco_p4_Perp_TRUTH","", bins, min, max);

		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp);
		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp_CONTROL);
		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp_EXCEPT);
		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp_EXCEPT_FINE);
		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp_PRE);
		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp_BJET);
		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp_HIGH_E);
		hv_met_reco_p4_Perp.push_back(h_met_reco_p4_Perp_TRUTH);

		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp");
		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp_CONTROL");
		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp_EXCEPT");
		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp_EXCEPT_FINE");
		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp_PRE");
		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp_BJET");
		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp_HIGH_E");
		hv_met_reco_p4_Perp_names.push_back("h_met_reco_p4_Perp_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Et2
	void MC_Analysis::Book_met_reco_p4_Et2(int bins, double min, double max) {
		h_met_reco_p4_Et2 = new TH1F("h_met_reco_p4_Et2","", bins, min, max);
		h_met_reco_p4_Et2_CONTROL = new TH1F("h_met_reco_p4_Et2_CONTROL","", bins, min, max);
		h_met_reco_p4_Et2_EXCEPT = new TH1F("h_met_reco_p4_Et2_EXCEPT","", bins, min, max);
		h_met_reco_p4_Et2_EXCEPT_FINE = new TH1F("h_met_reco_p4_Et2_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Et2_PRE = new TH1F("h_met_reco_p4_Et2_PRE","", bins, min, max);
		h_met_reco_p4_Et2_BJET = new TH1F("h_met_reco_p4_Et2_BJET","", bins, min, max);
		h_met_reco_p4_Et2_HIGH_E = new TH1F("h_met_reco_p4_Et2_HIGH_E","", bins, min, max);
		h_met_reco_p4_Et2_TRUTH = new TH1F("h_met_reco_p4_Et2_TRUTH","", bins, min, max);

		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2);
		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2_CONTROL);
		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2_EXCEPT);
		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2_EXCEPT_FINE);
		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2_PRE);
		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2_BJET);
		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2_HIGH_E);
		hv_met_reco_p4_Et2.push_back(h_met_reco_p4_Et2_TRUTH);

		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2");
		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2_CONTROL");
		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2_EXCEPT");
		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2_EXCEPT_FINE");
		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2_PRE");
		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2_BJET");
		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2_HIGH_E");
		hv_met_reco_p4_Et2_names.push_back("h_met_reco_p4_Et2_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Et
	void MC_Analysis::Book_met_reco_p4_Et(int bins, double min, double max) {
		h_met_reco_p4_Et = new TH1F("h_met_reco_p4_Et","", bins, min, max);
		h_met_reco_p4_Et_CONTROL = new TH1F("h_met_reco_p4_Et_CONTROL","", bins, min, max);
		h_met_reco_p4_Et_EXCEPT = new TH1F("h_met_reco_p4_Et_EXCEPT","", bins, min, max);
		h_met_reco_p4_Et_EXCEPT_FINE = new TH1F("h_met_reco_p4_Et_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Et_PRE = new TH1F("h_met_reco_p4_Et_PRE","", bins, min, max);
		h_met_reco_p4_Et_BJET = new TH1F("h_met_reco_p4_Et_BJET","", bins, min, max);
		h_met_reco_p4_Et_HIGH_E = new TH1F("h_met_reco_p4_Et_HIGH_E","", bins, min, max);
		h_met_reco_p4_Et_TRUTH = new TH1F("h_met_reco_p4_Et_TRUTH","", bins, min, max);

		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et);
		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et_CONTROL);
		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et_EXCEPT);
		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et_EXCEPT_FINE);
		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et_PRE);
		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et_BJET);
		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et_HIGH_E);
		hv_met_reco_p4_Et.push_back(h_met_reco_p4_Et_TRUTH);

		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et");
		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et_CONTROL");
		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et_EXCEPT");
		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et_EXCEPT_FINE");
		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et_PRE");
		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et_BJET");
		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et_HIGH_E");
		hv_met_reco_p4_Et_names.push_back("h_met_reco_p4_Et_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Mag2
	void MC_Analysis::Book_met_reco_p4_Mag2(int bins, double min, double max) {
		h_met_reco_p4_Mag2 = new TH1F("h_met_reco_p4_Mag2","", bins, min, max);
		h_met_reco_p4_Mag2_CONTROL = new TH1F("h_met_reco_p4_Mag2_CONTROL","", bins, min, max);
		h_met_reco_p4_Mag2_EXCEPT = new TH1F("h_met_reco_p4_Mag2_EXCEPT","", bins, min, max);
		h_met_reco_p4_Mag2_EXCEPT_FINE = new TH1F("h_met_reco_p4_Mag2_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Mag2_PRE = new TH1F("h_met_reco_p4_Mag2_PRE","", bins, min, max);
		h_met_reco_p4_Mag2_BJET = new TH1F("h_met_reco_p4_Mag2_BJET","", bins, min, max);
		h_met_reco_p4_Mag2_HIGH_E = new TH1F("h_met_reco_p4_Mag2_HIGH_E","", bins, min, max);
		h_met_reco_p4_Mag2_TRUTH = new TH1F("h_met_reco_p4_Mag2_TRUTH","", bins, min, max);

		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2);
		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2_CONTROL);
		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2_EXCEPT);
		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2_EXCEPT_FINE);
		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2_PRE);
		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2_BJET);
		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2_HIGH_E);
		hv_met_reco_p4_Mag2.push_back(h_met_reco_p4_Mag2_TRUTH);

		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2");
		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2_CONTROL");
		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2_EXCEPT");
		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2_EXCEPT_FINE");
		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2_PRE");
		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2_BJET");
		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2_HIGH_E");
		hv_met_reco_p4_Mag2_names.push_back("h_met_reco_p4_Mag2_TRUTH");

	}
	//Histogram booking function for met_reco_p4_M2
	void MC_Analysis::Book_met_reco_p4_M2(int bins, double min, double max) {
		h_met_reco_p4_M2 = new TH1F("h_met_reco_p4_M2","", bins, min, max);
		h_met_reco_p4_M2_CONTROL = new TH1F("h_met_reco_p4_M2_CONTROL","", bins, min, max);
		h_met_reco_p4_M2_EXCEPT = new TH1F("h_met_reco_p4_M2_EXCEPT","", bins, min, max);
		h_met_reco_p4_M2_EXCEPT_FINE = new TH1F("h_met_reco_p4_M2_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_M2_PRE = new TH1F("h_met_reco_p4_M2_PRE","", bins, min, max);
		h_met_reco_p4_M2_BJET = new TH1F("h_met_reco_p4_M2_BJET","", bins, min, max);
		h_met_reco_p4_M2_HIGH_E = new TH1F("h_met_reco_p4_M2_HIGH_E","", bins, min, max);
		h_met_reco_p4_M2_TRUTH = new TH1F("h_met_reco_p4_M2_TRUTH","", bins, min, max);

		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2);
		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2_CONTROL);
		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2_EXCEPT);
		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2_EXCEPT_FINE);
		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2_PRE);
		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2_BJET);
		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2_HIGH_E);
		hv_met_reco_p4_M2.push_back(h_met_reco_p4_M2_TRUTH);

		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2");
		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2_CONTROL");
		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2_EXCEPT");
		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2_EXCEPT_FINE");
		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2_PRE");
		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2_BJET");
		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2_HIGH_E");
		hv_met_reco_p4_M2_names.push_back("h_met_reco_p4_M2_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Mag
	void MC_Analysis::Book_met_reco_p4_Mag(int bins, double min, double max) {
		h_met_reco_p4_Mag = new TH1F("h_met_reco_p4_Mag","", bins, min, max);
		h_met_reco_p4_Mag_CONTROL = new TH1F("h_met_reco_p4_Mag_CONTROL","", bins, min, max);
		h_met_reco_p4_Mag_EXCEPT = new TH1F("h_met_reco_p4_Mag_EXCEPT","", bins, min, max);
		h_met_reco_p4_Mag_EXCEPT_FINE = new TH1F("h_met_reco_p4_Mag_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Mag_PRE = new TH1F("h_met_reco_p4_Mag_PRE","", bins, min, max);
		h_met_reco_p4_Mag_BJET = new TH1F("h_met_reco_p4_Mag_BJET","", bins, min, max);
		h_met_reco_p4_Mag_HIGH_E = new TH1F("h_met_reco_p4_Mag_HIGH_E","", bins, min, max);
		h_met_reco_p4_Mag_TRUTH = new TH1F("h_met_reco_p4_Mag_TRUTH","", bins, min, max);

		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag);
		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag_CONTROL);
		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag_EXCEPT);
		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag_EXCEPT_FINE);
		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag_PRE);
		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag_BJET);
		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag_HIGH_E);
		hv_met_reco_p4_Mag.push_back(h_met_reco_p4_Mag_TRUTH);

		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag");
		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag_CONTROL");
		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag_EXCEPT");
		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag_EXCEPT_FINE");
		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag_PRE");
		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag_BJET");
		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag_HIGH_E");
		hv_met_reco_p4_Mag_names.push_back("h_met_reco_p4_Mag_TRUTH");

	}
	//Histogram booking function for met_reco_p4_M
	void MC_Analysis::Book_met_reco_p4_M(int bins, double min, double max) {
		h_met_reco_p4_M = new TH1F("h_met_reco_p4_M","", bins, min, max);
		h_met_reco_p4_M_CONTROL = new TH1F("h_met_reco_p4_M_CONTROL","", bins, min, max);
		h_met_reco_p4_M_EXCEPT = new TH1F("h_met_reco_p4_M_EXCEPT","", bins, min, max);
		h_met_reco_p4_M_EXCEPT_FINE = new TH1F("h_met_reco_p4_M_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_M_PRE = new TH1F("h_met_reco_p4_M_PRE","", bins, min, max);
		h_met_reco_p4_M_BJET = new TH1F("h_met_reco_p4_M_BJET","", bins, min, max);
		h_met_reco_p4_M_HIGH_E = new TH1F("h_met_reco_p4_M_HIGH_E","", bins, min, max);
		h_met_reco_p4_M_TRUTH = new TH1F("h_met_reco_p4_M_TRUTH","", bins, min, max);

		hv_met_reco_p4_M.push_back(h_met_reco_p4_M);
		hv_met_reco_p4_M.push_back(h_met_reco_p4_M_CONTROL);
		hv_met_reco_p4_M.push_back(h_met_reco_p4_M_EXCEPT);
		hv_met_reco_p4_M.push_back(h_met_reco_p4_M_EXCEPT_FINE);
		hv_met_reco_p4_M.push_back(h_met_reco_p4_M_PRE);
		hv_met_reco_p4_M.push_back(h_met_reco_p4_M_BJET);
		hv_met_reco_p4_M.push_back(h_met_reco_p4_M_HIGH_E);
		hv_met_reco_p4_M.push_back(h_met_reco_p4_M_TRUTH);

		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M");
		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M_CONTROL");
		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M_EXCEPT");
		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M_EXCEPT_FINE");
		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M_PRE");
		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M_BJET");
		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M_HIGH_E");
		hv_met_reco_p4_M_names.push_back("h_met_reco_p4_M_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Mt2
	void MC_Analysis::Book_met_reco_p4_Mt2(int bins, double min, double max) {
		h_met_reco_p4_Mt2 = new TH1F("h_met_reco_p4_Mt2","", bins, min, max);
		h_met_reco_p4_Mt2_CONTROL = new TH1F("h_met_reco_p4_Mt2_CONTROL","", bins, min, max);
		h_met_reco_p4_Mt2_EXCEPT = new TH1F("h_met_reco_p4_Mt2_EXCEPT","", bins, min, max);
		h_met_reco_p4_Mt2_EXCEPT_FINE = new TH1F("h_met_reco_p4_Mt2_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Mt2_PRE = new TH1F("h_met_reco_p4_Mt2_PRE","", bins, min, max);
		h_met_reco_p4_Mt2_BJET = new TH1F("h_met_reco_p4_Mt2_BJET","", bins, min, max);
		h_met_reco_p4_Mt2_HIGH_E = new TH1F("h_met_reco_p4_Mt2_HIGH_E","", bins, min, max);
		h_met_reco_p4_Mt2_TRUTH = new TH1F("h_met_reco_p4_Mt2_TRUTH","", bins, min, max);

		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2);
		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2_CONTROL);
		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2_EXCEPT);
		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2_EXCEPT_FINE);
		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2_PRE);
		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2_BJET);
		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2_HIGH_E);
		hv_met_reco_p4_Mt2.push_back(h_met_reco_p4_Mt2_TRUTH);

		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2");
		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2_CONTROL");
		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2_EXCEPT");
		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2_EXCEPT_FINE");
		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2_PRE");
		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2_BJET");
		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2_HIGH_E");
		hv_met_reco_p4_Mt2_names.push_back("h_met_reco_p4_Mt2_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Mt
	void MC_Analysis::Book_met_reco_p4_Mt(int bins, double min, double max) {
		h_met_reco_p4_Mt = new TH1F("h_met_reco_p4_Mt","", bins, min, max);
		h_met_reco_p4_Mt_CONTROL = new TH1F("h_met_reco_p4_Mt_CONTROL","", bins, min, max);
		h_met_reco_p4_Mt_EXCEPT = new TH1F("h_met_reco_p4_Mt_EXCEPT","", bins, min, max);
		h_met_reco_p4_Mt_EXCEPT_FINE = new TH1F("h_met_reco_p4_Mt_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Mt_PRE = new TH1F("h_met_reco_p4_Mt_PRE","", bins, min, max);
		h_met_reco_p4_Mt_BJET = new TH1F("h_met_reco_p4_Mt_BJET","", bins, min, max);
		h_met_reco_p4_Mt_HIGH_E = new TH1F("h_met_reco_p4_Mt_HIGH_E","", bins, min, max);
		h_met_reco_p4_Mt_TRUTH = new TH1F("h_met_reco_p4_Mt_TRUTH","", bins, min, max);

		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt);
		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt_CONTROL);
		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt_EXCEPT);
		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt_EXCEPT_FINE);
		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt_PRE);
		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt_BJET);
		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt_HIGH_E);
		hv_met_reco_p4_Mt.push_back(h_met_reco_p4_Mt_TRUTH);

		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt");
		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt_CONTROL");
		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt_EXCEPT");
		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt_EXCEPT_FINE");
		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt_PRE");
		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt_BJET");
		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt_HIGH_E");
		hv_met_reco_p4_Mt_names.push_back("h_met_reco_p4_Mt_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Beta
	void MC_Analysis::Book_met_reco_p4_Beta(int bins, double min, double max) {
		h_met_reco_p4_Beta = new TH1F("h_met_reco_p4_Beta","", bins, min, max);
		h_met_reco_p4_Beta_CONTROL = new TH1F("h_met_reco_p4_Beta_CONTROL","", bins, min, max);
		h_met_reco_p4_Beta_EXCEPT = new TH1F("h_met_reco_p4_Beta_EXCEPT","", bins, min, max);
		h_met_reco_p4_Beta_EXCEPT_FINE = new TH1F("h_met_reco_p4_Beta_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Beta_PRE = new TH1F("h_met_reco_p4_Beta_PRE","", bins, min, max);
		h_met_reco_p4_Beta_BJET = new TH1F("h_met_reco_p4_Beta_BJET","", bins, min, max);
		h_met_reco_p4_Beta_HIGH_E = new TH1F("h_met_reco_p4_Beta_HIGH_E","", bins, min, max);
		h_met_reco_p4_Beta_TRUTH = new TH1F("h_met_reco_p4_Beta_TRUTH","", bins, min, max);

		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta);
		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta_CONTROL);
		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta_EXCEPT);
		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta_EXCEPT_FINE);
		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta_PRE);
		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta_BJET);
		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta_HIGH_E);
		hv_met_reco_p4_Beta.push_back(h_met_reco_p4_Beta_TRUTH);

		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta");
		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta_CONTROL");
		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta_EXCEPT");
		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta_EXCEPT_FINE");
		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta_PRE");
		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta_BJET");
		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta_HIGH_E");
		hv_met_reco_p4_Beta_names.push_back("h_met_reco_p4_Beta_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Gamma
	void MC_Analysis::Book_met_reco_p4_Gamma(int bins, double min, double max) {
		h_met_reco_p4_Gamma = new TH1F("h_met_reco_p4_Gamma","", bins, min, max);
		h_met_reco_p4_Gamma_CONTROL = new TH1F("h_met_reco_p4_Gamma_CONTROL","", bins, min, max);
		h_met_reco_p4_Gamma_EXCEPT = new TH1F("h_met_reco_p4_Gamma_EXCEPT","", bins, min, max);
		h_met_reco_p4_Gamma_EXCEPT_FINE = new TH1F("h_met_reco_p4_Gamma_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Gamma_PRE = new TH1F("h_met_reco_p4_Gamma_PRE","", bins, min, max);
		h_met_reco_p4_Gamma_BJET = new TH1F("h_met_reco_p4_Gamma_BJET","", bins, min, max);
		h_met_reco_p4_Gamma_HIGH_E = new TH1F("h_met_reco_p4_Gamma_HIGH_E","", bins, min, max);
		h_met_reco_p4_Gamma_TRUTH = new TH1F("h_met_reco_p4_Gamma_TRUTH","", bins, min, max);

		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma);
		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma_CONTROL);
		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma_EXCEPT);
		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma_EXCEPT_FINE);
		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma_PRE);
		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma_BJET);
		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma_HIGH_E);
		hv_met_reco_p4_Gamma.push_back(h_met_reco_p4_Gamma_TRUTH);

		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma");
		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma_CONTROL");
		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma_EXCEPT");
		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma_EXCEPT_FINE");
		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma_PRE");
		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma_BJET");
		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma_HIGH_E");
		hv_met_reco_p4_Gamma_names.push_back("h_met_reco_p4_Gamma_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Plus
	void MC_Analysis::Book_met_reco_p4_Plus(int bins, double min, double max) {
		h_met_reco_p4_Plus = new TH1F("h_met_reco_p4_Plus","", bins, min, max);
		h_met_reco_p4_Plus_CONTROL = new TH1F("h_met_reco_p4_Plus_CONTROL","", bins, min, max);
		h_met_reco_p4_Plus_EXCEPT = new TH1F("h_met_reco_p4_Plus_EXCEPT","", bins, min, max);
		h_met_reco_p4_Plus_EXCEPT_FINE = new TH1F("h_met_reco_p4_Plus_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Plus_PRE = new TH1F("h_met_reco_p4_Plus_PRE","", bins, min, max);
		h_met_reco_p4_Plus_BJET = new TH1F("h_met_reco_p4_Plus_BJET","", bins, min, max);
		h_met_reco_p4_Plus_HIGH_E = new TH1F("h_met_reco_p4_Plus_HIGH_E","", bins, min, max);
		h_met_reco_p4_Plus_TRUTH = new TH1F("h_met_reco_p4_Plus_TRUTH","", bins, min, max);

		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus);
		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus_CONTROL);
		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus_EXCEPT);
		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus_EXCEPT_FINE);
		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus_PRE);
		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus_BJET);
		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus_HIGH_E);
		hv_met_reco_p4_Plus.push_back(h_met_reco_p4_Plus_TRUTH);

		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus");
		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus_CONTROL");
		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus_EXCEPT");
		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus_EXCEPT_FINE");
		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus_PRE");
		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus_BJET");
		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus_HIGH_E");
		hv_met_reco_p4_Plus_names.push_back("h_met_reco_p4_Plus_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Minus
	void MC_Analysis::Book_met_reco_p4_Minus(int bins, double min, double max) {
		h_met_reco_p4_Minus = new TH1F("h_met_reco_p4_Minus","", bins, min, max);
		h_met_reco_p4_Minus_CONTROL = new TH1F("h_met_reco_p4_Minus_CONTROL","", bins, min, max);
		h_met_reco_p4_Minus_EXCEPT = new TH1F("h_met_reco_p4_Minus_EXCEPT","", bins, min, max);
		h_met_reco_p4_Minus_EXCEPT_FINE = new TH1F("h_met_reco_p4_Minus_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Minus_PRE = new TH1F("h_met_reco_p4_Minus_PRE","", bins, min, max);
		h_met_reco_p4_Minus_BJET = new TH1F("h_met_reco_p4_Minus_BJET","", bins, min, max);
		h_met_reco_p4_Minus_HIGH_E = new TH1F("h_met_reco_p4_Minus_HIGH_E","", bins, min, max);
		h_met_reco_p4_Minus_TRUTH = new TH1F("h_met_reco_p4_Minus_TRUTH","", bins, min, max);

		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus);
		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus_CONTROL);
		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus_EXCEPT);
		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus_EXCEPT_FINE);
		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus_PRE);
		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus_BJET);
		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus_HIGH_E);
		hv_met_reco_p4_Minus.push_back(h_met_reco_p4_Minus_TRUTH);

		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus");
		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus_CONTROL");
		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus_EXCEPT");
		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus_EXCEPT_FINE");
		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus_PRE");
		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus_BJET");
		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus_HIGH_E");
		hv_met_reco_p4_Minus_names.push_back("h_met_reco_p4_Minus_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Rapidity
	void MC_Analysis::Book_met_reco_p4_Rapidity(int bins, double min, double max) {
		h_met_reco_p4_Rapidity = new TH1F("h_met_reco_p4_Rapidity","", bins, min, max);
		h_met_reco_p4_Rapidity_CONTROL = new TH1F("h_met_reco_p4_Rapidity_CONTROL","", bins, min, max);
		h_met_reco_p4_Rapidity_EXCEPT = new TH1F("h_met_reco_p4_Rapidity_EXCEPT","", bins, min, max);
		h_met_reco_p4_Rapidity_EXCEPT_FINE = new TH1F("h_met_reco_p4_Rapidity_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Rapidity_PRE = new TH1F("h_met_reco_p4_Rapidity_PRE","", bins, min, max);
		h_met_reco_p4_Rapidity_BJET = new TH1F("h_met_reco_p4_Rapidity_BJET","", bins, min, max);
		h_met_reco_p4_Rapidity_HIGH_E = new TH1F("h_met_reco_p4_Rapidity_HIGH_E","", bins, min, max);
		h_met_reco_p4_Rapidity_TRUTH = new TH1F("h_met_reco_p4_Rapidity_TRUTH","", bins, min, max);

		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity);
		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity_CONTROL);
		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity_EXCEPT);
		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity_EXCEPT_FINE);
		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity_PRE);
		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity_BJET);
		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity_HIGH_E);
		hv_met_reco_p4_Rapidity.push_back(h_met_reco_p4_Rapidity_TRUTH);

		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity");
		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity_CONTROL");
		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity_EXCEPT");
		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity_EXCEPT_FINE");
		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity_PRE");
		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity_BJET");
		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity_HIGH_E");
		hv_met_reco_p4_Rapidity_names.push_back("h_met_reco_p4_Rapidity_TRUTH");

	}
	//Histogram booking function for met_reco_p4_Eta
	void MC_Analysis::Book_met_reco_p4_Eta(int bins, double min, double max) {
		h_met_reco_p4_Eta = new TH1F("h_met_reco_p4_Eta","", bins, min, max);
		h_met_reco_p4_Eta_CONTROL = new TH1F("h_met_reco_p4_Eta_CONTROL","", bins, min, max);
		h_met_reco_p4_Eta_EXCEPT = new TH1F("h_met_reco_p4_Eta_EXCEPT","", bins, min, max);
		h_met_reco_p4_Eta_EXCEPT_FINE = new TH1F("h_met_reco_p4_Eta_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_Eta_PRE = new TH1F("h_met_reco_p4_Eta_PRE","", bins, min, max);
		h_met_reco_p4_Eta_BJET = new TH1F("h_met_reco_p4_Eta_BJET","", bins, min, max);
		h_met_reco_p4_Eta_HIGH_E = new TH1F("h_met_reco_p4_Eta_HIGH_E","", bins, min, max);
		h_met_reco_p4_Eta_TRUTH = new TH1F("h_met_reco_p4_Eta_TRUTH","", bins, min, max);

		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta);
		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta_CONTROL);
		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta_EXCEPT);
		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta_EXCEPT_FINE);
		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta_PRE);
		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta_BJET);
		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta_HIGH_E);
		hv_met_reco_p4_Eta.push_back(h_met_reco_p4_Eta_TRUTH);

		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta");
		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta_CONTROL");
		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta_EXCEPT");
		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta_EXCEPT_FINE");
		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta_PRE");
		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta_BJET");
		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta_HIGH_E");
		hv_met_reco_p4_Eta_names.push_back("h_met_reco_p4_Eta_TRUTH");

	}
	//Histogram booking function for met_reco_p4_PseudoRapidity
	void MC_Analysis::Book_met_reco_p4_PseudoRapidity(int bins, double min, double max) {
		h_met_reco_p4_PseudoRapidity = new TH1F("h_met_reco_p4_PseudoRapidity","", bins, min, max);
		h_met_reco_p4_PseudoRapidity_CONTROL = new TH1F("h_met_reco_p4_PseudoRapidity_CONTROL","", bins, min, max);
		h_met_reco_p4_PseudoRapidity_EXCEPT = new TH1F("h_met_reco_p4_PseudoRapidity_EXCEPT","", bins, min, max);
		h_met_reco_p4_PseudoRapidity_EXCEPT_FINE = new TH1F("h_met_reco_p4_PseudoRapidity_EXCEPT_FINE","", 10000, min, max);
		h_met_reco_p4_PseudoRapidity_PRE = new TH1F("h_met_reco_p4_PseudoRapidity_PRE","", bins, min, max);
		h_met_reco_p4_PseudoRapidity_BJET = new TH1F("h_met_reco_p4_PseudoRapidity_BJET","", bins, min, max);
		h_met_reco_p4_PseudoRapidity_HIGH_E = new TH1F("h_met_reco_p4_PseudoRapidity_HIGH_E","", bins, min, max);
		h_met_reco_p4_PseudoRapidity_TRUTH = new TH1F("h_met_reco_p4_PseudoRapidity_TRUTH","", bins, min, max);

		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity);
		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity_CONTROL);
		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity_EXCEPT);
		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity_EXCEPT_FINE);
		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity_PRE);
		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity_BJET);
		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity_HIGH_E);
		hv_met_reco_p4_PseudoRapidity.push_back(h_met_reco_p4_PseudoRapidity_TRUTH);

		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity");
		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity_CONTROL");
		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity_EXCEPT");
		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity_EXCEPT_FINE");
		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity_PRE");
		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity_BJET");
		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity_HIGH_E");
		hv_met_reco_p4_PseudoRapidity_names.push_back("h_met_reco_p4_PseudoRapidity_TRUTH");

	}
/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector met_reco_p4 ----- ///

