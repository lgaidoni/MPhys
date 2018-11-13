#ifndef AnalysisStartTest_h
#define AnalysisStartTest_h

void AnalysisStartTest() {

	gErrorIgnoreLevel = kWarning;

	vector<double> luminosity_info = csv_reader("308092");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee2jets_Min_N_TChannel(), 36200);
		
	MC_Analysis *Zee2JetsAnalysis = new MC_Analysis(Chain_Sh221_PDF30_Zee2jets_Min_N_TChannel(), "Electron", "Sh221_PDF30_Zee2jets_Min_N_TChannel", lum_weight);
	Zee2JetsAnalysis->Electron_BookHistos();
	Zee2JetsAnalysis->Loop();
	Zee2JetsAnalysis->Electron_DrawHistos();

}

#endif
