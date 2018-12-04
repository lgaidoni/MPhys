#ifndef Fitting_Functions_h
#define Fitting_Functions_h

vector<TH1F*> Histogram_Return(string AnalysisType, string DataType) {

	string DataTypeHistName = "h_" + DataType + ";1";

	vector<string> names;
	vector<TFile*> files;
	vector<TH1F*> histograms;

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

	return histograms;

}

void Fit(string AnalysisType, string DataType, string Process) {

	vector<TH1F*> histograms = Histogram_Return(AnalysisType, DataType);

	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

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

void Process_Weighting(string AnalysisType, string DataType, string Process, double m, double c, double bins) {

	vector<TH1F*> histograms = Histogram_Return(AnalysisType, DataType);

	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

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

	for (int i=0; i < 11; i++) {
		if (i == SelectedProcess) {

			TH1F *histogram = histograms[i];

			double xmin = histogram->GetXaxis()->GetXmin();
			double xmax = histogram->GetXaxis()->GetXmax();
			double binwidth = (xmax - xmin)/bins;

			for(int j=0; j < bins + 1; j++) {

				double bin_centre = binwidth * j;
				double bin_content = histogram->GetBinContent(j);
				double fit_y = m * bin_centre + c;
					
				cout << "Bin centre: " << bin_centre << " ";
				cout << "Bin content: " << bin_content << " ";
				cout << "fit_y: " << fit_y << " ";
				cout << "nbc: " << fit_y * bin_content << endl;

				histogram->SetBinContent(j, fit_y * bin_content);

			}
		}
	}

	//Create the stacked histogram
	THStack *histogramStack = new THStack("histogramStack", "");

	//Set the line colours for all the histograms, fill
	histograms[0]->SetLineColor(kRed-7);
	histograms[0]->SetFillStyle(0);

	histograms[1]->SetLineColor(kBlue-9);
	histograms[1]->SetFillStyle(0);

	histograms[2]->SetLineColor(kGreen-7);
	histograms[2]->SetFillStyle(0);

	histograms[3]->SetLineColor(kYellow+2);
	histograms[3]->SetFillStyle(0);

	histograms[4]->SetLineColor(kAzure+10);
	histograms[4]->SetFillStyle(0);

	histograms[5]->SetLineColor(kGreen-8);
	histograms[5]->SetFillStyle(0);

	histograms[6]->SetLineColor(kViolet-6);
	histograms[6]->SetFillStyle(0);

	histograms[7]->SetLineColor(kOrange-3);
	histograms[7]->SetFillStyle(0);

	histograms[8]->SetLineColor(kCyan-8);
	histograms[8]->SetFillStyle(0);

	histograms[9]->SetLineColor(kGray);
	histograms[9]->SetFillStyle(0);

	histograms[10]->SetLineColor(kMagenta-10);
	histograms[10]->SetFillStyle(0);

	histograms[11]->Sumw2();
	histograms[11]->SetLineColor(kBlack);
	histograms[11]->SetMarkerStyle(8);
	histograms[11]->SetMarkerSize(0.3);

	//  and add to the stack
	for (int i=0; i < 11; i++) {
		histogramStack->Add(histograms[i], "hist");
	}
	histogramStack->Draw("");//Draw the stack, actually stacking (no "nostack")
	histogramStack->GetYaxis()->SetTitle("Events (Weighted)");

	if (DataType.find("p4_Pt") != string::npos) histogramStack->GetXaxis()->SetTitle("Momentum [GeV/c]"); 
	if (DataType.find("_mass") != string::npos) histogramStack->GetXaxis()->SetTitle("Invariant Mass [GeV/c^{2}]"); 

	histograms[11]->Draw("SAME");

	canvas->SetLogy();

	string LegendHeader = AnalysisType + " " + DataType + " Weighted QCD";

	//Create the legend
	auto legend = new TLegend(0.95,0.95,0.70,0.60);
	legend->SetHeader(LegendHeader.c_str());
	legend->SetTextSize(0.02);
	legend->AddEntry(histograms[11], "Data");
	legend->AddEntry(histograms[0], "Ztt");
	legend->AddEntry(histograms[1], "Ztt2jets");
	legend->AddEntry(histograms[2], "ZqqZll");
	legend->AddEntry(histograms[3], "Zmumu");
	legend->AddEntry(histograms[4], "Zmm2jets");
	legend->AddEntry(histograms[5], "Zee");
	legend->AddEntry(histograms[6], "Zee2jets");
	legend->AddEntry(histograms[7], "Wtaunu");
	legend->AddEntry(histograms[8], "Wmunu");
	legend->AddEntry(histograms[9], "Wenu");
	legend->AddEntry(histograms[10], "ttb");
	legend->Draw();

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Fit-Graphs/" + DataType + "_" + AnalysisType + "_Final_Stacked_Weighted.pdf"; // Need to create directory to save the Data Types into their own folders (if thats easier)
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}


#endif
