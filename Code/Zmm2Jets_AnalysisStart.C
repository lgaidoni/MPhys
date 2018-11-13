#include <iostream>
#include "TROOT.h"
using namespace std;

void Zmm2Jets_AnalysisStart() {

	gROOT->ProcessLine(".x MC_Analysis.C");

	gROOT->ProcessLine("vector<double> luminosity_info = csv_reader(\"308093\")");  //Creation of luminosity information vector
	gROOT->ProcessLine("double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmm2jets_Min_N_TChannel(), 36200)");  //Generation of luminosity weight
		
	gROOT->ProcessLine("Zmm2JetsAnalysis = new MC_Analysis(Chain_Sh221_PDF30_Zmm2jets_Min_N_TChannel(), \"Muon\", \"Sh221_PDF30_Zmm2jets_Min_N_TChannel\", lum_weight)");
	gROOT->ProcessLine("Zmm2JetsAnalysis->Muon_BookHistos()");
	gROOT->ProcessLine("Zmm2JetsAnalysis->Loop()");
	gROOT->ProcessLine("Zmm2JetsAnalysis->Muon_DrawHistos()");

	//Overlay histograms
	gROOT->ProcessLine("Zmm2Jets_Zmm_Overlay()");



}
