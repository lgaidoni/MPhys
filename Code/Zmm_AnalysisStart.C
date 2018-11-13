#include <iostream>
#include "TROOT.h"
using namespace std;

void Zmm_AnalysisStart() {

	gROOT->ProcessLine(".x MC_Analysis.C");

	gROOT->ProcessLine("vector<double> luminosity_info = csv_reader(\"364102\")");  //Creation of luminosity information vector
	gROOT->ProcessLine("double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_BFil(), 36200)");  //Generation of luminosity weight
		
	gROOT->ProcessLine("ZmmAnalysis = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_BFil(), \"Muon\", \"Sh221_PDF30_Zmumu_MV0_70_BFil\", lum_weight)");
	gROOT->ProcessLine("ZmmAnalysis->Muon_BookHistos()");
	gROOT->ProcessLine("ZmmAnalysis->Loop()");
	gROOT->ProcessLine("ZmmAnalysis->Muon_DrawHistos()");



}
