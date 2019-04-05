#ifndef Fitting_Functions_h
#define Fitting_Functions_h

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

void Process_Selector_Confirmation(int SelectedProcess) {

	//Selector for the process
	string Process;
	if (SelectedProcess == 0) Process = "ttb";
	if (SelectedProcess == 1) Process = "Wtaunu";
	if (SelectedProcess == 2) Process = "Wmunu";
	if (SelectedProcess == 3) Process = "Wenu";
	if (SelectedProcess == 4) Process = "ZqqZll";
	if (SelectedProcess == 5) Process = "Ztt2jets";
	if (SelectedProcess == 6) Process = "Zmm2jets";
	if (SelectedProcess == 7) Process = "Zee2jets";
	if (SelectedProcess == 8) Process = "Ztt";
	if (SelectedProcess == 9) Process = "Zmumu";
	if (SelectedProcess == 10) Process = "Zee";
	if (SelectedProcess == 11) Process = "DATA";

	cout << "Process: " << Process <<  " Selected" << endl;

}

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

//This function will return the histogram that is the Data Process divided by the MC Process
TH1F* Two_Process_Data_Subtraction(vector<TH1F*> histograms, int SelectedProcess1, int SelectedProcess2) {
	
	//Get the data histogram from the vector
	TH1F *dataHistogram = (TH1F*)histograms[11]->Clone();

	//For all the non-data histograms in the histogram vector
	for (int i=0; i < 11; i++) {
		//If the process isn't the selected process
		if (!(i == SelectedProcess1 || i == SelectedProcess2)) {
			//Process_Selector_Confirmation(i);
			TH1F *histogram = histograms[i];
			dataHistogram->Add(histogram, -1);
		}
	}

	return dataHistogram;

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
				/*
				cout << "Bin centre: " << bin_centre << " ";
				cout << "Bin content: " << bin_content << " ";
				cout << "fit_y: " << fit_y << " ";
				cout << "nbc: " << fit_y * bin_content << endl;
				*/
				histogram->SetBinContent(j, fit_y * bin_content);

			}
		}
	}

	return histogram;

}


void NumberEventsCalc(string AnalysisType, string higgs_suffix) { // Analysis type and DataType (lep_0_bla bla)

	vector<TFile*> root_files = Root_Files(AnalysisType, higgs_suffix);
	string histogram_name;

	// Initialise number of events so sets back to zero for the next DataType
	double totalEW = 0;
	double totalQCD = 0;
	double totalOther = 0;
	double totalTTbar = 0;
	double ttbar = 0;
	double Wtaunu = 0;
	double Wmunu = 0;
	double Wenu = 0;
	double ZqqZll = 0;
	double EWZtautau = 0;
	double EWZee = 0;
	double EWZmumu = 0;
	double QCDZtautau = 0;
	double QCDZee = 0;
	double QCDZmumu = 0;
	double compEW = 0;
	double compQCD = 0;
	double compOther = 0;
	double compTTbar = 0;
	double totalALL = 0;

	vector<string> Region;
	Region.push_back("_TRUTH");
	Region.push_back("");
	Region.push_back("_EXCEPT");
	Region.push_back("_HIGH_E");
	Region.push_back("_BJET");
	Region.push_back("_CONTROL");

	vector<string> DataTypes; // vector for the DataTypes
	DataTypes.push_back("lep_0_lep_1_mass");
	DataTypes.push_back("lep_0_lep_1_mass_reco");
	DataTypes.push_back("pT_balance");
	DataTypes.push_back("pT_balance_reco");

	vector<string> FullHistName;

	for (int i = 0; i < DataTypes.size(); i++){
		for (int j = 0; j < Region.size(); j++){
			string FullName = DataTypes[i] + Region[j];	
			FullHistName.push_back(FullName);
		}
	}

	fstream output("../../Output-Files/Final_Graphs/" + AnalysisType + "/" + AnalysisType + "_Nevents_InGroups.txt", output.out);
	fstream output2("../../Output-Files/Final_Graphs/" + AnalysisType + "/" + AnalysisType + "_Nevents_Composition.txt", output2.out);

	for (int i = 0; i < FullHistName.size(); i++) { // FOR LOOP FOR EACH DATATYPE
		
		string DataType = FullHistName[i]; // define the data type as the ith element in the DataTypes vector
		vector<TH1F*> histograms = Histogram_Return_Given_File(DataType, root_files); // Want to use all processes this time
		vector<double> EventsInProcess; // vector to add up the number of events
		double N_events = 0; // initilize number of event
	
		cout << DataType << endl;

		try
		{
			histograms[0]->GetMaximum();
		} 
		catch(...) 
		{ 
			cout << "\nOops! Histogram: '" << DataType << "' doesnt exist!" << endl << endl;
			continue; 
		}

		for (int j=0; j<11; j++) {  // FOR LOOP FOR EACH PROCESS

			TH1F* histogram = histograms[j]; // get the processes from the histograms vector
			N_events = histogram->Integral(); // gets no of events by integrating
			EventsInProcess.push_back(N_events); // put them in a vector of all events for all processes

			if (j == 0) { histogram_name = "t#bar{t}"; }
			if (j == 1) { histogram_name = "Wtaunu"; }
			if (j == 2) { histogram_name = "Wmunu"; }
			if (j == 3) { histogram_name = "Wenu"; }
			if (j == 4) { histogram_name = "ZqqZll"; }
			if (j == 5) { histogram_name = "EW Z#tau#tau"; }
			if (j == 6) { histogram_name = "EW Z#mu#mu"; }
			if (j == 7) { histogram_name = "EW Zee"; }
			if (j == 8) { histogram_name = "QCD Z#tau#tau"; }
			if (j == 9) { histogram_name = "QCD Z#mu#mu"; }
			if (j == 10) { histogram_name = "QCD Zee"; }

		}

		ttbar = EventsInProcess[0];
		Wtaunu = EventsInProcess[1];
		Wmunu = EventsInProcess[2];
		Wenu = EventsInProcess[3];
		ZqqZll = EventsInProcess[4];
		EWZtautau = EventsInProcess[5];
		EWZmumu = EventsInProcess[6];
		EWZee = EventsInProcess[7];
		QCDZtautau = EventsInProcess[8];
		QCDZmumu = EventsInProcess[9];
		QCDZee = EventsInProcess[10];

		totalEW = EWZtautau + EWZmumu + EWZee;
		totalQCD = QCDZtautau + QCDZmumu + QCDZee;
		totalOther = Wtaunu + Wmunu + Wenu + ZqqZll;
		totalTTbar = ttbar;
		totalALL = totalEW + totalQCD + totalOther + totalTTbar;

		// Compositions
		compEW = totalEW/totalALL*100;
		compQCD = totalQCD/totalALL*100;
		compOther = totalOther/totalALL*100;
		compTTbar = totalTTbar/totalALL*100;
		
		// Number of events per inverse femtobarns


		// OUTPUT Number of events for all data types and all data sets

		output << "******************************************" << endl;
		output << DataType << endl;
		output << "EW: " << endl; 
		output << "\t" << "EWZtautau = " << EWZtautau << "\t" << "EWZmumu = " << EWZmumu << "\t" << "EWZee = " << EWZee << "\t" << "Total = " << totalEW << endl;
		output << "QCD: " << endl; 
		output << "\t" << "QCDZtautau = " << QCDZtautau << "\t" << "QCDZmumu = " << QCDZmumu << "\t" << "QCDZee = " << QCDZee << "\t" << "Total = " << totalQCD << endl;
		output << "Other: " << endl; 
		output << "\t" << "Wtaunu = " << Wtaunu << "\t" << "Wmunu = " << Wmunu << "\t" << "Wenu = " << Wenu << "\t" << "ZqqZll = " << ZqqZll << "\t" << "Total = " << totalOther << endl;
		output << "ttBar: " << endl; 
		output << "\t" << "ttbar = " << ttbar << "\t" << "Total = " << totalTTbar << endl; 

		// OUTPUT Number of events in terms of composition
		output2 << "******************************************" << endl;
		output2 << DataType << " :" << endl;
		output2 << "EW : \t\t" << compEW << " %" << endl;
		output2 << "QCD : \t\t" << compQCD<< " %" <<endl;
		output2 << "Other : \t" << compOther<< " %" <<endl;
		output2 << "TTbar : \t" << compTTbar<< " %" <<endl;
	}
	output.close();
	output2.close();
}
/*
void EventsInRegion(string AnalysisType) {

	vector<TFile*> root_files = Root_Files(AnalysisType); // gets root files ready

	vector<string> Region;
	Region.push_back("_TRUTH");
	Region.push_back("");
	Region.push_back("_EXCEPT");
	Region.push_back("_HIGH_E");
	Region.push_back("_BJET");
	Region.push_back("_CONTROL");
 	string DataType = "lep_0_lep_1_mass";
	string FullHistName;

	for (j=0; j=Region.size(); j++){

		FullHistName = DataType + Region[j];

		vector<TH1F*> histograms = Histogram_Return_Given_File(AnalysisType, FullHistName, root_files); // vector of region histograms
		THStack *Stack = new THStack("Stack", "");

		for (int i=0; i < 11; i++) {	//Add the histograms from the vector to the stack
			Stack->Add(histograms[i], "hist");
		}

		N_events = Stack->Integral(); // gets total no of events of the histogram in stack for [i].
		
	}

}
*/

void Fit_MC_DATA_Comparison(string AnalysisType, string higgs_suffix, string DataType, string Process) {

	vector<TFile*> root_files = Root_Files(AnalysisType, higgs_suffix);
	vector<TH1F*> histograms = Histogram_Return_Given_File(DataType, root_files);

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

void Process_Weighting(string AnalysisType, string higgs_suffix, string DataType, string Process, double m, double c, double bins) {

	vector<TFile*> root_files = Root_Files(AnalysisType, higgs_suffix);
	vector<TH1F*> histograms = Histogram_Return_Given_File(DataType, root_files);

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

	Legend_Creator(histograms, 0.84, 0.89, 0.78, 0.45, 0.037, 0);

	canvas->SetLogy();

	Draw_Region(DataType, 0.037, 0.62, 0.86, 0.62, 0.80, 0.62, 0.75);

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Fit-Graphs/" + DataType + "_" + AnalysisType + "_Final_Stacked_Weighted.pdf"; // Need to create directory to save the Data Types into their own folders (if thats easier)
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}

void Draw_Weighted_Histo_And_Ratio(string AnalysisType, string higgs_suffix, string DataType, string Process, double m, double c, double bins, bool weight) {

	vector<TFile*> root_files = Root_Files(AnalysisType, higgs_suffix);
	vector<TH1F*> histograms = Histogram_Return_Given_File(DataType, root_files);

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
	pad2->SetBottomMargin(0.45);
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

	histogramStack->SetMinimum(5);
	histogramStack->SetMaximum(10000);
	histogramStack->Draw("");//Draw the stack, actually stacking (no "nostack")
	histogramStack->GetYaxis()->SetLabelSize(0.);

	//TGaxis(x-Start, y-Start, x-End, y-End, N Divisions, Final Axis Value, 510, "G")
	TGaxis *axis = new TGaxis(0, 1, 0, 10000, 1, 10000, 510, "G");
	axis->SetLabelFont(43); // Absolute font size in pixel (precision 3)
	axis->SetLabelSize(17);
	axis->SetTitleFont(43);
	axis->SetTitleSize(17);
	axis->SetTitleOffset(0.9);
	axis->SetTitle("Events");
	axis->Draw();

	Histogram_Namer(histogramStack, DataType);

	TH1F *NewDataHistogram = (TH1F*)histograms[11]->Clone();
	NewDataHistogram->Draw("SAME");

	pad1->Update();

	Legend_Creator(histograms, 0.93, 0.925, 0.83, 0.40, 0.05, 0);
	Draw_Region(DataType, 0.05, 0.675, 0.90, 0.675, 0.81, 0.675, 0.72);

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
	axis2->SetTitleOffset(0.75);
	axis2->SetTitle(yAxisTitle.c_str());
	axis2->Draw();

	//TGaxis(x-Start, y-Start, x-End, y-End, Initial Axis Value, Final Axis Value, 510, "G")
	TGaxis *axis3 = new TGaxis(0, 0, comparisonHistogram->GetXaxis()->GetXmax(), 0, 0, comparisonHistogram->GetXaxis()->GetXmax(), 510, "");
	axis3->SetLabelFont(43); // Absolute font size in pixel (precision 3)
	axis3->SetLabelSize(18);
	axis3->SetTitleFont(43);
	axis3->SetTitleSize(17);
	axis3->SetTitleOffset(4);
	axis3->SetTitle(Histogram_Namer(DataType).c_str());
	axis3->Draw(); 

	TF1 *fit = new TF1("fit", "pol1", comparisonHistogram->GetXaxis()->GetXmin(), 3000);

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

//Function to calculate the Cross section for two leptons, takes QCD process as Process1, EW process as Process2
void Cross_Section_Calculation_QCD_EW_ll_Specific(string AnalysisType, string higgs_suffix, string DataType, string Process1, string Process2, double m, double c, double bins, bool scale, string ID) {

	vector<TFile*> root_files = Root_Files(AnalysisType, higgs_suffix);
	vector<TH1F*> histograms = Histogram_Return_Given_File(DataType, root_files);
	gStyle->SetOptStat(0);

	//Selector for the process not to be subtracted
	int SelectedProcess1 = Process_Selector(Process1);
	int SelectedProcess2 = Process_Selector(Process2);

	histograms[SelectedProcess1] = Weight_Process_Histogram(histograms, SelectedProcess1, m, c, bins);

	TH1F *data = (TH1F*)histograms[11]->Clone();
	TH1F *h1 = (TH1F*)histograms[SelectedProcess1]->Clone();
	TH1F *h2 = (TH1F*)histograms[SelectedProcess2]->Clone();

	RooRealVar x("x", "x", 250., 3000.);  

	RooDataHist roofit_h1("roofit_h1", "roofit_h1", x, h1);   
	RooRealVar c1("c1", "c1", 0., 10000000.); 

	RooDataHist roofit_h2("roofit_h2", "roofit_h2", x, h2);   
	RooRealVar c2("c2", "c2", 0., 10000000.); 

	RooHistPdf pdf_roofit_h1("pdf_roofit_h1", "pdf_roofit_h1", x, roofit_h1);   
	RooHistPdf pdf_roofit_h2("pdf_roofit_h2", "pdf_roofit_h2", x, roofit_h2); 

	RooAddPdf model("model", "(c1*pdf_roofit_h1)+(c2*pdf_roofit_h2)", RooArgList(pdf_roofit_h1, pdf_roofit_h2), RooArgList(c1,c2));  

	RooDataHist datah("datah", "dataset with x", x, data);
	
	model.fitTo(datah);

	double n_Process1;
	double n_Process2;

	double normalised_scale_factor_Process1 = c1.getVal();
	double normalised_scale_factor_Process1_Error = c1.getError();

	double normalised_scale_factor_Process2 = c2.getVal();
	double normalised_scale_factor_Process2_Error = c2.getError();

	RooPlot* frame = x.frame();
	datah.plotOn(frame);
	model.plotOn(frame);

	roofit_h1.plotOn(frame);
	n_Process1 = frame->getFitRangeNEvt();

	roofit_h2.plotOn(frame);
	n_Process2 = frame->getFitRangeNEvt();

	TCanvas *canvas2 = new TCanvas("Canvas2", "", 600, 400);

	gPad->SetLogy();

	double scale_factor_Process1 = normalised_scale_factor_Process1 / n_Process1;
	double scale_factor_Process1_Error = (normalised_scale_factor_Process1_Error/normalised_scale_factor_Process1)*scale_factor_Process1;

	double scale_factor_Process2 = normalised_scale_factor_Process2 / n_Process2;
	double scale_factor_Process2_Error = (normalised_scale_factor_Process2_Error/normalised_scale_factor_Process2)*scale_factor_Process2;

	cout << "Scale Factor for " << Process1 << ": " << scale_factor_Process1 << "+/-" << scale_factor_Process1_Error << endl;
	cout << "Scale Factor for " << Process2 << ": " << scale_factor_Process2 << "+/-" << scale_factor_Process2_Error << endl << endl;


	if (scale) {
		histograms[SelectedProcess1]->Scale(scale_factor_Process1);
		histograms[SelectedProcess2]->Scale(scale_factor_Process2);
	}

	//Create the stacked histogram
	THStack *histogramStack = new THStack("histogramStack", "");

	histograms = Set_Histogram_Styles(histograms);

	//and add to the stack
	histogramStack->Add(histograms[SelectedProcess2], "hist");
	histogramStack->Add(histograms[SelectedProcess1], "hist");

	histogramStack->SetMinimum(5);
	histogramStack->SetMaximum(30000);
	histogramStack->Draw("");//Draw the stack, actually stacking (no "nostack")

	histogramStack->GetYaxis()->SetTitle("Events");

	histogramStack->GetXaxis()->SetLabelSize(0.05);
	histogramStack->GetYaxis()->SetLabelSize(0.05);

	histogramStack->GetXaxis()->SetTitleSize(0.037);
	histogramStack->GetYaxis()->SetTitleSize(0.037);

	histogramStack->GetXaxis()->SetTitleOffset(1.2);

	Histogram_Namer(histogramStack, DataType);

	TH1F *TwoProcessSubtractedDataHistogram = Two_Process_Data_Subtraction(histograms, SelectedProcess1, SelectedProcess2);

	TwoProcessSubtractedDataHistogram->Draw("SAME");

	Legend_Creator_For_Two(histograms, SelectedProcess1, SelectedProcess2);

	Draw_Region(DataType, 0.035, 0.62, 0.85, 0.62, 0.785, 0.62, 0.72);

	string scaled = "";
	if (scale) scaled = "_Scaled";

	fstream output("../../Output-Files/Fit-Graphs/Parameters/" + DataType + "_" + AnalysisType + "_Sigma_Search" + scaled + "_Parameters.txt", output.out);
	output << scale_factor_Process1 << endl << scale_factor_Process2;
	output.close();

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Fit-Graphs/" + DataType + "_" + AnalysisType + "_Sigma_Search" + scaled + ".pdf"; // Need to create directory to save the Data Types into their own folders (if thats easier)
	
	//Write out to a PDF file
	canvas2->SaveAs(FullOutputFilePath.c_str());

	vector<double> info = csv_reader(ID, false);

	cout << endl << "MC Cross Section:     " << info[1] << endl;
	cout << "QCD Scale Factor:     " << scale_factor_Process1 << " +/- " << scale_factor_Process1_Error << endl;
	cout << "EW Scale Factor:      " << scale_factor_Process2 << " +/- " << scale_factor_Process2_Error << endl;

	double cross_section = info[1] * scale_factor_Process2;
	double cross_section_error = (scale_factor_Process2_Error/scale_factor_Process2)*cross_section;

	cout << "EW Cross Section:     " << info[1] * scale_factor_Process2 << " +/- " << cross_section_error << endl;

	fstream output2("../../Output-Files/Fit-Graphs/Parameters/" + DataType + "_" + AnalysisType + "_Cross_Section.txt", output2.out);
	output2 << "MC Cross Section:     " << info[1] << endl;
	output2 << "QCD Scale Factor:     " << scale_factor_Process1 << " +/- " << scale_factor_Process1_Error << endl;
	output2 << "EW Scale Factor:      " << scale_factor_Process2 << " +/- " << scale_factor_Process2_Error << endl;
	output2 << "EW Cross Section:     " << info[1] * scale_factor_Process2 << " +/- " << cross_section_error  << endl;
	output2.close();

}


#endif
