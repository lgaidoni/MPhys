#include <iostream>
#include "TROOT.h"
using namespace std;
void Run_All_Electron_Analyses() {

	gROOT->ProcessLine(".x ../Code/MC_Analysis.C");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV280_500_CFilBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV0_70_BFil_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV140_280_BFil_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV280_500_CVetBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV0_70_CFilBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV1000_E_CMS_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV70_140_CVetBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV140_280_CVetBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV70_140_CFilBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV280_500_BFil_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV500_1000_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV140_280_CFilBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV0_70_CVetBVet_Analysis()");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee_MV70_140_BFil_Analysis()");

}
