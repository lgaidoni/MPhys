#include <iostream>
#include "TROOT.h"
using namespace std;


void Input_AnalysisStart() {

	string AnalysisType;
	cout << "What Analysis type would you like to use?" << endl;
	cin >> AnalysisType;

	// Zmumu2Jets
	if (AnalysisType == "Zee2Jets"){
	
	// Here are the file CODES from the chain we want to use for Zee2Jets
	// 1. Need to edit this later when chains are ready

	gROOT->ProcessLine("InputAnalysis = new MC_Analysis(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362796._000001.hist-output.root\", \"Zee\")");
	gROOT->ProcessLine("InputAnalysis->Zmumu2InputAnalysis_BookHistos()");
	gROOT->ProcessLine("InputAnalysis->Loop()");
	gROOT->ProcessLine("InputAnalysis->InputAnalysis_DrawHistos()");

//	cout << "got this far yay" << endl;
//	gROOT->ProcessLine(".x MC_Analysis.C");
//	gROOT->ProcessLine("Zmumu2JetsAnalysis = new MC_Analysis(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357860._000001.hist-output.root\", \"Zmumu2Jets\")");
//	gROOT->ProcessLine("Zmumu2JetsAnalysis->Zmumu2Jets_BookHistos()");
//	gROOT->ProcessLine("Zmumu2JetsAnalysis->Loop()");
//	gROOT->ProcessLine("Zmumu2JetsAnalysis->Zmumu2Jets_DrawHistos()");

}
