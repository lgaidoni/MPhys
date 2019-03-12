void Start_Analysis(string StartFunction,string AnalysisType, bool draw, bool Higgs) {

	gROOT->ProcessLine(".x ../Code/MC_Analysis.C");

	string draw_string;

	if (draw) draw_string = "true";
	else draw_string = "false";

	string higgs_string;

	if (Higgs) higgs_string = "true";
	else higgs_string = "false";

	string inputLine = StartFunction + "(\"" + AnalysisType + "\", " + draw_string + ", " + higgs_string + ")";

	gROOT->ProcessLine(inputLine.c_str());

	gROOT->ProcessLine(".q");

}
