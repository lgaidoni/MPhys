// This is the analysis file for VBF process for a Z boson decaying to mu mu 
#ifndef Zmumu2Jets_Analysis_h
#define Zmumu2Jets_Analysis_h


///--------------------- ORDER OF OPERATIONS ---------------------------///

///	1. Book Histograms
///	2. Initial Selection Cut
///	3. Generate Variables
///	4. Fill Histograms Pre Selection Cut
///	5. Selection Cut
///	6. Fill Histograms Post Selection Cut
///	7. Draw/Save Histograms

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
	Book_muon_0_iso_ptcone20(bins, 0, 10000);
	Book_muon_0_iso_ptcone30(bins, 0, 10000);
	Book_muon_0_iso_ptcone40(bins, 0, 10000);

	//ptvar cone histograms
	Book_muon_0_iso_ptvarcone20(bins, 0, 800000);
	Book_muon_0_iso_ptvarcone30(bins, 0, 800000);
	Book_muon_0_iso_ptvarcone40(bins, 0, 800000);

	//topoet cone histograms
	Book_muon_0_iso_topoetcone20(bins, 0, 800000);
	Book_muon_0_iso_topoetcone30(bins, 0, 800000);
	Book_muon_0_iso_topoetcone40(bins, 0, 800000);

	// muon_p4.Pt() 
	Book_muon_0_p4_Pt(bins, 0, 200);

	///-------------------------------- muon_0 & muon_1 ----------------------------------///
	//invariant mass pre cut
	Book_muon_0_muon_1_mass_PRE(bins, 0, 200);

	//invariant mass post cut
	Book_muon_0_muon_1_mass(bins, 0, 200);

	///---------------------------------- Delta R ----------------------------------------///
	//Delta R
	Book_DeltaR(bins, 0, 10);

	//Delta R PRE
	Book_DeltaR_PRE(bins, 0, 10);

}

// Pre-Selection cut functions (dummy cuts)
// Cuts return bool, for ease in if statements
bool MC_Analysis::Zmumu2Jets_InitialCut() {

	// Set conditions
	bool two_muons = false;
	bool two_or_more_jets = false;
	bool muons_opposite_charges = false;
	bool no_bjets = false;
	bool Pt_threshold = false;
	
	// Event reconstruction checking
	
	//Condition Checking
	if (muon_0 != 0 && muon_1 != 0) { // if two muons or anti-muons, or one of each are found
		two_muons = true;
		if (muon_0_q != muon_1_q) muons_opposite_charges = true;  // if muon anti-muon pair found
	}
	
	// bjet cuts
	if (bjet_0 == 0 && bjet_1 == 0) no_bjets = true;  //If there are no bjets
	if (ljet_0 !=0 && ljet_1 != 0) two_or_more_jets = true;  //If two or more jets were found

	// If the conditions are met, don't cut
	if (two_muons && two_or_more_jets && muons_opposite_charges && no_bjets) return false;
	//Otherwise, cut
	return true;


}

// This function will generate physics variables, put them in a vector, and return said vector
void MC_Analysis::Zmumu2Jets_GenerateVariables() {

	// Invariant Mass
	muon_0_muon_1_Mass = InvariantMass(muon_0_p4, muon_1_p4);

	//Delta R
	DeltaR = DeltaRCalc(muon_0_p4, muon_1_p4);
}

// This function will fill the histograms that need to be filled BEFORE initial cuts are made
void MC_Analysis::Zmumu2Jets_FillAllData_PreCut() {

	//Invariant mass
	h_muon_0_muon_1_mass_PRE->Fill(muon_0_muon_1_Mass);

	// Delta R
	h_DeltaR_PRE->Fill(DeltaR);
}

// Analysis starts here
// Cuts return bool, for ease in if statements
// Selection cut functions (more sophistocated cuts)
bool MC_Analysis::Zmumu2Jets_Cut() {

	// search region cuts from Section 6, page 7, REF: ATLAS doi:10.1007/JHEP04(2014)031
	// Z boson defined as 2 opp charged same flavour leptons with a dilepton invariant mass of 81 < m_{ll} < 101 GeV
	// Transverse momentum of dilepton pair p_T^{ll} > 20GeV
	
	// At least 2 jets that satisfy p_T^{j1} > 55 GeV, p_T^{j2} > 45 GeV 
	// j1 j2 highest and second highest order transverse momentum jets
	// invariant mass of 2 leading jets required to satisfy m_jj > 250 GeV
	// no additional jest with p_T > 25 GeV in rapidity interval between two leading jets
	// p_T balance required to be less than 0.15

	//Condition Checking

	//If the conditions are met, don't cut
	if (true) return false;	
	//Otherwise, cut
	return true;

}

// This function will fill the histograms that need to be filled AFTER initial cuts are made
void MC_Analysis::Zmumu2Jets_FillAllData_PostCut() {

	// pt cone histograms
	h_muon_0_iso_ptcone20->Fill(muon_0_iso_ptcone20);
	h_muon_0_iso_ptcone30->Fill(muon_0_iso_ptcone30);
	h_muon_0_iso_ptcone40->Fill(muon_0_iso_ptcone40);

	// ptvar cone histograms
	h_muon_0_iso_ptvarcone20->Fill(muon_0_iso_ptvarcone20);
	h_muon_0_iso_ptvarcone30->Fill(muon_0_iso_ptvarcone30);
	h_muon_0_iso_ptvarcone40->Fill(muon_0_iso_ptvarcone40);

	// topoet cone histograms
	h_muon_0_iso_topoetcone20->Fill(muon_0_iso_topoetcone20);
	h_muon_0_iso_topoetcone30->Fill(muon_0_iso_topoetcone30);
	h_muon_0_iso_topoetcone40->Fill(muon_0_iso_topoetcone40);

	// muon_0_p4.Pt
	h_muon_0_p4_Pt->Fill(muon_0_p4->Pt()); // to access the Pt Lorentz Vector

	// Invariant mass
	h_muon_0_muon_1_mass->Fill(muon_0_muon_1_Mass);

	// Delta R
	h_DeltaR->Fill(DeltaR);

}


// This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::Zmumu2Jets_DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../../Root-Files/Zmumu2Jets_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) TFile *Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "Something's gone horribly wrong" << endl;

	// Draw histogram function takes the following:
	// DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)

	// ptcone histograms
	DrawHistogram(h_muon_0_iso_ptcone20, "h_muon_0_iso_ptcone20", "h_muon_0_iso_ptcone20", "", 600, 400, true, "h_muon_0_iso_ptcone20.pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptcone30, "h_muon_0_iso_ptcone30", "h_muon_0_iso_ptcone30", "", 600, 400, true, "h_muon_0_iso_ptcone30.pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptcone40, "h_muon_0_iso_ptcone40", "h_muon_0_iso_ptcone40", "", 600, 400, true, "h_muon_0_iso_ptcone40.pdf", AnalysisType);

	// topoetcone histograms
	DrawHistogram(h_muon_0_iso_topoetcone20, "h_muon_0_iso_topoetcone20", "h_muon_0_iso_topoetcone20", "", 600, 400, true, "h_muon_0_iso_topoetcone20.pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_topoetcone30, "h_muon_0_iso_topoetcone30", "h_muon_0_iso_topoetcone30", "", 600, 400, true, "h_muon_0_iso_topoetcone30.pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_topoetcone40, "h_muon_0_iso_topoetcone40", "h_muon_0_iso_topoetcone40", "", 600, 400, true, "h_muon_0_iso_topoetcone40.pdf", AnalysisType);
	
	// ptvarcone histograms
	DrawHistogram(h_muon_0_iso_ptvarcone20, "h_muon_0_iso_ptvarcone20", "h_muon_0_iso_ptvarcone20", "", 600, 400, true, "h_muon_0_iso_ptvarcone20.pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptvarcone40, "h_muon_0_iso_ptvarcone30", "h_muon_0_iso_ptvarcone30", "", 600, 400, true, "h_muon_0_iso_ptvarcone30.pdf", AnalysisType);
	DrawHistogram(h_muon_0_iso_ptvarcone30, "h_muon_0_iso_ptvarcone40", "h_muon_0_iso_ptvarcone40", "", 600, 400, true, "h_muon_0_iso_ptvarcone40.pdf", AnalysisType);
	
	// muon_0_p4_Pt
	DrawHistogram(h_muon_0_p4_Pt, "h_muon_0_p4_Pt", "h_muon_0_p4_Pt", "", 600, 400, true, "h_muon_0_p4_Pt.pdf", AnalysisType);

	// muon 0 & muon 1 histograms
	DrawHistogram(h_muon_0_muon_1_mass_PRE, "h_muon_0_muon_1_mass_PRE", "h_elec_0_elec_1_mass_PRE", "Invariant Mass [GeV/c^{2}]", 600, 400, false, "h_muon_0_muon_1_mass_PRE.pdf", AnalysisType);
	DrawHistogram(h_muon_0_muon_1_mass, "h_muon_0_muon_1_mass", "h_muon_0_muon_1_mass", "Invariant Mass [GeV/c^{2}]", 600, 400, false, "h_muon_0_muon_1_mass.pdf", AnalysisType);

	// Delta R Histograms
	DrawHistogram(h_DeltaR_PRE, "h_DeltaR_PRE", "h_DeltaR_PRE_muon", "", 600, 400, false, "h_DeltaR_PRE_muon.pdf", AnalysisType);
	DrawHistogram(h_DeltaR, "h_DeltaR", "h_DeltaR_muon", "", 600, 400, false, "h_DeltaR_muon.pdf", AnalysisType);


}

#endif
