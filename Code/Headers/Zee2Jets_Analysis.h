#ifndef Zee2Jets_Analysis_h
#define Zee2Jets_Analysis_h

//This function will book all relevant histograms
void MC_Analysis::Zee2Jets_BookHistos() {

	int bins = 100;
	double cone_min = -11.5;
	double cone_max = -10.5;

	/////----------------------------------BOOKINGS------------------------------------/////
	///------------------------------------ elec_0 --------------------------------------///
	//et cone histograms
	Book_elec_0_etcone(bins, 0, 1);

	//pt cone histograms
	Book_elec_0_ptcone(bins, 0, 1);

	//ptvar cone histograms
	Book_elec_0_ptvarcone(bins, 0, 100000);

	//topoet cone histograms
	Book_elec_0_topoetcone(bins, 0, 800000);

}

//This function will fill all the histograms
void MC_Analysis::Zee2Jets_FillAllData() {

	//et cone histograms
	h_elec_0_iso_etcone20->Fill(elec_0_iso_etcone20);
	h_elec_0_iso_etcone30->Fill(elec_0_iso_etcone30);
	h_elec_0_iso_etcone40->Fill(elec_0_iso_etcone40);

	//pt cone histograms
	h_elec_0_iso_ptcone20->Fill(elec_0_iso_ptcone20);
	h_elec_0_iso_ptcone30->Fill(elec_0_iso_ptcone30);
	h_elec_0_iso_ptcone40->Fill(elec_0_iso_ptcone40);

	//ptvar cone histograms
	h_elec_0_iso_ptvarcone20->Fill(elec_0_iso_ptvarcone20);
	h_elec_0_iso_ptvarcone30->Fill(elec_0_iso_ptvarcone30);
	h_elec_0_iso_ptvarcone40->Fill(elec_0_iso_ptvarcone40);

	//topoet cone histograms
	h_elec_0_iso_topoetcone20->Fill(elec_0_iso_topoetcone20);
	h_elec_0_iso_topoetcone30->Fill(elec_0_iso_topoetcone30);
	h_elec_0_iso_topoetcone40->Fill(elec_0_iso_topoetcone40);

}

//This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::Zee2Jets_DrawHistos() {

	TFile *Histograms;
	string FilePath = "../Root-Files/Zee2Jets_Histograms.root";

	if (gSystem->AccessPathName(FilePath.c_str()) == 1) TFile *Histograms = new TFile(FilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(FilePath.c_str()) == 0) TFile *Histograms = new TFile(FilePath.c_str(),"RECREATE");
	else cout << "Something's gone horribly wrong" << endl;

	DrawHistogram(h_elec_0_iso_topoetcone20, "h_elec_0_iso_topoetcone20", "h_elec_0_iso_topoetcone20", 600, 400, false);
	DrawHistogram(h_elec_0_iso_topoetcone20, "h_elec_0_iso_topoetcone20log", "h_elec_0_iso_topoetcone20log", 600, 400, true);
	DrawHistogram(h_elec_0_iso_topoetcone40, "h_elec_0_iso_topoetcone40", "h_elec_0_iso_topoetcone40", 600, 400, false);

}

#endif
