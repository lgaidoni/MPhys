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
	Book_elec_0_iso_etcone20(bins, 0, 1);
	Book_elec_0_iso_etcone30(bins, 0, 1);
	Book_elec_0_iso_etcone40(bins, 0, 1);

	//pt cone histograms
	Book_elec_0_iso_ptcone20(bins, 0, 1);
	Book_elec_0_iso_ptcone30(bins, 0, 1);
	Book_elec_0_iso_ptcone40(bins, 0, 1);

	//ptvar cone histograms
	Book_elec_0_iso_ptvarcone20(bins, 0, 100000);
	Book_elec_0_iso_ptvarcone30(bins, 0, 100000);
	Book_elec_0_iso_ptvarcone40(bins, 0, 100000);

	//topoet cone histograms
	Book_elec_0_iso_topoetcone20(bins, 0, 800000);
	Book_elec_0_iso_topoetcone30(bins, 0, 800000);
	Book_elec_0_iso_topoetcone40(bins, 0, 800000);

	///-------------------------------- elec_0 & elec_1 ----------------------------------///
	//invariant mass pre cut
	Book_elec_0_elec_1_mass_PRECUT(bins, 0, 200);

	//invariant mass post cut
	Book_elec_0_elec_1_mass(bins, 0, 200);
}

//This function will generate variables, put them in a vector, and return said vector
void MC_Analysis::Zee2Jets_GenerateVariables() {

	elec_0_elec_1_Mass = InvariantMass(elec_0_p4, elec_1_p4);

}

//Rhis function will fill the histograms that need to be filled before cuts are made
void MC_Analysis::Zee2Jets_FillAllData_PreCut() {

	//Invariant mass
	h_elec_0_elec_1_mass_PRECUT->Fill(elec_0_elec_1_Mass);

}

//This function will determine if event is cut
//Returns bool, for ease of use in if statements
bool MC_Analysis::Zee2Jets_Cut() {

	//Setting up conditions
	bool two_electrons = false;
	bool two_or_more_jets = false;
	bool electrons_opposite_charges = false;
	bool no_bjets = false;

	//Condition Checking
	if (elec_0 != 0 && elec_1 != 0) { //If two electrons or positrons are found
		two_electrons = true;
		if (elec_0_q != elec_1_q) electrons_opposite_charges = true;  //If electron positron pair found
	}

	if (bjet_0 == 0 && bjet_1 == 0) no_bjets = true;  //If there are no bjets
	if (ljet_0 !=0 && ljet_1 != 0) two_or_more_jets = true;  //If two or more jets were found

	// If the conditions are met, don't cut
	if (two_electrons && two_or_more_jets && electrons_opposite_charges && no_bjets) return false;
	//Otherwise, cut
	return true;

}


//This function will fill all the histograms after cuts are made
void MC_Analysis::Zee2Jets_FillAllData_PostCut() {

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

	//Invariant mass
	h_elec_0_elec_1_mass->Fill(elec_0_elec_1_Mass);

}

//This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::Zee2Jets_DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../Root-Files/Zee2Jets_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "Something's gone horribly wrong" << endl;

	//Draw histogram function takes the following:
	//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)

	//et cone histograms
	DrawHistogram(h_elec_0_iso_etcone20, "h_elec_0_iso_etcone20", "h_elec_0_iso_etcone20", "", 600, 400, true, "h_elec_0_iso_etcone20.pdf");
	DrawHistogram(h_elec_0_iso_etcone30, "h_elec_0_iso_etcone30", "h_elec_0_iso_etcone30", "", 600, 400, true, "h_elec_0_iso_etcone30.pdf");
	DrawHistogram(h_elec_0_iso_etcone40, "h_elec_0_iso_etcone40", "h_elec_0_iso_etcone40", "", 600, 400, true, "h_elec_0_iso_etcone40.pdf");

	//pt cone histograms
	DrawHistogram(h_elec_0_iso_ptcone20, "h_elec_0_iso_ptcone20", "h_elec_0_iso_ptcone20", "", 600, 400, true, "h_elec_0_iso_ptcone20.pdf");
	DrawHistogram(h_elec_0_iso_ptcone30, "h_elec_0_iso_ptcone30", "h_elec_0_iso_ptcone30", "", 600, 400, true, "h_elec_0_iso_ptcone30.pdf");
	DrawHistogram(h_elec_0_iso_ptcone40, "h_elec_0_iso_ptcone40", "h_elec_0_iso_ptcone40", "", 600, 400, true, "h_elec_0_iso_ptcone40.pdf");

	//ptvar cone histograms
	DrawHistogram(h_elec_0_iso_ptvarcone20, "h_elec_0_iso_ptvarcone20", "h_elec_0_iso_ptvarcone20", "", 600, 400, true, "h_elec_0_iso_ptvarcone20.pdf");
	DrawHistogram(h_elec_0_iso_ptvarcone30, "h_elec_0_iso_ptvarcone30", "h_elec_0_iso_ptvarcone30", "", 600, 400, true, "h_elec_0_iso_ptvarcone30.pdf");
	DrawHistogram(h_elec_0_iso_ptvarcone40, "h_elec_0_iso_ptvarcone40", "h_elec_0_iso_ptvarcone40", "", 600, 400, true, "h_elec_0_iso_ptvarcone40.pdf");

	//topoet cone histograms
	DrawHistogram_OldCanvas(h_elec_0_iso_topoetcone20, "h_elec_0_iso_topoetcone20", "h_elec_0_iso_topoetcone20", "", 600, 400, true, "h_elec_0_iso_topoetcone20.pdf");
	DrawHistogram(h_elec_0_iso_topoetcone30, "h_elec_0_iso_topoetcone30", "h_elec_0_iso_topoetcone30", "", 600, 400, true, "h_elec_0_iso_topoetcone30.pdf");
	DrawHistogram(h_elec_0_iso_topoetcone40, "h_elec_0_iso_topoetcone40", "h_elec_0_iso_topoetcone40", "", 600, 400, true, "h_elec_0_iso_topoetcone40.pdf");

	//Elec 0 & Elec 1 histograms
	DrawHistogram(h_elec_0_elec_1_mass_PRECUT, "h_elec_0_elec_1_mass_PRECUT", "h_elec_0_elec_1_mass_PRECUT", "Invariant Mass [GeV/c^{2}]", 600, 400, false, "h_elec_0_elec_1_mass_PRECUT.pdf");
	DrawHistogram(h_elec_0_elec_1_mass, "h_elec_0_elec_1_mass", "h_elec_0_elec_1_mass", "Invariant Mass [GeV/c^{2}]", 600, 400, false, "h_elec_0_elec_1_mass.pdf");

}

#endif
