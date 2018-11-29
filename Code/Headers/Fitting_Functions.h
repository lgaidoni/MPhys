#ifndef Fitting_Functions_h
#define Fitting_Functions_h

void Fitting_Function(string AnalysisType, string DataType, string Process) {

	string DataTypeHistName = "h_" + DataType + ";1";

	vector<string> names;
	vector<TFile*> files;
	vector<TH1F*> histograms;

	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

	// Here is the file Path that has Access to Processes
	// string ROOTFilePath = "../../Root-Files/" + AnalysisType + "/Processes/";
	// Loop over these processes or do manually as below: 

	//Create the file names for the stack of processes
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Ztt_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Ztt2jets_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/ZqqZll_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zmumu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zmm2jets_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zee_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zee2jets_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Wtaunu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Wmunu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Wenu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/ttb_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/DATA_Histograms.root");

	//Load in all the files for the different processes, there are 11
	for (auto name = names.begin() + 1; name < names.end(); name++) {
		files.push_back(new TFile(name->c_str()));
	}

	//Get all the histograms from files depending on the Data Type
	for (auto tfile = files.begin() + 1; tfile < files.end(); tfile++) {
		TH1F *histogram = (TH1F*)(*tfile)->Get(DataTypeHistName.c_str());
		histograms.push_back(histogram);
	}

	int SelectedProcess;

	if (Process == "Ztt") SelectedProcess = 0;


}


#endif
