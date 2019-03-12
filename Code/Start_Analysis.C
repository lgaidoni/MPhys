void Start_Analysis(string StartFunction,string AnalysisType, bool draw) {

	gROOT->ProcessLine(".x ../Code/MC_Analysis.C");

	string draw_string;

	if (draw) draw_string = "true";
	else draw_string = "false";

	string inputLine = StartFunction + "(\"" + AnalysisType + "\", " + draw_string + ")";

	gROOT->ProcessLine(inputLine.c_str());

	gROOT->ProcessLine(".q");

}
