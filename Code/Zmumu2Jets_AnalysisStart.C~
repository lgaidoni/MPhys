#include <iostream>
#include "TROOT.h"
using namespace std;

void Zmumu2Jets_AnalysisStart() {

	gROOT->ProcessLine("double ScaleFactor = 1");
	gROOT->ProcessLine(".x MC_Analysis.C");

	gROOT->ProcessLine("Zmumu2JetsAnalysis = new MC_Analysis(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357860._000001.hist-output.root\", \"Zmumu2Jets\")");
	gROOT->ProcessLine("Zmumu2JetsAnalysis->Zmumu2Jets_BookHistos()");
	gROOT->ProcessLine("Zmumu2JetsAnalysis->Loop()");
	gROOT->ProcessLine("Zmumu2JetsAnalysis->Zmumu2Jets_DrawHistos()");

}
