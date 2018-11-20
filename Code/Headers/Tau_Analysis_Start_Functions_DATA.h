#ifndef Tau_Analysis_Start_Functions_h
#define Tau_Analysis_Start_Functions_h

void Start_Tau_DATA_Analysis() {
	gErrorIgnoreLevel = kError;
	DATA_Analysis *DATA = new DATA_Analysis(Chain_DATA(), "Tau", "DATA");
	DATA->Tau_BookHistos();
	DATA->Loop();
	DATA->Tau_DrawHistos();
}

#endif