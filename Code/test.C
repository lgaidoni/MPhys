#include <iostream>
#include "TROOT.h"
using namespace std;

void test() {
	gROOT->ProcessLine(".x MC_Analysis.C");
	gROOT->ProcessLine("Start_Sh221_PDF30_Zee2jets_Min_N_TChannel_Analysis(\"Electron\", \"ee\")");
}
