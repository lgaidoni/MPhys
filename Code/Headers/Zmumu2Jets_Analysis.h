#ifndef Zmumu2Jets_Analysis_h
#define Zmumu2Jets_Analysis_h
// This is the analysis file for VBF process for a Z boson decaying to mu mu 
// This folder contains 
	// 1. Booking histograms for Jets in VBF mu mu data set
	// 2. Invariant mass calculations for the 1st and 2nd muon
	// 3. Vector generation for physics variables used in analysis
	// 4. Pre-selection cuts
	// 5. Filling of pre selection data histograms
	// 6. Selection cuts
	// 7. Filling of selection data histograms
	// 8. Drawing of ALL histograms and writing to a file


// This function will book all relevant histograms

void MC_Analysis::Zmumu2Jets_BookHistos() {

	int bins = 100;
	double cone_min = -11.5;
	double cone_max = -10.5;

	/////----------------------------------BOOKINGS------------------------------------/////
	///------------------------------------ muon_0 --------------------------------------///
	//et cone histograms
	//Book_muon_0_iso_etcone20(bins, -12, 1); commented out as have peak at -11: warning not to use data
	//Book_muon_0_iso_etcone30(bins, -12, 1); commented out as have peak at -11: warning not to use data
	//Book_muon_0_iso_etcone40(bins, -12, 1); commented out as have peak at -11: warning not to use data

	//pt cone histograms
	Book_muon_0_iso_ptcone20(bins, -12, 1);
	Book_muon_0_iso_ptcone30(bins, -12, 1);
	Book_muon_0_iso_ptcone40(bins, -12, 1);

	//ptvar cone histograms
	Book_muon_0_iso_ptvarcone20(bins, -12, 100000);
	Book_muon_0_iso_ptvarcone30(bins, -12, 100000);
	Book_muon_0_iso_ptvarcone40(bins, -12, 100000);

	//topoet cone histograms
	Book_muon_0_iso_topoetcone20(bins, -12, 800000);
	Book_muon_0_iso_topoetcone30(bins, -12, 800000);
	Book_muon_0_iso_topoetcone40(bins, -12, 800000);

	///-------------------------------- muon_0 & muon_1 ----------------------------------///
	//invariant mass pre cut
	Book_muon_0_muon_1_mass_PRE(bins, 0, 200);

	//invariant mass post cut
	Book_muon_0_muon_1_mass(bins, 0, 200);
}


// This function will generate physics variables, put them in a vector, and return said vector
void MC_Analysis::Zmumu2Jets_GenerateVariables() {

	muon_0_muon_1_Mass = InvariantMass(muon_0_p4, muon_1_p4);

}

// Analysis starts here
// Cuts return bool, for ease in if statements
// Pre-Selection cut functions (dummy cuts)

bool MC_Analysis::Zmumu2Jets_Cut() {

	// Set conditions
	bool two_muons = false;
	bool two_or_more_jets = false;
	bool muons_opposite_charges = false;
	bool no_bjets = false;

	//Condition Checking
	if (muon_0 != 0 && muon_1 != 0) { // if two muons or anti-muons, or one of each are found
		two_muons = true;
		if (muon_0_q != muon_1_q) muons_opposite_charges = true;  // if muon anti-muon pair found
	}


}
// Selection cut functions (more sophistocated cuts)
	if (bjet_0 == 0 && bjet_1 == 0) no_bjets = true;  //If there are no bjets
	if (ljet_0 !=0 && ljet_1 != 0) two_or_more_jets = true;  //If two or more jets were found

	// If the conditions are met, don't cut
	if (two_muons && two_or_more_jets && muons_opposite_charges && no_bjets) return false;
	//Otherwise, cut
	return true;


// This function will fill the histograms that need to be filled before cuts are made
void MC_Analysis::Zmumu2Jets_FillAllData_PreCut() {

	//Invariant mass
	h_muon_0_muon_1_mass_PRE->Fill(muon_0_muon_1_Mass);

}



#endif
