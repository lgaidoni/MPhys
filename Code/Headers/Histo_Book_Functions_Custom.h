#ifndef Histo_Book_Functions_Custom_h
#define Histo_Book_Functions_Custom_h

///////////////////////////////////////////////////////////////////////////////////////
/// ---------------------FORMATTING OF CUSTOM HISTOGRAM DEFINITIONS-----------------///
///////////////////////////////////////////////////////////////////////////////////////

/// -- Virtual book function to book the histogram
//void MC_Analysis::Book_variable(int bins, double min, double max) {
//	h_variable = new TH1F("h_variable", "", bins, min, max);
//}

/// -- Virtual book function to book the histogram (PRE version)
//void MC_Analysis::Book_variable(int bins, double min, double max) {
//	h_variable = new TH1F("h_variable", "", bins, min, max);
//}

///////////////////////////////////////////////////////////////////////////////////////
/// ----------------END OF FORMATTING OF CUSTOM HISTOGRAM DEFINITIONS---------------///
///////////////////////////////////////////////////////////////////////////////////////

/// -------- RECYCLABLE VARIABLES ------ ///

///----------Delta R---------------------///

//Delta R
void MC_Analysis::Book_DeltaR(int bins, double min, double max) {
	h_DeltaR = new TH1F("h_DeltaR", "", bins, min, max);
}

//Delta R PRE
void MC_Analysis::Book_DeltaR_PRE(int bins, double min, double max) {
	h_DeltaR_PRE = new TH1F("h_DeltaR_PRE", "", bins, min, max);
}


/// ----------- ELECTRONS ------------- ///

///-------------Invariant mass of electron 0 and electron 1-----------------///

//Electron 0 & Electron 1 Invariant Mass
void MC_Analysis::Book_elec_0_elec_1_mass(int bins, double min, double max) {
	h_elec_0_elec_1_mass = new TH1F("h_elec_0_elec_1_mass", "", bins, min, max);
}

//Electron 0 & Electron 1 Invariant Mass before cuts are made
void MC_Analysis::Book_elec_0_elec_1_mass_PRE(int bins, double min, double max) {
	h_elec_0_elec_1_mass_PRE = new TH1F("h_elec_0_elec_1_mass_PRE", "", bins, min, max);
}


/// ----------- MUONS ------------- ///

///-------------Invariant mass of muon 0 and muon 1-----------------///

//muon 0 & muon 1 Invariant Mass
void MC_Analysis::Book_muon_0_muon_1_mass(int bins, double min, double max) {
	h_muon_0_muon_1_mass = new TH1F("h_muon_0_muon_1_mass", "", bins, min, max);
}

// muon 0 & muon 1 Invariant Mass before cuts are made
void MC_Analysis::Book_muon_0_muon_1_mass_PRE(int bins, double min, double max) {
	h_muon_0_muon_1_mass_PRE = new TH1F("h_muon_0_muon_1_mass_PRE", "", bins, min, max);
}

/// ---------- JETS --------------///

//Function for booking leading jets invariant mass
void MC_Analysis::Book_ljet_0_ljet_1_mass(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass = new TH1F("h_ljet_0_ljet_1_mass", "", bins, min, max);
}

//Function for booking leading jets invariant mass
void MC_Analysis::Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max) {
	h_ljet_0_ljet_1_mass_PRE = new TH1F("h_ljet_0_ljet_1_mass_PRE", "", bins, min, max);
}




#endif
