#ifndef N_Functions_Higgs_h
#define N_Functions_Higgs_h

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420580._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420580._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420768._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420768._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420777._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420777._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420897._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420897._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420800._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420800._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420596._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420596._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r9364_p3480.sv2_Le/user.sdysch.17414689._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r9364_p3480.sv2_Le/user.sdysch.17414689._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420592._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420592._000004.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420592._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_atop_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_incl_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410014.PoPy_P2012_Wt_incl_atop.D1.e3753_s3126_r9364_p3480.sv1_Le/user.sdysch.17420517._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410014.PoPy_P2012_Wt_incl_atop.D1.e3753_s3126_r9364_p3480.sv1_Le/user.sdysch.17420517._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420754._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420754._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.308094.Sh221_PDF30_Ztt2jets_Min_N_TChannel.D1.e5767_s3126_r10201_p3563.sv1_Le/user.sdysch.17403122._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420577._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420577._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420577._000004.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZll_r9364_Higgs
Long64_t N_Sh221_PDF30_ZqqZll_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420525._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420525._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420525._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh222_PDF30_llll_r9364_Higgs
Long64_t N_Sh222_PDF30_llll_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r9364_p3480.sv1_Le/user.sdysch.17420536._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r9364_p3480.sv1_Le/user.sdysch.17420536._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r9364_p3480.sv1_Le/user.sdysch.17420536._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420911._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420911._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420808._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420808._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420567._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420567._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403315._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403315._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403263._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403263._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421183._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421183._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403176._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403176._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420789._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420789._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420691._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420691._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420691._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh222_PDF30_llvv_r10201_Higgs
Long64_t N_Sh222_PDF30_llvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420884._000006.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420884._000005.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420884._000009.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420884._000002.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420884._000008.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420884._000007.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420884._000001.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364177.Sh221_PDF30_Wenu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420744._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364177.Sh221_PDF30_Wenu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420744._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420966._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420966._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420966._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_st_tchan_lept_atop_r9364_Higgs
Long64_t N_PoPy_P2012_st_tchan_lept_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410012.PoPy_P2012_st_tchan_lept_atop.D1.e3824_s3126_r9364_p3480.sv1_Le/user.sdysch.17420513._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410012.PoPy_P2012_st_tchan_lept_atop.D1.e3824_s3126_r9364_p3480.sv1_Le/user.sdysch.17420513._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364177.Sh221_PDF30_Wenu_MV140_280_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421137._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364177.Sh221_PDF30_Wenu_MV140_280_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421137._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421153._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421153._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421106._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421106._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421069._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421069._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421069._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420628._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420628._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZll_r10201_Higgs
Long64_t N_Sh221_PDF30_ZqqZll_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420864._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420864._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420964._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420964._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420964._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420964._000004.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421188._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421188._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420672._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420672._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_atop_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_atop_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410016.PoPy_P2012_Wt_dilepton_atop.D1.e3753_s3126_r10201_p3480.sv1_Le/user.sdysch.17420856._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421182._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421182._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421191._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421191._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421151._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421151._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420609._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420609._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420609._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420609._000004.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403310._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403310._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403310._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403310._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420760._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420760._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_atop_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410016.PoPy_P2012_Wt_dilepton_atop.D1.e3753_s3126_r9364_p3480.sv1_Le/user.sdysch.17420521._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403134._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403134._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZvv_r10201_Higgs
Long64_t N_Sh221_PDF30_ZqqZvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363355.Sh221_PDF30_ZqqZvv.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420861._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZvv_r10201_Higgs
Long64_t N_Sh221_PDF30_WqqZvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363357.Sh221_PDF30_WqqZvv.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420865._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420811._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420811._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_p3480.sv1_Le/user.sdysch.17403240._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_p3480.sv1_Le/user.sdysch.17403240._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_p3480.sv4_Le/user.sdysch.17532866._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_p3480.sv4_Le/user.sdysch.17532866._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZvv_r9364_Higgs
Long64_t N_Sh221_PDF30_ZqqZvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363355.Sh221_PDF30_ZqqZvv.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420524._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421121._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421121._000004.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421121._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421121._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420948._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420948._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420948._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420574._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420574._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420574._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420574._000001.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_p3480.sv1_Le/user.sdysch.17403252._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_p3480.sv1_Le/user.sdysch.17403252._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420891._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420891._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421086._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421086._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403306._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403306._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000015.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000016.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000010.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000008.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000001.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000014.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000006.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000005.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000007.LepUniv_ttbar.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000002.LepUniv_ttbar.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	TFile *file11 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000003.LepUniv_ttbar.root");
	TH1F *histogram11 = (TH1F*)file11->Get("h_metadata");
	N += histogram11->GetBinContent(8);
	file11->Close();

	TFile *file12 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000012.LepUniv_ttbar.root");
	TH1F *histogram12 = (TH1F*)file12->Get("h_metadata");
	N += histogram12->GetBinContent(8);
	file12->Close();

	TFile *file13 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000013.LepUniv_ttbar.root");
	TH1F *histogram13 = (TH1F*)file13->Get("h_metadata");
	N += histogram13->GetBinContent(8);
	file13->Close();

	TFile *file14 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421115._000004.LepUniv_ttbar.root");
	TH1F *histogram14 = (TH1F*)file14->Get("h_metadata");
	N += histogram14->GetBinContent(8);
	file14->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420994._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420994._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421135._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421135._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421135._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420605._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420605._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420605._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420685._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420685._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420560._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420560._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420560._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364195.Sh221_PDF30_Wtaunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420804._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364195.Sh221_PDF30_Wtaunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420804._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403288._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403288._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420957._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420957._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420957._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420923._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420923._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421130._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421130._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421130._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420551._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420551._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421093._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421093._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421093._000004.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421093._000005.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421093._000006.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421093._000007.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420780._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420780._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420771._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420771._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420566._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420566._000004.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364195.Sh221_PDF30_Wtaunu_MV280_500_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421184._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364195.Sh221_PDF30_Wtaunu_MV280_500_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421184._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421128._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421128._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364166.Sh221_PDF30_Wmunu_MV280_500_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421104._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364166.Sh221_PDF30_Wmunu_MV280_500_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421104._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420668._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420668._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403366._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403366._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs
Long64_t N_PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410025.PoPy_P2012_STSchan_noAllHad_top.D1.e3998_s3126_r9364_p3480.sv1_Le/user.sdysch.17420506._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410025.PoPy_P2012_STSchan_noAllHad_top.D1.e3998_s3126_r9364_p3480.sv1_Le/user.sdysch.17420506._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403326._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403326._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420737._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420737._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420795._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420795._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420659._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420659._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_s3126_r10201_p3563.sv1_Le/user.sdysch.17403105._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for PoPy8_A14_ttb_nonallh_r9364_Higgs
Long64_t N_PoPy8_A14_ttb_nonallh_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_Le/user.sdysch.17420502._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_Le/user.sdysch.17420502._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_Le/user.sdysch.17420502._000004.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_Le/user.sdysch.17420502._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_Le/user.sdysch.17420502._000006.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_Le/user.sdysch.17420502._000005.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_Le/user.sdysch.17420502._000007.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420999._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420999._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420599._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420599._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PhPy8_A14_ttb_nonallh_r10201_Higgs
Long64_t N_PhPy8_A14_ttb_nonallh_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000006.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000010.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000011.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000012.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000004.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000007.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000005.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000009.LepUniv_ttbar.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000002.LepUniv_ttbar.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	TFile *file11 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000003.LepUniv_ttbar.root");
	TH1F *histogram11 = (TH1F*)file11->Get("h_metadata");
	N += histogram11->GetBinContent(8);
	file11->Close();

	TFile *file12 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000013.LepUniv_ttbar.root");
	TH1F *histogram12 = (TH1F*)file12->Get("h_metadata");
	N += histogram12->GetBinContent(8);
	file12->Close();

	TFile *file13 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r10201_p3480.sv1_Le/user.sdysch.17420847._000008.LepUniv_ttbar.root");
	TH1F *histogram13 = (TH1F*)file13->Get("h_metadata");
	N += histogram13->GetBinContent(8);
	file13->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421008._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421008._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421008._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r10201_p3480.sv1_Le/user.sdysch.17403351._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r10201_p3480.sv1_Le/user.sdysch.17403351._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZll_r9364_Higgs
Long64_t N_Sh221_PDF30_WqqZll_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420529._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420529._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420940._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420940._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420932._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420936._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420936._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420936._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420709._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420709._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420732._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420732._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_p3480.sv2_Le/user.sdysch.17414692._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_p3480.sv2_Le/user.sdysch.17414692._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420588._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420588._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_top_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_incl_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410013.PoPy_P2012_Wt_incl_top.D1.e3753_s3126_r9364_p3480.sv1_Le/user.sdysch.17420515._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410013.PoPy_P2012_Wt_incl_top.D1.e3753_s3126_r9364_p3480.sv1_Le/user.sdysch.17420515._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421172._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421172._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421172._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420799._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420799._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420664._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420664._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420723._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420723._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421176._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_s3126_r10201_p3563.sv1_Le/user.sdysch.17403111._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364163.Sh221_PDF30_Wmunu_MV140_280_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421092._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403184._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403184._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421161._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421161._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421161._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421161._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420601._000010.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420601._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420601._000007.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420601._000006.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420594._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420594._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420553._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420553._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421177._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421177._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421177._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420763._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420763._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421011._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421011._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv4_Le/user.sdysch.17532878._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv4_Le/user.sdysch.17532878._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420563._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420563._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_WlvZqq_r10201_Higgs
Long64_t N_Sh221_PDF30_WlvZqq_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420871._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420871._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420871._000004.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420871._000006.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420871._000005.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420871._000003.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420927._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420927._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420927._000005.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420927._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh222_PDF30_lvvv_r9364_Higgs
Long64_t N_Sh222_PDF30_lvvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364255.Sh222_PDF30_lvvv.D1.e5916_s3126_r9364_p3480.sv1_Le/user.sdysch.17420549._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364166.Sh221_PDF30_Wmunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420698._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364166.Sh221_PDF30_Wmunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420698._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420977._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420977._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420977._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420985._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420985._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420985._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420974._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420974._000005.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420974._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420974._000002.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_s3126_r9364_p3563.sv1_Le/user.sdysch.17403092._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh222_PDF30_llvv_r9364_Higgs
Long64_t N_Sh222_PDF30_llvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r9364_p3480.sv1_Le/user.sdysch.17420545._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r9364_p3480.sv1_Le/user.sdysch.17420545._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs
Long64_t N_PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410026.PoPy_P2012_STSchan_noAllHad_atop.D1.e3998_s3126_r9364_p3480.sv1_Le/user.sdysch.17420508._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420918._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420918._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_top_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410015.PoPy_P2012_Wt_dilepton_top.D1.e3753_s3126_r9364_p3480.sv1_Le/user.sdysch.17420518._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403319._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403319._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403217._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403217._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000005.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000008.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000001.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000007.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000003.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000004.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000006.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000009.LepUniv_ttbar.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421077._000010.LepUniv_ttbar.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_top_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_incl_top_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410013.PoPy_P2012_Wt_incl_top.D1.e3753_s3126_r10201_p3480.sv1_Le/user.sdysch.17420849._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403390._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403390._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420786._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420786._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420711._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420711._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy8_Zmumu_r9364_Higgs
Long64_t N_PoPy8_Zmumu_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000013.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000016.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000015.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000012.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000005.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000003.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000014.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000004.LepUniv_ttbar.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000008.LepUniv_ttbar.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	TFile *file11 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000007.LepUniv_ttbar.root");
	TH1F *histogram11 = (TH1F*)file11->Get("h_metadata");
	N += histogram11->GetBinContent(8);
	file11->Close();

	TFile *file12 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000011.LepUniv_ttbar.root");
	TH1F *histogram12 = (TH1F*)file12->Get("h_metadata");
	N += histogram12->GetBinContent(8);
	file12->Close();

	TFile *file13 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000002.LepUniv_ttbar.root");
	TH1F *histogram13 = (TH1F*)file13->Get("h_metadata");
	N += histogram13->GetBinContent(8);
	file13->Close();

	TFile *file14 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000009.LepUniv_ttbar.root");
	TH1F *histogram14 = (TH1F*)file14->Get("h_metadata");
	N += histogram14->GetBinContent(8);
	file14->Close();

	TFile *file15 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000010.LepUniv_ttbar.root");
	TH1F *histogram15 = (TH1F*)file15->Get("h_metadata");
	N += histogram15->GetBinContent(8);
	file15->Close();

	TFile *file16 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592213._000006.LepUniv_ttbar.root");
	TH1F *histogram16 = (TH1F*)file16->Get("h_metadata");
	N += histogram16->GetBinContent(8);
	file16->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420727._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420727._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_lvvv_r10201_Higgs
Long64_t N_Sh222_PDF30_lvvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364255.Sh222_PDF30_lvvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420888._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364255.Sh222_PDF30_lvvv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420888._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PhPy8_A14_ttb_nonallh_r9364_Higgs
Long64_t N_PhPy8_A14_ttb_nonallh_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r9364_p3480.sv1_Le/user.sdysch.17420504._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r9364_p3480.sv1_Le/user.sdysch.17420504._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r9364_p3480.sv1_Le/user.sdysch.17420504._000005.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r9364_p3480.sv1_Le/user.sdysch.17420504._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_s3126_r9364_p3480.sv1_Le/user.sdysch.17420504._000002.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420615._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420615._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420615._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421126._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421126._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421126._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421113._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421113._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421079._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421079._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421079._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420611._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420611._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420611._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420970._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420970._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_WlvZqq_r9364_Higgs
Long64_t N_Sh221_PDF30_WlvZqq_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420534._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420534._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r10201_p3552.sv1_Le/user.sdysch.17421084._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r10201_p3552.sv1_Le/user.sdysch.17421084._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421179._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421179._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv4_Le/user.sdysch.17532887._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv4_Le/user.sdysch.17532887._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403322._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403322._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403322._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZvv_r9364_Higgs
Long64_t N_Sh221_PDF30_WqqZvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363357.Sh221_PDF30_WqqZvv.D1.e5525_s3126_r9364_p3480.sv1_Le/user.sdysch.17420527._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421157._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421157._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421157._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364163.Sh221_PDF30_Wmunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420688._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364163.Sh221_PDF30_Wmunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420688._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420590._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420590._000006.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420590._000004.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_top_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_top_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410015.PoPy_P2012_Wt_dilepton_top.D1.e3753_s3126_r10201_p3480.sv1_Le/user.sdysch.17420854._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420792._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420792._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421119._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421119._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403210._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403210._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403210._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420774._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420774._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_atop_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_incl_atop_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410014.PoPy_P2012_Wt_incl_atop.D1.e3753_s3126_r10201_p3480.sv1_Le/user.sdysch.17420852._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for PoPy8_Zee_r10201_Higgs
Long64_t N_PoPy8_Zee_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000004.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000009.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000008.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000005.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000006.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000007.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000002.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592198._000003.LepUniv_ttbar.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_s3126_r9364_p3563.sv1_Le/user.sdysch.17403099._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420902._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420902._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420694._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420694._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421170._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421170._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421170._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420586._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420586._000005.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420758._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420758._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy8_Zmumu_r10201_Higgs
Long64_t N_PoPy8_Zmumu_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000015.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000026.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000025.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000018.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000024.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000031.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000020.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000001.LepUniv_ttbar.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000003.LepUniv_ttbar.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	TFile *file11 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000007.LepUniv_ttbar.root");
	TH1F *histogram11 = (TH1F*)file11->Get("h_metadata");
	N += histogram11->GetBinContent(8);
	file11->Close();

	TFile *file12 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000029.LepUniv_ttbar.root");
	TH1F *histogram12 = (TH1F*)file12->Get("h_metadata");
	N += histogram12->GetBinContent(8);
	file12->Close();

	TFile *file13 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000006.LepUniv_ttbar.root");
	TH1F *histogram13 = (TH1F*)file13->Get("h_metadata");
	N += histogram13->GetBinContent(8);
	file13->Close();

	TFile *file14 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000005.LepUniv_ttbar.root");
	TH1F *histogram14 = (TH1F*)file14->Get("h_metadata");
	N += histogram14->GetBinContent(8);
	file14->Close();

	TFile *file15 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000004.LepUniv_ttbar.root");
	TH1F *histogram15 = (TH1F*)file15->Get("h_metadata");
	N += histogram15->GetBinContent(8);
	file15->Close();

	TFile *file16 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000028.LepUniv_ttbar.root");
	TH1F *histogram16 = (TH1F*)file16->Get("h_metadata");
	N += histogram16->GetBinContent(8);
	file16->Close();

	TFile *file17 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000023.LepUniv_ttbar.root");
	TH1F *histogram17 = (TH1F*)file17->Get("h_metadata");
	N += histogram17->GetBinContent(8);
	file17->Close();

	TFile *file18 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000022.LepUniv_ttbar.root");
	TH1F *histogram18 = (TH1F*)file18->Get("h_metadata");
	N += histogram18->GetBinContent(8);
	file18->Close();

	TFile *file19 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000016.LepUniv_ttbar.root");
	TH1F *histogram19 = (TH1F*)file19->Get("h_metadata");
	N += histogram19->GetBinContent(8);
	file19->Close();

	TFile *file20 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000010.LepUniv_ttbar.root");
	TH1F *histogram20 = (TH1F*)file20->Get("h_metadata");
	N += histogram20->GetBinContent(8);
	file20->Close();

	TFile *file21 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000030.LepUniv_ttbar.root");
	TH1F *histogram21 = (TH1F*)file21->Get("h_metadata");
	N += histogram21->GetBinContent(8);
	file21->Close();

	TFile *file22 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000008.LepUniv_ttbar.root");
	TH1F *histogram22 = (TH1F*)file22->Get("h_metadata");
	N += histogram22->GetBinContent(8);
	file22->Close();

	TFile *file23 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000011.LepUniv_ttbar.root");
	TH1F *histogram23 = (TH1F*)file23->Get("h_metadata");
	N += histogram23->GetBinContent(8);
	file23->Close();

	TFile *file24 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000027.LepUniv_ttbar.root");
	TH1F *histogram24 = (TH1F*)file24->Get("h_metadata");
	N += histogram24->GetBinContent(8);
	file24->Close();

	TFile *file25 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000009.LepUniv_ttbar.root");
	TH1F *histogram25 = (TH1F*)file25->Get("h_metadata");
	N += histogram25->GetBinContent(8);
	file25->Close();

	TFile *file26 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000017.LepUniv_ttbar.root");
	TH1F *histogram26 = (TH1F*)file26->Get("h_metadata");
	N += histogram26->GetBinContent(8);
	file26->Close();

	TFile *file27 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361107.PoPy8_Zmumu.D1.e3601_s3126_r10201_p3652.sv1_Le/user.sdysch.17592207._000021.LepUniv_ttbar.root");
	TH1F *histogram27 = (TH1F*)file27->Get("h_metadata");
	N += histogram27->GetBinContent(8);
	file27->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZll_r10201_Higgs
Long64_t N_Sh221_PDF30_WqqZll_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420868._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420868._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420868._000006.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420868._000005.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420868._000003.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r10201_p3480.sv1_Le/user.sdysch.17420868._000004.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421166._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421166._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_llll_r10201_Higgs
Long64_t N_Sh222_PDF30_llll_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r10201_p3480.sv1_Le/user.sdysch.17420877._000005.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r10201_p3480.sv1_Le/user.sdysch.17420877._000004.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r10201_p3480.sv1_Le/user.sdysch.17420877._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r10201_p3480.sv1_Le/user.sdysch.17420877._000002.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r10201_p3480.sv1_Le/user.sdysch.17420877._000003.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs
Long64_t N_PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410025.PoPy_P2012_STSchan_noAllHad_top.D1.e3998_s3126_r10201_p3480.sv1_Le/user.sdysch.17420858._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420706._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420706._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420706._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420569._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420569._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403198._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403198._000004.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403198._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_st_tchan_lept_top_r9364_Higgs
Long64_t N_PoPy_P2012_st_tchan_lept_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410011.PoPy_P2012_st_tchan_lept_top.D1.e3824_s3126_r9364_p3480.sv1_Le/user.sdysch.17420510._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.410011.PoPy_P2012_st_tchan_lept_top.D1.e3824_s3126_r9364_p3480.sv1_Le/user.sdysch.17420510._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.308094.Sh221_PDF30_Ztt2jets_Min_N_TChannel.D1.e5767_s3126_r9364_p3563.sv1_Le/user.sdysch.17403103._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421095._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421095._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421159._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421159._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421159._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421159._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421159._000005.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420905._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420905._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420905._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420905._000004.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421067._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421067._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420955._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420955._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421174._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421174._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000008.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000004.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000011.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000014.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000005.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000001.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000013.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000006.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000003.LepUniv_ttbar.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000002.LepUniv_ttbar.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	TFile *file11 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000012.LepUniv_ttbar.root");
	TH1F *histogram11 = (TH1F*)file11->Get("h_metadata");
	N += histogram11->GetBinContent(8);
	file11->Close();

	TFile *file12 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000010.LepUniv_ttbar.root");
	TH1F *histogram12 = (TH1F*)file12->Get("h_metadata");
	N += histogram12->GetBinContent(8);
	file12->Close();

	TFile *file13 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000015.LepUniv_ttbar.root");
	TH1F *histogram13 = (TH1F*)file13->Get("h_metadata");
	N += histogram13->GetBinContent(8);
	file13->Close();

	TFile *file14 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421065._000009.LepUniv_ttbar.root");
	TH1F *histogram14 = (TH1F*)file14->Get("h_metadata");
	N += histogram14->GetBinContent(8);
	file14->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420570._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420570._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420570._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420618._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420618._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420618._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420719._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420719._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy8_Zee_r9364_Higgs
Long64_t N_PoPy8_Zee_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000007.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000004.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000006.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000005.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000008.LepUniv_ttbar.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.361106.PoPy8_Zee.D1.e3601_s3126_r9364_p3652.sv1_Le/user.sdysch.17592202._000003.LepUniv_ttbar.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421001._000003.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421001._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17421001._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3552.sv1_Le/user.sdysch.17420681._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3552.sv1_Le/user.sdysch.17420681._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_lllv_r10201_Higgs
Long64_t N_Sh222_PDF30_lllv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420882._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420882._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420882._000007.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420882._000006.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420882._000003.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r10201_p3480.sv1_Le/user.sdysch.17420882._000005.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420946._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420946._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420946._000002.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420946._000003.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403298._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403298._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r10201_p3480.sv1_Le/user.sdysch.17403335._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r10201_p3480.sv1_Le/user.sdysch.17403335._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420915._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r10201_p3480.sv1_Le/user.sdysch.17420915._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403275._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403275._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421180._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421180._000005.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421180._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421180._000004.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421180._000001.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403156._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403156._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420582._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420582._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_p3480.sv1_Le/user.sdysch.17420582._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420992._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420992._000008.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420992._000006.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420992._000002.LepUniv_ttbar.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420992._000007.LepUniv_ttbar.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r10201_p3480.sv1_Le/user.sdysch.17420992._000009.LepUniv_ttbar.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420606._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_Le/user.sdysch.17420606._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421112._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421112._000003.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421112._000001.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420749._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420749._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_lllv_r9364_Higgs
Long64_t N_Sh222_PDF30_lllv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r9364_p3480.sv1_Le/user.sdysch.17420543._000001.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r9364_p3480.sv1_Le/user.sdysch.17420543._000002.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r9364_p3480.sv1_Le/user.sdysch.17420543._000003.LepUniv_ttbar.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403269._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403269._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403281._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r10201_p3480.sv1_Le/user.sdysch.17403281._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420677._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420677._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420702._000004.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_Le/user.sdysch.17420702._000005.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403230._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_Le/user.sdysch.17403230._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421141._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421141._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421147._000002.LepUniv_ttbar.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc/user.sdysch.mphys_v3.0.mc.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r10201_p3480.sv1_Le/user.sdysch.17421147._000001.LepUniv_ttbar.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

return N;
} 

#endif