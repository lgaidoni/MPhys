#include <iostream>
#include "TROOT.h"
using namespace std;

void Zmumu_AnalysisStart() {

	gROOT->ProcessLine(".x MC_Analysis.C");
	gROOT->ProcessLine("ZmumuAnalysis = new MC_Analysis(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362886._000001.hist-output.root\", \"Zmumu\")");
	gROOT->ProcessLine("ZmumuAnalysis->Zmumu_BookHistos()");
	gROOT->ProcessLine("ZmumuAnalysis->Loop()");
	gROOT->ProcessLine("ZmumuAnalysis->Zmumu_DrawHistos()");

}
