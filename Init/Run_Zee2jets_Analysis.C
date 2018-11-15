#include <iostream>
#include "TROOT.h"
using namespace std;
void Run_Zee2jets_Analysis() {

	gROOT->ProcessLine(".x ../Code/MC_Analysis.C");
	gROOT->ProcessLine("Start_Electron_Sh221_PDF30_Zee2jets_Min_N_TChannel_Analysis()");

}
