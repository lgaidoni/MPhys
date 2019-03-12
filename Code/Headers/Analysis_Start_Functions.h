#ifndef Analysis_Start_Functions_h
#define Analysis_Start_Functions_h

void Start_Sh221_PDF30_Ztt_MV1000_E_CMS_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV1000_E_CMS_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364141");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Ztt_MV1000_E_CMS", lum_weight, draw);
	Sh221_PDF30_Ztt_MV1000_E_CMS->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV1000_E_CMS->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV1000_E_CMS->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_ZqqZll_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_ZqqZll_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_ZqqZll"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363356");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_ZqqZll(), 36200);
	MC_Analysis *Sh221_PDF30_ZqqZll = new MC_Analysis(Chain_Sh221_PDF30_ZqqZll(), AnalysisType, "Sh221_PDF30_ZqqZll", lum_weight, draw);
	Sh221_PDF30_ZqqZll->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_ZqqZll"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZll->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_ZqqZll"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZll->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_ZqqZll"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364191");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV0_70_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364129");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV0_70_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV140_280_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364176");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wenu_MV140_280_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV1000_E_CMS_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV1000_E_CMS_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364169");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Wmunu_MV1000_E_CMS", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV1000_E_CMS->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV1000_E_CMS->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV1000_E_CMS->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV70_140_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364103");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV140_280_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364135");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV140_280_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV280_500_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364124");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV280_500_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV140_280_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364164");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_BFil", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV140_280_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV280_500_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364137");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV280_500_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV70_140_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364159");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV70_140_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364131");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV70_140_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV0_70_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364102");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_BFil", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV0_70_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV0_70_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364116");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_BFil", lum_weight, draw);
	Sh221_PDF30_Zee_MV0_70_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmm2jets_Min_N_TChannel_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmm2jets_Min_N_TChannel_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmm2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308093");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmm2jets_Min_N_TChannel(), 36200);
	MC_Analysis *Sh221_PDF30_Zmm2jets_Min_N_TChannel = new MC_Analysis(Chain_Sh221_PDF30_Zmm2jets_Min_N_TChannel(), AnalysisType, "Sh221_PDF30_Zmm2jets_Min_N_TChannel", lum_weight, draw);
	Sh221_PDF30_Zmm2jets_Min_N_TChannel->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmm2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmm2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmm2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV140_280_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364122");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_BFil", lum_weight, draw);
	Sh221_PDF30_Zee_MV140_280_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV280_500_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364167");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_BFil", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV280_500_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV280_500_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364179");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wenu_MV280_500_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV0_70_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364156");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364194");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV280_500_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364123");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV280_500_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV140_280_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364178");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_BFil", lum_weight, draw);
	Sh221_PDF30_Wenu_MV140_280_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV500_1000_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV500_1000_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV500_1000"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364168");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV500_1000(), AnalysisType, "Sh221_PDF30_Wmunu_MV500_1000", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV500_1000->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV500_1000->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV500_1000->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV500_1000"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV140_280_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364108");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_BFil", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV140_280_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV0_70_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364171");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wenu_MV0_70_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV0_70_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364186");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_BFil", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV0_70_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV0_70_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364101");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV0_70_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364130");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_BFil", lum_weight, draw);
	Sh221_PDF30_Ztt_MV0_70_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV140_280_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364107");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV140_280_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364136");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_BFil", lum_weight, draw);
	Sh221_PDF30_Ztt_MV140_280_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV140_280_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364106");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV1000_E_CMS_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV1000_E_CMS_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364113");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Zmumu_MV1000_E_CMS", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV1000_E_CMS->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV1000_E_CMS->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV1000_E_CMS->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV0_70_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364115");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV0_70_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV500_1000_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV500_1000_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV500_1000"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364196");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV500_1000(), AnalysisType, "Sh221_PDF30_Wtaunu_MV500_1000", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV500_1000->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV500_1000->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV500_1000->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV500_1000"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV0_70_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364158");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_BFil", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV0_70_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV140_280_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364162");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV1000_E_CMS_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV1000_E_CMS_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364127");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Zee_MV1000_E_CMS", lum_weight, draw);
	Sh221_PDF30_Zee_MV1000_E_CMS->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV1000_E_CMS->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV1000_E_CMS->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV280_500_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364165");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364188");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV70_140_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364117");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV70_140_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV280_500_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364139");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_BFil", lum_weight, draw);
	Sh221_PDF30_Ztt_MV280_500_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV0_70_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364100");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV0_70_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364157");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV280_500_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364109");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV70_140_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364175");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_BFil", lum_weight, draw);
	Sh221_PDF30_Wenu_MV70_140_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV140_280_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364120");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV140_280_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364184");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV70_140_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364118");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV70_140_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV70_140_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364105");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_BFil", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV70_140_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV500_1000_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV500_1000_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV500_1000"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364140");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV500_1000(), AnalysisType, "Sh221_PDF30_Ztt_MV500_1000", lum_weight, draw);
	Sh221_PDF30_Ztt_MV500_1000->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV500_1000->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV500_1000->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV500_1000"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV70_140_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364133");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_BFil", lum_weight, draw);
	Sh221_PDF30_Ztt_MV70_140_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV70_140_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364132");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV70_140_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV140_280_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364192");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_BFil", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV140_280_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV280_500_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364110");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV280_500_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364125");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_BFil", lum_weight, draw);
	Sh221_PDF30_Zee_MV280_500_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV70_140_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364173");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wenu_MV70_140_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV280_500_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364138");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV280_500_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV500_1000_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV500_1000_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV500_1000"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364126");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV500_1000(), AnalysisType, "Sh221_PDF30_Zee_MV500_1000", lum_weight, draw);
	Sh221_PDF30_Zee_MV500_1000->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV500_1000->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV500_1000->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV500_1000"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV140_280_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364121");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV140_280_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV0_70_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364170");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wenu_MV0_70_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_PoPy8_A14_ttb_nonallh_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/PoPy8_A14_ttb_nonallh_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy8_A14_ttb_nonallh"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410501");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy8_A14_ttb_nonallh(), 36200);
	MC_Analysis *PoPy8_A14_ttb_nonallh = new MC_Analysis(Chain_PoPy8_A14_ttb_nonallh(), AnalysisType, "PoPy8_A14_ttb_nonallh", lum_weight, draw);
	PoPy8_A14_ttb_nonallh->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy8_A14_ttb_nonallh"; 	completion.flush(); 	completion.close();
	PoPy8_A14_ttb_nonallh->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy8_A14_ttb_nonallh"; 	completion.flush(); 	completion.close();
	PoPy8_A14_ttb_nonallh->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy8_A14_ttb_nonallh"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wmunu_MV70_140_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364160");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364187");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV70_140_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364189");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_BFil", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV70_140_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV70_140_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364174");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wenu_MV70_140_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV500_1000_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV500_1000_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV500_1000"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364182");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV500_1000(), AnalysisType, "Sh221_PDF30_Wenu_MV500_1000", lum_weight, draw);
	Sh221_PDF30_Wenu_MV500_1000->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV500_1000->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV500_1000->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV500_1000"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV140_280_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364134");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV140_280_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364190");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee2jets_Min_N_TChannel_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee2jets_Min_N_TChannel_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308092");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee2jets_Min_N_TChannel(), 36200);
	MC_Analysis *Sh221_PDF30_Zee2jets_Min_N_TChannel = new MC_Analysis(Chain_Sh221_PDF30_Zee2jets_Min_N_TChannel(), AnalysisType, "Sh221_PDF30_Zee2jets_Min_N_TChannel", lum_weight, draw);
	Sh221_PDF30_Zee2jets_Min_N_TChannel->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee2jets_Min_N_TChannel->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee2jets_Min_N_TChannel->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364193");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364185");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt2jets_Min_N_TChannel_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt2jets_Min_N_TChannel_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308094");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt2jets_Min_N_TChannel(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt2jets_Min_N_TChannel = new MC_Analysis(Chain_Sh221_PDF30_Ztt2jets_Min_N_TChannel(), AnalysisType, "Sh221_PDF30_Ztt2jets_Min_N_TChannel", lum_weight, draw);
	Sh221_PDF30_Ztt2jets_Min_N_TChannel->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt2jets_Min_N_TChannel"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV1000_E_CMS_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV1000_E_CMS_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364183");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Wenu_MV1000_E_CMS", lum_weight, draw);
	Sh221_PDF30_Wenu_MV1000_E_CMS->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV1000_E_CMS->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV1000_E_CMS->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV280_500_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364111");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_BFil", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV280_500_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Ztt_MV0_70_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364128");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Ztt_MV0_70_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV500_1000_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV500_1000_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV500_1000"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364112");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV500_1000(), AnalysisType, "Sh221_PDF30_Zmumu_MV500_1000", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV500_1000->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV500_1000->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV500_1000"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV500_1000->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV500_1000"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zmumu_MV70_140_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364104");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CFilBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV280_500_CFilBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364180");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CFilBVet", lum_weight, draw);
	Sh221_PDF30_Wenu_MV280_500_CFilBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_CFilBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_CVetBVet_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV0_70_CVetBVet_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364114");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CVetBVet", lum_weight, draw);
	Sh221_PDF30_Zee_MV0_70_CVetBVet->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CVetBVet->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CVetBVet->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_CVetBVet"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV0_70_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364172");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_BFil", lum_weight, draw);
	Sh221_PDF30_Wenu_MV0_70_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wenu_MV280_500_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364181");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_BFil", lum_weight, draw);
	Sh221_PDF30_Wenu_MV280_500_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_BFil_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Zee_MV70_140_BFil_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364119");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_BFil", lum_weight, draw);
	Sh221_PDF30_Zee_MV70_140_BFil->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_BFil->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_BFil"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_BFil->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_BFil"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV1000_E_CMS_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/Sh221_PDF30_Wtaunu_MV1000_E_CMS_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364197");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Wtaunu_MV1000_E_CMS", lum_weight, draw);
	Sh221_PDF30_Wtaunu_MV1000_E_CMS->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV1000_E_CMS"; 	completion.flush(); 	completion.close();
}

void Start_DATA_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA = new MC_Analysis(Chain_DATA(), AnalysisType, "DATA", 1, draw);
	DATA->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA"; 	completion.flush(); 	completion.close();
	DATA->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA"; 	completion.flush(); 	completion.close();
	DATA->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA"; 	completion.flush(); 	completion.close();
}

void Start_DATA_0_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_0_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_0"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_0 = new MC_Analysis(Chain_DATA_0(), AnalysisType, "DATA_0", 1, draw);
	DATA_0->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_0"; 	completion.flush(); 	completion.close();
	DATA_0->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_0"; 	completion.flush(); 	completion.close();
	DATA_0->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_0"; 	completion.flush(); 	completion.close();
}

void Start_DATA_1_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_1_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_1"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_1 = new MC_Analysis(Chain_DATA_1(), AnalysisType, "DATA_1", 1, draw);
	DATA_1->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_1"; 	completion.flush(); 	completion.close();
	DATA_1->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_1"; 	completion.flush(); 	completion.close();
	DATA_1->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_1"; 	completion.flush(); 	completion.close();
}

void Start_DATA_2_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_2_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_2"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_2 = new MC_Analysis(Chain_DATA_2(), AnalysisType, "DATA_2", 1, draw);
	DATA_2->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_2"; 	completion.flush(); 	completion.close();
	DATA_2->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_2"; 	completion.flush(); 	completion.close();
	DATA_2->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_2"; 	completion.flush(); 	completion.close();
}

void Start_DATA_3_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_3_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_3"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_3 = new MC_Analysis(Chain_DATA_3(), AnalysisType, "DATA_3", 1, draw);
	DATA_3->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_3"; 	completion.flush(); 	completion.close();
	DATA_3->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_3"; 	completion.flush(); 	completion.close();
	DATA_3->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_3"; 	completion.flush(); 	completion.close();
}

void Start_DATA_4_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_4_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_4"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_4 = new MC_Analysis(Chain_DATA_4(), AnalysisType, "DATA_4", 1, draw);
	DATA_4->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_4"; 	completion.flush(); 	completion.close();
	DATA_4->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_4"; 	completion.flush(); 	completion.close();
	DATA_4->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_4"; 	completion.flush(); 	completion.close();
}

void Start_DATA_5_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_5_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_5"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_5 = new MC_Analysis(Chain_DATA_5(), AnalysisType, "DATA_5", 1, draw);
	DATA_5->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_5"; 	completion.flush(); 	completion.close();
	DATA_5->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_5"; 	completion.flush(); 	completion.close();
	DATA_5->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_5"; 	completion.flush(); 	completion.close();
}

void Start_DATA_6_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_6_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_6"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_6 = new MC_Analysis(Chain_DATA_6(), AnalysisType, "DATA_6", 1, draw);
	DATA_6->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_6"; 	completion.flush(); 	completion.close();
	DATA_6->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_6"; 	completion.flush(); 	completion.close();
	DATA_6->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_6"; 	completion.flush(); 	completion.close();
}

void Start_DATA_7_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_7_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_7"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_7 = new MC_Analysis(Chain_DATA_7(), AnalysisType, "DATA_7", 1, draw);
	DATA_7->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_7"; 	completion.flush(); 	completion.close();
	DATA_7->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_7"; 	completion.flush(); 	completion.close();
	DATA_7->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_7"; 	completion.flush(); 	completion.close();
}

void Start_DATA_8_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_8_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_8"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_8 = new MC_Analysis(Chain_DATA_8(), AnalysisType, "DATA_8", 1, draw);
	DATA_8->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_8"; 	completion.flush(); 	completion.close();
	DATA_8->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_8"; 	completion.flush(); 	completion.close();
	DATA_8->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_8"; 	completion.flush(); 	completion.close();
}

void Start_DATA_9_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_9_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_9"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_9 = new MC_Analysis(Chain_DATA_9(), AnalysisType, "DATA_9", 1, draw);
	DATA_9->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_9"; 	completion.flush(); 	completion.close();
	DATA_9->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_9"; 	completion.flush(); 	completion.close();
	DATA_9->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_9"; 	completion.flush(); 	completion.close();
}

void Start_DATA_10_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_10_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_10"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_10 = new MC_Analysis(Chain_DATA_10(), AnalysisType, "DATA_10", 1, draw);
	DATA_10->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_10"; 	completion.flush(); 	completion.close();
	DATA_10->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_10"; 	completion.flush(); 	completion.close();
	DATA_10->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_10"; 	completion.flush(); 	completion.close();
}

void Start_DATA_11_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_11_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_11"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_11 = new MC_Analysis(Chain_DATA_11(), AnalysisType, "DATA_11", 1, draw);
	DATA_11->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_11"; 	completion.flush(); 	completion.close();
	DATA_11->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_11"; 	completion.flush(); 	completion.close();
	DATA_11->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_11"; 	completion.flush(); 	completion.close();
}

void Start_DATA_12_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_12_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_12"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_12 = new MC_Analysis(Chain_DATA_12(), AnalysisType, "DATA_12", 1, draw);
	DATA_12->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_12"; 	completion.flush(); 	completion.close();
	DATA_12->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_12"; 	completion.flush(); 	completion.close();
	DATA_12->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_12"; 	completion.flush(); 	completion.close();
}

void Start_DATA_13_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_13_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_13"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_13 = new MC_Analysis(Chain_DATA_13(), AnalysisType, "DATA_13", 1, draw);
	DATA_13->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_13"; 	completion.flush(); 	completion.close();
	DATA_13->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_13"; 	completion.flush(); 	completion.close();
	DATA_13->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_13"; 	completion.flush(); 	completion.close();
}

void Start_DATA_14_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_14_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_14"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_14 = new MC_Analysis(Chain_DATA_14(), AnalysisType, "DATA_14", 1, draw);
	DATA_14->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_14"; 	completion.flush(); 	completion.close();
	DATA_14->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_14"; 	completion.flush(); 	completion.close();
	DATA_14->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_14"; 	completion.flush(); 	completion.close();
}

void Start_DATA_15_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_15_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_15"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_15 = new MC_Analysis(Chain_DATA_15(), AnalysisType, "DATA_15", 1, draw);
	DATA_15->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_15"; 	completion.flush(); 	completion.close();
	DATA_15->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_15"; 	completion.flush(); 	completion.close();
	DATA_15->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_15"; 	completion.flush(); 	completion.close();
}

void Start_DATA_16_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_16_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_16"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_16 = new MC_Analysis(Chain_DATA_16(), AnalysisType, "DATA_16", 1, draw);
	DATA_16->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_16"; 	completion.flush(); 	completion.close();
	DATA_16->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_16"; 	completion.flush(); 	completion.close();
	DATA_16->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_16"; 	completion.flush(); 	completion.close();
}

void Start_DATA_17_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_17_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_17"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_17 = new MC_Analysis(Chain_DATA_17(), AnalysisType, "DATA_17", 1, draw);
	DATA_17->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_17"; 	completion.flush(); 	completion.close();
	DATA_17->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_17"; 	completion.flush(); 	completion.close();
	DATA_17->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_17"; 	completion.flush(); 	completion.close();
}

void Start_DATA_18_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_18_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_18"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_18 = new MC_Analysis(Chain_DATA_18(), AnalysisType, "DATA_18", 1, draw);
	DATA_18->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_18"; 	completion.flush(); 	completion.close();
	DATA_18->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_18"; 	completion.flush(); 	completion.close();
	DATA_18->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_18"; 	completion.flush(); 	completion.close();
}

void Start_DATA_19_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_19_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_19"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_19 = new MC_Analysis(Chain_DATA_19(), AnalysisType, "DATA_19", 1, draw);
	DATA_19->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_19"; 	completion.flush(); 	completion.close();
	DATA_19->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_19"; 	completion.flush(); 	completion.close();
	DATA_19->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_19"; 	completion.flush(); 	completion.close();
}

void Start_DATA_20_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_20_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_20"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_20 = new MC_Analysis(Chain_DATA_20(), AnalysisType, "DATA_20", 1, draw);
	DATA_20->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_20"; 	completion.flush(); 	completion.close();
	DATA_20->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_20"; 	completion.flush(); 	completion.close();
	DATA_20->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_20"; 	completion.flush(); 	completion.close();
}

void Start_DATA_21_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_21_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_21"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_21 = new MC_Analysis(Chain_DATA_21(), AnalysisType, "DATA_21", 1, draw);
	DATA_21->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_21"; 	completion.flush(); 	completion.close();
	DATA_21->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_21"; 	completion.flush(); 	completion.close();
	DATA_21->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_21"; 	completion.flush(); 	completion.close();
}

void Start_DATA_22_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_22_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_22"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_22 = new MC_Analysis(Chain_DATA_22(), AnalysisType, "DATA_22", 1, draw);
	DATA_22->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_22"; 	completion.flush(); 	completion.close();
	DATA_22->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_22"; 	completion.flush(); 	completion.close();
	DATA_22->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_22"; 	completion.flush(); 	completion.close();
}

void Start_DATA_23_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_23_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_23"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_23 = new MC_Analysis(Chain_DATA_23(), AnalysisType, "DATA_23", 1, draw);
	DATA_23->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_23"; 	completion.flush(); 	completion.close();
	DATA_23->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_23"; 	completion.flush(); 	completion.close();
	DATA_23->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_23"; 	completion.flush(); 	completion.close();
}

void Start_DATA_24_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_24_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_24"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_24 = new MC_Analysis(Chain_DATA_24(), AnalysisType, "DATA_24", 1, draw);
	DATA_24->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_24"; 	completion.flush(); 	completion.close();
	DATA_24->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_24"; 	completion.flush(); 	completion.close();
	DATA_24->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_24"; 	completion.flush(); 	completion.close();
}

void Start_DATA_25_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_25_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_25"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_25 = new MC_Analysis(Chain_DATA_25(), AnalysisType, "DATA_25", 1, draw);
	DATA_25->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_25"; 	completion.flush(); 	completion.close();
	DATA_25->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_25"; 	completion.flush(); 	completion.close();
	DATA_25->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_25"; 	completion.flush(); 	completion.close();
}

void Start_DATA_26_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_26_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_26"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_26 = new MC_Analysis(Chain_DATA_26(), AnalysisType, "DATA_26", 1, draw);
	DATA_26->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_26"; 	completion.flush(); 	completion.close();
	DATA_26->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_26"; 	completion.flush(); 	completion.close();
	DATA_26->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_26"; 	completion.flush(); 	completion.close();
}

void Start_DATA_27_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_27_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_27"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_27 = new MC_Analysis(Chain_DATA_27(), AnalysisType, "DATA_27", 1, draw);
	DATA_27->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_27"; 	completion.flush(); 	completion.close();
	DATA_27->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_27"; 	completion.flush(); 	completion.close();
	DATA_27->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_27"; 	completion.flush(); 	completion.close();
}

void Start_DATA_28_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_28_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_28"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_28 = new MC_Analysis(Chain_DATA_28(), AnalysisType, "DATA_28", 1, draw);
	DATA_28->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_28"; 	completion.flush(); 	completion.close();
	DATA_28->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_28"; 	completion.flush(); 	completion.close();
	DATA_28->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_28"; 	completion.flush(); 	completion.close();
}

void Start_DATA_29_Analysis(string AnalysisType, bool draw) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "/DATA_29_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_29"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_29 = new MC_Analysis(Chain_DATA_29(), AnalysisType, "DATA_29", 1, draw);
	DATA_29->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_29"; 	completion.flush(); 	completion.close();
	DATA_29->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_29"; 	completion.flush(); 	completion.close();
	DATA_29->DrawHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_29"; 	completion.flush(); 	completion.close();
}

#endif