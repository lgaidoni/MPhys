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




#endif
