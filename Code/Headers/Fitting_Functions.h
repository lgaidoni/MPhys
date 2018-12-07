#ifndef Fitting_Functions_h
#define Fitting_Functions_h

//This function will return the histogram that is the Data Process divided by the MC Process
TH1F* MC_DATA_Comparison(vector<TH1F*> histograms, int SelectedProcess) {
	
	//Get the data histogram from the vector
	TH1F *dataHistogram = (TH1F*)histograms[11]->Clone();

	//For all the non-data histograms in the histogram vector
	for (int i=0; i < 11; i++) {
		//If the process isn't the selected process
		if (i != SelectedProcess) {
			TH1F *histogram = histograms[i];
			dataHistogram->Add(histogram, -1);
		}
	}

	//For all the non-data histograms in the histogram vector
	for (int i=0; i < 11; i++) {
		//If the process isn't the selected process
		if (i == SelectedProcess) {
			TH1F *histogram = histograms[i]; 
			/*
			for (int j=0; j < 50; j++) {

				cout << j << ": MC Process = " << histograms[i]->GetBinContent(j) << " DATA Process = " << dataHistogram->GetBinContent(j) << " Ratio: " << dataHistogram->GetBinContent(j)/histograms[i]->GetBinContent(j) << endl;

			}
			*/
			dataHistogram->Divide(histogram);  //Divide the reduced data histogram by the selected process's histogram
		}
	}

	return dataHistogram;

}

int Process_Selector(string Process) {

	//Selector for the process
	int SelectedProcess;
	if (Process == "ttb") SelectedProcess = 0;
	if (Process == "Wtaunu") SelectedProcess = 1;
	if (Process == "Wmunu") SelectedProcess = 2;
	if (Process == "Wenu") SelectedProcess = 3;
	if (Process == "ZqqZll") SelectedProcess = 4;
	if (Process == "Ztt2jets") SelectedProcess = 5;
	if (Process == "Zmm2jets") SelectedProcess = 6;
	if (Process == "Zee2jets") SelectedProcess = 7;
	if (Process == "Ztt") SelectedProcess = 8;
	if (Process == "Zmumu") SelectedProcess = 9;
	if (Process == "Zee") SelectedProcess = 10;
	if (Process == "DATA") SelectedProcess = 11;

	return SelectedProcess;

}

TH1F* Weight_Process_Histogram(vector<TH1F*> histograms, int SelectedProcess, double m, double c, double bins) { 

	TH1F *histogram;

	for (int i=0; i < 11; i++) {
		if (i == SelectedProcess) {

			histogram = histograms[i];

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

	return histogram;

}

void Fit_MC_DATA_Comparison(string AnalysisType, string DataType, string Process) {

	vector<TH1F*> histograms = Histogram_Return(AnalysisType, DataType);

	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

	//Selector for the process not to be subtracted
	int SelectedProcess = Process_Selector(Process);

	//Get the data histogram from the vector
	TH1F *comparisonHistogram = MC_DATA_Comparison(histograms, SelectedProcess);

	gStyle->SetOptFit(1111);
	comparisonHistogram->SetMinimum(0);
	comparisonHistogram->SetMaximum(3);

	comparisonHistogram->Draw("SAME");

	Histogram_Namer(comparisonHistogram, DataType); 

	string yAxisTitle = "#frac{DATA - MC (Except " + Process + ")}{" + Process + "}";

	comparisonHistogram->GetYaxis()->SetTitle(yAxisTitle.c_str()); 

	comparisonHistogram->Fit("pol1");

	string OutputFilePath = "../../Output-Files/Fit-Graphs/" + AnalysisType + "_Fit.pdf";

	canvas->SaveAs(OutputFilePath.c_str());

}

void Process_Weighting(string AnalysisType, string DataType, string Process, double m, double c, double bins) {

	vector<TH1F*> histograms = Histogram_Return(AnalysisType, DataType);

	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

	//Selector for the process not to be subtracted
	int SelectedProcess = Process_Selector(Process);

	//Get the data histogram from the vector
	TH1F *dataHistogram = histograms[11];

	for (int i=0; i < 11; i++) {
		if (i == SelectedProcess) {
			histograms[i] = Weight_Process_Histogram(histograms, SelectedProcess, m, c, bins);
		}
	}

	//Create the stacked histogram
	THStack *histogramStack = new THStack("histogramStack", "");

	histograms = Set_Histogram_Styles(histograms);

	//  and add to the stack
	for (int i=0; i < 11; i++) {
		histogramStack->Add(histograms[i], "hist");
	}

	histogramStack->Draw("");//Draw the stack, actually stacking (no "nostack")
	histogramStack->GetYaxis()->SetTitle("Events (Weighted)");

	Histogram_Namer(histogramStack, DataType);

	histograms[11]->Draw("SAME");

	Legend_Creator(histograms);

	canvas->SetLogy();

	Draw_Region(DataType);

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Fit-Graphs/" + DataType + "_" + AnalysisType + "_Final_Stacked_Weighted.pdf"; // Need to create directory to save the Data Types into their own folders (if thats easier)
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}

void Draw_Weighted_Histo_And_Ratio(string AnalysisType, string DataType, string Process, double m, double c, double bins, bool weight) {

	
	vector<TH1F*> histograms = Histogram_Return(AnalysisType, DataType);

	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

	gStyle->SetOptStat(0);

	//TPad(Name, Options, x-min, y-min, x-max, y-max, something else)
	TPad *pad1 = new TPad("pad1", "", 0.0, 0.25, 1.0, 1.0, 0);
	TPad *pad2 = new TPad("pad2", "", 0.0, 0.0, 1.0, 0.25, 0);

	pad1->SetTopMargin(0.05);
	pad1->SetBottomMargin(0);
	pad1->SetLeftMargin(0.085);
	pad1->SetRightMargin(0.04);
	pad1->Draw();

	pad2->SetTopMargin(0);
	pad2->SetBottomMargin(0.4);
	pad2->SetLeftMargin(0.085);
	pad2->SetRightMargin(0.04);
	pad2->Draw();

	pad1->cd();

	//Selector for the process not to be subtracted
	int SelectedProcess = Process_Selector(Process);

	//Get the data histogram from the vector
	TH1F *dataHistogram = histograms[11];
	
	if (weight) {
		for (int i=0; i < 11; i++) {
			if (i == SelectedProcess) {
				histograms[i] = Weight_Process_Histogram(histograms, SelectedProcess, m, c, bins);
			}
		}	
	}

	gPad->SetLogy();

	//Create the stacked histogram
	THStack *histogramStack = new THStack("histogramStack", "");

	histograms = Set_Histogram_Styles(histograms);

	//  and add to the stack
	for (int i=0; i < 11; i++) {
		histogramStack->Add(histograms[i], "hist");
	}

	histogramStack->SetMaximum(10000);
	histogramStack->Draw("");//Draw the stack, actually stacking (no "nostack")
	histogramStack->GetYaxis()->SetLabelSize(0.);

	//TGaxis(x-Start, y-Start, x-End, y-End, N Divisions, Final Axis Value, 510, "G")
	TGaxis *axis = new TGaxis(0, 1, 0, 10000, 1, 10000, 510, "G");
	axis->SetLabelFont(43); // Absolute font size in pixel (precision 3)
	axis->SetLabelSize(16);
	axis->SetTitleFont(43);
	axis->SetTitleSize(16);
	axis->SetTitleOffset(0.9);
	axis->SetTitle("Events");
	axis->Draw();

	Histogram_Namer(histogramStack, DataType);

	TH1F *NewDataHistogram = (TH1F*)histograms[11]->Clone();
	NewDataHistogram->Draw("SAME");

	pad1->Update();

	Legend_Creator_For_Fit(histograms);

	Draw_Region_For_Fit(DataType);

	canvas->cd();
	pad2->cd();

	//Get the data histogram from the vector
	TH1F *comparisonHistogram = MC_DATA_Comparison(histograms, SelectedProcess);

	comparisonHistogram->SetMinimum(0);
	comparisonHistogram->SetMaximum(3);
	comparisonHistogram->Draw();
	comparisonHistogram->GetXaxis()->SetLabelSize(0.);
	comparisonHistogram->GetXaxis()->SetTickLength(0);
	comparisonHistogram->GetYaxis()->SetLabelSize(0.);
	comparisonHistogram->GetYaxis()->SetTickLength(0);

	string yAxisTitle = "#frac{Data "+ Process + "}{MC " + Process + "}";

	//TGaxis(x-Start, y-Start, x-End, y-End, Initial Axis Value, Final Axis Value, 510, "G")
	TGaxis *axis2 = new TGaxis(0, 0, 0, 2.999, 0.000001, 2.999, 505, "");
	axis2->SetLabelFont(43); // Absolute font size in pixel (precision 3)
	axis2->SetLabelSize(16);
	axis2->SetTitleFont(43);
	axis2->SetTitleSize(16);
	axis2->SetTitleOffset(0.85);
	axis2->SetTitle(yAxisTitle.c_str());
	axis2->Draw();

	//TGaxis(x-Start, y-Start, x-End, y-End, Initial Axis Value, Final Axis Value, 510, "G")
	TGaxis *axis3 = new TGaxis(0, 0, 3000, 0, 0, 3000, 510, "");
	axis3->SetLabelFont(43); // Absolute font size in pixel (precision 3)
	axis3->SetLabelSize(16);
	axis3->SetTitleFont(43);
	axis3->SetTitleSize(16);
	axis3->SetTitleOffset(4);
	axis3->SetTitle(Histogram_Namer(DataType).c_str());
	axis3->Draw(); 

	TF1 *fit = new TF1("fit", "pol1", comparisonHistogram->GetXaxis()->GetXmin(), comparisonHistogram->GetXaxis()->GetXmax());

	comparisonHistogram->Fit("fit");

	fit->Draw("SAME");

	cout << fit->GetParameter(0) << endl;

	string weighted = "";
	if (weight) weighted = "_Weighted";


	fstream output("../../Output-Files/Fit-Graphs/Parameters/" + DataType + "_" + AnalysisType + "_Fitted" + weighted + "_Parameters.txt", output.out);
	output << fit->GetParameter(0) << endl << fit->GetParError(0) << endl << fit->GetParameter(1) << endl << fit->GetParError(1) << endl << fit->GetNDF() << endl << fit->GetChisquare() << endl << fit->GetProb();
	output.close();

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Fit-Graphs/" + DataType + "_" + AnalysisType + "_Fitted" + weighted + ".pdf"; // Need to create directory to save the Data Types into their own folders (if thats easier)
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}


#endif
