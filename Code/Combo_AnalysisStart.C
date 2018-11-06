#include <iostream>
#include "TROOT.h"
using namespace std;

void Combo_AnalysisStart() {

	gROOT->ProcessLine(".x MC_Analysis.C");
	gROOT->ProcessLine("gErrorIgnoreLevel = kWarning");

	gROOT->ProcessLine("Zee2JetsAnalysis = new MC_Analysis(\"/pc2014-data4/alice-luca/Zee2Jets_Zee2Jets_Combo.root\", \"Zee2Jets\")");
	gROOT->ProcessLine("Zee2JetsAnalysis->Zee2Jets_BookHistos()");
	gROOT->ProcessLine("Zee2JetsAnalysis->Loop()");
	gROOT->ProcessLine("Zee2JetsAnalysis->Zee2Jets_DrawHistos()");

}
