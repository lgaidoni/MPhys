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

void Start_DATA_0_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_0 = new MC_Analysis(Chain_DATA_0(), AnalysisType, "DATA_0", 1);
	DATA_0->BookHistos();
	DATA_0->Loop();
	DATA_0->DrawHistos();
}

void Start_DATA_1_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_1 = new MC_Analysis(Chain_DATA_1(), AnalysisType, "DATA_1", 1);
	DATA_1->BookHistos();
	DATA_1->Loop();
	DATA_1->DrawHistos();
}

void Start_DATA_2_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_2 = new MC_Analysis(Chain_DATA_2(), AnalysisType, "DATA_2", 1);
	DATA_2->BookHistos();
	DATA_2->Loop();
	DATA_2->DrawHistos();
}

void Start_DATA_3_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_3 = new MC_Analysis(Chain_DATA_3(), AnalysisType, "DATA_3", 1);
	DATA_3->BookHistos();
	DATA_3->Loop();
	DATA_3->DrawHistos();
}

void Start_DATA_4_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_4 = new MC_Analysis(Chain_DATA_4(), AnalysisType, "DATA_4", 1);
	DATA_4->BookHistos();
	DATA_4->Loop();
	DATA_4->DrawHistos();
}

void Start_DATA_5_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_5 = new MC_Analysis(Chain_DATA_5(), AnalysisType, "DATA_5", 1);
	DATA_5->BookHistos();
	DATA_5->Loop();
	DATA_5->DrawHistos();
}

void Start_DATA_6_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_6 = new MC_Analysis(Chain_DATA_6(), AnalysisType, "DATA_6", 1);
	DATA_6->BookHistos();
	DATA_6->Loop();
	DATA_6->DrawHistos();
}

void Start_DATA_7_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_7 = new MC_Analysis(Chain_DATA_7(), AnalysisType, "DATA_7", 1);
	DATA_7->BookHistos();
	DATA_7->Loop();
	DATA_7->DrawHistos();
}

void Start_DATA_8_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_8 = new MC_Analysis(Chain_DATA_8(), AnalysisType, "DATA_8", 1);
	DATA_8->BookHistos();
	DATA_8->Loop();
	DATA_8->DrawHistos();
}

void Start_DATA_9_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_9 = new MC_Analysis(Chain_DATA_9(), AnalysisType, "DATA_9", 1);
	DATA_9->BookHistos();
	DATA_9->Loop();
	DATA_9->DrawHistos();
}

void Start_DATA_10_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_10 = new MC_Analysis(Chain_DATA_10(), AnalysisType, "DATA_10", 1);
	DATA_10->BookHistos();
	DATA_10->Loop();
	DATA_10->DrawHistos();
}

void Start_DATA_11_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_11 = new MC_Analysis(Chain_DATA_11(), AnalysisType, "DATA_11", 1);
	DATA_11->BookHistos();
	DATA_11->Loop();
	DATA_11->DrawHistos();
}

void Start_DATA_12_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_12 = new MC_Analysis(Chain_DATA_12(), AnalysisType, "DATA_12", 1);
	DATA_12->BookHistos();
	DATA_12->Loop();
	DATA_12->DrawHistos();
}

void Start_DATA_13_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_13 = new MC_Analysis(Chain_DATA_13(), AnalysisType, "DATA_13", 1);
	DATA_13->BookHistos();
	DATA_13->Loop();
	DATA_13->DrawHistos();
}

void Start_DATA_14_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_14 = new MC_Analysis(Chain_DATA_14(), AnalysisType, "DATA_14", 1);
	DATA_14->BookHistos();
	DATA_14->Loop();
	DATA_14->DrawHistos();
}

void Start_DATA_15_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_15 = new MC_Analysis(Chain_DATA_15(), AnalysisType, "DATA_15", 1);
	DATA_15->BookHistos();
	DATA_15->Loop();
	DATA_15->DrawHistos();
}

void Start_DATA_16_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_16 = new MC_Analysis(Chain_DATA_16(), AnalysisType, "DATA_16", 1);
	DATA_16->BookHistos();
	DATA_16->Loop();
	DATA_16->DrawHistos();
}

void Start_DATA_17_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_17 = new MC_Analysis(Chain_DATA_17(), AnalysisType, "DATA_17", 1);
	DATA_17->BookHistos();
	DATA_17->Loop();
	DATA_17->DrawHistos();
}

void Start_DATA_18_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_18 = new MC_Analysis(Chain_DATA_18(), AnalysisType, "DATA_18", 1);
	DATA_18->BookHistos();
	DATA_18->Loop();
	DATA_18->DrawHistos();
}

void Start_DATA_19_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_19 = new MC_Analysis(Chain_DATA_19(), AnalysisType, "DATA_19", 1);
	DATA_19->BookHistos();
	DATA_19->Loop();
	DATA_19->DrawHistos();
}

void Start_DATA_20_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_20 = new MC_Analysis(Chain_DATA_20(), AnalysisType, "DATA_20", 1);
	DATA_20->BookHistos();
	DATA_20->Loop();
	DATA_20->DrawHistos();
}

void Start_DATA_21_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_21 = new MC_Analysis(Chain_DATA_21(), AnalysisType, "DATA_21", 1);
	DATA_21->BookHistos();
	DATA_21->Loop();
	DATA_21->DrawHistos();
}

void Start_DATA_22_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_22 = new MC_Analysis(Chain_DATA_22(), AnalysisType, "DATA_22", 1);
	DATA_22->BookHistos();
	DATA_22->Loop();
	DATA_22->DrawHistos();
}

void Start_DATA_23_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_23 = new MC_Analysis(Chain_DATA_23(), AnalysisType, "DATA_23", 1);
	DATA_23->BookHistos();
	DATA_23->Loop();
	DATA_23->DrawHistos();
}

void Start_DATA_24_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_24 = new MC_Analysis(Chain_DATA_24(), AnalysisType, "DATA_24", 1);
	DATA_24->BookHistos();
	DATA_24->Loop();
	DATA_24->DrawHistos();
}

void Start_DATA_25_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_25 = new MC_Analysis(Chain_DATA_25(), AnalysisType, "DATA_25", 1);
	DATA_25->BookHistos();
	DATA_25->Loop();
	DATA_25->DrawHistos();
}

void Start_DATA_26_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_26 = new MC_Analysis(Chain_DATA_26(), AnalysisType, "DATA_26", 1);
	DATA_26->BookHistos();
	DATA_26->Loop();
	DATA_26->DrawHistos();
}

void Start_DATA_27_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_27 = new MC_Analysis(Chain_DATA_27(), AnalysisType, "DATA_27", 1);
	DATA_27->BookHistos();
	DATA_27->Loop();
	DATA_27->DrawHistos();
}

void Start_DATA_28_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_28 = new MC_Analysis(Chain_DATA_28(), AnalysisType, "DATA_28", 1);
	DATA_28->BookHistos();
	DATA_28->Loop();
	DATA_28->DrawHistos();
}

void Start_DATA_29_Analysis(string AnalysisType) {
	gErrorIgnoreLevel = kError;
	MC_Analysis *DATA_29 = new MC_Analysis(Chain_DATA_29(), AnalysisType, "DATA_29", 1);
	DATA_29->BookHistos();
	DATA_29->Loop();
	DATA_29->DrawHistos();
}

#endif