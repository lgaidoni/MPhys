#include <iostream>
#include "TROOT.h"
using namespace std;
void Run_All_DATA_Muon_Analyses() {

	gROOT->ProcessLine(".x ../Code/DATA_Analysis.C");
	gROOT->ProcessLine("Start_Muon_DATA_Analysis()");

}
