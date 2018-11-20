#include <iostream>
#include "TROOT.h"
using namespace std;
void Run_All_DATA_Electron_Analyses() {

	gROOT->ProcessLine(".x ../Code/DATA_Analysis.C");
	gROOT->ProcessLine("Start_Electron_DATA_Analysis()");

}
