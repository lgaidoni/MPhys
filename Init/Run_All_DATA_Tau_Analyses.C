#include <iostream>
#include "TROOT.h"
using namespace std;
void Run_All_DATA_Tau_Analyses() {

	gROOT->ProcessLine(".x ../Code/DATA_Analysis.C");
	gROOT->ProcessLine("Start_Tau_DATA_Analysis()");

}
