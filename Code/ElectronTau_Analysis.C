void ElectronTau_Analysis() {

	gROOT->ProcessLine(".x ../Code/MC_Analysis.C");
	gROOT->ProcessLine("Run_All_Analyses(\"ElectronTau\")");

}
