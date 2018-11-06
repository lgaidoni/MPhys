#ifndef Specific_Functions_h
#define Specific_Functions_h
//This file contains specific functions that don't belong to the MC_Analysis Class

//This function will draw all the desired combined histograms for Zee2Jets and Zmumu2Jets
void Zee2Jets_Zmumu2Jets_Overlay() {

	TFile *file1 = new TFile("~/Root-Files/Zee2Jets_Histograms.root");
	TFile *file2 = new TFile("~/Root-Files/Zmumu2Jets_Histograms.root");

	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_ljet_1_mass", "Zee2Jets", "Zmumu2Jets");
	QuickDrawHistogram_Overlay_Two(file1,file2, "DeltaR", "Zee2Jets", "Zmumu2Jets");
	QuickDrawHistogram_Overlay_Two(file1,file2, "pT_balance", "Zee2Jets", "Zmumu2Jets");
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_p4_Pt", "Zee2Jets", "Zmumu2Jets");
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_1_p4_Pt", "Zee2Jets", "Zmumu2Jets");
	QuickDrawHistogram_Overlay_Two(file1,file2, "elec_0_elec_1_mass", "Zee2Jets", "Zmumu2Jets");
}

//This function will draw all the desired combined histograms for Zee2Jets and Zee
void Zee2Jets_Zee_Overlay() {

	TFile *file1 = new TFile("~/Root-Files/Zee2Jets_Histograms.root");
	TFile *file2 = new TFile("~/Root-Files/Zee_Histograms.root");

	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_ljet_1_mass", "Zee2Jets", "Zee");
	QuickDrawHistogram_Overlay_Two(file1,file2, "DeltaR", "Zee2Jets", "Zee");
	QuickDrawHistogram_Overlay_Two(file1,file2, "pT_balance", "Zee2Jets", "Zee");
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_p4_Pt", "Zee2Jets", "Zee");
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_1_p4_Pt", "Zee2Jets", "Zee");
	QuickDrawHistogram_Overlay_Two(file1,file2, "elec_0_elec_1_mass", "Zee2Jets", "Zee");
}


#endif