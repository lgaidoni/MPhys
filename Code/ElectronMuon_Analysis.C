void ElectronMuon_Analysis() {

	gROOT->ProcessLine(".x ../Code/MC_Analysis.C");
	gROOT->ProcessLine("Run_All_Analyses(\"ElectronMuon\")");

}
