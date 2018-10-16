#ifndef Histo_Book_Functions_h
#define Histo_Book_Functions_h

///These functions will book the histograms for sets of data
///-------------------------- elec_0 ------------------------------------------------------///

void MC_Analysis::Book_elec_0_etcone(int bins, double cone_min, double cone_max) {
	//et cone histograms
	h_elec_0_iso_etcone20 = new TH1F("h_elec_0_iso_etcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_etcone30 = new TH1F("h_elec_0_iso_etcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_etcone40 = new TH1F("h_elec_0_iso_etcone40", "", bins, cone_min, cone_max);
}

void MC_Analysis::Book_elec_0_ptcone(int bins, double cone_min, double cone_max) {
	//pt cone histograms
	h_elec_0_iso_ptcone20 = new TH1F("h_elec_0_iso_ptcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptcone30 = new TH1F("h_elec_0_iso_ptcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptcone40 = new TH1F("h_elec_0_iso_ptcone40", "", bins, cone_min, cone_max);
}

void MC_Analysis::Book_elec_0_ptvarcone(int bins, double cone_min, double cone_max) {
	//ptvar cone histograms
	h_elec_0_iso_ptvarcone20 = new TH1F("h_elec_0_iso_ptvarcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptvarcone30 = new TH1F("h_elec_0_iso_ptvarcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptvarcone40 = new TH1F("h_elec_0_iso_ptvarcone40", "", bins, cone_min, cone_max);
}

void MC_Analysis::Book_elec_0_topoetcone(int bins, double cone_min, double cone_max) {
	//topoet cone histograms
	h_elec_0_iso_topoetcone20 = new TH1F("h_elec_0_iso_topoetcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_topoetcone30 = new TH1F("h_elec_0_iso_topoetcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_topoetcone40 = new TH1F("h_elec_0_iso_topoetcone40", "", bins, cone_min, cone_max);
}

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
