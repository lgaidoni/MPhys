#include <iostream>
#include "TROOT.h"
using namespace std;

void Zee2Jets_Zmumu2Jets_Combo_AnalysisStart() {

gROOT->ProcessLine(".x MC_Analysis.C");
gROOT->ProcessLine("Zee2JetsAnalysis = new MC_Analysis(\"/pc2014-data4/alice-luca/Zee2Jets_Zmmm2Jets_Combo.root\", \"Zee2Jets\")");
gROOT->ProcessLine("Zee2JetsAnalysis->Zmumu2Jets_BookHistos()");
gROOT->ProcessLine("Zee2JetsAnalysis->Loop()");
gROOT->ProcessLine("Zee2JetsAnalysis->Zmumu2Jets_DrawHistos()");

}
