#ifndef Merge_Functions_h
#define Merge_Functions_h

//Merge function for Ztt_MV1000_E_CMS
void Merge_Ztt_MV1000_E_CMS() {

	double N = 0;
	double ID = 364141;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362981._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362981._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/ZqqZll.root");

}

//Merge function for ZqqZll
void Merge_ZqqZll() {

	double N = 0;
	double ID = 363356;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362495._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362495._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362495._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.363356.Sh221_PDF30_ZqqZll.D1.e5525_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362495._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV140_280_CFilBVet.root");

}

//Merge function for Wtaunu_MV140_280_CFilBVet
void Merge_Wtaunu_MV140_280_CFilBVet() {

	double N = 0;
	double ID = 364191;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362750._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362750._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362750._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364191.Sh221_PDF30_Wtaunu_MV140_280_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362750._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV0_70_CFilBVet.root");

}

//Merge function for Ztt_MV0_70_CFilBVet
void Merge_Ztt_MV0_70_CFilBVet() {

	double N = 0;
	double ID = 364129;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362986._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364129.Sh221_PDF30_Ztt_MV0_70_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362986._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV140_280_CVetBVet.root");

}

//Merge function for Wenu_MV140_280_CVetBVet
void Merge_Wenu_MV140_280_CVetBVet() {

	double N = 0;
	double ID = 364176;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362594._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364176.Sh221_PDF30_Wenu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362594._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV1000_E_CMS.root");

}

//Merge function for Wmunu_MV1000_E_CMS
void Merge_Wmunu_MV1000_E_CMS() {

	double N = 0;
	double ID = 364169;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362688._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362688._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362688._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362688._000003.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362688._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364169.Sh221_PDF30_Wmunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362688._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV70_140_CVetBVet.root");

}

//Merge function for Zmumu_MV70_140_CVetBVet
void Merge_Zmumu_MV70_140_CVetBVet() {

	double N = 0;
	double ID = 364103;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362891._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362891._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362891._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364103.Sh221_PDF30_Zmumu_MV70_140_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362891._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV140_280_CFilBVet.root");

}

//Merge function for Ztt_MV140_280_CFilBVet
void Merge_Ztt_MV140_280_CFilBVet() {

	double N = 0;
	double ID = 364135;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362996._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362996._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362996._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364135.Sh221_PDF30_Ztt_MV140_280_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362996._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV280_500_CFilBVet.root");

}

//Merge function for Zee_MV280_500_CFilBVet
void Merge_Zee_MV280_500_CFilBVet() {

	double N = 0;
	double ID = 364124;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362864._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362864._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362864._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364124.Sh221_PDF30_Zee_MV280_500_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362864._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV140_280_BFil.root");

}

//Merge function for Wmunu_MV140_280_BFil
void Merge_Wmunu_MV140_280_BFil() {

	double N = 0;
	double ID = 364164;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000006.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000006.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000003.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000005.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000005.hist-output.root");

	TFile *file5 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000004.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000004.hist-output.root");

	TFile *file6 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000007.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000007.hist-output.root");

	TFile *file7 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000008.hist-output.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364164.Sh221_PDF30_Wmunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362618._000008.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV280_500_CVetBVet.root");

}

//Merge function for Ztt_MV280_500_CVetBVet
void Merge_Ztt_MV280_500_CVetBVet() {

	double N = 0;
	double ID = 364137;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362970._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362970._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362970._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364137.Sh221_PDF30_Ztt_MV280_500_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362970._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV70_140_CVetBVet.root");

}

//Merge function for Wmunu_MV70_140_CVetBVet
void Merge_Wmunu_MV70_140_CVetBVet() {

	double N = 0;
	double ID = 364159;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362633._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364159.Sh221_PDF30_Wmunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362633._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV70_140_CVetBVet.root");

}

//Merge function for Ztt_MV70_140_CVetBVet
void Merge_Ztt_MV70_140_CVetBVet() {

	double N = 0;
	double ID = 364131;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368121._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368121._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368121._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364131.Sh221_PDF30_Ztt_MV70_140_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368121._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV0_70_BFil.root");

}

//Merge function for Zmumu_MV0_70_BFil
void Merge_Zmumu_MV0_70_BFil() {

	double N = 0;
	double ID = 364102;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000004.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000004.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000002.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364102.Sh221_PDF30_Zmumu_MV0_70_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362867._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV0_70_BFil.root");

}

//Merge function for Zee_MV0_70_BFil
void Merge_Zee_MV0_70_BFil() {

	double N = 0;
	double ID = 364116;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362772._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362772._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362772._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362772._000001.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362772._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364116.Sh221_PDF30_Zee_MV0_70_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362772._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmm2jets_Min_N_TChannel.root");

}

//Merge function for Zmm2jets_Min_N_TChannel
void Merge_Zmm2jets_Min_N_TChannel() {

	double N = 0;
	double ID = 308093;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357860._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357860._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV140_280_BFil.root");

}

//Merge function for Zee_MV140_280_BFil
void Merge_Zee_MV140_280_BFil() {

	double N = 0;
	double ID = 364122;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000005.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000005.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000004.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000004.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000003.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000006.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000006.hist-output.root");

	TFile *file5 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000002.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000002.hist-output.root");

	TFile *file6 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000001.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364122.Sh221_PDF30_Zee_MV140_280_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362781._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV280_500_BFil.root");

}

//Merge function for Wmunu_MV280_500_BFil
void Merge_Wmunu_MV280_500_BFil() {

	double N = 0;
	double ID = 364167;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362622._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362622._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362622._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364167.Sh221_PDF30_Wmunu_MV280_500_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362622._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV280_500_CVetBVet.root");

}

//Merge function for Wenu_MV280_500_CVetBVet
void Merge_Wenu_MV280_500_CVetBVet() {

	double N = 0;
	double ID = 364179;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362600._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362600._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362600._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364179.Sh221_PDF30_Wenu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362600._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV0_70_CVetBVet.root");

}

//Merge function for Wmunu_MV0_70_CVetBVet
void Merge_Wmunu_MV0_70_CVetBVet() {

	double N = 0;
	double ID = 364156;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362629._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362629._000004.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362629._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364156.Sh221_PDF30_Wmunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362629._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV280_500_CFilBVet.root");

}

//Merge function for Wtaunu_MV280_500_CFilBVet
void Merge_Wtaunu_MV280_500_CFilBVet() {

	double N = 0;
	double ID = 364194;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362758._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362758._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362758._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364194.Sh221_PDF30_Wtaunu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362758._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV280_500_CVetBVet.root");

}

//Merge function for Zee_MV280_500_CVetBVet
void Merge_Zee_MV280_500_CVetBVet() {

	double N = 0;
	double ID = 364123;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362806._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362806._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362806._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364123.Sh221_PDF30_Zee_MV280_500_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362806._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV140_280_BFil.root");

}

//Merge function for Wenu_MV140_280_BFil
void Merge_Wenu_MV140_280_BFil() {

	double N = 0;
	double ID = 364178;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000004.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000004.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000008.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000008.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000005.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000005.hist-output.root");

	TFile *file5 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000007.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000007.hist-output.root");

	TFile *file6 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000006.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000006.hist-output.root");

	TFile *file7 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000009.hist-output.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364178.Sh221_PDF30_Wenu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14369905._000009.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV500_1000.root");

}

//Merge function for Wmunu_MV500_1000
void Merge_Wmunu_MV500_1000() {

	double N = 0;
	double ID = 364168;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362682._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364168.Sh221_PDF30_Wmunu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362682._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV140_280_BFil.root");

}

//Merge function for Zmumu_MV140_280_BFil
void Merge_Zmumu_MV140_280_BFil() {

	double N = 0;
	double ID = 364108;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000004.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000004.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000005.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000005.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000002.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000002.hist-output.root");

	TFile *file5 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000001.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364108.Sh221_PDF30_Zmumu_MV140_280_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387124._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV0_70_CFilBVet.root");

}

//Merge function for Wenu_MV0_70_CFilBVet
void Merge_Wenu_MV0_70_CFilBVet() {

	double N = 0;
	double ID = 364171;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362561._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362561._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362561._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364171.Sh221_PDF30_Wenu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362561._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV0_70_BFil.root");

}

//Merge function for Wtaunu_MV0_70_BFil
void Merge_Wtaunu_MV0_70_BFil() {

	double N = 0;
	double ID = 364186;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362692._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364186.Sh221_PDF30_Wtaunu_MV0_70_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362692._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV0_70_CFilBVet.root");

}

//Merge function for Zmumu_MV0_70_CFilBVet
void Merge_Zmumu_MV0_70_CFilBVet() {

	double N = 0;
	double ID = 364101;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000004.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000003.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000001.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364101.Sh221_PDF30_Zmumu_MV0_70_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362915._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV0_70_BFil.root");

}

//Merge function for Ztt_MV0_70_BFil
void Merge_Ztt_MV0_70_BFil() {

	double N = 0;
	double ID = 364130;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362933._000003.hist-output.root.2");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362933._000003.hist-output.root.2");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362933._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362933._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362933._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364130.Sh221_PDF30_Ztt_MV0_70_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362933._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV140_280_CFilBVet.root");

}

//Merge function for Zmumu_MV140_280_CFilBVet
void Merge_Zmumu_MV140_280_CFilBVet() {

	double N = 0;
	double ID = 364107;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362927._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362927._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362927._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362927._000003.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362927._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364107.Sh221_PDF30_Zmumu_MV140_280_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362927._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV140_280_BFil.root");

}

//Merge function for Ztt_MV140_280_BFil
void Merge_Ztt_MV140_280_BFil() {

	double N = 0;
	double ID = 364136;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362944._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362944._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362944._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364136.Sh221_PDF30_Ztt_MV140_280_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362944._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV140_280_CVetBVet.root");

}

//Merge function for Zmumu_MV140_280_CVetBVet
void Merge_Zmumu_MV140_280_CVetBVet() {

	double N = 0;
	double ID = 364106;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362897._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362897._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362897._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364106.Sh221_PDF30_Zmumu_MV140_280_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362897._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV1000_E_CMS.root");

}

//Merge function for Zmumu_MV1000_E_CMS
void Merge_Zmumu_MV1000_E_CMS() {

	double N = 0;
	double ID = 364113;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362906._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362906._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362906._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362906._000001.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362906._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362906._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV0_70_CFilBVet.root");

}

//Merge function for Zee_MV0_70_CFilBVet
void Merge_Zee_MV0_70_CFilBVet() {

	double N = 0;
	double ID = 364115;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000004.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000003.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000001.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000002.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364115.Sh221_PDF30_Zee_MV0_70_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv3_hist/user.sdysch.14387118._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV500_1000.root");

}

//Merge function for Wtaunu_MV500_1000
void Merge_Wtaunu_MV500_1000() {

	double N = 0;
	double ID = 364196;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362761._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364196.Sh221_PDF30_Wtaunu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362761._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV0_70_BFil.root");

}

//Merge function for Wmunu_MV0_70_BFil
void Merge_Wmunu_MV0_70_BFil() {

	double N = 0;
	double ID = 364158;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362613._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364158.Sh221_PDF30_Wmunu_MV0_70_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362613._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV140_280_CVetBVet.root");

}

//Merge function for Wmunu_MV140_280_CVetBVet
void Merge_Wmunu_MV140_280_CVetBVet() {

	double N = 0;
	double ID = 364162;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362640._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364162.Sh221_PDF30_Wmunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362640._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV1000_E_CMS.root");

}

//Merge function for Zee_MV1000_E_CMS
void Merge_Zee_MV1000_E_CMS() {

	double N = 0;
	double ID = 364127;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362844._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362844._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362844._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362844._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362844._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364127.Sh221_PDF30_Zee_MV1000_E_CMS.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362844._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV280_500_CVetBVet.root");

}

//Merge function for Wmunu_MV280_500_CVetBVet
void Merge_Wmunu_MV280_500_CVetBVet() {

	double N = 0;
	double ID = 364165;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362649._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364165.Sh221_PDF30_Wmunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362649._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV70_140_CFilBVet.root");

}

//Merge function for Wtaunu_MV70_140_CFilBVet
void Merge_Wtaunu_MV70_140_CFilBVet() {

	double N = 0;
	double ID = 364188;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362742._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364188.Sh221_PDF30_Wtaunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362742._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV70_140_CVetBVet.root");

}

//Merge function for Zee_MV70_140_CVetBVet
void Merge_Zee_MV70_140_CVetBVet() {

	double N = 0;
	double ID = 364117;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362796._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362796._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362796._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362796._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV280_500_BFil.root");

}

//Merge function for Ztt_MV280_500_BFil
void Merge_Ztt_MV280_500_BFil() {

	double N = 0;
	double ID = 364139;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368115._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368115._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368115._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364139.Sh221_PDF30_Ztt_MV280_500_BFil.D1.e5313_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368115._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV0_70_CVetBVet.root");

}

//Merge function for Zmumu_MV0_70_CVetBVet
void Merge_Zmumu_MV0_70_CVetBVet() {

	double N = 0;
	double ID = 364100;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362886._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362886._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362886._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364100.Sh221_PDF30_Zmumu_MV0_70_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362886._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV0_70_CFilBVet.root");

}

//Merge function for Wmunu_MV0_70_CFilBVet
void Merge_Wmunu_MV0_70_CFilBVet() {

	double N = 0;
	double ID = 364157;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362656._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362656._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362656._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364157.Sh221_PDF30_Wmunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362656._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV280_500_CVetBVet.root");

}

//Merge function for Zmumu_MV280_500_CVetBVet
void Merge_Zmumu_MV280_500_CVetBVet() {

	double N = 0;
	double ID = 364109;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362900._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362900._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362900._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362900._000003.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362900._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364109.Sh221_PDF30_Zmumu_MV280_500_CVetBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362900._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV70_140_BFil.root");

}

//Merge function for Wenu_MV70_140_BFil
void Merge_Wenu_MV70_140_BFil() {

	double N = 0;
	double ID = 364175;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362545._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362545._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362545._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364175.Sh221_PDF30_Wenu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362545._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV140_280_CVetBVet.root");

}

//Merge function for Zee_MV140_280_CVetBVet
void Merge_Zee_MV140_280_CVetBVet() {

	double N = 0;
	double ID = 364120;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362800._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362800._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362800._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362800._000001.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362800._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364120.Sh221_PDF30_Zee_MV140_280_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362800._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV0_70_CVetBVet.root");

}

//Merge function for Wtaunu_MV0_70_CVetBVet
void Merge_Wtaunu_MV0_70_CVetBVet() {

	double N = 0;
	double ID = 364184;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362716._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364184.Sh221_PDF30_Wtaunu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362716._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV70_140_CFilBVet.root");

}

//Merge function for Zee_MV70_140_CFilBVet
void Merge_Zee_MV70_140_CFilBVet() {

	double N = 0;
	double ID = 364118;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362855._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362855._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362855._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362855._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362855._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364118.Sh221_PDF30_Zee_MV70_140_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362855._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV70_140_BFil.root");

}

//Merge function for Zmumu_MV70_140_BFil
void Merge_Zmumu_MV70_140_BFil() {

	double N = 0;
	double ID = 364105;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362872._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362872._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362872._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362872._000003.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362872._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364105.Sh221_PDF30_Zmumu_MV70_140_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362872._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV500_1000.root");

}

//Merge function for Ztt_MV500_1000
void Merge_Ztt_MV500_1000() {

	double N = 0;
	double ID = 364140;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362977._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362977._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362977._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364140.Sh221_PDF30_Ztt_MV500_1000.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362977._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV70_140_BFil.root");

}

//Merge function for Ztt_MV70_140_BFil
void Merge_Ztt_MV70_140_BFil() {

	double N = 0;
	double ID = 364133;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362938._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362938._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362938._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362938._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362938._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364133.Sh221_PDF30_Ztt_MV70_140_BFil.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362938._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV70_140_CFilBVet.root");

}

//Merge function for Ztt_MV70_140_CFilBVet
void Merge_Ztt_MV70_140_CFilBVet() {

	double N = 0;
	double ID = 364132;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362990._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362990._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362990._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364132.Sh221_PDF30_Ztt_MV70_140_CFilBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362990._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV140_280_BFil.root");

}

//Merge function for Wtaunu_MV140_280_BFil
void Merge_Wtaunu_MV140_280_BFil() {

	double N = 0;
	double ID = 364192;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362704._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362704._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362704._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362704._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362704._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364192.Sh221_PDF30_Wtaunu_MV140_280_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362704._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV280_500_CFilBVet.root");

}

//Merge function for Zmumu_MV280_500_CFilBVet
void Merge_Zmumu_MV280_500_CFilBVet() {

	double N = 0;
	double ID = 364110;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362924._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364110.Sh221_PDF30_Zmumu_MV280_500_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362924._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV280_500_BFil.root");

}

//Merge function for Zee_MV280_500_BFil
void Merge_Zee_MV280_500_BFil() {

	double N = 0;
	double ID = 364125;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362787._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362787._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362787._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364125.Sh221_PDF30_Zee_MV280_500_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362787._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV70_140_CVetBVet.root");

}

//Merge function for Wenu_MV70_140_CVetBVet
void Merge_Wenu_MV70_140_CVetBVet() {

	double N = 0;
	double ID = 364173;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000005.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000005.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000001.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000002.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364173.Sh221_PDF30_Wenu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362589._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV280_500_CFilBVet.root");

}

//Merge function for Ztt_MV280_500_CFilBVet
void Merge_Ztt_MV280_500_CFilBVet() {

	double N = 0;
	double ID = 364138;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14363004._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14363004._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14363004._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364138.Sh221_PDF30_Ztt_MV280_500_CFilBVet.D1.e5313_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14363004._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV500_1000.root");

}

//Merge function for Zee_MV500_1000
void Merge_Zee_MV500_1000() {

	double N = 0;
	double ID = 364126;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362811._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362811._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362811._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364126.Sh221_PDF30_Zee_MV500_1000.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362811._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV140_280_CFilBVet.root");

}

//Merge function for Zee_MV140_280_CFilBVet
void Merge_Zee_MV140_280_CFilBVet() {

	double N = 0;
	double ID = 364121;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000004.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000004.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000001.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000002.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000003.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364121.Sh221_PDF30_Zee_MV140_280_CFilBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362860._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV0_70_CVetBVet.root");

}

//Merge function for Wenu_MV0_70_CVetBVet
void Merge_Wenu_MV0_70_CVetBVet() {

	double N = 0;
	double ID = 364170;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000005.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000005.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000004.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364170.Sh221_PDF30_Wenu_MV0_70_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362585._000004.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/b_nonallh.root");

}

//Merge function for b_nonallh
void Merge_b_nonallh() {

	double N = 0;
	double ID = 410501;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000004.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000004.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000002.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000017.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000017.hist-output.root");

	TFile *file5 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000018.hist-output.root");
	TH1F *histogram5 = (TH1F*)file5->Get("h_metadata");
	N += histogram5->GetBinContent(8);
	file5->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000018.hist-output.root");

	TFile *file6 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000007.hist-output.root");
	TH1F *histogram6 = (TH1F*)file6->Get("h_metadata");
	N += histogram6->GetBinContent(8);
	file6->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000007.hist-output.root");

	TFile *file7 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000008.hist-output.root");
	TH1F *histogram7 = (TH1F*)file7->Get("h_metadata");
	N += histogram7->GetBinContent(8);
	file7->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000008.hist-output.root");

	TFile *file8 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000019.hist-output.root");
	TH1F *histogram8 = (TH1F*)file8->Get("h_metadata");
	N += histogram8->GetBinContent(8);
	file8->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000019.hist-output.root");

	TFile *file9 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000005.hist-output.root");
	TH1F *histogram9 = (TH1F*)file9->Get("h_metadata");
	N += histogram9->GetBinContent(8);
	file9->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000005.hist-output.root");

	TFile *file10 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000009.hist-output.root");
	TH1F *histogram10 = (TH1F*)file10->Get("h_metadata");
	N += histogram10->GetBinContent(8);
	file10->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000009.hist-output.root");

	TFile *file11 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000012.hist-output.root");
	TH1F *histogram11 = (TH1F*)file11->Get("h_metadata");
	N += histogram11->GetBinContent(8);
	file11->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000012.hist-output.root");

	TFile *file12 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000011.hist-output.root");
	TH1F *histogram12 = (TH1F*)file12->Get("h_metadata");
	N += histogram12->GetBinContent(8);
	file12->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000011.hist-output.root");

	TFile *file13 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000014.hist-output.root");
	TH1F *histogram13 = (TH1F*)file13->Get("h_metadata");
	N += histogram13->GetBinContent(8);
	file13->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000014.hist-output.root");

	TFile *file14 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000016.hist-output.root");
	TH1F *histogram14 = (TH1F*)file14->Get("h_metadata");
	N += histogram14->GetBinContent(8);
	file14->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000016.hist-output.root");

	TFile *file15 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000001.hist-output.root");
	TH1F *histogram15 = (TH1F*)file15->Get("h_metadata");
	N += histogram15->GetBinContent(8);
	file15->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000001.hist-output.root");

	TFile *file16 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000006.hist-output.root");
	TH1F *histogram16 = (TH1F*)file16->Get("h_metadata");
	N += histogram16->GetBinContent(8);
	file16->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000006.hist-output.root");

	TFile *file17 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000010.hist-output.root");
	TH1F *histogram17 = (TH1F*)file17->Get("h_metadata");
	N += histogram17->GetBinContent(8);
	file17->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000010.hist-output.root");

	TFile *file18 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000013.hist-output.root");
	TH1F *histogram18 = (TH1F*)file18->Get("h_metadata");
	N += histogram18->GetBinContent(8);
	file18->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000013.hist-output.root");

	TFile *file19 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000015.hist-output.root");
	TH1F *histogram19 = (TH1F*)file19->Get("h_metadata");
	N += histogram19->GetBinContent(8);
	file19->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.410501.PoPy8_A14_ttb_nonallh.D1.e5458_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362423._000015.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wmunu_MV70_140_CFilBVet.root");

}

//Merge function for Wmunu_MV70_140_CFilBVet
void Merge_Wmunu_MV70_140_CFilBVet() {

	double N = 0;
	double ID = 364160;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000003.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000002.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000002.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000004.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364160.Sh221_PDF30_Wmunu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362661._000004.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV70_140_CVetBVet.root");

}

//Merge function for Wtaunu_MV70_140_CVetBVet
void Merge_Wtaunu_MV70_140_CVetBVet() {

	double N = 0;
	double ID = 364187;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362719._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362719._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362719._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364187.Sh221_PDF30_Wtaunu_MV70_140_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362719._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV70_140_BFil.root");

}

//Merge function for Wtaunu_MV70_140_BFil
void Merge_Wtaunu_MV70_140_BFil() {

	double N = 0;
	double ID = 364189;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362699._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362699._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362699._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364189.Sh221_PDF30_Wtaunu_MV70_140_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362699._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV70_140_CFilBVet.root");

}

//Merge function for Wenu_MV70_140_CFilBVet
void Merge_Wenu_MV70_140_CFilBVet() {

	double N = 0;
	double ID = 364174;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362568._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362568._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362568._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364174.Sh221_PDF30_Wenu_MV70_140_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362568._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV500_1000.root");

}

//Merge function for Wenu_MV500_1000
void Merge_Wenu_MV500_1000() {

	double N = 0;
	double ID = 364182;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362605._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362605._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362605._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364182.Sh221_PDF30_Wenu_MV500_1000.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362605._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV140_280_CVetBVet.root");

}

//Merge function for Ztt_MV140_280_CVetBVet
void Merge_Ztt_MV140_280_CVetBVet() {

	double N = 0;
	double ID = 364134;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368128._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368128._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368128._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364134.Sh221_PDF30_Ztt_MV140_280_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368128._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV140_280_CVetBVet.root");

}

//Merge function for Wtaunu_MV140_280_CVetBVet
void Merge_Wtaunu_MV140_280_CVetBVet() {

	double N = 0;
	double ID = 364190;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362726._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362726._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362726._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364190.Sh221_PDF30_Wtaunu_MV140_280_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362726._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee2jets_Min_N_TChannel.root");

}

//Merge function for Zee2jets_Min_N_TChannel
void Merge_Zee2jets_Min_N_TChannel() {

	double N = 0;
	double ID = 308092;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357856._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357856._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV280_500_CVetBVet.root");

}

//Merge function for Wtaunu_MV280_500_CVetBVet
void Merge_Wtaunu_MV280_500_CVetBVet() {

	double N = 0;
	double ID = 364193;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362731._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362731._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362731._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364193.Sh221_PDF30_Wtaunu_MV280_500_CVetBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362731._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV0_70_CFilBVet.root");

}

//Merge function for Wtaunu_MV0_70_CFilBVet
void Merge_Wtaunu_MV0_70_CFilBVet() {

	double N = 0;
	double ID = 364185;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362739._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364185.Sh221_PDF30_Wtaunu_MV0_70_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362739._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt2jets_Min_N_TChannel.root");

}

//Merge function for Ztt2jets_Min_N_TChannel
void Merge_Ztt2jets_Min_N_TChannel() {

	double N = 0;
	double ID = 308094;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308094.Sh221_PDF30_Ztt2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14361308._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308094.Sh221_PDF30_Ztt2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14361308._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV1000_E_CMS.root");

}

//Merge function for Wenu_MV1000_E_CMS
void Merge_Wenu_MV1000_E_CMS() {

	double N = 0;
	double ID = 364183;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362607._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362607._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362607._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362607._000002.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362607._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364183.Sh221_PDF30_Wenu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362607._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV280_500_BFil.root");

}

//Merge function for Zmumu_MV280_500_BFil
void Merge_Zmumu_MV280_500_BFil() {

	double N = 0;
	double ID = 364111;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000003.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000003.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000004.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000004.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000001.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000001.hist-output.root");

	TFile *file4 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000002.hist-output.root");
	TH1F *histogram4 = (TH1F*)file4->Get("h_metadata");
	N += histogram4->GetBinContent(8);
	file4->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364111.Sh221_PDF30_Zmumu_MV280_500_BFil.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362882._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Ztt_MV0_70_CVetBVet.root");

}

//Merge function for Ztt_MV0_70_CVetBVet
void Merge_Ztt_MV0_70_CVetBVet() {

	double N = 0;
	double ID = 364128;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362952._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362952._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362952._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364128.Sh221_PDF30_Ztt_MV0_70_CVetBVet.D1.e5307_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362952._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV500_1000.root");

}

//Merge function for Zmumu_MV500_1000
void Merge_Zmumu_MV500_1000() {

	double N = 0;
	double ID = 364112;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368109._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368109._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368109._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364112.Sh221_PDF30_Zmumu_MV500_1000.D1.e5271_s3126_r9364_r9315_p3371.sv2_hist/user.sdysch.14368109._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zmumu_MV70_140_CFilBVet.root");

}

//Merge function for Zmumu_MV70_140_CFilBVet
void Merge_Zmumu_MV70_140_CFilBVet() {

	double N = 0;
	double ID = 364104;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362919._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362919._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362919._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362919._000001.hist-output.root");

	TFile *file3 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362919._000003.hist-output.root");
	TH1F *histogram3 = (TH1F*)file3->Get("h_metadata");
	N += histogram3->GetBinContent(8);
	file3->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364104.Sh221_PDF30_Zmumu_MV70_140_CFilBVet.D1.e5271_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362919._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV280_500_CFilBVet.root");

}

//Merge function for Wenu_MV280_500_CFilBVet
void Merge_Wenu_MV280_500_CFilBVet() {

	double N = 0;
	double ID = 364180;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362580._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362580._000002.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362580._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364180.Sh221_PDF30_Wenu_MV280_500_CFilBVet.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362580._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV0_70_CVetBVet.root");

}

//Merge function for Zee_MV0_70_CVetBVet
void Merge_Zee_MV0_70_CVetBVet() {

	double N = 0;
	double ID = 364114;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362793._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362793._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362793._000003.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364114.Sh221_PDF30_Zee_MV0_70_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362793._000003.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV0_70_BFil.root");

}

//Merge function for Wenu_MV0_70_BFil
void Merge_Wenu_MV0_70_BFil() {

	double N = 0;
	double ID = 364172;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362539._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364172.Sh221_PDF30_Wenu_MV0_70_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362539._000001.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wenu_MV280_500_BFil.root");

}

//Merge function for Wenu_MV280_500_BFil
void Merge_Wenu_MV280_500_BFil() {

	double N = 0;
	double ID = 364181;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362557._000002.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364181.Sh221_PDF30_Wenu_MV280_500_BFil.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362557._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee_MV70_140_BFil.root");

}

//Merge function for Zee_MV70_140_BFil
void Merge_Zee_MV70_140_BFil() {

	double N = 0;
	double ID = 364119;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362778._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362778._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362778._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364119.Sh221_PDF30_Zee_MV70_140_BFil.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362778._000002.hist-output.root");

	NOMINAL->Merge("/pc2014-data4/alice-luca/Wtaunu_MV1000_E_CMS.root");

}

//Merge function for Wtaunu_MV1000_E_CMS
void Merge_Wtaunu_MV1000_E_CMS() {

	double N = 0;
	double ID = 364197;

	TChain *NOMINAL = new TChain("NOMINAL");

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362767._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	file1->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362767._000001.hist-output.root");

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362767._000002.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	file2->Close();

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364197.Sh221_PDF30_Wtaunu_MV1000_E_CMS.D1.e5340_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362767._000002.hist-output.root");

} 

#endif