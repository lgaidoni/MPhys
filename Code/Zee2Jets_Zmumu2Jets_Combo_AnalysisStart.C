#include <iostream>
#include "TROOT.h"
using namespace std;

void Zee2Jets_Zmumu2Jets_Combo_AnalysisStart() {

	gROOT->ProcessLine(".x MC_Analysis.C");
	gROOT->ProcessLine("gErrorIgnoreLevel = kWarning");
	gROOT->ProcessLine("Zee2JetsAnalysis = new MC_Analysis(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357856._000001.hist-output.root\", \"Zee2Jets\")");
	gROOT->ProcessLine("Zee2JetsAnalysis->Zee2Jets_BookHistos()");
	gROOT->ProcessLine("Zee2JetsAnalysis->Loop()");
	gROOT->ProcessLine("Zee2JetsAnalysis->Zee2Jets_DrawHistos()");

	gROOT->ProcessLine("Zmumu2JetsAnalysis = new MC_Analysis(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357860._000001.hist-output.root\", \"Zmumu2Jets\")");
	gROOT->ProcessLine("Zmumu2JetsAnalysis->Zmumu2Jets_BookHistos()");
	gROOT->ProcessLine("Zmumu2JetsAnalysis->Loop()");
	gROOT->ProcessLine("Zmumu2JetsAnalysis->Zmumu2Jets_DrawHistos()");

	gROOT->ProcessLine("TFile *file1 = new TFile(\"~/Root-Files/Zee2Jets_Histograms.root\")");
	gROOT->ProcessLine("TFile *file2 = new TFile(\"~/Root-Files/Zmumu2Jets_Histograms.root\")");

	gROOT->ProcessLine("TestOverlay(file1, file2)");

}
