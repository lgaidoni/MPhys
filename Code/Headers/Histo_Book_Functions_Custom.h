#ifndef Histo_Book_Functions_Custom_h
#define Histo_Book_Functions_Custom_h

///This file is for custom histograms

///------------------------- elec_0 & elec_1 ----------------------------------------///

void MC_Analysis::Book_elec_0_elec_1_mass_PRECUT(int bins, double min, double max) {
	//Electron 0 & Electron 1 Invariant Mass before cuts are made
	h_elec_0_elec_1_mass_PRECUT = new TH1F("h_elec_0_elec_1_mass_PRECUT", "", bins, min, max);

}

void MC_Analysis::Book_elec_0_elec_1_mass(int bins, double min, double max) {
	//Electron 0 & Electron 1 Invariant Mass
	h_elec_0_elec_1_mass = new TH1F("h_elec_0_elec_1_mass", "", bins, min, max);

}

#endif
