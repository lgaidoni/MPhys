#ifndef Generic_Functions_h
#define Generic_Functions_h

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram(TH1F *histogram, string canvasName, string histogramName, string title, int X, int Y, bool log, string OutputFileName, string AnalysisType) {

	string OutputFilePath = "../../Output-Files/";
	string FullOutputFilePath = OutputFilePath + AnalysisType + "/" + OutputFileName;

	//Create a new canvas using canvasName
	TCanvas *canvas = new TCanvas(canvasName.c_str(), "", X, Y);

	//Sets the Titles
	histogram->SetTitle(title.c_str());

	//Draw the histogram
	histogram->Draw();

	//If the user wants the axis to be a log axis, do it
	if (log == true) canvas->SetLogy();

	//Write out to a ROOT file
	canvas->Write(histogramName.c_str());
	
	//Write out to a PDF file
	canvas->SaveAs(FullOutputFilePath.c_str());

	canvas->Close();

}

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name, Analysis Type)
void DrawHistogram_Quiet(TH1F *histogram, string canvasName, string histogramName, string title, int X, int Y, bool log, string OutputFileName, string AnalysisType) {

	string OutputFilePath = "../../Output-Files/";
	string FullOutputFilePath = OutputFilePath + AnalysisType + "/" + OutputFileName;

	//Sets the X axis title
	histogram->SetTitle(title.c_str());

	//Draw the histogram
	histogram->Draw();

	//Write out to a ROOT file
	histogram->Write(histogramName.c_str());

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



#endif
