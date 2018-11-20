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




// s1 = string of file name
// s2 = substring of event type we want to link together

if (s1.find(s2) != std::string::npos) { // if it contains the event type s2

	
	
}
