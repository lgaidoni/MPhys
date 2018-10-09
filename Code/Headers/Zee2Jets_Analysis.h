#ifndef Zee2Jets_Analysis_h
#define Zee2Jets_Analysis_h

void MC_Analysis::Zee2Jets_BookHistos() {

	int bins = 100;
	int cone_min = 0;
	int cone_max = 100;

	///------------------------------------ elec_0 --------------------------------------///
	//et cone histograms
	h_elec_0_iso_etcone20 = new TH1F("h_elec_0_iso_etcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_etcone30 = new TH1F("h_elec_0_iso_etcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_etcone40 = new TH1F("h_elec_0_iso_etcone40", "", bins, cone_min, cone_max);

	//pt cone histograms
	h_elec_0_iso_ptcone20 = new TH1F("h_elec_0_iso_ptcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptcone30 = new TH1F("h_elec_0_iso_ptcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptcone40 = new TH1F("h_elec_0_iso_ptcone40", "", bins, cone_min, cone_max);

	//ptvar cone histograms
	h_elec_0_iso_ptvarcone20 = new TH1F("h_elec_0_iso_ptvarcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptvarcone30 = new TH1F("h_elec_0_iso_ptvarcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_ptvarcone40 = new TH1F("h_elec_0_iso_ptvarcone40", "", bins, cone_min, cone_max);

	//topoet cone histograms
	h_elec_0_iso_topoetcone20 = new TH1F("h_elec_0_iso_topoetcone20", "", bins, cone_min, cone_max);
	h_elec_0_iso_topoetcone30 = new TH1F("h_elec_0_iso_topoetcone30", "", bins, cone_min, cone_max);
	h_elec_0_iso_topoetcone40 = new TH1F("h_elec_0_iso_topoetcone40", "", bins, cone_min, cone_max);

}

void MC_Analysis::Zee2Jets_FillAllData() {

	

}

#endif