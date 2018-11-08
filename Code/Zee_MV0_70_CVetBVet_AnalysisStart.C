#include <iostream>
#include "TROOT.h"
using namespace std;

void Zee_MV0_70_CVetBVet_AnalysisStart() {

	gROOT->ProcessLine(".x MC_Analysis.C");
	gROOT->ProcessLine("gErrorIgnoreLevel = kWarning");

	gROOT->ProcessLine("TChain *test = new TChain(\"NOMINAL\")");
	gROOT->ProcessLine("test->Add(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362793._000001.hist-output.root\")");	
	gROOT->ProcessLine("test->Add(\"/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362793._000003.hist-output.root\")");	
	gROOT->ProcessLine("ZeeAnalysis = new MC_Analysis(test, \"Zee2Jets\", \"Zee_MV0_70_CVetBVet\")");	
	gROOT->ProcessLine("ZeeAnalysis->Zee_BookHistos()");
	gROOT->ProcessLine("ZeeAnalysis->Loop()");
	gROOT->ProcessLine("ZeeAnalysis->Zee_DrawHistos()");

}
