#ifndef AddChainFriend_h
#define AddChainFriend_h

void MergerTest() {

	double N = 0;

	TFile *file1 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357856._000001.hist-output.root");
	TH1F *histogram1 = (TH1F*)file1->Get("h_metadata");
	N += histogram1->GetBinContent(8);
	cout << "N = " << N << endl;

	TFile *file2 = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362796._000001.hist-output.root");
	TH1F *histogram2 = (TH1F*)file2->Get("h_metadata");
	N += histogram2->GetBinContent(8);
	cout << "N = " << N << endl;

	TChain *NOMINAL = new TChain("NOMINAL");  //The name inside TChain("NOMINAL") is what's important here

	//When adding to the TChain, need to use the following
	//NOMINAL->Add("path/NOMINAL");

	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357856._000001.hist-output.root/NOMINAL");
	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.364117.Sh221_PDF30_Zee_MV70_140_CVetBVet.D1.e5299_s3126_r9364_r9315_p3371.sv1_hist/user.sdysch.14362796._000001.hist-output.root/NOMINAL");
	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee2Jets_Zee2Jets_Combo.root");
}


#endif
