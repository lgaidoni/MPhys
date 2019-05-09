#ifndef Analysis_Start_Functions_Higgs_h
#define Analysis_Start_Functions_Higgs_h

void Start_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364110", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364183", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV1000_E_CMS_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV1000_E_CMS_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV1000_E_CMS_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV1000_E_CMS_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364186", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364101", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364194", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364117", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364129", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364115", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_incl_atop_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_incl_atop_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_incl_atop_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410014", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_incl_atop_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_Wt_incl_atop_r9364 = new MC_Analysis(Chain_PoPy_P2012_Wt_incl_atop_r9364_Higgs(), AnalysisType, "PoPy_P2012_Wt_incl_atop_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_incl_atop_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_incl_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_atop_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_incl_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_atop_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_incl_atop_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364179", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308094", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364109", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_ZqqZll_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_ZqqZll_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_ZqqZll_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363356", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_ZqqZll_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_ZqqZll_r9364 = new MC_Analysis(Chain_Sh221_PDF30_ZqqZll_r9364_Higgs(), AnalysisType, "Sh221_PDF30_ZqqZll_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_ZqqZll_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_ZqqZll_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZll_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_ZqqZll_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZll_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_ZqqZll_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_llll_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_llll_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_llll_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364250", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_llll_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh222_PDF30_llll_r9364 = new MC_Analysis(Chain_Sh222_PDF30_llll_r9364_Higgs(), AnalysisType, "Sh222_PDF30_llll_r9364_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_llll_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_llll_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llll_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_llll_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llll_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_llll_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364104", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV500_1000_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364196", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV500_1000_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV500_1000_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV500_1000_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV500_1000_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364105", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV70_140_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364134", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV500_1000_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364140", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV500_1000_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV500_1000_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV500_1000_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV500_1000_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364194", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364132", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364190", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364164", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV140_280_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_llvv_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_llvv_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_llvv_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364254", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_llvv_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh222_PDF30_llvv_r10201 = new MC_Analysis(Chain_Sh222_PDF30_llvv_r10201_Higgs(), AnalysisType, "Sh222_PDF30_llvv_r10201_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_llvv_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_llvv_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llvv_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_llvv_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llvv_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_llvv_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364177", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364117", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_st_tchan_lept_atop_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_st_tchan_lept_atop_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_st_tchan_lept_atop_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410012", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_st_tchan_lept_atop_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_st_tchan_lept_atop_r9364 = new MC_Analysis(Chain_PoPy_P2012_st_tchan_lept_atop_r9364_Higgs(), AnalysisType, "PoPy_P2012_st_tchan_lept_atop_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_st_tchan_lept_atop_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_st_tchan_lept_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_st_tchan_lept_atop_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_st_tchan_lept_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_st_tchan_lept_atop_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_st_tchan_lept_atop_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364177", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV280_500_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364181", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV280_500_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364167", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV280_500_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364158", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV0_70_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV1000_E_CMS_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364127", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV1000_E_CMS_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV1000_E_CMS_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV1000_E_CMS_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV1000_E_CMS_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_ZqqZll_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_ZqqZll_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_ZqqZll_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363356", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_ZqqZll_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_ZqqZll_r10201 = new MC_Analysis(Chain_Sh221_PDF30_ZqqZll_r10201_Higgs(), AnalysisType, "Sh221_PDF30_ZqqZll_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_ZqqZll_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_ZqqZll_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZll_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_ZqqZll_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZll_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_ZqqZll_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV0_70_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364116", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV0_70_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV500_1000_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364196", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV500_1000_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV500_1000_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV500_1000_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV500_1000_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364159", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_dilepton_atop_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_dilepton_atop_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_dilepton_atop_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410016", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_dilepton_atop_r10201_Higgs(), 43587.3);
	MC_Analysis *PoPy_P2012_Wt_dilepton_atop_r10201 = new MC_Analysis(Chain_PoPy_P2012_Wt_dilepton_atop_r10201_Higgs(), AnalysisType, "PoPy_P2012_Wt_dilepton_atop_r10201_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_dilepton_atop_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_dilepton_atop_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_atop_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_dilepton_atop_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_atop_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_dilepton_atop_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364193", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364197", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364180", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV140_280_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364122", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV140_280_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV70_140_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364133", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV70_140_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV280_500_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364181", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV280_500_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_dilepton_atop_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_dilepton_atop_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_dilepton_atop_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410016", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_dilepton_atop_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_Wt_dilepton_atop_r9364 = new MC_Analysis(Chain_PoPy_P2012_Wt_dilepton_atop_r9364_Higgs(), AnalysisType, "PoPy_P2012_Wt_dilepton_atop_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_dilepton_atop_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_dilepton_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_atop_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_dilepton_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_atop_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_dilepton_atop_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364128", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_ZqqZvv_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_ZqqZvv_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_ZqqZvv_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363355", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_ZqqZvv_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_ZqqZvv_r10201 = new MC_Analysis(Chain_Sh221_PDF30_ZqqZvv_r10201_Higgs(), AnalysisType, "Sh221_PDF30_ZqqZvv_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_ZqqZvv_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_ZqqZvv_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZvv_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_ZqqZvv_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZvv_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_ZqqZvv_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_WqqZvv_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_WqqZvv_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_WqqZvv_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363357", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_WqqZvv_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_WqqZvv_r10201 = new MC_Analysis(Chain_Sh221_PDF30_WqqZvv_r10201_Higgs(), AnalysisType, "Sh221_PDF30_WqqZvv_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_WqqZvv_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_WqqZvv_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZvv_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_WqqZvv_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZvv_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_WqqZvv_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364197", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364138", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV500_1000_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV500_1000_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364126", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV500_1000_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV500_1000_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV500_1000_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV500_1000_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV500_1000_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV500_1000_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV500_1000_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_ZqqZvv_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_ZqqZvv_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_ZqqZvv_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363355", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_ZqqZvv_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_ZqqZvv_r9364 = new MC_Analysis(Chain_Sh221_PDF30_ZqqZvv_r9364_Higgs(), AnalysisType, "Sh221_PDF30_ZqqZvv_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_ZqqZvv_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_ZqqZvv_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZvv_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_ZqqZvv_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_ZqqZvv_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_ZqqZvv_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV0_70_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364172", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV0_70_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364113", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364108", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV140_280_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV280_500_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364139", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV280_500_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364100", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364162", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364132", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364170", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364123", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364176", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364120", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364162", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364102", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV0_70_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364195", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV0_70_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364130", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV0_70_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364115", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364107", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV70_140_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364175", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV70_140_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364100", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364164", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV140_280_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364187", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364184", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364104", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364195", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364174", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364166", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364158", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV0_70_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV500_1000_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364140", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV500_1000_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV500_1000_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV500_1000_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV500_1000_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_STSchan_noAllHad_top_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_STSchan_noAllHad_top_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410025", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_STSchan_noAllHad_top_r9364 = new MC_Analysis(Chain_PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs(), AnalysisType, "PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_STSchan_noAllHad_top_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_STSchan_noAllHad_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_STSchan_noAllHad_top_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_STSchan_noAllHad_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_STSchan_noAllHad_top_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_STSchan_noAllHad_top_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364137", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364176", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364192", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364156", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308092", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PoPy8_A14_ttb_nonallh_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy8_A14_ttb_nonallh_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410501", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy8_A14_ttb_nonallh_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy8_A14_ttb_nonallh_r9364 = new MC_Analysis(Chain_PoPy8_A14_ttb_nonallh_r9364_Higgs(), AnalysisType, "PoPy8_A14_ttb_nonallh_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy8_A14_ttb_nonallh_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
	PoPy8_A14_ttb_nonallh_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
	PoPy8_A14_ttb_nonallh_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364124", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364118", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PhPy8_A14_ttb_nonallh_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PhPy8_A14_ttb_nonallh_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PhPy8_A14_ttb_nonallh_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410470", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PhPy8_A14_ttb_nonallh_r10201_Higgs(), 43587.3);
	MC_Analysis *PhPy8_A14_ttb_nonallh_r10201 = new MC_Analysis(Chain_PhPy8_A14_ttb_nonallh_r10201_Higgs(), AnalysisType, "PhPy8_A14_ttb_nonallh_r10201_Higgs", lum_weight, draw, Higgs);
	PhPy8_A14_ttb_nonallh_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PhPy8_A14_ttb_nonallh_r10201"; 	completion.flush(); 	completion.close();
	PhPy8_A14_ttb_nonallh_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PhPy8_A14_ttb_nonallh_r10201"; 	completion.flush(); 	completion.close();
	PhPy8_A14_ttb_nonallh_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PhPy8_A14_ttb_nonallh_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV500_1000_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV500_1000_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364126", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV500_1000_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV500_1000_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV500_1000_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV500_1000_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV500_1000_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV500_1000_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV500_1000_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV280_500_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364139", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV280_500_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_WqqZll_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_WqqZll_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_WqqZll_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363358", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_WqqZll_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_WqqZll_r9364 = new MC_Analysis(Chain_Sh221_PDF30_WqqZll_r9364_Higgs(), AnalysisType, "Sh221_PDF30_WqqZll_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_WqqZll_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_WqqZll_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZll_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_WqqZll_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZll_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_WqqZll_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364111", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV280_500_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364109", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364110", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364169", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV70_140_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364175", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV70_140_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364131", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364113", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_incl_top_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_incl_top_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_incl_top_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410013", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_incl_top_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_Wt_incl_top_r9364 = new MC_Analysis(Chain_PoPy_P2012_Wt_incl_top_r9364_Higgs(), AnalysisType, "PoPy_P2012_Wt_incl_top_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_incl_top_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_incl_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_top_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_incl_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_top_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_incl_top_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364187", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364193", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364157", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364173", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364189", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308093", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364163", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV70_140_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364133", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV70_140_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364184", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV70_140_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364119", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV70_140_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV0_70_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364116", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV0_70_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364101", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364190", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV500_1000_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364182", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV500_1000_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV500_1000_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV500_1000_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV500_1000_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV1000_E_CMS_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364127", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV1000_E_CMS_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV1000_E_CMS_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV1000_E_CMS_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV1000_E_CMS_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364171", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364103", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_WlvZqq_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_WlvZqq_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_WlvZqq_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363489", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_WlvZqq_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_WlvZqq_r10201 = new MC_Analysis(Chain_Sh221_PDF30_WlvZqq_r10201_Higgs(), AnalysisType, "Sh221_PDF30_WlvZqq_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_WlvZqq_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_WlvZqq_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WlvZqq_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_WlvZqq_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WlvZqq_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_WlvZqq_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364108", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV140_280_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_lvvv_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_lvvv_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_lvvv_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364255", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_lvvv_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh222_PDF30_lvvv_r9364 = new MC_Analysis(Chain_Sh222_PDF30_lvvv_r9364_Higgs(), AnalysisType, "Sh222_PDF30_lvvv_r9364_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_lvvv_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_lvvv_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lvvv_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_lvvv_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lvvv_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_lvvv_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364166", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364120", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364121", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV70_140_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364119", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV70_140_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308092", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_llvv_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_llvv_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_llvv_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364254", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_llvv_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh222_PDF30_llvv_r9364 = new MC_Analysis(Chain_Sh222_PDF30_llvv_r9364_Higgs(), AnalysisType, "Sh222_PDF30_llvv_r9364_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_llvv_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_llvv_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llvv_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_llvv_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llvv_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_llvv_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_STSchan_noAllHad_atop_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_STSchan_noAllHad_atop_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410026", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_STSchan_noAllHad_atop_r9364 = new MC_Analysis(Chain_PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs(), AnalysisType, "PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_STSchan_noAllHad_atop_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_STSchan_noAllHad_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_STSchan_noAllHad_atop_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_STSchan_noAllHad_atop_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_STSchan_noAllHad_atop_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_STSchan_noAllHad_atop_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364106", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_dilepton_top_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_dilepton_top_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_dilepton_top_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410015", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_dilepton_top_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_Wt_dilepton_top_r9364 = new MC_Analysis(Chain_PoPy_P2012_Wt_dilepton_top_r9364_Higgs(), AnalysisType, "PoPy_P2012_Wt_dilepton_top_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_dilepton_top_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_dilepton_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_top_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_dilepton_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_top_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_dilepton_top_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364135", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV140_280_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364136", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV140_280_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364159", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_incl_top_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_incl_top_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_incl_top_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410013", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_incl_top_r10201_Higgs(), 43587.3);
	MC_Analysis *PoPy_P2012_Wt_incl_top_r10201 = new MC_Analysis(Chain_PoPy_P2012_Wt_incl_top_r10201_Higgs(), AnalysisType, "PoPy_P2012_Wt_incl_top_r10201_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_incl_top_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_incl_top_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_top_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_incl_top_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_top_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_incl_top_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364141", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV1000_E_CMS_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV1000_E_CMS_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV1000_E_CMS_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV1000_E_CMS_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364189", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364170", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy8_Zmumu_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy8_Zmumu_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy8_Zmumu_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("361107", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy8_Zmumu_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy8_Zmumu_r9364 = new MC_Analysis(Chain_PoPy8_Zmumu_r9364_Higgs(), AnalysisType, "PoPy8_Zmumu_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy8_Zmumu_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy8_Zmumu_r9364"; 	completion.flush(); 	completion.close();
	PoPy8_Zmumu_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy8_Zmumu_r9364"; 	completion.flush(); 	completion.close();
	PoPy8_Zmumu_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy8_Zmumu_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364174", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_lvvv_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_lvvv_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_lvvv_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364255", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_lvvv_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh222_PDF30_lvvv_r10201 = new MC_Analysis(Chain_Sh222_PDF30_lvvv_r10201_Higgs(), AnalysisType, "Sh222_PDF30_lvvv_r10201_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_lvvv_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_lvvv_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lvvv_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_lvvv_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lvvv_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_lvvv_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PhPy8_A14_ttb_nonallh_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PhPy8_A14_ttb_nonallh_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PhPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410470", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PhPy8_A14_ttb_nonallh_r9364_Higgs(), 36236.9);
	MC_Analysis *PhPy8_A14_ttb_nonallh_r9364 = new MC_Analysis(Chain_PhPy8_A14_ttb_nonallh_r9364_Higgs(), AnalysisType, "PhPy8_A14_ttb_nonallh_r9364_Higgs", lum_weight, draw, Higgs);
	PhPy8_A14_ttb_nonallh_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PhPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
	PhPy8_A14_ttb_nonallh_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PhPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
	PhPy8_A14_ttb_nonallh_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PhPy8_A14_ttb_nonallh_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364124", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364173", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364169", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364160", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364123", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364118", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_WlvZqq_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_WlvZqq_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_WlvZqq_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363489", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_WlvZqq_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_WlvZqq_r9364 = new MC_Analysis(Chain_Sh221_PDF30_WlvZqq_r9364_Higgs(), AnalysisType, "Sh221_PDF30_WlvZqq_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_WlvZqq_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_WlvZqq_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WlvZqq_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_WlvZqq_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WlvZqq_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_WlvZqq_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364161", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV70_140_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364191", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364188", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV140_280_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364136", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV140_280_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_WqqZvv_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_WqqZvv_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_WqqZvv_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363357", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_WqqZvv_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_WqqZvv_r9364 = new MC_Analysis(Chain_Sh221_PDF30_WqqZvv_r9364_Higgs(), AnalysisType, "Sh221_PDF30_WqqZvv_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_WqqZvv_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_WqqZvv_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZvv_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_WqqZvv_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZvv_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_WqqZvv_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV500_1000_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364182", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV500_1000_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV500_1000_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV500_1000_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV500_1000_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364163", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364114", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_dilepton_top_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_dilepton_top_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_dilepton_top_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410015", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_dilepton_top_r10201_Higgs(), 43587.3);
	MC_Analysis *PoPy_P2012_Wt_dilepton_top_r10201 = new MC_Analysis(Chain_PoPy_P2012_Wt_dilepton_top_r10201_Higgs(), AnalysisType, "PoPy_P2012_Wt_dilepton_top_r10201_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_dilepton_top_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_dilepton_top_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_top_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_dilepton_top_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_dilepton_top_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_dilepton_top_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364191", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364171", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364135", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364185", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_Wt_incl_atop_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_Wt_incl_atop_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_Wt_incl_atop_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410014", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_Wt_incl_atop_r10201_Higgs(), 43587.3);
	MC_Analysis *PoPy_P2012_Wt_incl_atop_r10201 = new MC_Analysis(Chain_PoPy_P2012_Wt_incl_atop_r10201_Higgs(), AnalysisType, "PoPy_P2012_Wt_incl_atop_r10201_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_Wt_incl_atop_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_Wt_incl_atop_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_atop_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_Wt_incl_atop_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_Wt_incl_atop_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_Wt_incl_atop_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PoPy8_Zee_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy8_Zee_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy8_Zee_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("361106", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy8_Zee_r10201_Higgs(), 43587.3);
	MC_Analysis *PoPy8_Zee_r10201 = new MC_Analysis(Chain_PoPy8_Zee_r10201_Higgs(), AnalysisType, "PoPy8_Zee_r10201_Higgs", lum_weight, draw, Higgs);
	PoPy8_Zee_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy8_Zee_r10201"; 	completion.flush(); 	completion.close();
	PoPy8_Zee_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy8_Zee_r10201"; 	completion.flush(); 	completion.close();
	PoPy8_Zee_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy8_Zee_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308093", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364102", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV0_70_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV0_70_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364165", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364186", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV500_1000_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364112", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV500_1000_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV500_1000_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV500_1000_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV500_1000_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364180", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy8_Zmumu_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy8_Zmumu_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy8_Zmumu_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("361107", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy8_Zmumu_r10201_Higgs(), 43587.3);
	MC_Analysis *PoPy8_Zmumu_r10201 = new MC_Analysis(Chain_PoPy8_Zmumu_r10201_Higgs(), AnalysisType, "PoPy8_Zmumu_r10201_Higgs", lum_weight, draw, Higgs);
	PoPy8_Zmumu_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy8_Zmumu_r10201"; 	completion.flush(); 	completion.close();
	PoPy8_Zmumu_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy8_Zmumu_r10201"; 	completion.flush(); 	completion.close();
	PoPy8_Zmumu_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy8_Zmumu_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_WqqZll_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_WqqZll_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_WqqZll_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("363358", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_WqqZll_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_WqqZll_r10201 = new MC_Analysis(Chain_Sh221_PDF30_WqqZll_r10201_Higgs(), AnalysisType, "Sh221_PDF30_WqqZll_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_WqqZll_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_WqqZll_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZll_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_WqqZll_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_WqqZll_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_WqqZll_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364185", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_llll_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_llll_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_llll_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364250", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_llll_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh222_PDF30_llll_r10201 = new MC_Analysis(Chain_Sh222_PDF30_llll_r10201_Higgs(), AnalysisType, "Sh222_PDF30_llll_r10201_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_llll_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_llll_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llll_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_llll_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_llll_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_llll_r10201"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_STSchan_noAllHad_top_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_STSchan_noAllHad_top_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410025", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs(), 43587.3);
	MC_Analysis *PoPy_P2012_STSchan_noAllHad_top_r10201 = new MC_Analysis(Chain_PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs(), AnalysisType, "PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_STSchan_noAllHad_top_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_STSchan_noAllHad_top_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_STSchan_noAllHad_top_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_STSchan_noAllHad_top_r10201"; 	completion.flush(); 	completion.close();
	PoPy_P2012_STSchan_noAllHad_top_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_STSchan_noAllHad_top_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV500_1000_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364168", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV500_1000_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV500_1000_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV500_1000_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV500_1000_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV500_1000_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364106", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364134", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy_P2012_st_tchan_lept_top_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy_P2012_st_tchan_lept_top_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy_P2012_st_tchan_lept_top_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("410011", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy_P2012_st_tchan_lept_top_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy_P2012_st_tchan_lept_top_r9364 = new MC_Analysis(Chain_PoPy_P2012_st_tchan_lept_top_r9364_Higgs(), AnalysisType, "PoPy_P2012_st_tchan_lept_top_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy_P2012_st_tchan_lept_top_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy_P2012_st_tchan_lept_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_st_tchan_lept_top_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy_P2012_st_tchan_lept_top_r9364"; 	completion.flush(); 	completion.close();
	PoPy_P2012_st_tchan_lept_top_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy_P2012_st_tchan_lept_top_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("308094", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364165", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364183", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV1000_E_CMS_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV1000_E_CMS_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV1000_E_CMS_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV1000_E_CMS_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV1000_E_CMS_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364103", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364157", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364114", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364188", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364156", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364107", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV280_500_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364125", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV280_500_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV0_70_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364172", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV0_70_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV0_70_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_PoPy8_Zee_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/PoPy8_Zee_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started PoPy8_Zee_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("361106", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy8_Zee_r9364_Higgs(), 36236.9);
	MC_Analysis *PoPy8_Zee_r9364 = new MC_Analysis(Chain_PoPy8_Zee_r9364_Higgs(), AnalysisType, "PoPy8_Zee_r9364_Higgs", lum_weight, draw, Higgs);
	PoPy8_Zee_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing PoPy8_Zee_r9364"; 	completion.flush(); 	completion.close();
	PoPy8_Zee_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed PoPy8_Zee_r9364"; 	completion.flush(); 	completion.close();
	PoPy8_Zee_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished PoPy8_Zee_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV280_500_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364125", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV280_500_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV280_500_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV280_500_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364161", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV70_140_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_lllv_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_lllv_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_lllv_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364253", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_lllv_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh222_PDF30_lllv_r10201 = new MC_Analysis(Chain_Sh222_PDF30_lllv_r10201_Higgs(), AnalysisType, "Sh222_PDF30_lllv_r10201_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_lllv_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_lllv_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lllv_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_lllv_r10201"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lllv_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_lllv_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV500_1000_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364112", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV500_1000_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV500_1000_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV500_1000_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV500_1000_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364131", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364138", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364105", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV70_140_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV70_140_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV70_140_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364128", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364192", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV0_70_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364130", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV0_70_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zmumu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364111", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zmumu_MV280_500_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zmumu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zmumu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zmumu_MV280_500_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zmumu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV140_280_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364122", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV140_280_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364121", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV500_1000_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364168", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wmunu_MV500_1000_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV500_1000_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV500_1000_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV500_1000_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV500_1000_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV140_280_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364178", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV140_280_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh222_PDF30_lllv_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh222_PDF30_lllv_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh222_PDF30_lllv_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364253", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh222_PDF30_lllv_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh222_PDF30_lllv_r9364 = new MC_Analysis(Chain_Sh222_PDF30_lllv_r9364_Higgs(), AnalysisType, "Sh222_PDF30_lllv_r9364_Higgs", lum_weight, draw, Higgs);
	Sh222_PDF30_lllv_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh222_PDF30_lllv_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lllv_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh222_PDF30_lllv_r9364"; 	completion.flush(); 	completion.close();
	Sh222_PDF30_lllv_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh222_PDF30_lllv_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364141", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV1000_E_CMS_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV1000_E_CMS_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV1000_E_CMS_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV1000_E_CMS_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV1000_E_CMS_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364129", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364160", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wmunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364167", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_BFil_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wmunu_MV280_500_BFil_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wmunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_BFil_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wmunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wmunu_MV280_500_BFil_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wmunu_MV280_500_BFil_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364137", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs(), 36236.9);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV140_280_BFil_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364178", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_BFil_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV140_280_BFil_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_BFil_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV140_280_BFil_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV140_280_BFil_r10201"; 	completion.flush(); 	completion.close();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	vector<double> luminosity_info = csv_reader("364179", true);
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs(), 43587.3);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs", lum_weight, draw, Higgs);
	Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201"; 	completion.flush(); 	completion.close();
}

void Start_DATA_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_Higgs = new MC_Analysis(Chain_DATA_Higgs(), AnalysisType, "DATA_Higgs", 1, draw, Higgs);
	DATA_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_Higgs"; 	completion.flush(); 	completion.close();
	DATA_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_Higgs"; 	completion.flush(); 	completion.close();
	DATA_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_0_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_0_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_0_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_0_Higgs = new MC_Analysis(Chain_DATA_0_Higgs(), AnalysisType, "DATA_0_Higgs", 1, draw, Higgs);
	DATA_0_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_0_Higgs"; 	completion.flush(); 	completion.close();
	DATA_0_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_0_Higgs"; 	completion.flush(); 	completion.close();
	DATA_0_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_0_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_1_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_1_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_1_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_1_Higgs = new MC_Analysis(Chain_DATA_1_Higgs(), AnalysisType, "DATA_1_Higgs", 1, draw, Higgs);
	DATA_1_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_1_Higgs"; 	completion.flush(); 	completion.close();
	DATA_1_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_1_Higgs"; 	completion.flush(); 	completion.close();
	DATA_1_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_1_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_2_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_2_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_2_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_2_Higgs = new MC_Analysis(Chain_DATA_2_Higgs(), AnalysisType, "DATA_2_Higgs", 1, draw, Higgs);
	DATA_2_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_2_Higgs"; 	completion.flush(); 	completion.close();
	DATA_2_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_2_Higgs"; 	completion.flush(); 	completion.close();
	DATA_2_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_2_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_3_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_3_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_3_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_3_Higgs = new MC_Analysis(Chain_DATA_3_Higgs(), AnalysisType, "DATA_3_Higgs", 1, draw, Higgs);
	DATA_3_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_3_Higgs"; 	completion.flush(); 	completion.close();
	DATA_3_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_3_Higgs"; 	completion.flush(); 	completion.close();
	DATA_3_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_3_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_4_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_4_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_4_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_4_Higgs = new MC_Analysis(Chain_DATA_4_Higgs(), AnalysisType, "DATA_4_Higgs", 1, draw, Higgs);
	DATA_4_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_4_Higgs"; 	completion.flush(); 	completion.close();
	DATA_4_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_4_Higgs"; 	completion.flush(); 	completion.close();
	DATA_4_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_4_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_5_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_5_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_5_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_5_Higgs = new MC_Analysis(Chain_DATA_5_Higgs(), AnalysisType, "DATA_5_Higgs", 1, draw, Higgs);
	DATA_5_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_5_Higgs"; 	completion.flush(); 	completion.close();
	DATA_5_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_5_Higgs"; 	completion.flush(); 	completion.close();
	DATA_5_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_5_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_6_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_6_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_6_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_6_Higgs = new MC_Analysis(Chain_DATA_6_Higgs(), AnalysisType, "DATA_6_Higgs", 1, draw, Higgs);
	DATA_6_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_6_Higgs"; 	completion.flush(); 	completion.close();
	DATA_6_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_6_Higgs"; 	completion.flush(); 	completion.close();
	DATA_6_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_6_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_7_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_7_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_7_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_7_Higgs = new MC_Analysis(Chain_DATA_7_Higgs(), AnalysisType, "DATA_7_Higgs", 1, draw, Higgs);
	DATA_7_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_7_Higgs"; 	completion.flush(); 	completion.close();
	DATA_7_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_7_Higgs"; 	completion.flush(); 	completion.close();
	DATA_7_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_7_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_8_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_8_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_8_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_8_Higgs = new MC_Analysis(Chain_DATA_8_Higgs(), AnalysisType, "DATA_8_Higgs", 1, draw, Higgs);
	DATA_8_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_8_Higgs"; 	completion.flush(); 	completion.close();
	DATA_8_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_8_Higgs"; 	completion.flush(); 	completion.close();
	DATA_8_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_8_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_9_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_9_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_9_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_9_Higgs = new MC_Analysis(Chain_DATA_9_Higgs(), AnalysisType, "DATA_9_Higgs", 1, draw, Higgs);
	DATA_9_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_9_Higgs"; 	completion.flush(); 	completion.close();
	DATA_9_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_9_Higgs"; 	completion.flush(); 	completion.close();
	DATA_9_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_9_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_10_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_10_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_10_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_10_Higgs = new MC_Analysis(Chain_DATA_10_Higgs(), AnalysisType, "DATA_10_Higgs", 1, draw, Higgs);
	DATA_10_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_10_Higgs"; 	completion.flush(); 	completion.close();
	DATA_10_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_10_Higgs"; 	completion.flush(); 	completion.close();
	DATA_10_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_10_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_11_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_11_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_11_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_11_Higgs = new MC_Analysis(Chain_DATA_11_Higgs(), AnalysisType, "DATA_11_Higgs", 1, draw, Higgs);
	DATA_11_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_11_Higgs"; 	completion.flush(); 	completion.close();
	DATA_11_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_11_Higgs"; 	completion.flush(); 	completion.close();
	DATA_11_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_11_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_12_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_12_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_12_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_12_Higgs = new MC_Analysis(Chain_DATA_12_Higgs(), AnalysisType, "DATA_12_Higgs", 1, draw, Higgs);
	DATA_12_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_12_Higgs"; 	completion.flush(); 	completion.close();
	DATA_12_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_12_Higgs"; 	completion.flush(); 	completion.close();
	DATA_12_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_12_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_13_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_13_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_13_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_13_Higgs = new MC_Analysis(Chain_DATA_13_Higgs(), AnalysisType, "DATA_13_Higgs", 1, draw, Higgs);
	DATA_13_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_13_Higgs"; 	completion.flush(); 	completion.close();
	DATA_13_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_13_Higgs"; 	completion.flush(); 	completion.close();
	DATA_13_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_13_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_14_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_14_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_14_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_14_Higgs = new MC_Analysis(Chain_DATA_14_Higgs(), AnalysisType, "DATA_14_Higgs", 1, draw, Higgs);
	DATA_14_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_14_Higgs"; 	completion.flush(); 	completion.close();
	DATA_14_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_14_Higgs"; 	completion.flush(); 	completion.close();
	DATA_14_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_14_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_15_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_15_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_15_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_15_Higgs = new MC_Analysis(Chain_DATA_15_Higgs(), AnalysisType, "DATA_15_Higgs", 1, draw, Higgs);
	DATA_15_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_15_Higgs"; 	completion.flush(); 	completion.close();
	DATA_15_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_15_Higgs"; 	completion.flush(); 	completion.close();
	DATA_15_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_15_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_16_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_16_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_16_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_16_Higgs = new MC_Analysis(Chain_DATA_16_Higgs(), AnalysisType, "DATA_16_Higgs", 1, draw, Higgs);
	DATA_16_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_16_Higgs"; 	completion.flush(); 	completion.close();
	DATA_16_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_16_Higgs"; 	completion.flush(); 	completion.close();
	DATA_16_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_16_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_17_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_17_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_17_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_17_Higgs = new MC_Analysis(Chain_DATA_17_Higgs(), AnalysisType, "DATA_17_Higgs", 1, draw, Higgs);
	DATA_17_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_17_Higgs"; 	completion.flush(); 	completion.close();
	DATA_17_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_17_Higgs"; 	completion.flush(); 	completion.close();
	DATA_17_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_17_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_18_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_18_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_18_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_18_Higgs = new MC_Analysis(Chain_DATA_18_Higgs(), AnalysisType, "DATA_18_Higgs", 1, draw, Higgs);
	DATA_18_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_18_Higgs"; 	completion.flush(); 	completion.close();
	DATA_18_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_18_Higgs"; 	completion.flush(); 	completion.close();
	DATA_18_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_18_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_19_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_19_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_19_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_19_Higgs = new MC_Analysis(Chain_DATA_19_Higgs(), AnalysisType, "DATA_19_Higgs", 1, draw, Higgs);
	DATA_19_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_19_Higgs"; 	completion.flush(); 	completion.close();
	DATA_19_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_19_Higgs"; 	completion.flush(); 	completion.close();
	DATA_19_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_19_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_20_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_20_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_20_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_20_Higgs = new MC_Analysis(Chain_DATA_20_Higgs(), AnalysisType, "DATA_20_Higgs", 1, draw, Higgs);
	DATA_20_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_20_Higgs"; 	completion.flush(); 	completion.close();
	DATA_20_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_20_Higgs"; 	completion.flush(); 	completion.close();
	DATA_20_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_20_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_21_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_21_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_21_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_21_Higgs = new MC_Analysis(Chain_DATA_21_Higgs(), AnalysisType, "DATA_21_Higgs", 1, draw, Higgs);
	DATA_21_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_21_Higgs"; 	completion.flush(); 	completion.close();
	DATA_21_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_21_Higgs"; 	completion.flush(); 	completion.close();
	DATA_21_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_21_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_22_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_22_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_22_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_22_Higgs = new MC_Analysis(Chain_DATA_22_Higgs(), AnalysisType, "DATA_22_Higgs", 1, draw, Higgs);
	DATA_22_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_22_Higgs"; 	completion.flush(); 	completion.close();
	DATA_22_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_22_Higgs"; 	completion.flush(); 	completion.close();
	DATA_22_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_22_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_23_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_23_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_23_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_23_Higgs = new MC_Analysis(Chain_DATA_23_Higgs(), AnalysisType, "DATA_23_Higgs", 1, draw, Higgs);
	DATA_23_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_23_Higgs"; 	completion.flush(); 	completion.close();
	DATA_23_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_23_Higgs"; 	completion.flush(); 	completion.close();
	DATA_23_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_23_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_24_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_24_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_24_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_24_Higgs = new MC_Analysis(Chain_DATA_24_Higgs(), AnalysisType, "DATA_24_Higgs", 1, draw, Higgs);
	DATA_24_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_24_Higgs"; 	completion.flush(); 	completion.close();
	DATA_24_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_24_Higgs"; 	completion.flush(); 	completion.close();
	DATA_24_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_24_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_25_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_25_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_25_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_25_Higgs = new MC_Analysis(Chain_DATA_25_Higgs(), AnalysisType, "DATA_25_Higgs", 1, draw, Higgs);
	DATA_25_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_25_Higgs"; 	completion.flush(); 	completion.close();
	DATA_25_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_25_Higgs"; 	completion.flush(); 	completion.close();
	DATA_25_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_25_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_26_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_26_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_26_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_26_Higgs = new MC_Analysis(Chain_DATA_26_Higgs(), AnalysisType, "DATA_26_Higgs", 1, draw, Higgs);
	DATA_26_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_26_Higgs"; 	completion.flush(); 	completion.close();
	DATA_26_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_26_Higgs"; 	completion.flush(); 	completion.close();
	DATA_26_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_26_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_27_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_27_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_27_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_27_Higgs = new MC_Analysis(Chain_DATA_27_Higgs(), AnalysisType, "DATA_27_Higgs", 1, draw, Higgs);
	DATA_27_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_27_Higgs"; 	completion.flush(); 	completion.close();
	DATA_27_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_27_Higgs"; 	completion.flush(); 	completion.close();
	DATA_27_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_27_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_28_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_28_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_28_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_28_Higgs = new MC_Analysis(Chain_DATA_28_Higgs(), AnalysisType, "DATA_28_Higgs", 1, draw, Higgs);
	DATA_28_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_28_Higgs"; 	completion.flush(); 	completion.close();
	DATA_28_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_28_Higgs"; 	completion.flush(); 	completion.close();
	DATA_28_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_28_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_29_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_29_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_29_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_29_Higgs = new MC_Analysis(Chain_DATA_29_Higgs(), AnalysisType, "DATA_29_Higgs", 1, draw, Higgs);
	DATA_29_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_29_Higgs"; 	completion.flush(); 	completion.close();
	DATA_29_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_29_Higgs"; 	completion.flush(); 	completion.close();
	DATA_29_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_29_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_30_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_30_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_30_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_30_Higgs = new MC_Analysis(Chain_DATA_30_Higgs(), AnalysisType, "DATA_30_Higgs", 1, draw, Higgs);
	DATA_30_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_30_Higgs"; 	completion.flush(); 	completion.close();
	DATA_30_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_30_Higgs"; 	completion.flush(); 	completion.close();
	DATA_30_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_30_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_31_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_31_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_31_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_31_Higgs = new MC_Analysis(Chain_DATA_31_Higgs(), AnalysisType, "DATA_31_Higgs", 1, draw, Higgs);
	DATA_31_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_31_Higgs"; 	completion.flush(); 	completion.close();
	DATA_31_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_31_Higgs"; 	completion.flush(); 	completion.close();
	DATA_31_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_31_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_32_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_32_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_32_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_32_Higgs = new MC_Analysis(Chain_DATA_32_Higgs(), AnalysisType, "DATA_32_Higgs", 1, draw, Higgs);
	DATA_32_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_32_Higgs"; 	completion.flush(); 	completion.close();
	DATA_32_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_32_Higgs"; 	completion.flush(); 	completion.close();
	DATA_32_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_32_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_33_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_33_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_33_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_33_Higgs = new MC_Analysis(Chain_DATA_33_Higgs(), AnalysisType, "DATA_33_Higgs", 1, draw, Higgs);
	DATA_33_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_33_Higgs"; 	completion.flush(); 	completion.close();
	DATA_33_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_33_Higgs"; 	completion.flush(); 	completion.close();
	DATA_33_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_33_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_34_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_34_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_34_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_34_Higgs = new MC_Analysis(Chain_DATA_34_Higgs(), AnalysisType, "DATA_34_Higgs", 1, draw, Higgs);
	DATA_34_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_34_Higgs"; 	completion.flush(); 	completion.close();
	DATA_34_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_34_Higgs"; 	completion.flush(); 	completion.close();
	DATA_34_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_34_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_35_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_35_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_35_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_35_Higgs = new MC_Analysis(Chain_DATA_35_Higgs(), AnalysisType, "DATA_35_Higgs", 1, draw, Higgs);
	DATA_35_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_35_Higgs"; 	completion.flush(); 	completion.close();
	DATA_35_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_35_Higgs"; 	completion.flush(); 	completion.close();
	DATA_35_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_35_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_36_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_36_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_36_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_36_Higgs = new MC_Analysis(Chain_DATA_36_Higgs(), AnalysisType, "DATA_36_Higgs", 1, draw, Higgs);
	DATA_36_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_36_Higgs"; 	completion.flush(); 	completion.close();
	DATA_36_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_36_Higgs"; 	completion.flush(); 	completion.close();
	DATA_36_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_36_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_37_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_37_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_37_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_37_Higgs = new MC_Analysis(Chain_DATA_37_Higgs(), AnalysisType, "DATA_37_Higgs", 1, draw, Higgs);
	DATA_37_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_37_Higgs"; 	completion.flush(); 	completion.close();
	DATA_37_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_37_Higgs"; 	completion.flush(); 	completion.close();
	DATA_37_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_37_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_38_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_38_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_38_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_38_Higgs = new MC_Analysis(Chain_DATA_38_Higgs(), AnalysisType, "DATA_38_Higgs", 1, draw, Higgs);
	DATA_38_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_38_Higgs"; 	completion.flush(); 	completion.close();
	DATA_38_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_38_Higgs"; 	completion.flush(); 	completion.close();
	DATA_38_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_38_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_39_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_39_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_39_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_39_Higgs = new MC_Analysis(Chain_DATA_39_Higgs(), AnalysisType, "DATA_39_Higgs", 1, draw, Higgs);
	DATA_39_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_39_Higgs"; 	completion.flush(); 	completion.close();
	DATA_39_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_39_Higgs"; 	completion.flush(); 	completion.close();
	DATA_39_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_39_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_40_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_40_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_40_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_40_Higgs = new MC_Analysis(Chain_DATA_40_Higgs(), AnalysisType, "DATA_40_Higgs", 1, draw, Higgs);
	DATA_40_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_40_Higgs"; 	completion.flush(); 	completion.close();
	DATA_40_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_40_Higgs"; 	completion.flush(); 	completion.close();
	DATA_40_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_40_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_41_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_41_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_41_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_41_Higgs = new MC_Analysis(Chain_DATA_41_Higgs(), AnalysisType, "DATA_41_Higgs", 1, draw, Higgs);
	DATA_41_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_41_Higgs"; 	completion.flush(); 	completion.close();
	DATA_41_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_41_Higgs"; 	completion.flush(); 	completion.close();
	DATA_41_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_41_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_42_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_42_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_42_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_42_Higgs = new MC_Analysis(Chain_DATA_42_Higgs(), AnalysisType, "DATA_42_Higgs", 1, draw, Higgs);
	DATA_42_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_42_Higgs"; 	completion.flush(); 	completion.close();
	DATA_42_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_42_Higgs"; 	completion.flush(); 	completion.close();
	DATA_42_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_42_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_43_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_43_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_43_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_43_Higgs = new MC_Analysis(Chain_DATA_43_Higgs(), AnalysisType, "DATA_43_Higgs", 1, draw, Higgs);
	DATA_43_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_43_Higgs"; 	completion.flush(); 	completion.close();
	DATA_43_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_43_Higgs"; 	completion.flush(); 	completion.close();
	DATA_43_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_43_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_44_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_44_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_44_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_44_Higgs = new MC_Analysis(Chain_DATA_44_Higgs(), AnalysisType, "DATA_44_Higgs", 1, draw, Higgs);
	DATA_44_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_44_Higgs"; 	completion.flush(); 	completion.close();
	DATA_44_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_44_Higgs"; 	completion.flush(); 	completion.close();
	DATA_44_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_44_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_45_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_45_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_45_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_45_Higgs = new MC_Analysis(Chain_DATA_45_Higgs(), AnalysisType, "DATA_45_Higgs", 1, draw, Higgs);
	DATA_45_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_45_Higgs"; 	completion.flush(); 	completion.close();
	DATA_45_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_45_Higgs"; 	completion.flush(); 	completion.close();
	DATA_45_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_45_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_46_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_46_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_46_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_46_Higgs = new MC_Analysis(Chain_DATA_46_Higgs(), AnalysisType, "DATA_46_Higgs", 1, draw, Higgs);
	DATA_46_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_46_Higgs"; 	completion.flush(); 	completion.close();
	DATA_46_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_46_Higgs"; 	completion.flush(); 	completion.close();
	DATA_46_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_46_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_47_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_47_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_47_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_47_Higgs = new MC_Analysis(Chain_DATA_47_Higgs(), AnalysisType, "DATA_47_Higgs", 1, draw, Higgs);
	DATA_47_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_47_Higgs"; 	completion.flush(); 	completion.close();
	DATA_47_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_47_Higgs"; 	completion.flush(); 	completion.close();
	DATA_47_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_47_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_48_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_48_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_48_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_48_Higgs = new MC_Analysis(Chain_DATA_48_Higgs(), AnalysisType, "DATA_48_Higgs", 1, draw, Higgs);
	DATA_48_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_48_Higgs"; 	completion.flush(); 	completion.close();
	DATA_48_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_48_Higgs"; 	completion.flush(); 	completion.close();
	DATA_48_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_48_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_49_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_49_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_49_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_49_Higgs = new MC_Analysis(Chain_DATA_49_Higgs(), AnalysisType, "DATA_49_Higgs", 1, draw, Higgs);
	DATA_49_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_49_Higgs"; 	completion.flush(); 	completion.close();
	DATA_49_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_49_Higgs"; 	completion.flush(); 	completion.close();
	DATA_49_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_49_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_50_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_50_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_50_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_50_Higgs = new MC_Analysis(Chain_DATA_50_Higgs(), AnalysisType, "DATA_50_Higgs", 1, draw, Higgs);
	DATA_50_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_50_Higgs"; 	completion.flush(); 	completion.close();
	DATA_50_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_50_Higgs"; 	completion.flush(); 	completion.close();
	DATA_50_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_50_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_51_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_51_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_51_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_51_Higgs = new MC_Analysis(Chain_DATA_51_Higgs(), AnalysisType, "DATA_51_Higgs", 1, draw, Higgs);
	DATA_51_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_51_Higgs"; 	completion.flush(); 	completion.close();
	DATA_51_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_51_Higgs"; 	completion.flush(); 	completion.close();
	DATA_51_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_51_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_52_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_52_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_52_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_52_Higgs = new MC_Analysis(Chain_DATA_52_Higgs(), AnalysisType, "DATA_52_Higgs", 1, draw, Higgs);
	DATA_52_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_52_Higgs"; 	completion.flush(); 	completion.close();
	DATA_52_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_52_Higgs"; 	completion.flush(); 	completion.close();
	DATA_52_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_52_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_53_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_53_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_53_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_53_Higgs = new MC_Analysis(Chain_DATA_53_Higgs(), AnalysisType, "DATA_53_Higgs", 1, draw, Higgs);
	DATA_53_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_53_Higgs"; 	completion.flush(); 	completion.close();
	DATA_53_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_53_Higgs"; 	completion.flush(); 	completion.close();
	DATA_53_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_53_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_54_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_54_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_54_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_54_Higgs = new MC_Analysis(Chain_DATA_54_Higgs(), AnalysisType, "DATA_54_Higgs", 1, draw, Higgs);
	DATA_54_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_54_Higgs"; 	completion.flush(); 	completion.close();
	DATA_54_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_54_Higgs"; 	completion.flush(); 	completion.close();
	DATA_54_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_54_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_55_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_55_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_55_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_55_Higgs = new MC_Analysis(Chain_DATA_55_Higgs(), AnalysisType, "DATA_55_Higgs", 1, draw, Higgs);
	DATA_55_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_55_Higgs"; 	completion.flush(); 	completion.close();
	DATA_55_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_55_Higgs"; 	completion.flush(); 	completion.close();
	DATA_55_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_55_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_56_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_56_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_56_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_56_Higgs = new MC_Analysis(Chain_DATA_56_Higgs(), AnalysisType, "DATA_56_Higgs", 1, draw, Higgs);
	DATA_56_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_56_Higgs"; 	completion.flush(); 	completion.close();
	DATA_56_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_56_Higgs"; 	completion.flush(); 	completion.close();
	DATA_56_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_56_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_57_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_57_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_57_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_57_Higgs = new MC_Analysis(Chain_DATA_57_Higgs(), AnalysisType, "DATA_57_Higgs", 1, draw, Higgs);
	DATA_57_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_57_Higgs"; 	completion.flush(); 	completion.close();
	DATA_57_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_57_Higgs"; 	completion.flush(); 	completion.close();
	DATA_57_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_57_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_58_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_58_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_58_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_58_Higgs = new MC_Analysis(Chain_DATA_58_Higgs(), AnalysisType, "DATA_58_Higgs", 1, draw, Higgs);
	DATA_58_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_58_Higgs"; 	completion.flush(); 	completion.close();
	DATA_58_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_58_Higgs"; 	completion.flush(); 	completion.close();
	DATA_58_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_58_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_59_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_59_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_59_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_59_Higgs = new MC_Analysis(Chain_DATA_59_Higgs(), AnalysisType, "DATA_59_Higgs", 1, draw, Higgs);
	DATA_59_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_59_Higgs"; 	completion.flush(); 	completion.close();
	DATA_59_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_59_Higgs"; 	completion.flush(); 	completion.close();
	DATA_59_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_59_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_60_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_60_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_60_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_60_Higgs = new MC_Analysis(Chain_DATA_60_Higgs(), AnalysisType, "DATA_60_Higgs", 1, draw, Higgs);
	DATA_60_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_60_Higgs"; 	completion.flush(); 	completion.close();
	DATA_60_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_60_Higgs"; 	completion.flush(); 	completion.close();
	DATA_60_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_60_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_61_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_61_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_61_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_61_Higgs = new MC_Analysis(Chain_DATA_61_Higgs(), AnalysisType, "DATA_61_Higgs", 1, draw, Higgs);
	DATA_61_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_61_Higgs"; 	completion.flush(); 	completion.close();
	DATA_61_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_61_Higgs"; 	completion.flush(); 	completion.close();
	DATA_61_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_61_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_62_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_62_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_62_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_62_Higgs = new MC_Analysis(Chain_DATA_62_Higgs(), AnalysisType, "DATA_62_Higgs", 1, draw, Higgs);
	DATA_62_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_62_Higgs"; 	completion.flush(); 	completion.close();
	DATA_62_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_62_Higgs"; 	completion.flush(); 	completion.close();
	DATA_62_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_62_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_63_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_63_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_63_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_63_Higgs = new MC_Analysis(Chain_DATA_63_Higgs(), AnalysisType, "DATA_63_Higgs", 1, draw, Higgs);
	DATA_63_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_63_Higgs"; 	completion.flush(); 	completion.close();
	DATA_63_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_63_Higgs"; 	completion.flush(); 	completion.close();
	DATA_63_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_63_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_64_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_64_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_64_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_64_Higgs = new MC_Analysis(Chain_DATA_64_Higgs(), AnalysisType, "DATA_64_Higgs", 1, draw, Higgs);
	DATA_64_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_64_Higgs"; 	completion.flush(); 	completion.close();
	DATA_64_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_64_Higgs"; 	completion.flush(); 	completion.close();
	DATA_64_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_64_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_65_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_65_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_65_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_65_Higgs = new MC_Analysis(Chain_DATA_65_Higgs(), AnalysisType, "DATA_65_Higgs", 1, draw, Higgs);
	DATA_65_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_65_Higgs"; 	completion.flush(); 	completion.close();
	DATA_65_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_65_Higgs"; 	completion.flush(); 	completion.close();
	DATA_65_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_65_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_66_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_66_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_66_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_66_Higgs = new MC_Analysis(Chain_DATA_66_Higgs(), AnalysisType, "DATA_66_Higgs", 1, draw, Higgs);
	DATA_66_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_66_Higgs"; 	completion.flush(); 	completion.close();
	DATA_66_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_66_Higgs"; 	completion.flush(); 	completion.close();
	DATA_66_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_66_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_67_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_67_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_67_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_67_Higgs = new MC_Analysis(Chain_DATA_67_Higgs(), AnalysisType, "DATA_67_Higgs", 1, draw, Higgs);
	DATA_67_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_67_Higgs"; 	completion.flush(); 	completion.close();
	DATA_67_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_67_Higgs"; 	completion.flush(); 	completion.close();
	DATA_67_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_67_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_68_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_68_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_68_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_68_Higgs = new MC_Analysis(Chain_DATA_68_Higgs(), AnalysisType, "DATA_68_Higgs", 1, draw, Higgs);
	DATA_68_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_68_Higgs"; 	completion.flush(); 	completion.close();
	DATA_68_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_68_Higgs"; 	completion.flush(); 	completion.close();
	DATA_68_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_68_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_69_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_69_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_69_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_69_Higgs = new MC_Analysis(Chain_DATA_69_Higgs(), AnalysisType, "DATA_69_Higgs", 1, draw, Higgs);
	DATA_69_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_69_Higgs"; 	completion.flush(); 	completion.close();
	DATA_69_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_69_Higgs"; 	completion.flush(); 	completion.close();
	DATA_69_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_69_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_70_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_70_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_70_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_70_Higgs = new MC_Analysis(Chain_DATA_70_Higgs(), AnalysisType, "DATA_70_Higgs", 1, draw, Higgs);
	DATA_70_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_70_Higgs"; 	completion.flush(); 	completion.close();
	DATA_70_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_70_Higgs"; 	completion.flush(); 	completion.close();
	DATA_70_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_70_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_71_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_71_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_71_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_71_Higgs = new MC_Analysis(Chain_DATA_71_Higgs(), AnalysisType, "DATA_71_Higgs", 1, draw, Higgs);
	DATA_71_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_71_Higgs"; 	completion.flush(); 	completion.close();
	DATA_71_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_71_Higgs"; 	completion.flush(); 	completion.close();
	DATA_71_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_71_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_72_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_72_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_72_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_72_Higgs = new MC_Analysis(Chain_DATA_72_Higgs(), AnalysisType, "DATA_72_Higgs", 1, draw, Higgs);
	DATA_72_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_72_Higgs"; 	completion.flush(); 	completion.close();
	DATA_72_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_72_Higgs"; 	completion.flush(); 	completion.close();
	DATA_72_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_72_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_73_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_73_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_73_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_73_Higgs = new MC_Analysis(Chain_DATA_73_Higgs(), AnalysisType, "DATA_73_Higgs", 1, draw, Higgs);
	DATA_73_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_73_Higgs"; 	completion.flush(); 	completion.close();
	DATA_73_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_73_Higgs"; 	completion.flush(); 	completion.close();
	DATA_73_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_73_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_74_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_74_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_74_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_74_Higgs = new MC_Analysis(Chain_DATA_74_Higgs(), AnalysisType, "DATA_74_Higgs", 1, draw, Higgs);
	DATA_74_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_74_Higgs"; 	completion.flush(); 	completion.close();
	DATA_74_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_74_Higgs"; 	completion.flush(); 	completion.close();
	DATA_74_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_74_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_75_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_75_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_75_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_75_Higgs = new MC_Analysis(Chain_DATA_75_Higgs(), AnalysisType, "DATA_75_Higgs", 1, draw, Higgs);
	DATA_75_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_75_Higgs"; 	completion.flush(); 	completion.close();
	DATA_75_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_75_Higgs"; 	completion.flush(); 	completion.close();
	DATA_75_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_75_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_76_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_76_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_76_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_76_Higgs = new MC_Analysis(Chain_DATA_76_Higgs(), AnalysisType, "DATA_76_Higgs", 1, draw, Higgs);
	DATA_76_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_76_Higgs"; 	completion.flush(); 	completion.close();
	DATA_76_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_76_Higgs"; 	completion.flush(); 	completion.close();
	DATA_76_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_76_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_77_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_77_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_77_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_77_Higgs = new MC_Analysis(Chain_DATA_77_Higgs(), AnalysisType, "DATA_77_Higgs", 1, draw, Higgs);
	DATA_77_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_77_Higgs"; 	completion.flush(); 	completion.close();
	DATA_77_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_77_Higgs"; 	completion.flush(); 	completion.close();
	DATA_77_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_77_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_78_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_78_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_78_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_78_Higgs = new MC_Analysis(Chain_DATA_78_Higgs(), AnalysisType, "DATA_78_Higgs", 1, draw, Higgs);
	DATA_78_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_78_Higgs"; 	completion.flush(); 	completion.close();
	DATA_78_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_78_Higgs"; 	completion.flush(); 	completion.close();
	DATA_78_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_78_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_79_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_79_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_79_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_79_Higgs = new MC_Analysis(Chain_DATA_79_Higgs(), AnalysisType, "DATA_79_Higgs", 1, draw, Higgs);
	DATA_79_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_79_Higgs"; 	completion.flush(); 	completion.close();
	DATA_79_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_79_Higgs"; 	completion.flush(); 	completion.close();
	DATA_79_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_79_Higgs"; 	completion.flush(); 	completion.close();
}

void Start_DATA_80_Higgs_Analysis(string AnalysisType, bool draw, bool Higgs) {
	gErrorIgnoreLevel = kError;
	string completion_file = "../../Completion_Files/" + AnalysisType + "_Higgs/DATA_80_Higgs_completion.txt";
	fstream completion(completion_file, completion.out | completion.trunc); 	completion << "Started DATA_80_Higgs"; 	completion.flush(); 	completion.close();
	MC_Analysis *DATA_80_Higgs = new MC_Analysis(Chain_DATA_80_Higgs(), AnalysisType, "DATA_80_Higgs", 1, draw, Higgs);
	DATA_80_Higgs->BookHistos();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysing DATA_80_Higgs"; 	completion.flush(); 	completion.close();
	DATA_80_Higgs->Loop();
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Analysed DATA_80_Higgs"; 	completion.flush(); 	completion.close();
	DATA_80_Higgs->DrawHistos("_Higgs");
	completion.open(completion_file, completion.out | completion.trunc); 	completion << "Finished DATA_80_Higgs"; 	completion.flush(); 	completion.close();
}

#endif