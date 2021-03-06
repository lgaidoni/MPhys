#ifndef Specific_Functions_h
#define Specific_Functions_h
//This file contains specific functions that don't belong to the MC_Analysis Class

//Comnine all the different chains for each different process for each analysis type
void CombineAllProcesses(string higgs_suffix) {

	CombineAllProcesses_AnalysisType("Electron", higgs_suffix);
	CombineAllProcesses_AnalysisType("Muon", higgs_suffix);

	CombineAllProcesses_AnalysisType("ElectronMuon", higgs_suffix);
	CombineAllProcesses_AnalysisType("ElectronTau", higgs_suffix);
	CombineAllProcesses_AnalysisType("MuonTau", higgs_suffix);

}

void Draw_All_Stacked_Processes(string higgs_suffix) {

	gErrorIgnoreLevel = kError;

	DrawStackedProcesses("Electron", higgs_suffix);
	DrawStackedProcesses("Muon", higgs_suffix);

	DrawStackedProcesses("ElectronMuon", higgs_suffix);
	DrawStackedProcesses("ElectronTau", higgs_suffix);
	DrawStackedProcesses("MuonTau", higgs_suffix);

}

void All_Draw_Weighted_Histo_And_Ratio() {

	vector<TFile*> ElectronFiles = Root_Files("Electron", "");

	Draw_Weighted_Histo_And_Ratio("Electron", "", "jet_0_jet_1_mass_CONTROL", "Zee", 0, 0, 1, 50, false, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "", "jet_0_jet_1_mass_CONTROL", "Zee", 0, 0, 1, 50, true, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "", "jet_0_jet_1_mass", "Zee", 0, 0, 1, 50, false, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "", "jet_0_jet_1_mass", "Zee", 0, 0, 1, 50, true, ElectronFiles);

	vector<TFile*> MuonFiles = Root_Files("Muon", "");

	Draw_Weighted_Histo_And_Ratio("Muon", "", "jet_0_jet_1_mass_CONTROL", "Zmumu", 0, 0, 1, 50, false, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "", "jet_0_jet_1_mass_CONTROL", "Zmumu", 0, 0, 1, 50, true, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "", "jet_0_jet_1_mass", "Zmumu", 0, 0, 1, 50, false, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "", "jet_0_jet_1_mass", "Zmumu", 0, 0, 1, 50, true, MuonFiles);

}

void All_Cross_Section_Calculation_QCD_EW_ll_Specific() {

	vector<TFile*> ElectronFiles = Root_Files("Electron", "");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "", "jet_0_jet_1_mass", "Zee", "Zee2jets", 0, 0, 1, 50, false, "308092", ElectronFiles);
	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "", "jet_0_jet_1_mass", "Zee", "Zee2jets", 0, 0, 1, 50, true, "308092", ElectronFiles);

	vector<TFile*> MuonFiles = Root_Files("Muon", "");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", 0, 0, 1, 50, false, "308093", MuonFiles);
	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", 0, 0, 1, 50, true, "308093", MuonFiles);

}

void All_Draw_Weighted_Histo_And_Ratio_HIGGS() {

	vector<TFile*> ElectronFiles = Root_Files("Electron", "_Higgs");

	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zee", 0, 0, 1, 50, false, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zee", 0, -0.000246994, 1.04378, 50, true, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", 0, 0, 1, 50, false, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", 0, -0.000246994, 1.04378, 50, true, ElectronFiles);

	vector<TFile*> MuonFiles = Root_Files("Muon", "_Higgs");

	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zmumu", 0, 0, 1, 50, false, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zmumu", 0, -0.000325259, 1.20721, 50, true, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", 0, 0, 1, 50, false, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", 0, -0.000325259, 1.20721, 50, true, MuonFiles);

}

void All_Cross_Section_Calculation_QCD_EW_ll_Specific_HIGGS() {

	vector<TFile*> ElectronFiles = Root_Files("Electron", "_Higgs");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", "Zee2jets", 0, -0.000246994, 1.04378, 50, false, "308092", ElectronFiles);
	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", "Zee2jets", 0, -0.000246994, 1.04378, 50, true, "308092", ElectronFiles);

	vector<TFile*> MuonFiles = Root_Files("Muon", "_Higgs");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", 0, -0.000325259, 1.20721, 50, false, "308093", MuonFiles);
	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", 0, -0.000325259, 1.20721, 50, true, "308093", MuonFiles);

}

void All_Draw_Weighted_Histo_And_Ratio_HIGGS_36() {

	vector<TFile*> ElectronFiles = Root_Files_36("Electron", "_Higgs");

	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zee", 0, -0.000539855, 2.17999, 50, false, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zee", 0, -0.000539855, 2.17999, 50, true, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", 0, -0.000539855, 2.17999, 50, false, ElectronFiles);
	Draw_Weighted_Histo_And_Ratio("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", 0, -0.000539855, 2.17999, 50, true, ElectronFiles);

	vector<TFile*> MuonFiles = Root_Files_36("Muon", "_Higgs");
	cout << endl << endl << endl << "***$$$£££ --- Muon --- £££$$$***" << endl << endl << endl << endl;
	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zmumu", 0, -0.000515599, 2.26366, 50, false, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass_CONTROL", "Zmumu", 0, -0.000515599, 2.26366, 50, true, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", 0, -0.000515599, 2.26366, 50, false, MuonFiles);
	Draw_Weighted_Histo_And_Ratio("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", 0, -0.000515599, 2.26366, 50, true, MuonFiles);

}

void All_Cross_Section_Calculation_QCD_EW_ll_Specific_HIGGS_36() {

	vector<TFile*> ElectronFiles = Root_Files_36("Electron", "_Higgs");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", "Zee2jets", 0, -0.000539855, 2.17999, 50, false, "308092", ElectronFiles);
	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "_Higgs", "jet_0_jet_1_mass", "Zee", "Zee2jets", 0, -0.000539855, 2.17999, 50, true, "308092", ElectronFiles);

	vector<TFile*> MuonFiles = Root_Files_36("Muon", "_Higgs");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", 0, -0.000515599, 2.26366, 50, false, "308093", MuonFiles);
	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "_Higgs", "jet_0_jet_1_mass", "Zmumu", "Zmm2jets", 0, -0.000515599, 2.26366, 50, true, "308093", MuonFiles);

}

void All_Draw_Weighted_Histo_And_Ratio_HIGGS_EE_MM() {

	vector<TFile*> ElectronFiles = Root_Files("Electron", "_Higgs");

	vector<TFile*> MuonFiles = Root_Files("Muon", "_Higgs");

	Draw_Weighted_Histo_And_Ratio_EE_MM("_Higgs", "jet_0_jet_1_mass_CONTROL", 0, 0, 1, 50, false, ElectronFiles, MuonFiles, false);
	Draw_Weighted_Histo_And_Ratio_EE_MM("_Higgs", "jet_0_jet_1_mass_CONTROL", 1.65721e-08, -0.000289638, 1.10706, 50, true, ElectronFiles, MuonFiles, false);

	Draw_Weighted_Histo_And_Ratio_EE_MM("_Higgs", "jet_0_jet_1_mass", 0, 0, 1, 50, false, ElectronFiles, MuonFiles, false);
	Draw_Weighted_Histo_And_Ratio_EE_MM("_Higgs", "jet_0_jet_1_mass", 1.65721e-08, -0.000289638, 1.10706, 50, true, ElectronFiles, MuonFiles, false);

}

void All_Cross_Section_Calculation_QCD_EW_EE_MM() {

	vector<TFile*> ElectronFiles = Root_Files("Electron", "_Higgs");
	vector<TFile*> MuonFiles = Root_Files("Muon", "_Higgs");

	Cross_Section_Calculation_QCD_EW_EE_MM("_Higgs", "jet_0_jet_1_mass", 1.65721e-08, -0.000289638, 1.10706, 50, false, "308093", ElectronFiles, MuonFiles);
	Cross_Section_Calculation_QCD_EW_EE_MM("_Higgs", "jet_0_jet_1_mass", 1.65721e-08, -0.000289638, 1.10706, 50, true, "308093", ElectronFiles, MuonFiles);

}

void AllSignificanceCalc(string AnalysisType, string higgs_suffix) {

	vector<TFile*> root_files = Root_Files(AnalysisType, higgs_suffix);

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
	DataTypes.push_back("jet_0_jet_1_mass");
	DataTypes.push_back("jet_0_jet_1_mass_HIGH_E");


	fstream output("../../Output-Files/Final_Graphs/" + AnalysisType + higgs_suffix + "/" + AnalysisType + higgs_suffix + "_Significance_values.txt", output.out);
	output << "Data Type \t & Significance \t & \t Error" << endl << endl;

	for (int i = 0; i < DataTypes.size(); i++) { 

		string DataType = DataTypes[i]; // define the data type as the ith element in the DataTypes vector
		vector<TH1F*> histograms = Histogram_Return_Given_File(DataType, root_files);
		vector<double> SignificanceVector;
		double Sig = 0;// initilize significance

		for (int i=0; i<DataTypes.size(); i++) {  // FOR LOOP FOR EACH PROCESS

			// calculate alpha
			//string AnalysisType, string DataType, int SelectedProcess, vector<TFile*> root_files, vector<TH1F*> histograms, string higgs_suffix)
			Sig = SignificanceLevelCalc(AnalysisType, DataTypes[i], selected_process, root_files, histograms, higgs_suffix);
			SignificanceVector.push_back(Sig);

		}


		vector<double> SignificanceErrorVector;
		double Err = 0;// initilize error

		for (int i=0; i<DataTypes.size(); i++) {  // FOR LOOP FOR EACH PROCESS
			// calculate alpha
			Err = SignificanceErrorCalc(AnalysisType, DataTypes[i], selected_process, root_files, histograms, higgs_suffix);
			SignificanceErrorVector.push_back(Err);

		}

		// save to file
		output << DataTypes[i] + higgs_suffix << "\t & " << SignificanceVector[i] << " \t & " << SignificanceErrorVector[i] << endl << endl;

	}
	output.close();
}


void AllSignificanceCalc_EXCEPT(string AnalysisType, string higgs_suffix) { // For EXCEPT JET MASS ONLY

	double min = 10;
	double max = 50;
	string DataType = "jet_0_jet_1_mass_EXCEPT";

	vector<TFile*> root_files = Root_Files(AnalysisType, higgs_suffix);
	vector<TH1F*> histograms = Histogram_Return_Given_File(DataType, root_files);

	int SelectedProcess;
	if (AnalysisType == "Electron") SelectedProcess = 7;
	if (AnalysisType == "Muon") SelectedProcess = 6;
	if (AnalysisType == "ElectronTau" || AnalysisType == "MuonTau" || AnalysisType == "ElectronMuon") SelectedProcess = 5;

	fstream output("../../Output-Files/Final_Graphs/" + AnalysisType + higgs_suffix + "/" + AnalysisType + higgs_suffix + "_Significance_EXCEPT_values.txt", output.out);
	output << "Data Type \t & Significance \t & \t Error" << endl << endl;

	// calculate significance and error
	double Sig = EXCEPT_Significance_Calc(AnalysisType, DataType, SelectedProcess, root_files, histograms, min, max, higgs_suffix);
	double Err = EXCEPT_Significance_Calc_ERR(AnalysisType, DataType, SelectedProcess, root_files, histograms, min, max, higgs_suffix);

	// save to file
	output << DataType + higgs_suffix << "\t & Sig: " << Sig << " \t & Err: " << Err << endl << endl;
	output.close();
}



void Generate_All_TXT_Files() {

	//NumberEventsCalc("Electron", "_Higgs");
	//NumberEventsCalc("MuonTau", "_Higgs");
	//NumberEventsCalc("Muon", "_Higgs");

	//NumberEventsCalc("Electron", "");
	//NumberEventsCalc("ElectronTau", "");
	//NumberEventsCalc("MuonTau", "");
	//NumberEventsCalc("Muon", "");

	//AllSignificanceCalc("Electron", "_Higgs");
	//AllSignificanceCalc("MuonTau", "_Higgs");
	//AllSignificanceCalc("Muon", "_Higgs");

	//AllSignificanceCalc("Electron", "");
	//AllSignificanceCalc("ElectronTau", "");
	//AllSignificanceCalc("MuonTau", "");
	//AllSignificanceCalc("Muon", "");

	All_Draw_Weighted_Histo_And_Ratio_HIGGS();
	All_Draw_Weighted_Histo_And_Ratio();

	All_Cross_Section_Calculation_QCD_EW_ll_Specific_HIGGS();
	All_Cross_Section_Calculation_QCD_EW_ll_Specific();

}


#endif
