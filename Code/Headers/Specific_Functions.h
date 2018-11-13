#ifndef Specific_Functions_h
#define Specific_Functions_h
//This file contains specific functions that don't belong to the MC_Analysis Class

///-------THESE HAVE BEEN COMMENTED OUT UNTIL WE NEED TO PERFORM THESE FUNCTIONS AGAIN--------///
/// ------ Reminder of overlay function, found in Generic_Functions.h ------ ///

// QuickDrawHistogram_Overlay_Two(TFile *file1, TFile *file2, string DataType, string ChainName1, string ChainName2, string AnalysisType) {


// OVERLAYING DIFFERENT CHAIN DATA
// What ever is in the "void" function, copy this into the directory to run

// at the moment make the directory manually
//e.g. call it COMBO_Sh221_PDF30_Zee2jets_Min_N_TChannel_Sh221_PDF30_Zee_MV0_70_BFil

// Sh221_PDF30_Zee2jets_Min_N_TChannel AND Sh221_PDF30_Zee_MV0_70_BFil
void COMBO_Sh221_PDF30_Zee2jets_Min_N_TChannel_Sh221_PDF30_Zee_MV0_70_BFil_Overlay() {

	string name1 = "Sh221_PDF30_Zee2jets_Min_N_TChannel";
	string name2 = "Sh221_PDF30_Zee_MV0_70_BFil";

	string Directory1 = "~/Root-Files/Electron/" + name1 + "_Histograms.root";
	string Directory2 = "~/Root-Files/Electron/" + name2 + "_Histograms.root";

	TFile *file1 = new TFile(Directory1.c_str()); // Zee2Jets
	TFile *file2 = new TFile(Directory2.c_str()); // Zee_MV0_70_BFil
		
	QuickDrawHistogram_Overlay_Two(file1,file2, "elec_0_elec_1_mass", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_ljet_1_mass", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "RapidityDilepton", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "RapidityDijet", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "elec_0_elec_1_pt", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "DeltaR", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "pT_balance", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "pT_balance_3_CONTROL", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "Centrality", name1.c_str(), name2.c_str(), "Electron");

}

// Sh221_PDF30_Zee2jets_Min_N_TChannel AND Sh221_PDF30_Zee_MV0_70_CFilBVet
void COMBO_Sh221_PDF30_Zee2jets_Min_N_TChannel_Sh221_PDF30_Zee_MV0_70_CFilBVet_Overlay() {
// at the moment make the directory manually
	// Names of data set 1 and 2
	string name1 = "Sh221_PDF30_Zee2jets_Min_N_TChannel";
	string name2 = "Sh221_PDF30_Zee_MV0_70_CFilBVet";
	// their directories
	string Directory1 = "~/Root-Files/Electron/" + name1 + "_Histograms.root";
	string Directory2 = "~/Root-Files/Electron/" + name2 + "_Histograms.root";
	// make a new file for their directories
	TFile *file1 = new TFile(Directory1.c_str()); // Zee2Jets
	TFile *file2 = new TFile(Directory2.c_str()); // Zee_MV0_70_CFilBVet
	// QuickDraw their histograms for the different data types
	QuickDrawHistogram_Overlay_Two(file1,file2, "elec_0_elec_1_mass", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_ljet_1_mass", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "RapidityDilepton", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "RapidityDijet", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "elec_0_elec_1_pt", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "DeltaR", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "pT_balance", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "pT_balance_3_CONTROL", name1.c_str(), name2.c_str(), "Electron");
	QuickDrawHistogram_Overlay_Two(file1,file2, "Centrality", name1.c_str(), name2.c_str(), "Electron");

}


#endif
