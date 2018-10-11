#ifndef Generic_Functions_h
#define Generic_Functions_h

//This function will draw a generic histogram, for simple histograms, it will be faster to use this
//Draw histogram function takes the following:
//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis)
void DrawHistogram(TH1F *histogram, string canvasName, string histogramName, string xTitle, int X, int Y, bool log) {

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

	//Write out to a file
	canvas->Write(histogramName.c_str());

}

#endif
