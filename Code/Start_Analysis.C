void Start_Analysis(string StartFunction,string AnalysisType) {

	gROOT->ProcessLine(".x ../Code/MC_Analysis.C");

	string inputLine = StartFunction + "(\"" + AnalysisType + "\")";

	gROOT->ProcessLine(inputLine.c_str());

	gROOT->ProcessLine(".q");

}
