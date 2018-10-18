#ifndef Zee2Jets_Analysis_h
#define Zee2Jets_Analysis_h

///--------------------- ORDER OF OPERATIONS ---------------------------///
///	1. Book Histograms
///	2. Initial Selection Cut
///	3. Generate Variables
///	4. Fill Histograms Pre Selection Cut
///	5. Selection Cut
///	6. Fill Histograms Post Selection Cut
///	7. Draw/Save Histograms

//This function will book all relevant histograms
void MC_Analysis::Zee2Jets_BookHistos() {

	int bins = 100;
	double cone_min = -11.5;
	double cone_max = -10.5;

	/////----------------------------------BOOKINGS------------------------------------/////
	///------------------------------------ elec_0 --------------------------------------///
	//ptvar cone histograms
	Book_elec_0_iso_ptvarcone20(bins, -12, 100000);
	Book_elec_0_iso_ptvarcone40(bins, -12, 100000);

	//topoet cone histograms
	Book_elec_0_iso_topoetcone20(bins, -12, 800000);
	Book_elec_0_iso_topoetcone40(bins, -12, 800000);

	///-------------------------------- elec_0 & elec_1 ----------------------------------///
	//invariant mass pre cut
	Book_elec_0_elec_1_mass_PRE(bins, 0, 200);

	//invariant mass post cut
	Book_elec_0_elec_1_mass(bins, 0, 200);

	///---------------------------------- Delta R ----------------------------------------///
	//Delta R
	Book_DeltaR(bins, 0, 10);

	//Delta R PRE
	Book_DeltaR_PRE(bins, 0, 10);
}


//This function will perform the inital cuts, ensuring we have all the particles needed for analysis
bool MC_Analysis::Zee2Jets_InitialCut() {

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

//This function will generate variables, put them in a vector, and return said vector
void MC_Analysis::Zee2Jets_GenerateVariables() {

	//Invariant Mass
	elec_0_elec_1_Mass = InvariantMass(elec_0_p4, elec_1_p4);

	//Delta R
	DeltaR = DeltaRCalc(elec_0_p4, elec_1_p4);

}

//Rhis function will fill the histograms that need to be filled before cuts are made
void MC_Analysis::Zee2Jets_FillAllData_PreCut() {

	//Invariant mass
	h_elec_0_elec_1_mass_PRE->Fill(elec_0_elec_1_Mass);
	h_DeltaR_PRE->Fill(DeltaR);

}

//This function will determine if event is cut
//Returns bool, for ease of use in if statements
bool MC_Analysis::Zee2Jets_Cut() {

	//Setting up conditions

	//Condition Checking

	//If the conditions are met, don't cut
	if (true) return false;	
	//Otherwise, cut
	return true;

}


//This function will fill all the histograms after cuts are made
void MC_Analysis::Zee2Jets_FillAllData_PostCut() {

	//ptvar cone histograms
	h_elec_0_iso_ptvarcone20->Fill(elec_0_iso_ptvarcone20);
	h_elec_0_iso_ptvarcone40->Fill(elec_0_iso_ptvarcone40);

	//topoet cone histograms
	h_elec_0_iso_topoetcone20->Fill(elec_0_iso_topoetcone20);
	h_elec_0_iso_topoetcone40->Fill(elec_0_iso_topoetcone40);

	//Invariant mass
	h_elec_0_elec_1_mass->Fill(elec_0_elec_1_Mass);

	//Delta R
	h_DeltaR->Fill(DeltaR);

}

//This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::Zee2Jets_DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../../Root-Files/Zee2Jets_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "Something's gone horribly wrong" << endl;

	//Draw histogram function takes the following:
	//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)

	//ptvar cone histograms
	DrawHistogram(h_elec_0_iso_ptvarcone20, "h_elec_0_iso_ptvarcone20", "h_elec_0_iso_ptvarcone20", "", 600, 400, true, "h_elec_0_iso_ptvarcone20.pdf");
	DrawHistogram(h_elec_0_iso_ptvarcone40, "h_elec_0_iso_ptvarcone40", "h_elec_0_iso_ptvarcone40", "", 600, 400, true, "h_elec_0_iso_ptvarcone40.pdf");

	//topoet cone histograms
	DrawHistogram_OldCanvas(h_elec_0_iso_topoetcone20, "h_elec_0_iso_topoetcone20", "h_elec_0_iso_topoetcone20", "", 600, 400, true, "h_elec_0_iso_topoetcone20.pdf");
	DrawHistogram(h_elec_0_iso_topoetcone40, "h_elec_0_iso_topoetcone40", "h_elec_0_iso_topoetcone40", "", 600, 400, true, "h_elec_0_iso_topoetcone40.pdf");

	//Elec 0 & Elec 1 histograms
	DrawHistogram(h_elec_0_elec_1_mass_PRE, "h_elec_0_elec_1_mass_PRE", "h_elec_0_elec_1_mass_PRE", "Invariant Mass [GeV/c^{2}]", 600, 400, false, "h_elec_0_elec_1_mass_PRE.pdf");
	DrawHistogram(h_elec_0_elec_1_mass, "h_elec_0_elec_1_mass", "h_elec_0_elec_1_mass", "Invariant Mass [GeV/c^{2}]", 600, 400, false, "h_elec_0_elec_1_mass.pdf");

	//Delta R Histograms
	DrawHistogram(h_DeltaR_PRE, "h_DeltaR_PRE", "h_DeltaR_PRE", "", 600, 400, false, "h_DeltaR_PRE.pdf");
	DrawHistogram(h_DeltaR, "h_DeltaR", "h_DeltaR", "", 600, 400, false, "h_DeltaR.pdf");

}

#endif
