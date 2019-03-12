#ifndef N_Functions_Higgs_h
#define N_Functions_Higgs_h

//N Return function for Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340986._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340986._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340926._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340926._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339826._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339826._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee2jets_Min_N_TChannel_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.0.mc.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_s3126_r10201_p3563.sv2_hist/user.sdysch.17228540._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh222_PDF30_llvv_r9364_Higgs
Long64_t N_Sh222_PDF30_llvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r9364_p3480.sv1_hist/user.sdysch.16339531._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364254.Sh222_PDF30_llvv.D1.e5916_s3126_r9364_p3480.sv1_hist/user.sdysch.16339531._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339768._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339768._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340770._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340282._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339751._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339751._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_s3126_r9364_p3563.sv1_hist/user.sdysch.16339378._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340788._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339571._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339571._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339571._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339653._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339653._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339653._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340011._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340011._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339976._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339976._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339718._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339718._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339718._000001.hist-output.root.2");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.308094.Sh221_PDF30_Ztt2jets_Min_N_TChannel.D1.e5767_s3126_r9364_p3563.sv1_hist/user.sdysch.16339385._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364166.Sh221_PDF30_Wmunu_MV280_500_CFilBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340735._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340295._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340295._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339897._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339897._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339755._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339755._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340777._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh222_PDF30_lllv_r9364_Higgs
Long64_t N_Sh222_PDF30_lllv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r9364_p3480.sv1_hist/user.sdysch.16339527._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_s3126_r9364_p3480.sv1_hist/user.sdysch.16339527._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339900._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339900._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340271._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340271._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339924._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339924._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339584._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339584._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt2jets_Min_N_TChannel_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.0.mc.308094.Sh221_PDF30_Ztt2jets_Min_N_TChannel.D1.e5767_s3126_r10201_p3563.sv2_hist/user.sdysch.17228559._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340240._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv3_hist/user.sdysch.16367709._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv3_hist/user.sdysch.16367709._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340343._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340343._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339703._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339703._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339703._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339605._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339605._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340235._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340235._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340235._000005.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340235._000002.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340235._000001.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340235._000006.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340235._000007.hist-output.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339992._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339992._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340750._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340750._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340506._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340506._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340354._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340354._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340354._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340354._000004.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340374._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340374._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340374._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340023._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340023._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340384._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340384._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340384._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340849._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340602._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340602._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340940._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340940._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340940._000005.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340940._000003.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340940._000002.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339979._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339979._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339698._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339698._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339698._000004.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339698._000003.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339692._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339692._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340017._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340017._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_atop_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_incl_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410014.PoPy_P2012_Wt_incl_atop.D1.e3753_s3126_r9364_p3480.sv1_hist/user.sdysch.16339454._000001.hist-output.root.3");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410014.PoPy_P2012_Wt_incl_atop.D1.e3753_s3126_r9364_p3480.sv1_hist/user.sdysch.16339454._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339568._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339568._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340290._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340290._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339886._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339886._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339624._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339624._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339624._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340854._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339784._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339784._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339784._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340614._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340614._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340614._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340614._000001.hist-output.root.2");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339643._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339643._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_top_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_incl_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410013.PoPy_P2012_Wt_incl_top.D1.e3753_s3126_r9364_p3480.sv1_hist/user.sdysch.16339447._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410013.PoPy_P2012_Wt_incl_top.D1.e3753_s3126_r9364_p3480.sv1_hist/user.sdysch.16339447._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340297._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340297._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340297._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340297._000004.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340444._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340444._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340444._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340438._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340438._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339865._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339865._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_lvvv_r9364_Higgs
Long64_t N_Sh222_PDF30_lvvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364255.Sh222_PDF30_lvvv.D1.e5916_s3126_r9364_p3480.sv1_hist/user.sdysch.16339557._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340635._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340635._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340635._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZvv_r10201_Higgs
Long64_t N_Sh221_PDF30_ZqqZvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363355.Sh221_PDF30_ZqqZvv.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340132._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV500_1000_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339969._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339969._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339969._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340837._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340837._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340837._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340457._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340457._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340457._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs
Long64_t N_PoPy_P2012_STSchan_noAllHad_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410026.PoPy_P2012_STSchan_noAllHad_atop.D1.e3998_s3126_r9364_p3480.sv1_hist/user.sdysch.16339403._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340332._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340332._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340332._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340628._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340628._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_st_tchan_lept_atop_r9364_Higgs
Long64_t N_PoPy_P2012_st_tchan_lept_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410012.PoPy_P2012_st_tchan_lept_atop.D1.e3824_s3126_r9364_p3480.sv1_hist/user.sdysch.16339436._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410012.PoPy_P2012_st_tchan_lept_atop.D1.e3824_s3126_r9364_p3480.sv1_hist/user.sdysch.16339436._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340580._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340580._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340367._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340367._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340818._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340818._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_llvv_r10201_Higgs
Long64_t N_Sh222_PDF30_llvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364254.Sh222_PDF30_llvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340216._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364254.Sh222_PDF30_llvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340216._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364254.Sh222_PDF30_llvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340216._000004.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364254.Sh222_PDF30_llvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340216._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364254.Sh222_PDF30_llvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340216._000005.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339803._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339803._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340434._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340434._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340434._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340947._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340361._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340361._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340361._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340764._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340764._000004.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340764._000006.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340764._000005.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340521._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340521._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339686._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339686._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339686._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339788._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339788._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340316._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340316._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_top_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_incl_top_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410013.PoPy_P2012_Wt_incl_top.D1.e3753_s3126_r10201_p3480.sv1_hist/user.sdysch.16340093._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r10201_r10210_p3552.sv1_hist/user.sdysch.16340660._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r10201_r10210_p3552.sv1_hist/user.sdysch.16340660._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339843._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339843._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340392._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340392._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340392._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340392._000005.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340392._000004.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340783._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339600._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339600._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339600._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339986._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339986._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364195.Sh221_PDF30_Wtaunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340013._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364195.Sh221_PDF30_Wtaunu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340013._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_incl_atop_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_incl_atop_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410014.PoPy_P2012_Wt_incl_atop.D1.e3753_s3126_r10201_p3480.sv1_hist/user.sdysch.16340098._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340427._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340427._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340427._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339562._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339562._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339562._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339640._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339640._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339640._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_p3480.sv1_hist/user.sdysch.16339811._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_p3480.sv1_hist/user.sdysch.16339811._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340348._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340348._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340348._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339667._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339667._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339667._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340419._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340419._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZll_r9364_Higgs
Long64_t N_Sh221_PDF30_ZqqZll_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339503._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339503._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_st_tchan_lept_top_r9364_Higgs
Long64_t N_PoPy_P2012_st_tchan_lept_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410011.PoPy_P2012_st_tchan_lept_top.D1.e3824_s3126_r9364_p3480.sv1_hist/user.sdysch.16339414._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410011.PoPy_P2012_st_tchan_lept_top.D1.e3824_s3126_r9364_p3480.sv1_hist/user.sdysch.16339414._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340643._000001.hist-output.root.2");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee2jets_Min_N_TChannel_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_s3126_r9364_p3563.sv1_hist/user.sdysch.16339374._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh222_PDF30_lllv_r10201_Higgs
Long64_t N_Sh222_PDF30_lllv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340207._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340207._000003.hist-output.root.2");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340207._000006.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340207._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340207._000005.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364253.Sh222_PDF30_lllv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340207._000002.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364163.Sh221_PDF30_Wmunu_MV140_280_CFilBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340678._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339647._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339647._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340745._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340933._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339614._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339614._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339614._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339955._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339955._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340000._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340000._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364195.Sh221_PDF30_Wtaunu_MV280_500_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340960._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339672._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339672._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339672._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs
Long64_t N_PoPy_P2012_STSchan_noAllHad_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410025.PoPy_P2012_STSchan_noAllHad_top.D1.e3998_s3126_r9364_p3480.sv1_hist/user.sdysch.16339397._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410025.PoPy_P2012_STSchan_noAllHad_top.D1.e3998_s3126_r9364_p3480.sv1_hist/user.sdysch.16339397._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339902._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339902._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_p3480.sv1_hist/user.sdysch.16339822._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_p3480.sv1_hist/user.sdysch.16339822._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZvv_r9364_Higgs
Long64_t N_Sh221_PDF30_WqqZvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363357.Sh221_PDF30_WqqZvv.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339510._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000006.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000010.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000007.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000004.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000009.hist-output.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000003.hist-output.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000005.hist-output.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340263._000008.hist-output.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	return N;

}

//N Return function for Sh222_PDF30_llll_r9364_Higgs
Long64_t N_Sh222_PDF30_llll_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r9364_p3480.sv1_hist/user.sdysch.16339525._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r9364_p3480.sv1_hist/user.sdysch.16339525._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_s3126_r9364_p3480.sv1_hist/user.sdysch.16339525._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_atop_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_atop_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410016.PoPy_P2012_Wt_dilepton_atop.D1.e3753_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340125._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmm2jets_Min_N_TChannel_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.0.mc.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_s3126_r10201_p3563.sv2_hist/user.sdysch.17228547._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339972._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339972._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340387._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340387._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340387._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340545._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340545._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340008._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340008._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv4_hist/user.sdysch.16392490._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv4_hist/user.sdysch.16392490._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339774._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339774._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340405._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340405._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340405._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_top_r10201_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_top_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410015.PoPy_P2012_Wt_dilepton_top.D1.e3753_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340104._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339973._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339973._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_top_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_top_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410015.PoPy_P2012_Wt_dilepton_top.D1.e3753_s3126_r9364_p3480.sv1_hist/user.sdysch.16339462._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339630._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339630._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364177.Sh221_PDF30_Wenu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339935._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364177.Sh221_PDF30_Wenu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339935._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339929._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339929._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv2_hist/user.sdysch.16392077._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_p3480.sv2_hist/user.sdysch.16392077._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340888._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340888._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340806._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339984._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339984._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340913._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340913._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340538._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340538._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340538._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339779._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339779._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339779._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_WlvZqq_r10201_Higgs
Long64_t N_Sh221_PDF30_WlvZqq_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340164._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340164._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340164._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340164._000004.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340164._000005.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340453._000001.hist-output.root.3");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340453._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340709._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339839._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339839._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3552.sv4_hist/user.sdysch.16391141._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364161.Sh221_PDF30_Wmunu_MV70_140_BFil.D1.e5340_s3126_r9364_p3552.sv4_hist/user.sdysch.16391141._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339942._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339942._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339674._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339674._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340512._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340512._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340512._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340981._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZll_r10201_Higgs
Long64_t N_Sh221_PDF30_ZqqZll_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r10201_p3480.sv1_hist/user.sdysch.16340138._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r10201_p3480.sv1_hist/user.sdysch.16340138._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs
Long64_t N_PoPy_P2012_STSchan_noAllHad_top_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410025.PoPy_P2012_STSchan_noAllHad_top.D1.e3998_s3126_r10201_p3480.sv1_hist/user.sdysch.16340131._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339724._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339724._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339610._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339610._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339610._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv2_hist/user.sdysch.16390957._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv2_hist/user.sdysch.16390957._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv2_hist/user.sdysch.16390957._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_WlvZqq_r9364_Higgs
Long64_t N_Sh221_PDF30_WlvZqq_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339522._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363489.Sh221_PDF30_WlvZqq.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339522._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340250._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340250._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340666._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340666._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339712._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339712._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339712._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339712._000003.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340003._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16340003._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339847._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339847._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340899._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340899._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340899._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364177.Sh221_PDF30_Wenu_MV140_280_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340829._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340304._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339594._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_p3480.sv1_hist/user.sdysch.16339594._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_llll_r10201_Higgs
Long64_t N_Sh222_PDF30_llll_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340172._000005.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340172._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340172._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340172._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364250.Sh222_PDF30_llll.D1.e5894_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340172._000004.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340757._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340757._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV1000_E_CMS_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339832._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339832._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV140_280_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340534._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340534._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339878._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339878._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339878._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339907._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339907._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh222_PDF30_lvvv_r10201_Higgs
Long64_t N_Sh222_PDF30_lvvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364255.Sh222_PDF30_lvvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340226._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364255.Sh222_PDF30_lvvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340226._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364255.Sh222_PDF30_lvvv.D1.e5916_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340226._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZll_r9364_Higgs
Long64_t N_Sh221_PDF30_WqqZll_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339518._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339518._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340858._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340858._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZll_r10201_Higgs
Long64_t N_Sh221_PDF30_WqqZll_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340148._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340148._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340148._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363358.Sh221_PDF30_WqqZll.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340148._000002.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339918._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339918._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV1000_E_CMS_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340862._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340862._000005.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340862._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340862._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340862._000004.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_WqqZvv_r10201_Higgs
Long64_t N_Sh221_PDF30_WqqZvv_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363357.Sh221_PDF30_WqqZvv.D1.e5525_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340139._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340597._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340597._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PhPy8_A14_ttb_nonallh_r10201_Higgs
Long64_t N_PhPy8_A14_ttb_nonallh_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000007.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000005.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000004.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000014.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	TFile *file6 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000011.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	TFile *file7 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000006.hist-output.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	TFile *file8 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000012.hist-output.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	TFile *file9 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000009.hist-output.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	TFile *file10 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000013.hist-output.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	TFile *file11 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000010.hist-output.root");
	TH1F *histogram11 = (TH1F*)file11->Get("h_metadata");
	N += histogram11->GetBinContent(8);
	file11->Close();

	TFile *file12 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000003.hist-output.root");
	TH1F *histogram12 = (TH1F*)file12->Get("h_metadata");
	N += histogram12->GetBinContent(8);
	file12->Close();

	TFile *file13 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000002.hist-output.root");
	TH1F *histogram13 = (TH1F*)file13->Get("h_metadata");
	N += histogram13->GetBinContent(8);
	file13->Close();

	TFile *file14 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410470.PhPy8_A14_ttb_nonallh.D1.e6337_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340081._000008.hist-output.root");
	TH1F *histogram14 = (TH1F*)file14->Get("h_metadata");
	N += histogram14->GetBinContent(8);
	file14->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364166.Sh221_PDF30_Wmunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339892._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364166.Sh221_PDF30_Wmunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339892._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339854._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339854._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340843._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339857._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339857._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV0_70_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339910._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339910._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339745._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339745._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV70_140_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340651._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV500_1000_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340321._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Zmumu_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340309._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340309._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r10201_p3480.sv1_hist/user.sdysch.16340309._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV70_140_BFil_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340920._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for PoPy_P2012_Wt_dilepton_atop_r9364_Higgs
Long64_t N_PoPy_P2012_Wt_dilepton_atop_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410016.PoPy_P2012_Wt_dilepton_atop.D1.e3753_s3126_r9364_p3480.sv1_hist/user.sdysch.16339476._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV280_500_CFilBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340567._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340567._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340944._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340944._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV0_70_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339741._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_p3480.sv1_hist/user.sdysch.16339741._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Ztt_MV70_140_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340477._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340477._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for PoPy8_A14_ttb_nonallh_r9364_Higgs
Long64_t N_PoPy8_A14_ttb_nonallh_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_hist/user.sdysch.16339393._000005.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_hist/user.sdysch.16339393._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	TFile *file3 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_hist/user.sdysch.16339393._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	TFile *file4 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_hist/user.sdysch.16339393._000004.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	TFile *file5 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_p3480.sv1_hist/user.sdysch.16339393._000003.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV70_140_CVetBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339914._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339914._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wtaunu_MV0_70_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_e5984_s3126_r10201_r10210_p3480.sv1_hist/user.sdysch.16340866._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV280_500_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339706._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339706._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV0_70_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339657._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_p3480.sv1_hist/user.sdysch.16339657._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV280_500_CVetBVet_r10201_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_e5984_s3126_s3136_r10201_r10210_p3480.sv1_hist/user.sdysch.16340725._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs
Long64_t N_Sh221_PDF30_Wmunu_MV140_280_CFilBVet_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364163.Sh221_PDF30_Wmunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339873._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364163.Sh221_PDF30_Wmunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339873._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Zee_MV70_140_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_p3480.sv2_hist/user.sdysch.16392210._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_p3480.sv2_hist/user.sdysch.16392210._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	return N;

}

//N Return function for Sh221_PDF30_ZqqZvv_r9364_Higgs
Long64_t N_Sh221_PDF30_ZqqZvv_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.363355.Sh221_PDF30_ZqqZvv.D1.e5525_s3126_r9364_p3480.sv1_hist/user.sdysch.16339497._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	return N;

}

//N Return function for Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs
Long64_t N_Sh221_PDF30_Wenu_MV280_500_BFil_r9364_Higgs() {

	Long64_t N = 0;
	TFile *file1 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339962._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	TFile *file2 = new TFile("/higgs-data3/sam/forTomRyunAliceLuca/v02/mc/user.sdysch.mphys_v2.mc.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r9364_p3480.sv1_hist/user.sdysch.16339962._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

return N;
} 

#endif