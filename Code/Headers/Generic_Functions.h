// Generic functions includes all the functions that are used in Analysis.h 
// They are "Generic" because they are not specific to any lepton type
// 27.11.18

#ifndef Generic_Functions_h
#define Generic_Functions_h
#include <vector>

/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////
/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////
/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////

//This function will create the legend on the currently active canvas
//This function takes the vector of histograms created by Histogram_Return(AnalysisType, DataType)
void Legend_Creator(vector<TH1F*> histograms, double xmax, double ymax, double xmin, double ymin, double textsize, double bordersize) {

	//Create the legend
	auto legend = new TLegend(xmax,ymax,xmin,ymin);

	//Minor Formatting
	legend->SetTextSize(textsize);
	legend->SetBorderSize(bordersize);

	//Add all the entries to the histogram
	legend->AddEntry(histograms[11], "Data");
	legend->AddEntry(histograms[10], "QCD Zee");
	legend->AddEntry(histograms[9], "QCD Z#mu#mu");
	legend->AddEntry(histograms[8], "QCD Z#tau#tau");
	legend->AddEntry(histograms[7], "EW Zee");
	legend->AddEntry(histograms[6], "EW Z#mu#mu");
	legend->AddEntry(histograms[5], "EW Z#tau#tau");
	legend->AddEntry(histograms[4], "ZqqZll");
	legend->AddEntry(histograms[3], "Wenu");
	legend->AddEntry(histograms[2], "Wmunu");
	legend->AddEntry(histograms[1], "Wtaunu");
	legend->AddEntry(histograms[0], "t#bar{t}");

	legend->Draw(); //Draw the legend to the currently active canvas

}

//This function will create the legend on the currently active canvas
//Better formatted and specialised for specifically two processes stacked, plus data
//This function takes the vector of histograms created by Histogram_Return(AnalysisType, DataType), an integer representing Process 1, and an integer representing Process 2
void Legend_Creator_For_Two(vector<TH1F*> histograms, int SelectedProcess1, int SelectedProcess2) {

	//Create the legend
	auto legend = new TLegend(0.89,0.89,0.80,0.70);

	//Minor Formatting
	legend->SetTextSize(0.03);
	legend->SetBorderSize(0);

	legend->AddEntry(histograms[11], "Data"); //Add data to the legend

	//If either process is equal to one of the processes listed here, add it to the legend
	if (SelectedProcess1 == 10 || SelectedProcess2 == 10) legend->AddEntry(histograms[10], "QCD Zee");
	if (SelectedProcess1 == 9 || SelectedProcess2 == 9) legend->AddEntry(histograms[9], "QCD Z#mu#mu");
	if (SelectedProcess1 == 8 || SelectedProcess2 == 8) legend->AddEntry(histograms[8], "QCD Z#tau#tau");
	if (SelectedProcess1 == 7 || SelectedProcess2 == 7) legend->AddEntry(histograms[7], "EW Zee");
	if (SelectedProcess1 == 6 || SelectedProcess2 == 6) legend->AddEntry(histograms[6], "EW Z#mu#mu");
	if (SelectedProcess1 == 5 || SelectedProcess2 == 5) legend->AddEntry(histograms[5], "EW Z#tau#tau");
	if (SelectedProcess1 == 4 || SelectedProcess2 == 4) legend->AddEntry(histograms[4], "ZqqZll");
	if (SelectedProcess1 == 3 || SelectedProcess2 == 3) legend->AddEntry(histograms[3], "Wenu");
	if (SelectedProcess1 == 2 || SelectedProcess2 == 2) legend->AddEntry(histograms[2], "Wmunu");
	if (SelectedProcess1 == 1 || SelectedProcess2 == 1) legend->AddEntry(histograms[1], "Wtaunu");
	if (SelectedProcess1 == 0 || SelectedProcess2 == 0) legend->AddEntry(histograms[0], "t#bar{t}");

	legend->Draw(); //Draw the legend to the currently active canvas

}

//This function will set the histogram styles, given the vector of histograms created by Histogram_Return(AnalysisType, DataType)
vector<TH1F*> Set_Histogram_Styles(vector<TH1F*> histograms) {
	

	//ttb
	histograms[0]->SetLineColor(kBlack);
	histograms[0]->SetFillColor(kRed);
	histograms[0]->SetFillStyle(1001);

	//Wtaunu
	histograms[1]->SetLineColor(kBlack);
	histograms[1]->SetFillColor(kViolet-8);
	histograms[1]->SetFillStyle(1001);

	//Wmunu
	histograms[2]->SetLineColor(kBlack);
	histograms[2]->SetFillColor(kViolet-4);
	histograms[2]->SetFillStyle(1001);

	//Wenu
	histograms[3]->SetLineColor(kBlack);
	histograms[3]->SetFillColor(kViolet-1);
	histograms[3]->SetFillStyle(1001);

	//ZqqZll
	histograms[4]->SetLineColor(kBlack);
	histograms[4]->SetFillColor(kPink-6);
	histograms[4]->SetFillStyle(1001);

	//Ztt2jets
	histograms[5]->SetLineColor(kBlack);
	histograms[5]->SetFillColor(kSpring+10);
	histograms[5]->SetFillStyle(1001);

	//Zmm2jets
	histograms[6]->SetLineColor(kBlack);
	histograms[6]->SetFillColor(kAzure+2);
	histograms[6]->SetFillStyle(1001);

	//Zee2jets
	histograms[7]->SetLineColor(kBlack);
	histograms[7]->SetFillColor(kOrange-2);
	histograms[7]->SetFillStyle(1001);

	//Ztt
	histograms[8]->SetLineColor(kBlack);
	histograms[8]->SetFillColor(kSpring+3);
	histograms[8]->SetFillStyle(1001);

	//Zmumu
	histograms[9]->SetLineColor(kBlack);
	histograms[9]->SetFillColor(kAzure-9);
	histograms[9]->SetFillStyle(1001);

	//Zee
	histograms[10]->SetLineColor(kBlack);
	histograms[10]->SetFillColor(kOrange+1);
	histograms[10]->SetFillStyle(1001);

	//Data
	histograms[11]->Sumw2();
	histograms[11]->SetLineColor(kBlack);
	histograms[11]->SetMarkerStyle(8);
	histograms[11]->SetMarkerSize(0.3);

	return histograms;

}

vector<TFile*> Root_Files(string AnalysisType) {

	//Variable creation
	vector<string> names;
	vector<TFile*> files;

	//Create the file names for the stack of processes and push them into the names vector
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/ttb_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Wtaunu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Wmunu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Wenu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/ZqqZll_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Ztt2jets_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zmm2jets_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zee2jets_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Ztt_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zmumu_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/Processes/Zee_Histograms.root");
	names.push_back("../../Root-Files/" + AnalysisType + "/DATA_Histograms.root");

	//Load in all the files for the different processes, there are 12 into the files vector
	for (auto name = names.begin(); name < names.end(); name++) {
		files.push_back(new TFile(name->c_str()));
	}

	return files;

}

//This function will return a vector of histograms, given AnalysisType ("Electron", "Muon", Etc) and DataType ("ljet_0_ljet_1_mass", Etc)
vector<TH1F*> Histogram_Return_Given_File(string AnalysisType, string DataType, vector<TFile*> root_files) {

	string DataTypeHistName = "h_" + DataType + ";1";  //Name of the desired histogram in the root file

	//Variable creation
	vector<TFile*> files = root_files;
	vector<TH1F*> histograms;

	//Get all the histograms from files depending on the Data Type and push them into the histograms vector
	for (auto tfile = files.begin(); tfile < files.end(); tfile++) {
		TH1F *histogram = (TH1F*)(*tfile)->Get(DataTypeHistName.c_str());
		histograms.push_back(histogram);
	}

	return histograms;

}

//This function will give the provided histogram an x-axis, depending on the name of the DataType (ljet_0_ljet_1_mass, Etc) provided
void Histogram_Namer(TH1F* histogram, string DataType) {
	
	if (DataType.find("p4_Pt") != string::npos) histogram->GetXaxis()->SetTitle("p_{T} [GeV/c]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("lep_0_lep_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{ll} [GeV/c^{2}]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("jet_0_jet_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{jj} [GeV/c^{2}]");
	if (DataType.find("Centrality") != string::npos) histogram->GetXaxis()->SetTitle("Centrality");
	if (DataType.find("DeltaR") != string::npos) histogram->GetXaxis()->SetTitle("#DeltaR");

}

//This function will give the provided histogram stack an x-axis, depending on the name of the DataType (ljet_0_ljet_1_mass, Etc) provided
void Histogram_Namer(THStack* histogram, string DataType) {
	
	if (DataType.find("p4_Pt") != string::npos) histogram->GetXaxis()->SetTitle("p_{T} [GeV/c]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("lep_0_lep_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{ll} [GeV/c^{2}]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("jet_0_jet_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{jj} [GeV/c^{2}]");
	if (DataType.find("Centrality") != string::npos) histogram->GetXaxis()->SetTitle("Centrality");
	if (DataType.find("DeltaR") != string::npos) histogram->GetXaxis()->SetTitle("#DeltaR");


}

//This function will generate a string for the x-axis title, depending on the name of the DataType (ljet_0_ljet_1_mass, Etc) provided
string Histogram_Namer(string DataType) {

	string Histogram_Name;	

	if (DataType.find("p4_Pt") != string::npos) Histogram_Name = "p_{T} [GeV/c]"; 
	if (DataType.find("_mass") != string::npos && DataType.find("lep_0_lep_1") != string::npos) Histogram_Name = "m_{ll} [GeV/c^{2}]"; 
	if (DataType.find("_mass") != string::npos && DataType.find("jet_0_jet_1") != string::npos) Histogram_Name = "m_{jj} [GeV/c^{2}]";
	if (DataType.find("Centrality") != string::npos) Histogram_Name = "Centrality";
	if (DataType.find("DeltaR") != string::npos) Histogram_Name = "#DeltaR";

	return Histogram_Name;

}

//This function will draw the box containing information about the data used to produce graphs
//It will draw the box to the currently active canvas
void Draw_Region(string DataType, double textsize, double latex1left, double latex1right, double latex2left, double latex2right, double latex3left, double latex3right) {

	string region;

	//Check the data type for different regions or except version of Data Types
	if (DataType.find("CONTROL") != string::npos) region = "Control";
	else if (DataType.find("EXCEPT") != string::npos) region = "Except";
	else if (DataType.find("PRE") != string::npos) region = "Pre-Cut";
	else region = "Search";

	string latexLine = "#font[42]{" + region + " Region}";  //Create a string to be c_str()

	TLatex t;  						//Create a latex object
	t.SetTextFont(42);  					//Set font
	t.SetNDC(kTRUE);  					//Ensure position is relative (0-1 rather than coordinate based)
	t.SetTextSize(textsize);  					//Set font size
	t.DrawLatex(latex1left, latex1right, latexLine.c_str());  		//Draw line 1
	t.DrawLatex(latex2left, latex2right, "#scale[0.7]{#int}L dt = 36.2fb^{-1}");  	//Draw line 2
	t.DrawLatex(latex3left, latex3right, "#sqrt{s} = 13 TeV");  		//Draw line 3

}

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, histogram name, x axis title, bool for log y axis, bool for quiet, chain name, Analysis Type)
void DrawHistogram(TH1F *histogram, string histogramName, string title, bool log, bool quiet, string ChainName, string AnalysisType) {

	string OutputFileName = histogramName + "_" + ChainName + ".pdf";
	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ChainName + "/" + OutputFileName;

	if (!(quiet)) {

		//Create a new canvas using canvasName
		TCanvas *canvas = new TCanvas(histogramName.c_str(), "", 600, 400);

		//Sets the Titles
		histogram->SetTitle(title.c_str());

		//Draw the histogram
		histogram->Draw("HIST");

		//If the user wants the axis to be a log axis, do it
		if (log == true) canvas->SetLogy();

		//Write out to a ROOT file
		histogram->Write(histogramName.c_str());

		//Write out to a PDF file
		canvas->SaveAs(FullOutputFilePath.c_str());

		canvas->Close();

	} else if (quiet) {

		//Sets the X axis title
		histogram->SetTitle(title.c_str());

		//Draw the histogram
		histogram->Draw();

		//Write out to a ROOT file
		histogram->Write(histogramName.c_str());

	}

}

//This function will draw a stack of 3 histograms, used for overlaying PRE, SEARCH, and CONTROL
//Draw histogram function takes the following:
//DrawHistogram(histogram PRE, histogram SEARCH, histogram CONTROL, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram_PRE_SEARCH_CONTROL(TH1F *histogram1, TH1F *histogram2, TH1F *histogram3, string legendName, string histo1Name, string histo2Name, string histo3Name, string histogramName, string title, bool log, string ChainName, string AnalysisType) {

	//Strings for the file names
	string OutputFileName = histogramName + "_" + ChainName + "_Combo.pdf";
	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ChainName + "/" + OutputFileName;

	//Names for Pre and Control versions
	string preName = histogramName + "_PRE";
	string controlName = histogramName + "_CONTROL";

	//Write the histograms out to the currently open root file
	histogram1->Write(preName.c_str());
	histogram2->Write(histogramName.c_str());
	histogram3->Write(controlName.c_str());

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(histogramName.c_str(), "", 600, 400);

	//Set the appearances of the histograms
	histogram1->SetLineColor(kBlue-3);
	histogram2->SetLineColor(kOrange+7);
	histogram3->SetLineColor(kAzure+10);
	histogram3->SetFillColor(kAzure+10);
	histogram3->SetFillStyle(3002);

	//Draw the histograms
	histogram1->Draw("HIST");	
	histogram2->Draw("SAME HIST");	
	histogram3->Draw("SAME HIST");

	//Create the legend
	auto legend = new TLegend(0.99,0.95,0.75,0.75);
	
	legend->SetHeader(legendName.c_str());  //Set the legend header

	//Fill the legend with all the histograms
	legend->AddEntry(histogram1, histo1Name.c_str());
	legend->AddEntry(histogram2, histo2Name.c_str());
	legend->AddEntry(histogram3, histo3Name.c_str());
	
	//Draw the legend
	legend->Draw();

	//If the user wants the axis to be a log axis, do it
	if (log == true) canvas->SetLogy();

	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

	//Close the current canvas
	canvas->Close();

}

//This function will draw a stack of 4 histograms, used for overlaying PRE, SEARCH, CONTROL, and EXCEPT
//Draw histogram function takes the following:
//DrawHistogram(histogram PRE, histogram SEARCH, histogram CONTROL, histogram EXCEPT, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(TH1F *histogram1, TH1F *histogram2, TH1F *histogram3, TH1F *histogram4, string legendName, string histo1Name, string histo2Name, string histo3Name, string histo4Name, string histogramName, string title, bool log, string ChainName, string AnalysisType) {

	//Strings for the file names
	string OutputFileName = histogramName + "_" + ChainName + "_Combo.pdf";
	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ChainName + "/" + OutputFileName;

	//Names for Pre, Control, and Except versions
	string preName = histogramName + "_PRE";
	string controlName = histogramName + "_CONTROL";
	string exceptName = histogramName + "_EXCEPT";

	//Write the histograms out to the currently open root file
	histogram1->Write(preName.c_str());
	histogram2->Write(histogramName.c_str());
	histogram3->Write(controlName.c_str());
	histogram4->Write(exceptName.c_str());

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(histogramName.c_str(), "", 600, 400);

	//Set the appearances of the histograms
	histogram1->SetLineColor(kBlue-3);
	histogram2->SetLineColor(kOrange+7);
	histogram2->SetFillColor(kOrange+7);
	histogram2->SetFillStyle(3003);
	histogram3->SetLineColor(kAzure+10);
	histogram3->SetFillColor(kAzure+10);
	histogram3->SetFillStyle(3002);
	histogram4->SetLineColor(kOrange);

	//Draw the histograms
	histogram1->Draw("HIST");	
	histogram2->Draw("SAME HIST");	
	histogram3->Draw("SAME HIST");	
	histogram4->Draw("SAME HIST");	

	//Set the axis information
	histogram1->GetYaxis()->SetTitle("Events");
	histogram1->GetXaxis()->SetLabelSize(0.05);
	histogram1->GetYaxis()->SetLabelSize(0.05);
	histogram1->GetXaxis()->SetTitleSize(0.037);
	histogram1->GetYaxis()->SetTitleSize(0.037);
	histogram1->GetXaxis()->SetTitleOffset(1.2);

	//Name the x axis depending on the kind of data being plotted
	Histogram_Namer(histogram1, histogramName);

	//Create the legend
	auto legend = new TLegend(0.99,0.95,0.75,0.75);

	legend->SetHeader(legendName.c_str()); //Set the legend header

	//Add all the histograms to the legend
	legend->AddEntry(histogram1, histo1Name.c_str());
	legend->AddEntry(histogram2, histo2Name.c_str());
	legend->AddEntry(histogram3, histo3Name.c_str());
	legend->AddEntry(histogram4, histo4Name.c_str());

	legend->Draw(); //Draw the legend

	//If the user wants the axis to be a log axis, do it
	if (log == true) canvas->SetLogy();

	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

	canvas->Close();  //Close the currently open canvas

}

//This function will combine processes and write them out to a new .root file
void Process_Combiner(string AnalysisType, string Process) {

	//Vector of files that can be looped over
	vector<TFile*> files;

	//String for the root file path
	string ROOTFilePath = "../../Root-Files/" + AnalysisType + "/Processes/" + Process + "_Histograms.root";

	TFile *Histograms;

	//Open/Create the root file
	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "HOW DID THIS HAPPEN TO ME" << endl;
	
	//Various strings
	string ProcessFileName = "../../MPhys/Processes/" + AnalysisType + "/" + Process + "_Chains.txt";
	string line;

	//Open the file
	ifstream file (ProcessFileName);

	while(!file.eof()) {  //While not at the end of the file
		getline(file, line);  //Get the file line
		if (line != "") {  //If not looking at the last line
			files.push_back(new TFile(line.c_str()));  //Add the file to the vector
		}
	}

	file.close();

	//Open the list of Data Types
	string DataTypeFileName = "../../MPhys/DataTypes/" + AnalysisType + "_DataTypes.txt";
	ifstream DataTypeFile (DataTypeFileName);

	
	while(!DataTypeFile.eof()) {  		//While not at the end of the file
		getline(DataTypeFile, line);  	//Get the file line
		if (line != "") {  		//If not looking at the last line	

			//Get the first histogram in the vector
			string histogramName = "h_" + line + ";1";
			TH1F *histogramMaster = (TH1F*)files[0]->Get(histogramName.c_str()); 

			//For all the files in the vector not counting the first...
			for (auto tfile = files.begin() + 1; tfile < files.end(); tfile++) {

				//Get the histogram
				TH1F *histogram = (TH1F*)(*tfile)->Get(histogramName.c_str());

				//Add it to the master histogram 
				histogramMaster->Add(histogram);

			}

			//Draw the master histogram
			Histograms->cd();
			histogramMaster->Draw("HIST");
			histogramMaster->Write();

		}
	}
	
	Histograms->Close();

}

// Stacking histograms:
// need to give it the analysis type and then for given, tells it the path
void Process_Stacker(string AnalysisType, string DataType, string DataTypeHistogram, vector<TFile*> root_files) {

	//String for name of the histogram in the root file
	string DataTypeHistName = "h_" + DataType + ";1";

	//Create the canvas
	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

	//Get the vector of histograms for the given AnalysisType and DataType
	vector<TH1F*> histograms = Histogram_Return_Given_File(AnalysisType, DataType, root_files);

	//Create the stacked histogram
	THStack *histogramStack = new THStack("histogramStack", "");

	//Set the histogram styles
	histograms = Set_Histogram_Styles(histograms);

	//Add the histograms from the vector to the stack
	for (int i=0; i < 11; i++) {
		histogramStack->Add(histograms[i], "hist");
	}

	//Draw the stack, actually stacking (no "nostack")
	histogramStack->Draw("");

	//Name the histogram stack's x axis according to the DataType
	Histogram_Namer(histogramStack, DataType);

	//Set the histogram axes and labels
	histogramStack->GetYaxis()->SetTitle("Events");
	histogramStack->GetXaxis()->SetLabelSize(0.05);
	histogramStack->GetYaxis()->SetLabelSize(0.05);
	histogramStack->GetXaxis()->SetTitleSize(0.037);
	histogramStack->GetYaxis()->SetTitleSize(0.037);
	histogramStack->GetXaxis()->SetTitleOffset(1.2);

	//Get the largest value in the histogram
	double max_value = histogramStack->GetMaximum();

	//Generic Maximum Size of the Graphs
	//Set the Maximum Size of the histograms to something appropriate to the largest value in the histogram
	if (max_value >= 10 && max_value < 100) { histogramStack->SetMaximum(1000);}
	else if (max_value >= 100 && max_value < 1000) { histogramStack->SetMaximum(30000);}
	else if (max_value >= 1000 && max_value < 10000) { histogramStack->SetMaximum(300000);}
 	else if (max_value >= 10000 && max_value < 100000) { histogramStack->SetMaximum(3000000);}
	else if (max_value >= 100000 && max_value < 1000000) { histogramStack->SetMaximum(30000000);}

	//Exceptions to these rules and conditions for the minimum size of the graphs
	if (AnalysisType == "Tau") {

		if (DataType == "lep_0_lep_1_mass_PRE") histogramStack->SetMinimum(500);
		if (DataType == "lep_0_lep_1_mass_EXCEPT") histogramStack->SetMinimum(15);
		if (DataType == "Centrality_CONTROL") histogramStack->SetMinimum(1);

	} else if (AnalysisType == "Electron" or AnalysisType == "Muon" or AnalysisType == "MuonTau" or AnalysisType == "ElectronTau" or AnalysisType == "ElectronMuon") {

		if(DataType.find("Centrality_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("Centrality") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("DeltaR") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("jet_0_jet_1_mass") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_0_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_1_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("met_reco_p4_Pt") != string::npos) histogramStack->SetMinimum(0.01);
		if(DataType.find("lep_0_lep_1_mass_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("lep_0_lep_1_mass") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("lep_0_lep_1_pt_PRE") != string::npos) { histogramStack->SetMinimum(30); histogramStack->SetMaximum(5000000); }
		else if(DataType.find("lep_0_lep_1_pt") != string::npos) { histogramStack->SetMinimum(1); histogramStack->SetMaximum(500000); }
		if(DataType.find("pT_balance") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("pT_balance_3") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("neutrinoME1") != string::npos or DataType.find("neutrinoME2") != string::npos) histogramStack->SetMinimum(1);

	} 

	/*else if (AnalysisType == "Muon") {

		if(DataType.find("Centrality_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("Centrality") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("DeltaR") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("jet_0_jet_1_mass") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_0_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_1_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("lep_0_lep_1_mass_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("lep_0_lep_1_mass") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("lep_0_lep_1_pt_PRE") != string::npos) { histogramStack->SetMinimum(30); histogramStack->SetMaximum(5000000); }
		else if(DataType.find("lep_0_lep_1_pt") != string::npos) { histogramStack->SetMinimum(1); histogramStack->SetMaximum(500000); }
		if(DataType.find("pT_balance") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("pT_balance_3") != string::npos) histogramStack->SetMinimum(1);

	}*/

	else { int i = 0;

	}

	//Draw the data histogram over the histogram stack
	histograms[11]->Draw("SAME");

	canvas->SetLogy();  //Log the y axis

	//Create the legend and draw the region information
	Legend_Creator(histograms, 0.84, 0.89, 0.78, 0.45, 0.037, 0);
	Draw_Region(DataType, 0.037, 0.62, 0.86, 0.62, 0.80, 0.62, 0.75);

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Final_Graphs/" + AnalysisType + "/" + DataTypeHistogram; // Need to create directory to save the Data Types into their own folders (if thats easier)
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}

//Draw the stacked graphs for all the desired variables
void DrawStackedProcesses(string AnalysisType) {

	//Open the list of DataTypes to be stacked and drawn
	string DataTypeFileName = "../../MPhys/DataTypes/" + AnalysisType + "_DataTypes.txt";
	ifstream DataTypeFile (DataTypeFileName);
	string line;

	vector<TFile*> root_files = Root_Files(AnalysisType);
	
	while(!DataTypeFile.eof()) {  		//While not at the end of the file
		getline(DataTypeFile, line);  	//Get the file line
		if (line != "") {  		//If not looking at the last line	
			string fileName =  line + "_" + AnalysisType + "_Final_Stacked.pdf";
			Process_Stacker(AnalysisType, line, fileName, root_files);
		}
	}
}

//Combine all the different chains belonging to each different process
void CombineAllProcesses_AnalysisType(string AnalysisType) {

	Process_Combiner(AnalysisType, "Zee");
	Process_Combiner(AnalysisType, "Zee2jets");
	Process_Combiner(AnalysisType, "Zmumu");
	Process_Combiner(AnalysisType, "Zmm2jets");
	Process_Combiner(AnalysisType, "Ztt");
	Process_Combiner(AnalysisType, "Ztt2jets");
	Process_Combiner(AnalysisType, "ZqqZll");
	Process_Combiner(AnalysisType, "ttb");
	Process_Combiner(AnalysisType, "Wenu");
	Process_Combiner(AnalysisType, "Wmunu");
	Process_Combiner(AnalysisType, "Wtaunu");

}

/////////////////////////////// VARIABLES /////////////////////////////// 
/////////////////////////////// VARIABLES /////////////////////////////// 
/////////////////////////////// VARIABLES ///////////////////////////////
 
//This Fucntion will calculate invariant mass of two TLorentzVectors
double InvariantMass(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double mass = ((*Vector1)+(*Vector2)).M();
	return mass;

}

//This Function will calculate delta phi (Phi = Polar angle in the transverse plane)
double DeltaPhi(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double DeltaPhi = Vector1->Phi() - Vector2->Phi();
	return DeltaPhi;

}

//This Function will calculate delta eta (Eta = PseudoRapidity)
double DeltaEta(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double DeltaEta = Vector1->Eta() - Vector2->Eta();
	return DeltaEta;

}

//This Function will calculate delta rapidity (Rapidity = Rapidity)
double DeltaRapidity(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double DeltaRapidity = Vector1->Rapidity() - Vector2->Rapidity();
	return DeltaRapidity;

}

//This Function will calculate rapidity of the dilepton pair / dijet pair
double RapidityDisomething(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double RapidityDisomething = Vector1->Rapidity() + Vector2->Rapidity();
	return RapidityDisomething;
}

//This Function will calculate delta R (Distance in the R space)
double DeltaRCalc(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double DeltaRVal = sqrt( pow(DeltaPhi(Vector1, Vector2), 2) + pow(DeltaEta(Vector1, Vector2), 2) );
	return DeltaRVal;

}

//This Function will calculate combined transverse momentum
double CombinedTransverseMomentum(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double pT = ((*Vector1)+(*Vector2)).Pt();
	return pT;

}

//If Vector 3 lies between Vector 1 and Vector 2, with pT greater than 25GeV
bool RapidityIntervalCheck(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3) {

	bool rap_int_condition = true;
	
	//No additional jets with p_T > 25 GeV in rapidity interval between two leading jets
	//First, need to find which leading jet is max and min and assign them these names
	//Define the variables outside
	double maxjet;
	double minjet; 

	if (Vector1->Rapidity() > Vector2->Rapidity()) { // if ljet_0 is greater than ljet_1, assign it as max
		maxjet = Vector1->Rapidity();
		minjet = Vector2->Rapidity();
	} else { // if it is smaller, assign it as the min
		minjet = Vector1->Rapidity();
		maxjet = Vector2->Rapidity();	
	}
	
	// if additional jet_2 is between this rapidity interval, and have pT > 25, cut
	if (minjet <= Vector3->Rapidity() <= maxjet && Vector3->Pt() > 25) rap_int_condition = false;

	return rap_int_condition;

}

// POTENTIALLY TO BE CHANGED FOR FUTURE ANALYSIS when considering neutrinos out of this interval. 05-01-19
//If Vector 3 (E_T^{miss}) lies between Vector 1 (tau product 1 phi) and Vector 2 (tau product 2 phi) keep 
bool PhiIntervalCheck(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3) {

	bool phi_int_condition = true;
	
	//Check that E_T^{miss} lies in the delta phi interval between two tau decay particles
	//First, need to find which tau decay particle is greater (max) or smaller (min) and assign them these names
	//Define the variables outside
	double maxphi;
	double minphi; 

	if (Vector1->Phi() > Vector2->Phi()) { 
		maxphi = Vector1->Phi();
		minphi = Vector2->Phi();
	} else { 
		minphi = Vector1->Phi();
		maxphi = Vector2->Phi();	
	}
	
	// if E_T^{miss} is not between this delta phi interval, cut
	if (maxphi <= Vector3->Phi() <= minphi && Vector3->Pt()) phi_int_condition = false;

	return phi_int_condition;

}


// This function calculated the p_T^{balance} 
// defined as p_T^{bal} = (|p_T^{l1} + p_T^{l2} + p_T^{j1} + p_T^{j2} |)/|p_T^{l1}|+|p_T^{l2}|+|p_T^{j1}|+|p_T^{j2}|
double pTBalanceCalc(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3, TLorentzVector *Vector4){
	
	double sumAll = ((*Vector1) + (*Vector2) + (*Vector3) + (*Vector4)).Pt(); 	// absolute value of all vectors
	double abspTl1 = sqrt( pow (Vector1->Pt(),2)); 					// absolute value of lepton 1 transverse momentum
	double abspTl2 = sqrt( pow (Vector2->Pt(),2)); 					// absolute value of lepton 2
	double abspTj1 = sqrt( pow (Vector3->Pt(),2)); 					// absolute value of jet 1
	double abspTj2 = sqrt( pow (Vector4->Pt(),2)); 					// absolute value of jet 2
  					
	double absvalEach = abspTl1 + abspTl2 + abspTj1 + abspTj2; 			// absolute value of each
	double absvalAll = sqrt( pow(sumAll, 2)); 					// absolute value of them all

	// pTBalance here
	double pTBalance = absvalAll/absvalEach; // pT balance calculation
	return pTBalance;

}

// This function calculated the p_T^{balance} 
// defined as p_T^{bal} = (|p_T^{l1} + p_T^{l2} + p_T^{j1} + p_T^{j2} |)/|p_T^{l1}|+|p_T^{l2}|+|p_T^{j1}|+|p_T^{j2}|
double pTBalanceThreeCalc(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3, TLorentzVector *Vector4, TLorentzVector *Vector5){
	
	double sumAll = ((*Vector1) + (*Vector2) + (*Vector3) + (*Vector4) + (*Vector5)).Pt(); 	// absolute value of all vectors
	double abspTl1 = sqrt( pow (Vector1->Pt(),2)); 						// absolute value of lepton 1 transverse momentum
	double abspTl2 = sqrt( pow (Vector2->Pt(),2)); 						// absolute value of lepton 2
	double abspTj1 = sqrt( pow (Vector3->Pt(),2)); 						// absolute value of jet 1
	double abspTj2 = sqrt( pow (Vector4->Pt(),2)); 						// absolute value of jet 2
	double abspTj3 = sqrt( pow (Vector5->Pt(),2)); 						// absolute value of jet 3
 
	double absvalEach = abspTl1 + abspTl2 + abspTj1 + abspTj2 + abspTj3; 			// absolute value of each
	double absvalAll = sqrt( pow(sumAll, 2)); 						// absolute value of them all

	// pTBalance here
	double pTBalanceThree = absvalAll/absvalEach; // pT balance calculation
	return pTBalanceThree;

}

//This function will return a vector of doubles, containing information about luminosity weighting for a given file ID
vector<double> csv_reader(string ID) {

	//Create the various variables to be used
	string Line, prevLine;
	vector <double> info;
	int matchPos = 0;
	bool counterActive = true;

	ifstream file ("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/LepUniv_xsec.csv"); //Open the file
	getline(file, Line, '\n');  //Get a new line
	
	while(!file.eof()){  //While not at the end of the file
		getline(file,Line);  //Get a new line
		if(counterActive) matchPos++;  //Increment the counter if the counter is active
		if( Line.substr(0,6) == ID ) counterActive = false; //If the ID finds a match for line number, deactivate the counter
	}

	file.close(); // Close the File
	ifstream file2 ("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/LepUniv_xsec.csv"); //Open the file

	//get lines from the file until it reaches the line with the matched ID
	for(int i = 0; i < matchPos; i++) getline(file2, Line);
	
	//Variables to be used
	double SampleID;
	double xsectioninpb;
	double kfactor;
	double filterefficiency;
	double xsecunc;

	//Get the sample ID from the file
	getline(file2, Line, ',');
	SampleID = stod(Line);
	info.push_back(SampleID);
	
	//Get the cross section in picobarns from the file
	getline(file2, Line, ',');
	getline(file2, Line, ',');
	xsectioninpb = stod(Line);
	info.push_back(xsectioninpb);
	
	//Get the k factor from the file
	getline(file2, Line, ',');
	kfactor = stod(Line);
	info.push_back(kfactor);

	//Get the filter efficiency from the file
	getline(file2, Line, ',');
	filterefficiency = stod(Line);
	info.push_back(filterefficiency);
	
	//Get the cross section 'unc' from the file
	///NO IDEA WHAT THIS IS
	getline(file2, Line, '\n');
	xsecunc = stod(Line);
	info.push_back(xsecunc);

	return info;  //Return the vector of info

}

// Luminosity weighting function
// extra weight to apply is xs*L/N (xs = cross section, L = luminosity (L given by k*eff_filter, where k=correction on xs calculation, eff_filter = filtering efficiency), N=initial # of generated MC events, luminosity is luminosity of detector for MC scaling)
// so have Lum_weighting = xs * k * eff_filter / N
// need to access the data
double luminosity_weighting_function(vector<double> info, double N, double luminosity) {
	
	double xs = info[1];
	double k = info[2];
	double eff_filter = info[3];
	double extra_weight;

	extra_weight =  luminosity*(xs*k*eff_filter)/N; //formula for extra luminosity weighting

	return extra_weight;

}

double CentralityCalc(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3, TLorentzVector *Vector4){ // muon 1 muon 2 ljet 1 ljet 2
// function for calculatig Centrality for Z boson
// Z* = |eta_Z-(eta_j1+eta_j2)/2)/|Delta(eta_jj)| (where Delta(eta_jj) is the pseudorapidity separation	

	
	// to Calculate Z* need:
 	// double DeltaRapidity - already calculated see function double DeltaRapidity
	double Z_rapidity = RapidityDisomething(Vector1, Vector2); // Z boson rapidity using muon 4 vectors
	double j1_rapidity = Vector3->Eta();// jet 1 rapidity
	double j2_rapidity = Vector4->Eta();// jet 2 rapidity	

	double sum1 = Z_rapidity - (j1_rapidity + j2_rapidity)/2; // sum 1 to break things up

	// calculate absoulute values:
	//double absval_sum1 = sqrt(pow(sum1,2)); // absolute value of sum 1
	//double absval_DeltaRapidity = sqrt(pow(DeltaRapidity(Vector3, Vector4),2)); // absolute value of rapidity separation of jets

	// calculate Centrality
	double Centrality = sum1/DeltaRapidity(Vector3, Vector4);
	return Centrality;

}

double METCentrality(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3){// for plotting how close the missing momentum is to the daughter products of the tau 
// function for calculating Centrality for E_T^{miss}

	double Emiss_Phi = Vector1->Phi();
	double tauproduct1_Phi = Vector2->Phi();
	double tauproduct2_Phi = Vector3->Phi();	

	double sum1 = Emiss_Phi - (tauproduct1_Phi + tauproduct2_Phi)/2; // sum 1 to break things up

	// calculate Centrality
	double Centrality = sum1/DeltaPhi(Vector2, Vector3);
	return Centrality;
}


double UnitVector(double p,TLorentzVector *Vector1){
// general unit vector calculation
	double px = Vector1->Px();
	double py = Vector1->Py();

	double unitvector = p/pow( pow(px,2) + pow(py,2) ,0.5);

	return unitvector;

}

//Simultaneous equations solved for MET
//Returns a vector containing the transverse momentum of neutrino 1 and 2
vector<double> SimMETEqn(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3){ // first tau, second tau, missing energy
// a corresponds to tau and neutrino pair 1, b corresponds to tau and neutrino pair 2
// 1 is x direction , 2 is y direction

	// by solving these simultaneous eqns we can get x and y
	// c1 = a1*x + b1*y;
	// c2 = a2*x + b2*y;

	// tau products
	double a1 = UnitVector(Vector1->Px(), Vector1), b1 = UnitVector(Vector2->Px(), Vector2);// a1=unitvector of x component of tau 1, b1 = tau 2
	double a2 = UnitVector(Vector1->Py(), Vector1), b2 = UnitVector(Vector2->Py(), Vector2);// a2=unitvector of y component of tau 2, b2 = tau 2

	// MET data
	double c1 = Vector3->Px(); // c1 = total MET in x direction
	double c2 = Vector3->Py(); // c2 = total MET in y direction

	//cout << "a1 = " << a1 << " b1 = " << b1 << "c1 = " << c1 << endl << endl;
	//cout << "a2 = " << a2 << " b2 = " << b2 << "c2 = " << c2 << endl << endl;

	// neutrinos	
	double neutrinoa, neutrinob; // transverse mometum of neutrino a and b resp
	vector<double> pTneutrinovector; // vector for storing neutrino a transverse momentum and neutrino b transverse momentum

	//neutrinoa = (c1-(b1*c2)/(b2))/(a1-(b1*a1)/(b2));	
	//neutrinob = (c2-(a2*c1)/(a1))/(b2-(b1*a2)/(a1));
	//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
	///Not 100% sure these are the right solutions for simultaneous equations. 

	neutrinoa = (a2*c1 - a1*c2)/(a2*b1 - a1*b2);
	neutrinob = (c1 - b1*neutrinoa)/a1;
	//Cramer's Rule
	//Derived in Luca's Book, page marked with I
	//Found on Stack Overflow, "Solving simultanous equations with C++"

	pTneutrinovector.push_back(neutrinoa);
	pTneutrinovector.push_back(neutrinob);

	return pTneutrinovector;
}

#endif
