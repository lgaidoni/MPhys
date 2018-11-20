#ifndef Muon_Analysis_Start_Functions_h
#define Muon_Analysis_Start_Functions_h

void Start_Muon_DATA_Analysis() {
	gErrorIgnoreLevel = kError;
	DATA_Analysis *DATA = new DATA_Analysis(Chain_DATA(), "Muon", "DATA");
	DATA->Muon_BookHistos();
	DATA->Loop();
	DATA->Muon_DrawHistos();
}

#endif