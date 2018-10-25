#ifndef AddChainFriend_h
#define AddChainFriend_h

void MC_Analysis::MergerTest() {

	TChain *NOMINAL = new TChain("NOMINAL");  //The name inside TChain("NOMINAL") is what's important here
	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308092.Sh221_PDF30_Zee2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357856._000001.hist-output.root/NOMINAL");
	NOMINAL->Add("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc/user.sdysch.v5.0.mc16_13TeV.308093.Sh221_PDF30_Zmm2jets_Min_N_TChannel.D1.e5767_e5984_s3126_r9364_r9315_p3563.sv1_hist/user.sdysch.14357860._000001.hist-output.root/NOMINAL");
	NOMINAL->Merge("/pc2014-data4/alice-luca/Zee2Jets_Zmmm2Jets_Combo.root");
}


#endif