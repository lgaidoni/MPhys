#ifndef Analysis_Start_Functions_h
#define Analysis_Start_Functions_h

void Start_Sh221_PDF30_Ztt_MV1000_E_CMS_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364141");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Ztt_MV1000_E_CMS", lum_weight);
	Sh221_PDF30_Ztt_MV1000_E_CMS->BookHistos();
	Sh221_PDF30_Ztt_MV1000_E_CMS->Loop();
	Sh221_PDF30_Ztt_MV1000_E_CMS->DrawHistos();
}

void Start_Sh221_PDF30_ZqqZll_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("363356");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_ZqqZll(), 36200);
	MC_Analysis *Sh221_PDF30_ZqqZll = new MC_Analysis(Chain_Sh221_PDF30_ZqqZll(), AnalysisType, "Sh221_PDF30_ZqqZll", lum_weight);
	Sh221_PDF30_ZqqZll->BookHistos();
	Sh221_PDF30_ZqqZll->Loop();
	Sh221_PDF30_ZqqZll->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364191");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CFilBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet->Loop();
	Sh221_PDF30_Wtaunu_MV140_280_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364129");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CFilBVet", lum_weight);
	Sh221_PDF30_Ztt_MV0_70_CFilBVet->BookHistos();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet->Loop();
	Sh221_PDF30_Ztt_MV0_70_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV140_280_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364176");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_CVetBVet", lum_weight);
	Sh221_PDF30_Wenu_MV140_280_CVetBVet->BookHistos();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet->Loop();
	Sh221_PDF30_Wenu_MV140_280_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV1000_E_CMS_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364169");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Wmunu_MV1000_E_CMS", lum_weight);
	Sh221_PDF30_Wmunu_MV1000_E_CMS->BookHistos();
	Sh221_PDF30_Wmunu_MV1000_E_CMS->Loop();
	Sh221_PDF30_Wmunu_MV1000_E_CMS->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364103");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CVetBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet->Loop();
	Sh221_PDF30_Zmumu_MV70_140_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364135");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CFilBVet", lum_weight);
	Sh221_PDF30_Ztt_MV140_280_CFilBVet->BookHistos();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet->Loop();
	Sh221_PDF30_Ztt_MV140_280_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV280_500_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364124");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CFilBVet", lum_weight);
	Sh221_PDF30_Zee_MV280_500_CFilBVet->BookHistos();
	Sh221_PDF30_Zee_MV280_500_CFilBVet->Loop();
	Sh221_PDF30_Zee_MV280_500_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364164");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_BFil", lum_weight);
	Sh221_PDF30_Wmunu_MV140_280_BFil->BookHistos();
	Sh221_PDF30_Wmunu_MV140_280_BFil->Loop();
	Sh221_PDF30_Wmunu_MV140_280_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364137");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CVetBVet", lum_weight);
	Sh221_PDF30_Ztt_MV280_500_CVetBVet->BookHistos();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet->Loop();
	Sh221_PDF30_Ztt_MV280_500_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364159");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CVetBVet", lum_weight);
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet->BookHistos();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet->Loop();
	Sh221_PDF30_Wmunu_MV70_140_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364131");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CVetBVet", lum_weight);
	Sh221_PDF30_Ztt_MV70_140_CVetBVet->BookHistos();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet->Loop();
	Sh221_PDF30_Ztt_MV70_140_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364102");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_BFil", lum_weight);
	Sh221_PDF30_Zmumu_MV0_70_BFil->BookHistos();
	Sh221_PDF30_Zmumu_MV0_70_BFil->Loop();
	Sh221_PDF30_Zmumu_MV0_70_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV0_70_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364116");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_BFil", lum_weight);
	Sh221_PDF30_Zee_MV0_70_BFil->BookHistos();
	Sh221_PDF30_Zee_MV0_70_BFil->Loop();
	Sh221_PDF30_Zee_MV0_70_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zmm2jets_Min_N_TChannel_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("308093");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmm2jets_Min_N_TChannel(), 36200);
	MC_Analysis *Sh221_PDF30_Zmm2jets_Min_N_TChannel = new MC_Analysis(Chain_Sh221_PDF30_Zmm2jets_Min_N_TChannel(), AnalysisType, "Sh221_PDF30_Zmm2jets_Min_N_TChannel", lum_weight);
	Sh221_PDF30_Zmm2jets_Min_N_TChannel->BookHistos();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel->Loop();
	Sh221_PDF30_Zmm2jets_Min_N_TChannel->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV140_280_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364122");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_BFil", lum_weight);
	Sh221_PDF30_Zee_MV140_280_BFil->BookHistos();
	Sh221_PDF30_Zee_MV140_280_BFil->Loop();
	Sh221_PDF30_Zee_MV140_280_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364167");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_BFil", lum_weight);
	Sh221_PDF30_Wmunu_MV280_500_BFil->BookHistos();
	Sh221_PDF30_Wmunu_MV280_500_BFil->Loop();
	Sh221_PDF30_Wmunu_MV280_500_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364179");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CVetBVet", lum_weight);
	Sh221_PDF30_Wenu_MV280_500_CVetBVet->BookHistos();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet->Loop();
	Sh221_PDF30_Wenu_MV280_500_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364156");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CVetBVet", lum_weight);
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet->BookHistos();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet->Loop();
	Sh221_PDF30_Wmunu_MV0_70_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364194");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CFilBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet->Loop();
	Sh221_PDF30_Wtaunu_MV280_500_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV280_500_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364123");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_CVetBVet", lum_weight);
	Sh221_PDF30_Zee_MV280_500_CVetBVet->BookHistos();
	Sh221_PDF30_Zee_MV280_500_CVetBVet->Loop();
	Sh221_PDF30_Zee_MV280_500_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV140_280_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364178");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV140_280_BFil", lum_weight);
	Sh221_PDF30_Wenu_MV140_280_BFil->BookHistos();
	Sh221_PDF30_Wenu_MV140_280_BFil->Loop();
	Sh221_PDF30_Wenu_MV140_280_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV500_1000_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364168");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV500_1000(), AnalysisType, "Sh221_PDF30_Wmunu_MV500_1000", lum_weight);
	Sh221_PDF30_Wmunu_MV500_1000->BookHistos();
	Sh221_PDF30_Wmunu_MV500_1000->Loop();
	Sh221_PDF30_Wmunu_MV500_1000->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364108");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_BFil", lum_weight);
	Sh221_PDF30_Zmumu_MV140_280_BFil->BookHistos();
	Sh221_PDF30_Zmumu_MV140_280_BFil->Loop();
	Sh221_PDF30_Zmumu_MV140_280_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364171");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CFilBVet", lum_weight);
	Sh221_PDF30_Wenu_MV0_70_CFilBVet->BookHistos();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet->Loop();
	Sh221_PDF30_Wenu_MV0_70_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364186");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_BFil", lum_weight);
	Sh221_PDF30_Wtaunu_MV0_70_BFil->BookHistos();
	Sh221_PDF30_Wtaunu_MV0_70_BFil->Loop();
	Sh221_PDF30_Wtaunu_MV0_70_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364101");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CFilBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet->Loop();
	Sh221_PDF30_Zmumu_MV0_70_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV0_70_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364130");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_BFil", lum_weight);
	Sh221_PDF30_Ztt_MV0_70_BFil->BookHistos();
	Sh221_PDF30_Ztt_MV0_70_BFil->Loop();
	Sh221_PDF30_Ztt_MV0_70_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364107");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CFilBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet->Loop();
	Sh221_PDF30_Zmumu_MV140_280_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV140_280_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364136");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_BFil", lum_weight);
	Sh221_PDF30_Ztt_MV140_280_BFil->BookHistos();
	Sh221_PDF30_Ztt_MV140_280_BFil->Loop();
	Sh221_PDF30_Ztt_MV140_280_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364106");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV140_280_CVetBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet->Loop();
	Sh221_PDF30_Zmumu_MV140_280_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV1000_E_CMS_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364113");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Zmumu_MV1000_E_CMS", lum_weight);
	Sh221_PDF30_Zmumu_MV1000_E_CMS->BookHistos();
	Sh221_PDF30_Zmumu_MV1000_E_CMS->Loop();
	Sh221_PDF30_Zmumu_MV1000_E_CMS->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV0_70_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364115");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CFilBVet", lum_weight);
	Sh221_PDF30_Zee_MV0_70_CFilBVet->BookHistos();
	Sh221_PDF30_Zee_MV0_70_CFilBVet->Loop();
	Sh221_PDF30_Zee_MV0_70_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV500_1000_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364196");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV500_1000(), AnalysisType, "Sh221_PDF30_Wtaunu_MV500_1000", lum_weight);
	Sh221_PDF30_Wtaunu_MV500_1000->BookHistos();
	Sh221_PDF30_Wtaunu_MV500_1000->Loop();
	Sh221_PDF30_Wtaunu_MV500_1000->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364158");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_BFil", lum_weight);
	Sh221_PDF30_Wmunu_MV0_70_BFil->BookHistos();
	Sh221_PDF30_Wmunu_MV0_70_BFil->Loop();
	Sh221_PDF30_Wmunu_MV0_70_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364162");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV140_280_CVetBVet", lum_weight);
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet->BookHistos();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet->Loop();
	Sh221_PDF30_Wmunu_MV140_280_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV1000_E_CMS_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364127");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Zee_MV1000_E_CMS", lum_weight);
	Sh221_PDF30_Zee_MV1000_E_CMS->BookHistos();
	Sh221_PDF30_Zee_MV1000_E_CMS->Loop();
	Sh221_PDF30_Zee_MV1000_E_CMS->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364165");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV280_500_CVetBVet", lum_weight);
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet->BookHistos();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet->Loop();
	Sh221_PDF30_Wmunu_MV280_500_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364188");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CFilBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet->Loop();
	Sh221_PDF30_Wtaunu_MV70_140_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV70_140_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364117");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CVetBVet", lum_weight);
	Sh221_PDF30_Zee_MV70_140_CVetBVet->BookHistos();
	Sh221_PDF30_Zee_MV70_140_CVetBVet->Loop();
	Sh221_PDF30_Zee_MV70_140_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV280_500_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364139");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_BFil", lum_weight);
	Sh221_PDF30_Ztt_MV280_500_BFil->BookHistos();
	Sh221_PDF30_Ztt_MV280_500_BFil->Loop();
	Sh221_PDF30_Ztt_MV280_500_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364100");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV0_70_CVetBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet->Loop();
	Sh221_PDF30_Zmumu_MV0_70_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364157");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV0_70_CFilBVet", lum_weight);
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet->BookHistos();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet->Loop();
	Sh221_PDF30_Wmunu_MV0_70_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364109");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CVetBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet->Loop();
	Sh221_PDF30_Zmumu_MV280_500_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV70_140_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364175");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_BFil", lum_weight);
	Sh221_PDF30_Wenu_MV70_140_BFil->BookHistos();
	Sh221_PDF30_Wenu_MV70_140_BFil->Loop();
	Sh221_PDF30_Wenu_MV70_140_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV140_280_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364120");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CVetBVet", lum_weight);
	Sh221_PDF30_Zee_MV140_280_CVetBVet->BookHistos();
	Sh221_PDF30_Zee_MV140_280_CVetBVet->Loop();
	Sh221_PDF30_Zee_MV140_280_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364184");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CVetBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet->Loop();
	Sh221_PDF30_Wtaunu_MV0_70_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV70_140_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364118");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_CFilBVet", lum_weight);
	Sh221_PDF30_Zee_MV70_140_CFilBVet->BookHistos();
	Sh221_PDF30_Zee_MV70_140_CFilBVet->Loop();
	Sh221_PDF30_Zee_MV70_140_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364105");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_BFil", lum_weight);
	Sh221_PDF30_Zmumu_MV70_140_BFil->BookHistos();
	Sh221_PDF30_Zmumu_MV70_140_BFil->Loop();
	Sh221_PDF30_Zmumu_MV70_140_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV500_1000_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364140");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV500_1000(), AnalysisType, "Sh221_PDF30_Ztt_MV500_1000", lum_weight);
	Sh221_PDF30_Ztt_MV500_1000->BookHistos();
	Sh221_PDF30_Ztt_MV500_1000->Loop();
	Sh221_PDF30_Ztt_MV500_1000->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV70_140_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364133");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_BFil", lum_weight);
	Sh221_PDF30_Ztt_MV70_140_BFil->BookHistos();
	Sh221_PDF30_Ztt_MV70_140_BFil->Loop();
	Sh221_PDF30_Ztt_MV70_140_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV70_140_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364132");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV70_140_CFilBVet", lum_weight);
	Sh221_PDF30_Ztt_MV70_140_CFilBVet->BookHistos();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet->Loop();
	Sh221_PDF30_Ztt_MV70_140_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364192");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_BFil(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_BFil", lum_weight);
	Sh221_PDF30_Wtaunu_MV140_280_BFil->BookHistos();
	Sh221_PDF30_Wtaunu_MV140_280_BFil->Loop();
	Sh221_PDF30_Wtaunu_MV140_280_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364110");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_CFilBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet->Loop();
	Sh221_PDF30_Zmumu_MV280_500_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV280_500_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364125");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV280_500_BFil", lum_weight);
	Sh221_PDF30_Zee_MV280_500_BFil->BookHistos();
	Sh221_PDF30_Zee_MV280_500_BFil->Loop();
	Sh221_PDF30_Zee_MV280_500_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364173");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CVetBVet", lum_weight);
	Sh221_PDF30_Wenu_MV70_140_CVetBVet->BookHistos();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet->Loop();
	Sh221_PDF30_Wenu_MV70_140_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV280_500_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364138");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV280_500_CFilBVet", lum_weight);
	Sh221_PDF30_Ztt_MV280_500_CFilBVet->BookHistos();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet->Loop();
	Sh221_PDF30_Ztt_MV280_500_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV500_1000_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364126");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV500_1000(), AnalysisType, "Sh221_PDF30_Zee_MV500_1000", lum_weight);
	Sh221_PDF30_Zee_MV500_1000->BookHistos();
	Sh221_PDF30_Zee_MV500_1000->Loop();
	Sh221_PDF30_Zee_MV500_1000->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV140_280_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364121");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV140_280_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV140_280_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV140_280_CFilBVet(), AnalysisType, "Sh221_PDF30_Zee_MV140_280_CFilBVet", lum_weight);
	Sh221_PDF30_Zee_MV140_280_CFilBVet->BookHistos();
	Sh221_PDF30_Zee_MV140_280_CFilBVet->Loop();
	Sh221_PDF30_Zee_MV140_280_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV0_70_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364170");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_CVetBVet", lum_weight);
	Sh221_PDF30_Wenu_MV0_70_CVetBVet->BookHistos();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet->Loop();
	Sh221_PDF30_Wenu_MV0_70_CVetBVet->DrawHistos();
}

void Start_PoPy8_A14_ttb_nonallh_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("410501");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_PoPy8_A14_ttb_nonallh(), 36200);
	MC_Analysis *PoPy8_A14_ttb_nonallh = new MC_Analysis(Chain_PoPy8_A14_ttb_nonallh(), AnalysisType, "PoPy8_A14_ttb_nonallh", lum_weight);
	PoPy8_A14_ttb_nonallh->BookHistos();
	PoPy8_A14_ttb_nonallh->Loop();
	PoPy8_A14_ttb_nonallh->DrawHistos();
}

void Start_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364160");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wmunu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wmunu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Wmunu_MV70_140_CFilBVet", lum_weight);
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet->BookHistos();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet->Loop();
	Sh221_PDF30_Wmunu_MV70_140_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364187");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_CVetBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet->Loop();
	Sh221_PDF30_Wtaunu_MV70_140_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV70_140_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364189");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Wtaunu_MV70_140_BFil", lum_weight);
	Sh221_PDF30_Wtaunu_MV70_140_BFil->BookHistos();
	Sh221_PDF30_Wtaunu_MV70_140_BFil->Loop();
	Sh221_PDF30_Wtaunu_MV70_140_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV70_140_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364174");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV70_140_CFilBVet", lum_weight);
	Sh221_PDF30_Wenu_MV70_140_CFilBVet->BookHistos();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet->Loop();
	Sh221_PDF30_Wenu_MV70_140_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV500_1000_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364182");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV500_1000(), AnalysisType, "Sh221_PDF30_Wenu_MV500_1000", lum_weight);
	Sh221_PDF30_Wenu_MV500_1000->BookHistos();
	Sh221_PDF30_Wenu_MV500_1000->Loop();
	Sh221_PDF30_Wenu_MV500_1000->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV140_280_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364134");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV140_280_CVetBVet", lum_weight);
	Sh221_PDF30_Ztt_MV140_280_CVetBVet->BookHistos();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet->Loop();
	Sh221_PDF30_Ztt_MV140_280_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364190");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV140_280_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV140_280_CVetBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet->Loop();
	Sh221_PDF30_Wtaunu_MV140_280_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee2jets_Min_N_TChannel_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("308092");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee2jets_Min_N_TChannel(), 36200);
	MC_Analysis *Sh221_PDF30_Zee2jets_Min_N_TChannel = new MC_Analysis(Chain_Sh221_PDF30_Zee2jets_Min_N_TChannel(), AnalysisType, "Sh221_PDF30_Zee2jets_Min_N_TChannel", lum_weight);
	Sh221_PDF30_Zee2jets_Min_N_TChannel->BookHistos();
	Sh221_PDF30_Zee2jets_Min_N_TChannel->Loop();
	Sh221_PDF30_Zee2jets_Min_N_TChannel->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364193");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV280_500_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV280_500_CVetBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet->Loop();
	Sh221_PDF30_Wtaunu_MV280_500_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364185");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV0_70_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet(), AnalysisType, "Sh221_PDF30_Wtaunu_MV0_70_CFilBVet", lum_weight);
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet->BookHistos();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet->Loop();
	Sh221_PDF30_Wtaunu_MV0_70_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Ztt2jets_Min_N_TChannel_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("308094");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt2jets_Min_N_TChannel(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt2jets_Min_N_TChannel = new MC_Analysis(Chain_Sh221_PDF30_Ztt2jets_Min_N_TChannel(), AnalysisType, "Sh221_PDF30_Ztt2jets_Min_N_TChannel", lum_weight);
	Sh221_PDF30_Ztt2jets_Min_N_TChannel->BookHistos();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel->Loop();
	Sh221_PDF30_Ztt2jets_Min_N_TChannel->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV1000_E_CMS_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364183");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Wenu_MV1000_E_CMS", lum_weight);
	Sh221_PDF30_Wenu_MV1000_E_CMS->BookHistos();
	Sh221_PDF30_Wenu_MV1000_E_CMS->Loop();
	Sh221_PDF30_Wenu_MV1000_E_CMS->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV280_500_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364111");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Zmumu_MV280_500_BFil", lum_weight);
	Sh221_PDF30_Zmumu_MV280_500_BFil->BookHistos();
	Sh221_PDF30_Zmumu_MV280_500_BFil->Loop();
	Sh221_PDF30_Zmumu_MV280_500_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Ztt_MV0_70_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364128");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Ztt_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Ztt_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Ztt_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Ztt_MV0_70_CVetBVet", lum_weight);
	Sh221_PDF30_Ztt_MV0_70_CVetBVet->BookHistos();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet->Loop();
	Sh221_PDF30_Ztt_MV0_70_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV500_1000_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364112");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV500_1000(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV500_1000 = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV500_1000(), AnalysisType, "Sh221_PDF30_Zmumu_MV500_1000", lum_weight);
	Sh221_PDF30_Zmumu_MV500_1000->BookHistos();
	Sh221_PDF30_Zmumu_MV500_1000->Loop();
	Sh221_PDF30_Zmumu_MV500_1000->DrawHistos();
}

void Start_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364104");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zmumu_MV70_140_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Zmumu_MV70_140_CFilBVet(), AnalysisType, "Sh221_PDF30_Zmumu_MV70_140_CFilBVet", lum_weight);
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet->BookHistos();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet->Loop();
	Sh221_PDF30_Zmumu_MV70_140_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV280_500_CFilBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364180");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_CFilBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_CFilBVet = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_CFilBVet(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_CFilBVet", lum_weight);
	Sh221_PDF30_Wenu_MV280_500_CFilBVet->BookHistos();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet->Loop();
	Sh221_PDF30_Wenu_MV280_500_CFilBVet->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV0_70_CVetBVet_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364114");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV0_70_CVetBVet(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV0_70_CVetBVet = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV0_70_CVetBVet(), AnalysisType, "Sh221_PDF30_Zee_MV0_70_CVetBVet", lum_weight);
	Sh221_PDF30_Zee_MV0_70_CVetBVet->BookHistos();
	Sh221_PDF30_Zee_MV0_70_CVetBVet->Loop();
	Sh221_PDF30_Zee_MV0_70_CVetBVet->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV0_70_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364172");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV0_70_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV0_70_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV0_70_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV0_70_BFil", lum_weight);
	Sh221_PDF30_Wenu_MV0_70_BFil->BookHistos();
	Sh221_PDF30_Wenu_MV0_70_BFil->Loop();
	Sh221_PDF30_Wenu_MV0_70_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wenu_MV280_500_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364181");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wenu_MV280_500_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Wenu_MV280_500_BFil = new MC_Analysis(Chain_Sh221_PDF30_Wenu_MV280_500_BFil(), AnalysisType, "Sh221_PDF30_Wenu_MV280_500_BFil", lum_weight);
	Sh221_PDF30_Wenu_MV280_500_BFil->BookHistos();
	Sh221_PDF30_Wenu_MV280_500_BFil->Loop();
	Sh221_PDF30_Wenu_MV280_500_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Zee_MV70_140_BFil_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364119");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Zee_MV70_140_BFil(), 36200);
	MC_Analysis *Sh221_PDF30_Zee_MV70_140_BFil = new MC_Analysis(Chain_Sh221_PDF30_Zee_MV70_140_BFil(), AnalysisType, "Sh221_PDF30_Zee_MV70_140_BFil", lum_weight);
	Sh221_PDF30_Zee_MV70_140_BFil->BookHistos();
	Sh221_PDF30_Zee_MV70_140_BFil->Loop();
	Sh221_PDF30_Zee_MV70_140_BFil->DrawHistos();
}

void Start_Sh221_PDF30_Wtaunu_MV1000_E_CMS_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	vector<double> luminosity_info = csv_reader("364197");
	double lum_weight = luminosity_weighting_function(luminosity_info, N_Sh221_PDF30_Wtaunu_MV1000_E_CMS(), 36200);
	MC_Analysis *Sh221_PDF30_Wtaunu_MV1000_E_CMS = new MC_Analysis(Chain_Sh221_PDF30_Wtaunu_MV1000_E_CMS(), AnalysisType, "Sh221_PDF30_Wtaunu_MV1000_E_CMS", lum_weight);
	Sh221_PDF30_Wtaunu_MV1000_E_CMS->BookHistos();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS->Loop();
	Sh221_PDF30_Wtaunu_MV1000_E_CMS->DrawHistos();
}

void Start_DATA_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA = new MC_Analysis(Chain_DATA(), AnalysisType, "DATA", 1);
	DATA->BookHistos();
	DATA->Loop();
	DATA->DrawHistos();
}

#endif