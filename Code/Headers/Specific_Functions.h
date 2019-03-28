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

void AllSignificanceCalc(string AnalysisType) {

	int selected_process;
	if (AnalysisType == "Electron") selected_process = 7;
	if (AnalysisType == "Muon") selected_process = 6;
	if (AnalysisType == "ElectronTau" || AnalysisType == "MuonTau" || AnalysisType == "ElectronMuon") selected_process = 5;

	vector<string> DataTypes;
	DataTypes.push_back("lep_0_lep_1_mass");
	DataTypes.push_back("lep_0_lep_1_mass_reco");
	DataTypes.push_back("pT_balance");
	DataTypes.push_back("pT_balance_reco_INSIDE");
	DataTypes.push_back("pT_balance_reco_OUTSIDE");
	DataTypes.push_back("lep_0_lep_1_mass_HIGH_E");
	DataTypes.push_back("lep_0_lep_1_mass_reco_HIGH_E");

	for (int i = 0; i < DataTypes.size(); i++) { 

		string DataType = DataTypes[i]; // define the data type as the ith element in the DataTypes vector
		vector<double> SignificanceVector;
		double Sig = 0;// initilize significance

		for (int i=0; i<DataTypes.size(); i++) {  // FOR LOOP FOR EACH PROCESS

			// calculate alpha
			Sig = SignificanceLevelCalc(AnalysisType, DataTypes[i], selected_process);
			SignificanceVector.push_back(Sig);

		}

		// save to file
		fstream output("../../Output-Files/Final_Graphs/" + AnalysisType + "/" + AnalysisType + "_Significance_values.txt", output.out | output.app);
		output << "Data Type: " << DataTypes[i] << "\t" << "Significance: " << SignificanceVector[i] << endl << endl;
		output.close();

	}

}




#endif
