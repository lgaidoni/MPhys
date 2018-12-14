#ifndef Specific_Functions_h
#define Specific_Functions_h
//This file contains specific functions that don't belong to the MC_Analysis Class

//Comnine all the different chains for each different process for each analysis type
void CombineAllProcesses() {

	CombineAllProcesses_AnalysisType("Electron");
	CombineAllProcesses_AnalysisType("ElectronMuon");
	CombineAllProcesses_AnalysisType("Muon");

}

//Run the complete analysis on everything
void Run_Complete_Analysis() {

	Run_All_Analyses("Electron", "ee");
	Run_All_Analyses("Muon", "mm");
	Run_All_Analyses("ElectronMuon", "em");
	
	CombineAllProcesses();

	DrawStackedProcesses("Electron");
	DrawStackedProcesses("Muon");
	DrawStackedProcesses("ElectronMuon");

}

void All_Draw_Weighted_Histo_And_Ratio() {

	Draw_Weighted_Histo_And_Ratio("Electron", "ljet_0_ljet_1_mass_CONTROL", "Zee", -0.000240084, 0.996438, 50, false);
	Draw_Weighted_Histo_And_Ratio("Electron", "ljet_0_ljet_1_mass_CONTROL", "Zee", -0.000240084, 0.996438, 50, true);
	Draw_Weighted_Histo_And_Ratio("Electron", "ljet_0_ljet_1_mass", "Zee", -0.000240084, 0.996438, 50, false);
	Draw_Weighted_Histo_And_Ratio("Electron", "ljet_0_ljet_1_mass", "Zee", -0.000240084, 0.996438, 50, true);

	Draw_Weighted_Histo_And_Ratio("Muon", "ljet_0_ljet_1_mass_CONTROL", "Zmumu", -0.000279242, 1.01748, 50, false);
	Draw_Weighted_Histo_And_Ratio("Muon", "ljet_0_ljet_1_mass_CONTROL", "Zmumu", -0.000279242, 1.01748, 50, true);
	Draw_Weighted_Histo_And_Ratio("Muon", "ljet_0_ljet_1_mass", "Zmumu", -0.000279242, 1.01748, 50, false);
	Draw_Weighted_Histo_And_Ratio("Muon", "ljet_0_ljet_1_mass", "Zmumu", -0.000279242, 1.01748, 50, true);

}

void All_Cross_Section_Calculation_QCD_EW_ll_Specific() {

	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "ljet_0_ljet_1_mass", "Zee", "Zee2jets", -0.000240084, 0.996438, 50, false, "308092");
	Cross_Section_Calculation_QCD_EW_ll_Specific("Electron", "ljet_0_ljet_1_mass", "Zee", "Zee2jets", -0.000240084, 0.996438, 50, true, "308092");

	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "ljet_0_ljet_1_mass", "Zmumu", "Zmm2jets", -0.000279242, 1.01748, 50, false, "308093");
	Cross_Section_Calculation_QCD_EW_ll_Specific("Muon", "ljet_0_ljet_1_mass", "Zmumu", "Zmm2jets", -0.000279242, 1.01748, 50, true, "308093");

}

#endif
