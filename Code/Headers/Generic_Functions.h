// Generic functions includes all the functions that are used in Analysis.h 
// They are "Generic" because they are not specific to any lepton type
// 27.11.18

#ifndef Generic_Functions_h
#define Generic_Functions_h
#include <vector>

/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////
/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////
/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////

void Legend_Creator(vector<TH1F*> histograms) {

	//Create the legend
	auto legend = new TLegend(0.84,0.89,0.78,0.45);
	legend->SetTextSize(0.037);
	legend->SetBorderSize(0);
	legend->AddEntry(histograms[11], "Data");
	legend->AddEntry(histograms[0], "t#bar{t}");
	legend->AddEntry(histograms[1], "Wtaunu");
	legend->AddEntry(histograms[2], "Wmunu");
	legend->AddEntry(histograms[3], "Wenu");
	legend->AddEntry(histograms[4], "ZqqZll");
	legend->AddEntry(histograms[5], "EW Z#tau#tau");
	legend->AddEntry(histograms[6], "EW Z#mu#mu");
	legend->AddEntry(histograms[7], "EW Zee");
	legend->AddEntry(histograms[8], "QCD Z#tau#tau");
	legend->AddEntry(histograms[9], "QCD Z#mu#mu");
	legend->AddEntry(histograms[10], "QCD Zee");
	legend->Draw();

}

void Legend_Creator_For_Fit(vector<TH1F*> histograms) {

	//Create the legend
	auto legend = new TLegend(0.93,0.925,0.83,0.40);
	legend->SetTextSize(0.05);
	legend->SetBorderSize(0);
	legend->AddEntry(histograms[11], "Data");
	legend->AddEntry(histograms[0], "t#bar{t}");
	legend->AddEntry(histograms[1], "Wtaunu");
	legend->AddEntry(histograms[2], "Wmunu");
	legend->AddEntry(histograms[3], "Wenu");
	legend->AddEntry(histograms[4], "ZqqZll");
	legend->AddEntry(histograms[5], "EW Z#tau#tau");
	legend->AddEntry(histograms[6], "EW Z#mu#mu");
	legend->AddEntry(histograms[7], "EW Zee");
	legend->AddEntry(histograms[8], "QCD Z#tau#tau");
	legend->AddEntry(histograms[9], "QCD Z#mu#mu");
	legend->AddEntry(histograms[10], "QCD Zee");
	legend->Draw();

}

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

vector<TH1F*> Histogram_Return(string AnalysisType, string DataType) {

	string DataTypeHistName = "h_" + DataType + ";1";

	vector<string> names;
	vector<TFile*> files;
	vector<TH1F*> histograms;

	// Here is the file Path that has Access to Processes
	// string ROOTFilePath = "../../Root-Files/" + AnalysisType + "/Processes/";
	// Loop over these processes or do manually as below: 

	//Create the file names for the stack of processes
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

void Histogram_Namer(TH1F* histogram, string DataType) {
	
	if (DataType.find("p4_Pt") != string::npos) histogram->GetXaxis()->SetTitle("p_{T} [GeV/c]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("lep_0_lep_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{ll} [GeV/c^{2}]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("ljet_0_ljet_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{jj} [GeV/c^{2}]");
	if (DataType.find("Centrality") != string::npos) histogram->GetXaxis()->SetTitle("Centrality");
	if (DataType.find("DeltaR") != string::npos) histogram->GetXaxis()->SetTitle("#DeltaR");

}

void Histogram_Namer(THStack* histogram, string DataType) {
	
	if (DataType.find("p4_Pt") != string::npos) histogram->GetXaxis()->SetTitle("p_{T} [GeV/c]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("lep_0_lep_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{ll} [GeV/c^{2}]"); 
	if (DataType.find("_mass") != string::npos && DataType.find("ljet_0_ljet_1") != string::npos) histogram->GetXaxis()->SetTitle("m_{jj} [GeV/c^{2}]");
	if (DataType.find("Centrality") != string::npos) histogram->GetXaxis()->SetTitle("Centrality");
	if (DataType.find("DeltaR") != string::npos) histogram->GetXaxis()->SetTitle("#DeltaR");


}

string Histogram_Namer(string DataType) {

	string Histogram_Name;	

	if (DataType.find("p4_Pt") != string::npos) Histogram_Name = "p_{T} [GeV/c]"; 
	if (DataType.find("_mass") != string::npos && DataType.find("lep_0_lep_1") != string::npos) Histogram_Name = "m_{ll} [GeV/c^{2}]"; 
	if (DataType.find("_mass") != string::npos && DataType.find("ljet_0_ljet_1") != string::npos) Histogram_Name = "m_{jj} [GeV/c^{2}]";
	if (DataType.find("Centrality") != string::npos) Histogram_Name = "Centrality";
	if (DataType.find("DeltaR") != string::npos) Histogram_Name = "#DeltaR";

	return Histogram_Name;

}

void Draw_Region(string DataType) {

	string region;

	if (DataType.find("CONTROL") != string::npos) region = "Control";
	else if (DataType.find("EXCEPT") != string::npos) region = "Except";
	else if (DataType.find("PRE") != string::npos) region = "Pre-Cut";
	else region = "Search";

	string latexLine = "#font[42]{" + region + " Region}";

	TLatex t;
	t.SetTextFont(42);
	t.SetNDC(kTRUE);
	t.SetTextSize(0.037);
	t.DrawLatex(0.62, 0.86, latexLine.c_str());
	t.DrawLatex(0.62, 0.80, "#intL dt = 36.2fb^{-1}");
	t.DrawLatex(0.62, 0.75, "#sqrt{s} = 13 TeV");

}

void Draw_Region_For_Fit(string DataType) {

	string region;

	if (DataType.find("CONTROL") != string::npos) region = "Control";
	else if (DataType.find("EXCEPT") != string::npos) region = "Except";
	else if (DataType.find("PRE") != string::npos) region = "Pre-Cut";
	else region = "Search";

	string latexLine = "#font[42]{" + region + " Region}";

	TLatex t;
	t.SetTextFont(42);
	t.SetNDC(kTRUE);
	t.SetTextSize(0.05);
	t.DrawLatex(0.675, 0.90, latexLine.c_str());
	t.DrawLatex(0.675, 0.81, "#intL dt = 36.2fb^{-1}");
	t.DrawLatex(0.675, 0.72, "#sqrt{s} = 13 TeV");

}

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram(TH1F *histogram, string canvasName, string histogramName, string title, int X, int Y, bool log, string OutputFileName, string ChainName, string AnalysisType) {

	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ChainName + "/" + OutputFileName;

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(canvasName.c_str(), "", X, Y);

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

}

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram_Quiet(TH1F *histogram, string canvasName, string histogramName, string title, int X, int Y, bool log, string OutputFileName, string ChainName, string AnalysisType) {

	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ChainName + "/" + OutputFileName;

	//Sets the X axis title
	histogram->SetTitle(title.c_str());

	//Draw the histogram
	histogram->Draw();

	//Write out to a ROOT file
	histogram->Write(histogramName.c_str());

}

//This function will draw a stack of 3 histograms, used for overlaying PRE, SEARCH, and CONTROL
//Draw histogram function takes the following:
//DrawHistogram(histogram PRE, histogram SEARCH, histogram CONTROL, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram_PRE_SEARCH_CONTROL(TH1F *histogram1, TH1F *histogram2, TH1F *histogram3, string legendName, string histo1Name, string histo2Name, string histo3Name, string canvasName, string histogramName, string title, int X, int Y, bool log, string OutputFileName, string ChainName, string AnalysisType) {

	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ChainName + "/" + OutputFileName;

	string preName = histogramName + "_PRE";
	string controlName = histogramName + "_CONTROL";

	histogram1->Write(preName.c_str());
	histogram2->Write(histogramName.c_str());
	histogram3->Write(controlName.c_str());

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(canvasName.c_str(), "", X, Y);

	THStack *histogramStack = new THStack("histogramStack", "Stacked 1D Histograms");

	histogram1->SetLineColor(kBlue-3);
	histogram2->SetLineColor(kOrange+7);
	histogram3->SetLineColor(kAzure+10);
	histogram3->SetFillColor(kAzure+10);
	histogram3->SetFillStyle(3002);

	histogram1->Draw("HIST");	
	histogram2->Draw("SAME HIST");	
	histogram3->Draw("SAME HIST");

	auto legend = new TLegend(0.99,0.95,0.75,0.75);
	legend->SetHeader(legendName.c_str());
	legend->AddEntry(histogram1, histo1Name.c_str());
	legend->AddEntry(histogram2, histo2Name.c_str());
	legend->AddEntry(histogram3, histo3Name.c_str());
	legend->Draw();

	//If the user wants the axis to be a log axis, do it
	if (log == true) canvas->SetLogy();

	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

	canvas->Close();

}

//This function will draw a stack of 4 histograms, used for overlaying PRE, SEARCH, CONTROL, and EXCEPT
//Draw histogram function takes the following:
//DrawHistogram(histogram PRE, histogram SEARCH, histogram CONTROL, histogram EXCEPT, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(TH1F *histogram1, TH1F *histogram2, TH1F *histogram3, TH1F *histogram4, string legendName, string histo1Name, string histo2Name, string histo3Name, string histo4Name, string canvasName, string histogramName, string title, int X, int Y, bool log, string OutputFileName, string ChainName, string AnalysisType) {

	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ChainName + "/" + OutputFileName;

	string preName = histogramName + "_PRE";
	string controlName = histogramName + "_CONTROL";
	string exceptName = histogramName + "_EXCEPT";

	histogram1->Write(preName.c_str());
	histogram2->Write(histogramName.c_str());
	histogram3->Write(controlName.c_str());
	histogram4->Write(exceptName.c_str());

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(canvasName.c_str(), "", X, Y);

	histogram1->SetLineColor(kBlue-3);
	histogram2->SetLineColor(kOrange+7);
	histogram2->SetFillColor(kOrange+7);
	histogram2->SetFillStyle(3003);
	histogram3->SetLineColor(kAzure+10);
	histogram3->SetFillColor(kAzure+10);
	histogram3->SetFillStyle(3002);
	histogram4->SetLineColor(kOrange);

	histogram1->Draw("HIST");	
	histogram2->Draw("SAME HIST");	
	histogram3->Draw("SAME HIST");	
	histogram4->Draw("SAME HIST");	

	auto legend = new TLegend(0.99,0.95,0.75,0.75);
	legend->SetHeader(legendName.c_str());
	legend->AddEntry(histogram1, histo1Name.c_str());
	legend->AddEntry(histogram2, histo2Name.c_str());
	legend->AddEntry(histogram3, histo3Name.c_str());
	legend->AddEntry(histogram4, histo4Name.c_str());
	legend->Draw();

	//If the user wants the axis to be a log axis, do it
	if (log == true) canvas->SetLogy();

	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

	canvas->Close();

}

//This function will overlay two histograms over each other. First in Red, Second in Blue
void DrawHistogram_Overlay_Two(TFile *file1, TFile *file2, string DataType, string ChainName1, string ChainName2, string legendName, string histo1Name, string histo2Name, string canvasName, string histogramName, string title, int X, int Y, bool log, string OutputFileName, string ComboType, string AnalysisType) {

	string Histogram1RealName = "h_" + DataType + "_" + ChainName1 + ";1"; //Create the real(seen by code) name for histogram 1
	string Histogram2RealName = "h_" + DataType + "_" + ChainName2 + ";1"; //Create the real(seen by code) name for histogram 2

	TH1F *histogram1 = (TH1F*)file1->Get(Histogram1RealName.c_str());
	TH1F *histogram2 = (TH1F*)file2->Get(Histogram2RealName.c_str());

	string OutputFilePath = "~/Output-Files/" + AnalysisType + "/";
	string FullOutputFilePath = OutputFilePath + ComboType + "/" + OutputFileName;

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(canvasName.c_str(), "", X, Y);

//	THStack *histogramStack = new THStack("histogramStack", "Stacked 1D Histograms");

	histogram1->SetLineColor(kRed);
	histogram2->SetLineColor(kBlue);

	// CHANGED STACK TO DRAWING CANVAS
	histogram1->Draw("HIST");	
	histogram2->Draw("SAME HIST");	
//	histogramStack->Add(histogram1);
//	histogramStack->Add(histogram2);

	//Sets the Titles
//	histogramStack->SetTitle(title.c_str());
	canvas->SetTitle(title.c_str());

	//Draw the histogram
//	histogramStack->Draw("nostack");
	canvas->Draw("nostack");

	auto legend = new TLegend(0.99,0.95,0.75,0.75);
	legend->SetHeader(legendName.c_str());
	legend->AddEntry(histogram1, histo1Name.c_str());
	legend->AddEntry(histogram2, histo2Name.c_str());
	legend->Draw();

	//If the user wants the axis to be a log axis, do it
	if (log == true) canvas->SetLogy();

	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

	canvas->Close();

}

//This function is a quick way of drawing two histograms overlain
void QuickDrawHistogram_Overlay_Two(TFile *file1, TFile *file2, string DataType, string ChainName1, string ChainName2, string AnalysisType) {

	string ChainNameCombo = "COMBO_" + ChainName1 + "_" + ChainName2; //Combine the analysis types
	string Name1 = DataType + " " + ChainName1; //Make a histogram name for histogram 1
	string Name2 = DataType + " " + ChainName2; //Make a histogram name for histogram 2
	string FileName = DataType + "_" + ChainName1 + "_" + ChainName2; //Combine everything into the file name

	DrawHistogram_Overlay_Two(file1, file2, DataType, ChainName1, ChainName2, ChainNameCombo, Name1, Name2, FileName, FileName, FileName, 600, 400, false, FileName + "_Combo.pdf", ChainNameCombo, AnalysisType);

}

//This function will quick draw all desired overlay histograms for given .root files and analysis types
void QuickDrawOverlayAll(string path1, string path2, string ChainName1, string ChainName2, string AnalysisType) {

	TFile *file1 = new TFile(path1.c_str());
	TFile *file2 = new TFile(path2.c_str());

	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_ljet_1_mass", ChainName1.c_str(), ChainName2.c_str(), AnalysisType);
	QuickDrawHistogram_Overlay_Two(file1,file2, "DeltaR", ChainName1.c_str(), ChainName2.c_str(), AnalysisType);
	QuickDrawHistogram_Overlay_Two(file1,file2, "pT_balance", ChainName1.c_str(), ChainName2.c_str(), AnalysisType);
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_0_p4_Pt", ChainName1.c_str(), ChainName2.c_str(), AnalysisType);
	QuickDrawHistogram_Overlay_Two(file1,file2, "ljet_1_p4_Pt", ChainName1.c_str(), ChainName2.c_str(), AnalysisType);

}

//This function will stack four histograms (Four different energ levels) and overlay one (EW)
void Stack_Four_Overlay_One(string ChainName1, string ChainName2, string ChainName3, string ChainName4, string ChainName5, string DataType, string AnalysisType, string OutputFileName) {

	//Create the canves
	TCanvas *canvas = new TCanvas("NAME", "", 600, 400);

	//Create the file names for the stack of four energies, 0-70, 70-140, 140-280, 280-500
	string name1 = "../../Root-Files/" + AnalysisType + "/" + ChainName1 + "_Histograms.root";
	string name2 = "../../Root-Files/" + AnalysisType + "/" + ChainName2 + "_Histograms.root";
	string name3 = "../../Root-Files/" + AnalysisType + "/" + ChainName3 + "_Histograms.root";
	string name4 = "../../Root-Files/" + AnalysisType + "/" + ChainName4 + "_Histograms.root";

	//Create the file name for the EW process to be overlain
	string name5 = "~/Root-Files/" + AnalysisType + "/" + ChainName5 + "_Histograms.root";

	//Load in all the files
	TFile *file1 = new TFile(name1.c_str());
	TFile *file2 = new TFile(name2.c_str());
	TFile *file3 = new TFile(name3.c_str());
	TFile *file4 = new TFile(name4.c_str());
	TFile *file5 = new TFile(name5.c_str());

	//Create names for the histograms to be stacked
	string Histogram1RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 1
	string Histogram2RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 2
	string Histogram3RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 3
	string Histogram4RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 4

	//Create the name for the EW histogram to be overlain
	string Histogram5RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 4

	//Get all the histograms from files
	TH1F *histogram1 = (TH1F*)file1->Get(Histogram1RealName.c_str());
	TH1F *histogram2 = (TH1F*)file2->Get(Histogram2RealName.c_str());
	TH1F *histogram3 = (TH1F*)file3->Get(Histogram3RealName.c_str());
	TH1F *histogram4 = (TH1F*)file4->Get(Histogram4RealName.c_str());
	TH1F *histogram5 = (TH1F*)file5->Get(Histogram5RealName.c_str());

	//Set the line colours for all the histograms
	histogram1->SetLineColor(kRed);
	histogram2->SetLineColor(kRed+1);
	histogram3->SetLineColor(kRed+2);
	histogram4->SetLineColor(kRed+3);
	histogram5->SetLineColor(kBlue);

	//Create the stack
	THStack *histogramStack = new THStack("histogramStack", DataType.c_str());

	//Add all the histograms to the stack
	histogramStack->Add(histogram1, "hist");
	histogramStack->Add(histogram2, "hist");
	histogramStack->Add(histogram3, "hist");
	histogramStack->Add(histogram4, "hist");

	//Draw the stack, actually stacking (no "nostack")
	histogramStack->Draw("");
	
	//Draw the EW histogram over the top
	histogram5->Draw("SAME HIST");

	//Create all the names for the legend
	string Histogram1DrawName = "h_" + DataType + "_" + ChainName1 + ";1"; //Create the real(seen by code) name for histogram 1
	string Histogram2DrawName = "h_" + DataType + "_" + ChainName2 + ";1"; //Create the real(seen by code) name for histogram 2
	string Histogram3DrawName = "h_" + DataType + "_" + ChainName3 + ";1"; //Create the real(seen by code) name for histogram 3
	string Histogram4DrawName = "h_" + DataType + "_" + ChainName4 + ";1"; //Create the real(seen by code) name for histogram 4
	string Histogram5DrawName = "h_" + DataType + "_" + ChainName5 + ";1"; //Create the real(seen by code) name for histogram 5

	//Create the legend
	auto legend = new TLegend(0.99,0.93,0.50,0.66);
	legend->SetHeader(DataType.c_str());
	legend->AddEntry(histogram1, Histogram1DrawName.c_str());
	legend->AddEntry(histogram2, Histogram2DrawName.c_str());
	legend->AddEntry(histogram3, Histogram3DrawName.c_str());
	legend->AddEntry(histogram4, Histogram4DrawName.c_str());
	legend->AddEntry(histogram5, Histogram5DrawName.c_str());
	legend->Draw();

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Combo_Graphs/"+ DataType + "_" + OutputFileName;
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}

//This function is to overlay the different flavour strengths for a given set of inputs
void Overlay_Flavour_Strengths(string ChainName1, string ChainName2, string ChainName3, string DataType, string AnalysisType, string OutputFileName) {

	//Create the canves
	TCanvas *canvas = new TCanvas("NAME", "", 600, 400);

	//Create the file names for the stack of four energies, 0-70, 70-140, 140-280, 280-500
	string name1 = "../../Root-Files/" + AnalysisType + "/" + ChainName1 + "_Histograms.root";
	string name2 = "../../Root-Files/" + AnalysisType + "/" + ChainName2 + "_Histograms.root";
	string name3 = "../../Root-Files/" + AnalysisType + "/" + ChainName3 + "_Histograms.root";

	//Load in all the files
	TFile *file1 = new TFile(name1.c_str());
	TFile *file2 = new TFile(name2.c_str());
	TFile *file3 = new TFile(name3.c_str());

	//Create names for the histograms to be stacked
	string Histogram1RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 1
	string Histogram2RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 2
	string Histogram3RealName = "h_" + DataType + ";1"; //Create the real(seen by code) name for histogram 3

	//Get all the histograms from files
	TH1F *histogram1 = (TH1F*)file1->Get(Histogram1RealName.c_str());
	TH1F *histogram2 = (TH1F*)file2->Get(Histogram2RealName.c_str());
	TH1F *histogram3 = (TH1F*)file3->Get(Histogram3RealName.c_str());

	//Set the line colours for all the histograms
	histogram1->SetLineColor(kRed);
	histogram2->SetLineColor(kBlue);
	histogram3->SetLineColor(kGreen);

	//Create the stack
	THStack *histogramStack = new THStack("histogramStack", DataType.c_str());

	//Add all the histograms to the stack
	histogramStack->Add(histogram1, "hist");
	histogramStack->Add(histogram2, "hist");
	histogramStack->Add(histogram3, "hist");

	//Draw the stack, actually stacking (no "nostack")
	histogramStack->Draw("");

	//Create all the names for the legend
	string Histogram1DrawName = "h_" + DataType + "_" + ChainName1 + ";1"; //Create the real(seen by code) name for histogram 1
	string Histogram2DrawName = "h_" + DataType + "_" + ChainName2 + ";1"; //Create the real(seen by code) name for histogram 2
	string Histogram3DrawName = "h_" + DataType + "_" + ChainName3 + ";1"; //Create the real(seen by code) name for histogram 3

	//Create the legend
	auto legend = new TLegend(0.99,0.93,0.50,0.66);
	legend->SetHeader(DataType.c_str());
	legend->AddEntry(histogram1, Histogram1DrawName.c_str());
	legend->AddEntry(histogram2, Histogram2DrawName.c_str());
	legend->AddEntry(histogram3, Histogram3DrawName.c_str());
	legend->Draw();

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Combo_Graphs/"+ DataType + "_" + OutputFileName;
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

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

	string DataTypeFileName = "../../MPhys/DataTypes/" + AnalysisType + "_DataTypes.txt";
	ifstream DataTypeFile (DataTypeFileName);

	
	while(!DataTypeFile.eof()) {  //While not at the end of the file
		getline(DataTypeFile, line);  //Get the file line
		if (line != "") {  //If not looking at the last line	

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
void Process_Stacker(string AnalysisType, string DataType, string DataTypeHistogram) {

	string DataTypeHistName = "h_" + DataType + ";1";

	TCanvas *canvas = new TCanvas("Canvas", "", 600, 400);

	// Here is the file Path that has Access to Processes
	// string ROOTFilePath = "../../Root-Files/" + AnalysisType + "/Processes/";
	// Loop over these processes or do manually as below: 

	vector<TH1F*> histograms = Histogram_Return(AnalysisType, DataType);

	//Create the stacked histogram
	THStack *histogramStack = new THStack("histogramStack", "");

	histograms = Set_Histogram_Styles(histograms);

	//  and add to the stack
	for (int i=0; i < 11; i++) {
		histogramStack->Add(histograms[i], "hist");
	}
	histogramStack->Draw("");//Draw the stack, actually stacking (no "nostack")
	histogramStack->GetYaxis()->SetTitle("Events");

	Histogram_Namer(histogramStack, DataType);

	double max_value = histogramStack->GetMaximum();

	//Generic Maximum Size of the Graphs
	if (max_value >= 10 && max_value < 100) { histogramStack->SetMaximum(1000);}
	else if (max_value >= 100 && max_value < 1000) { histogramStack->SetMaximum(10000);}
	else if (max_value >= 1000 && max_value < 10000) { histogramStack->SetMaximum(100000);}
 	else if (max_value >= 10000 && max_value < 100000) { histogramStack->SetMaximum(1000000);}
	else if (max_value >= 100000 && max_value < 1000000) { histogramStack->SetMaximum(10000000);}

	//Exceptions to these rules and conditions for the minimum size of the graphs
	if (AnalysisType == "Tau") {

		if (DataType == "lep_0_lep_1_mass_PRE") histogramStack->SetMinimum(500);
		if (DataType == "lep_0_lep_1_mass_EXCEPT") histogramStack->SetMinimum(15);
		if (DataType == "Centrality_CONTROL") histogramStack->SetMinimum(1);

	} else if (AnalysisType == "Electron") {

		if(DataType.find("Centrality_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("Centrality") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("DeltaR") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_0_ljet_1_mass") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_0_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_1_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("lep_0_lep_1_mass_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("lep_0_lep_1_mass") != string::npos) histogramStack->SetMinimum(1);

	} else if (AnalysisType == "Muon") {

		if(DataType.find("Centrality_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("Centrality") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("DeltaR") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_0_ljet_1_mass") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_0_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("ljet_1_p4_Pt") != string::npos) histogramStack->SetMinimum(1);
		if(DataType.find("lep_0_lep_1_mass_PRE") != string::npos) histogramStack->SetMinimum(50);
		else if(DataType.find("lep_0_lep_1_mass") != string::npos) histogramStack->SetMinimum(1);

	} else { int i = 0;

	}

	/*

	if (AnalysisType == "Tau" && DataType.find("lep_0_lep_1") != string::npos && (DataType.find("PRE") != string::npos || DataType.find("EXCEPT") != string::npos)) {

		if (max_value >= 10 && max_value < 100) { histogramStack->SetMaximum(5000);}
		else if (max_value >= 100 && max_value < 1000) { histogramStack->SetMaximum(50000);}
		else if (max_value >= 1000 && max_value < 10000) { histogramStack->SetMaximum(500000);}
	 	else if (max_value >= 10000 && max_value < 100000) { histogramStack->SetMaximum(5000000);}
		else if (max_value >= 100000 && max_value < 1000000) { histogramStack->SetMaximum(50000000);}

		if (DataType.find("PRE") != string::npos) {

			histogramStack->SetMinimum(500);

		} else if (DataType.find("EXCEPT") != string::npos){

			histogramStack->SetMinimum(15);

		}

	} else if (AnalysisType == "Tau") {

		if (max_value >= 10 && max_value < 100) { histogramStack->SetMaximum(5000); histogramStack->SetMinimum(1); }
		else if (max_value >= 100 && max_value < 1000) { histogramStack->SetMaximum(50000); histogramStack->SetMinimum(2); }
		else if (max_value >= 1000 && max_value < 10000) { histogramStack->SetMaximum(500000); histogramStack->SetMinimum(5); }
	 	else if (max_value >= 10000 && max_value < 100000) { histogramStack->SetMaximum(5000000); histogramStack->SetMinimum(30); }
		else if (max_value >= 100000 && max_value < 1000000) { histogramStack->SetMaximum(50000000); histogramStack->SetMinimum(100); }

	} else {
		if (max_value >= 10 && max_value < 100) { histogramStack->SetMaximum(1000); histogramStack->SetMinimum(2); }
		else if (max_value >= 100 && max_value < 1000) { histogramStack->SetMaximum(10000); histogramStack->SetMinimum(5); }
		else if (max_value >= 1000 && max_value < 10000) { histogramStack->SetMaximum(100000); histogramStack->SetMinimum(10); }
	 	else if (max_value >= 10000 && max_value < 100000) { histogramStack->SetMaximum(1000000); histogramStack->SetMinimum(20); }
		else if (max_value >= 100000 && max_value < 1000000) { histogramStack->SetMaximum(10000000); histogramStack->SetMinimum(100); }
	}

	*/

	histograms[11]->Draw("SAME");

	canvas->SetLogy();

	Legend_Creator(histograms);
	Draw_Region(DataType);

	//Create the full output file path
	string FullOutputFilePath = "../../Output-Files/Final_Graphs/" + DataTypeHistogram; // Need to create directory to save the Data Types into their own folders (if thats easier)
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}

//Draw the stacked graphs for all the desired variables
void DrawStackedProcesses(string AnalysisType) {

	string DataTypeFileName = "../../MPhys/DataTypes/" + AnalysisType + "_DataTypes.txt";
	ifstream DataTypeFile (DataTypeFileName);
	string line;

	
	while(!DataTypeFile.eof()) {  //While not at the end of the file
		getline(DataTypeFile, line);  //Get the file line
		if (line != "") {  //If not looking at the last line	
			string fileName =  line + "_" + AnalysisType + "_Final_Stacked.pdf";
			Process_Stacker(AnalysisType, line, fileName);
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
	
	// no additional jets with p_T > 25 GeV in rapidity interval between two leading jets
	// first, need to find which leading jet is max and min and assign them these names
	// define the variables outside
	double maxjet;
	double minjet; 

	if (Vector1->Rapidity() > Vector2->Rapidity()) { // if ljet_0 is greater than ljet_1, assign it as max
		maxjet = Vector1->Rapidity();
		minjet = Vector2->Rapidity();
	} 
	else { // if it is smaller, assign it as the min
		minjet = Vector1->Rapidity();
		maxjet = Vector2->Rapidity();	
	}

	if (minjet <= Vector3->Rapidity() <= maxjet && Vector3->Pt() > 25) rap_int_condition = false; // if additional jet_2 is between this rapidity interval, and have pT > 25, cut

	return rap_int_condition;

}

// This function calculated the p_T^{balance} 
// defined as p_T^{bal} = (|p_T^{l1} + p_T^{l2} + p_T^{j1} + p_T^{j2} |)/|p_T^{l1}|+|p_T^{l2}|+|p_T^{j1}|+|p_T^{j2}|
double pTBalanceCalc(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3, TLorentzVector *Vector4){
	
	double sumAll = ((*Vector1) + (*Vector2) + (*Vector3) + (*Vector4)).Pt(); // absolute value of all vectors
	double abspTl1 = sqrt( pow (Vector1->Pt(),2)); // absolute value of lepton 1 transverse momentum
	double abspTl2 = sqrt( pow (Vector2->Pt(),2)); // absolute value of lepton 2
	double abspTj1 = sqrt( pow (Vector3->Pt(),2)); // absolute value of jet 1
	double abspTj2 = sqrt( pow (Vector4->Pt(),2)); // absolute value of jet 2
  
	double absvalEach = abspTl1 + abspTl2 + abspTj1 + abspTj2; // absolute value of each
	double absvalAll = sqrt( pow(sumAll, 2)); // absolute value of them all

	// pTBalance here
	double pTBalance = absvalAll/absvalEach; // pT balance calculation
	return pTBalance;

}

// This function calculated the p_T^{balance} 
// defined as p_T^{bal} = (|p_T^{l1} + p_T^{l2} + p_T^{j1} + p_T^{j2} |)/|p_T^{l1}|+|p_T^{l2}|+|p_T^{j1}|+|p_T^{j2}|
double pTBalanceThreeCalc(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3, TLorentzVector *Vector4, TLorentzVector *Vector5){
	
	double sumAll = ((*Vector1) + (*Vector2) + (*Vector3) + (*Vector4) + (*Vector5)).Pt(); // absolute value of all vectors
	double abspTl1 = sqrt( pow (Vector1->Pt(),2)); // absolute value of lepton 1 transverse momentum
	double abspTl2 = sqrt( pow (Vector2->Pt(),2)); // absolute value of lepton 2
	double abspTj1 = sqrt( pow (Vector3->Pt(),2)); // absolute value of jet 1
	double abspTj2 = sqrt( pow (Vector4->Pt(),2)); // absolute value of jet 2
	double abspTj3 = sqrt( pow (Vector5->Pt(),2)); // absolute value of jet 3
 
	double absvalEach = abspTl1 + abspTl2 + abspTj1 + abspTj2 + abspTj3; // absolute value of each
	double absvalAll = sqrt( pow(sumAll, 2)); // absolute value of them all

	// pTBalance here
	double pTBalanceThree = absvalAll/absvalEach; // pT balance calculation
	return pTBalanceThree;

}

//This function will return a vector of doubles, containing information about luminosity weighting for a given file ID
vector<double> csv_reader(string ID) {

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

	for(int i = 0; i < matchPos; i++) getline(file2, Line);
	
	double SampleID;
	double xsectioninpb;
	double kfactor;
	double filterefficiency;
	double xsecunc;

	getline(file2, Line, ',');
	SampleID = stod(Line);
	info.push_back(SampleID);
	
	getline(file2, Line, ',');
	getline(file2, Line, ',');
	xsectioninpb = stod(Line);
	info.push_back(xsectioninpb);
	
	getline(file2, Line, ',');
	kfactor = stod(Line);
	info.push_back(kfactor);

	getline(file2, Line, ',');
	filterefficiency = stod(Line);
	info.push_back(filterefficiency);
	
	getline(file2, Line, '\n');
	xsecunc = stod(Line);
	info.push_back(xsecunc);

	return info;

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

/*double Missing_Energy(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3, TLorentzVector *Vector4){
	
	double xs = info[1];
	double k = info[2];
	double eff_filter = info[3];
	double extra_weight;

	extra_weight =  luminosity*(xs*k*eff_filter)/N; //formula for extra luminosity weighting

	return extra_weight;

}
*/
#endif
