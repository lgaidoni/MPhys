#ifndef Generic_Functions_h
#define Generic_Functions_h
#include <vector>
/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////
/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////
/////////////////////////////// HISTOGRAM STUFF ///////////////////////////////
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

	string OutputFilePath = "../../Output-Files/" + AnalysisType + "/";
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

double CentralityCalc2(TLorentzVector *Vector1, TLorentzVector *Vector2, TLorentzVector *Vector3, TLorentzVector *Vector4){
// Another function for calculatig Centrality for Z boson
// Z* = y_Z - y_j2 / y_j1 - y_j2	

	// to Calculate Z* need:
 	// double DeltaRapidity - already calculated see function double DeltaRapidity
	double Z_rapidity = RapidityDisomething(Vector1, Vector2); // Z boson rapidity
	double j1_rapidity = Vector2->Eta();// jet 1 rapidity
	double j2_rapidity = Vector3->Eta();// jet 2 rapidity	

	double sum1 = Z_rapidity - j2_rapidity; // sum 1 to break things up
	double sum2 = j1_rapidity - j2_rapidity; // sum 1 to break things up

	// calculate Centrality
	double Centrality = sum1/sum2;
	return Centrality;

}
#endif
