#ifndef Electron_Analysis_Start_Functions_h
#define Electron_Analysis_Start_Functions_h

void Start_Electron_DATA_Analysis() {
	gErrorIgnoreLevel = kError;
	DATA_Analysis *DATA = new DATA_Analysis(Chain_DATA(), "Electron", "DATA");
	DATA->Electron_BookHistos();
	DATA->Loop();
	DATA->Electron_DrawHistos();
}

#endif