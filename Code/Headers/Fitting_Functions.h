#ifndef Fitting_Functions_h
#define Fitting_Functions_h

void Fitting_Function(string AnalysisType, string DataType, string Process) {

	string DataTypeHistName = "h_" + DataType + "_CONTROL;1";

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

	//Load in all the files for the different processes, there are 12
	for (auto name = names.begin(); name < names.end(); name++) {
		files.push_back(new TFile(name->c_str()));
	}

	//Get all the histograms from files depending on the Data Type
	for (auto tfile = files.begin(); tfile < files.end(); tfile++) {
		TH1F *histogram = (TH1F*)(*tfile)->Get(DataTypeHistName.c_str());
		histograms.push_back(histogram);
	}

	//Selector for the process not to be subtracted
	int SelectedProcess;
	if (Process == "Ztt") SelectedProcess = 0;
	if (Process == "Ztt2jets") SelectedProcess = 1;
	if (Process == "ZqqZll") SelectedProcess = 2;
	if (Process == "Zmumu") SelectedProcess = 3;
	if (Process == "Zmm2jets") SelectedProcess = 4;
	if (Process == "Zee") SelectedProcess = 5;
	if (Process == "Zee2jets") SelectedProcess = 6;
	if (Process == "Wtaunu") SelectedProcess = 7;
	if (Process == "Wmunu") SelectedProcess = 8;
	if (Process == "Wenu") SelectedProcess = 9;
	if (Process == "ttb") SelectedProcess = 10;
	if (Process == "DATA") SelectedProcess = 11;

	//Get the data histogram from the vector
	TH1F *dataHistogram = histograms[11];

	//For all the non-data histograms in the histogram vector
	for (int i=0; i < 11; i++) {
		//If the process isn't the selected process
		if (i != SelectedProcess) {
			TH1F *histogram = histograms[i];
			dataHistogram->Add(histogram);
		}
	}

/*
	canvas->Divide(2, 1, 0, 0);
	canvas->cd(1);

	for (int i=0; i < 11; i++) {
		if (i == SelectedProcess) {
			histograms[i]->Draw("HIST");
		}
	}

	dataHistogram->Draw("SAME");

	canvas->cd(2);
*/

	for (int i=0; i < 11; i++) {
		if (i == SelectedProcess) {
			TH1F *histogram = histograms[i];
			dataHistogram->Divide(histogram);
		}

	}

	gStyle->SetOptFit(1111);
	dataHistogram->SetMinimum(0);
	dataHistogram->SetMaximum(3);

	dataHistogram->Draw("SAME");

	dataHistogram->GetXaxis()->SetTitle("Invariant Mass [GeV/c^{2}]"); 

	string yAxisTitle = "#frac{DATA - MC (Except " + Process + ")}{" + Process + "}";

	dataHistogram->GetYaxis()->SetTitle(yAxisTitle.c_str()); 

	dataHistogram->Fit("pol1");

	string OutputFilePath = "../../Output-Files/Fit-Graphs/" + AnalysisType + "_Fit.pdf";

	canvas->SaveAs(OutputFilePath.c_str());

}


#endif
