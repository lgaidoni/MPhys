#include <iostream>
#include "TROOT.h"
using namespace std;

void Zee2Jets_AnalysisStart() {

	//General Setup
	gROOT->ProcessLine(".x MC_Analysis.C"); //Processing of MC_Analysis Files
	gROOT->ProcessLine("gErrorIgnoreLevel = kWarning");  //Suppression of INFO messages

	gROOT->ProcessLine("vector<double> luminosity_info = csv_reader(\"308092\")");  //Creation of luminosity information vector
	gROOT->ProcessLine("double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee2jets_Min_N_TChannel(), 36200)");  //Generation of luminosity weight
		
	gROOT->ProcessLine("Zee2JetsAnalysis = new MC_Analysis(Chain_Sh221_PDF30_Zee2jets_Min_N_TChannel(), \"Electron\", \"Sh221_PDF30_Zee2jets_Min_N_TChannel\", lum_weight)");
	gROOT->ProcessLine("Zee2JetsAnalysis->Electron_BookHistos()");
	gROOT->ProcessLine("Zee2JetsAnalysis->Loop()");
	gROOT->ProcessLine("Zee2JetsAnalysis->Electron_DrawHistos()");

}
