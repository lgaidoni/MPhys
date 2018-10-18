#ifndef Generic_Functions_h
#define Generic_Functions_h

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)
void DrawHistogram(TH1F *histogram, string canvasName, string histogramName, string xTitle, int X, int Y, bool log, string OutputFileName) {

	string OutputFilePath = "../Output-Files/";
	string FullOutputFilePath = OutputFilePath + OutputFileName;

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(canvasName.c_str(), "", X, Y);

	//Sets the X axis title
	histogram->GetXaxis()->SetTitle(xTitle.c_str());

	//Sets the Y axis title
	histogram->GetYaxis()->SetTitle("Entries");

	//Draw the histogram
	histogram->Draw();

	//If the user wants the axis to be a log axis, do it
	if (log == true) canvas->SetLogy();

	//Write out to a ROOT file
	canvas->Write(histogramName.c_str());
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

}

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)
void DrawHistogram_OldCanvas(TH1F *histogram, string canvasName, string histogramName, string xTitle, int X, int Y, bool log, string OutputFileName) {

	string OutputFilePath = "../Output-Files/";
	string FullOutputFilePath = OutputFilePath + OutputFileName;

	//Sets the X axis title
	histogram->GetXaxis()->SetTitle(xTitle.c_str());

	//Sets the Y axis title
	histogram->GetYaxis()->SetTitle("Entries");

	//Draw the histogram
	histogram->Draw();

	//If the user wants the axis to be a log axis, do it
	if (log == true) gPad->SetLogy();

	//Write out to a ROOT file
	gPad->Write(histogramName.c_str());
	
	//Write out to a PDF file
	gPad->SaveAs(FullOutputFilePath.c_str());

}



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

//This Function will calculate delta eta (Eta = Rapidity)
double DeltaEta(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double DeltaEta = Vector1->Eta() - Vector2->Eta();
	return DeltaEta;

}

//This Function will calculate delta R (Distance in the R space)
double DeltaRCalc(TLorentzVector *Vector1, TLorentzVector *Vector2) {

	double DeltaRVal = sqrt( pow(DeltaPhi(Vector1, Vector2), 2) + pow(DeltaEta(Vector1, Vector2), 2) );
	return DeltaRVal;

}



#endif
