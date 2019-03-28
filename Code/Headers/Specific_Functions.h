#ifndef Specific_Functions_h
#define Specific_Functions_h
//This file contains specific functions that don't belong to the MC_Analysis Class

//Comnine all the different chains for each different process for each analysis type
void CombineAllProcesses() {

	CombineAllProcesses_AnalysisType("Electron");
	CombineAllProcesses_AnalysisType("Muon");

	CombineAllProcesses_AnalysisType("ElectronMuon");
	CombineAllProcesses_AnalysisType("ElectronTau");
	CombineAllProcesses_AnalysisType("MuonTau");

}

void Draw_All_Stacked_Processes() {

	gErrorIgnoreLevel = kError;

	DrawStackedProcesses("Electron");
	DrawStackedProcesses("Muon");

	DrawStackedProcesses("ElectronMuon");
	DrawStackedProcesses("ElectronTau");
	DrawStackedProcesses("MuonTau");

}

void All_Draw_Weighted_Histo_And_Ratio() {

	Draw_Weighted_Histo_And_Ratio("Electron", "jet_0_jet_1_mass_CONTROL", "Zee", -0.000240084, 0.996438, 50, false);
	Draw_Weighted_Histo_And_Ratio("Electron", "jet_0_jet_1_mass_CONTROL", "Zee", -0.000240084, 0.996438, 50, true);
	Draw_Weighted_Histo_And_Ratio("Electron", "jet_0_jet_1_mass", "Zee", -0.000240084, 0.996438, 50, false);
	Draw_Weighted_Histo_And_Ratio("Electron", "jet_0_jet_1_mass", "Zee", -0.000240084, 0.996438, 50, true);

	Draw_Weighted_Histo_And_Ratio("Muon", "jet_0_jet_1_mass_CONTROL", "Zmumu", -0.000279242, 1.01748, 50, false);
	Draw_Weighted_Histo_And_Ratio("Muon", "jet_0_jet_1_mass_CONTROL", "Zmumu", -0.000279242, 1.01748, 50, true);
	Draw_Weighted_Histo_And_Ratio("Muon", "jet_0_jet_1_mass", "Zmumu", -0.000279242, 1.01748, 50, false);
	Draw_Weighted_Histo_And_Ratio("Muon", "jet_0_jet_1_mass", "Zmumu", -0.000279242, 1.01748, 50, true);

}

void All_Cross_Section_Calculation_QCD_EW_ll_Specific() {

	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "jet_0_jet_1_mass", "Zee", "Zee2jets", -0.000240084, 0.996438, 50, false, "308092");
	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "jet_0_jet_1_mass", "Zee", "Zee2jets", -0.000240084, 0.996438, 50, true, "308092");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", -0.000279242, 1.01748, 50, false, "308093");
	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", -0.000279242, 1.01748, 50, true, "308093");

}

/*void All_Generate_Significance_Values() {

	double alpha;

	vector<string> types;
	types.push_back("lep_0_lep_1_mass");
	types.push_back("lep_0_lep_1_mass_reco");
	types.push_back("pT_balance");
	types.push_back("pT_balance_reco_INSIDE");
	types.push_back("pT_balance_reco_OUTSIDE");
	types.push_back("lep_0_lep_1_mass_HIGH_E");
	types.push_back("lep_0_lep_1_mass_reco_HIGH_E");

	for (int i = 0; i < types.size(); i++) { 
		// calculate 
		alpha
		alpha = SignificanceLevelCalc("MuonTau", types[i], 5);	
		// save to file
		fstream output("../../Output-Files/Final_Graphs/MuonTau_Significance.txt", output.out | output.app);
		output << types[i] << "\t" << alpha << "\n" << endl;
		output.close();

	}

}
*/



#endif
