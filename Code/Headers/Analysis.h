#ifndef Analysis_h
#define Analysis_h

///--------------------- ORDER OF OPERATIONS ---------------------------///
///	1. Book Histograms
///	2. Initial Selection Cut
///	3. Generate Variables
///	4. Fill Histograms Pre Selection Cut
///	5. Selection Cut
///	6. Fill Histograms Post Selection Cut
///	7. Draw/Save Histograms

//This function will book all relevant histograms
void MC_Analysis::BookHistos() {

	int bins = 50;
	int PtMin = 0; //GeV/c
	int PtMax = 1000; //GeV/c
	int PhiMin = -4;
	int PhiMax = 4;
	int RapidityMin = -4;
	int RapidityMax = 4;
	int EtaMin = -4;
	int EtaMax = 4;

	/////----------------------------------BOOKINGS------------------------------------/////

	#include "_BookHistos.h"

	///------------------------------------ lep_0 --------------------------------------///
	//ptvar cone histograms
	Book_lep_0_iso_ptvarcone40(bins, 0, 20000);
	Book_lep_0_iso_ptvarcone40_PRE(bins, 0, 20000);
	Book_lep_0_iso_ptvarcone40_CONTROL(bins, 0, 20000);
	Book_lep_0_iso_ptvarcone40_EXCEPT(bins, 0, 20000);
	Book_lep_1_iso_ptvarcone40(bins, 0, 20000);
	Book_lep_1_iso_ptvarcone40_PRE(bins, 0, 20000);
	Book_lep_1_iso_ptvarcone40_CONTROL(bins, 0, 20000);
	Book_lep_1_iso_ptvarcone40_EXCEPT(bins, 0, 20000);
	///-------------------------------- lep_0 & lep_1 ----------------------------------///
	//dilepton invariant mass
	Book_lep_0_lep_1_mass_EXCEPT(bins, 0, 200);
	Book_lep_0_lep_1_mass_CONTROL(bins, 0, 200);
	Book_lep_0_lep_1_mass_PRE(bins, 0, 200);
	Book_lep_0_lep_1_mass(bins, 0, 200);

	//dilepton rapidity
	Book_RapidityDilepton_CONTROL(bins, 0, 4.5);
	Book_RapidityDilepton_PRE(bins, 0, 4.5);
	Book_RapidityDilepton(bins, 0, 4.5);

	//diljet rapidity
	Book_RapidityDijet_CONTROL(bins, 0, 4.5);
	Book_RapidityDijet_PRE(bins, 0, 4.5);
	Book_RapidityDijet(bins, 0, 4.5);

	//dilepton pt
	Book_lep_0_lep_1_pt_EXCEPT(bins, 0, 300);
	Book_lep_0_lep_1_pt_CONTROL(bins, 0, 300);
	Book_lep_0_lep_1_pt_PRE(bins, 0, 300);
	Book_lep_0_lep_1_pt(bins, 0, 300);

	///---------------------------------- Delta R ----------------------------------------///

	Book_DeltaR(bins, 0, 10);
	Book_DeltaR_PRE(bins, 0, 10);
	Book_DeltaR_CONTROL(bins, 0, 10);

	///---------------------------------ljet_0 & ljet_1-----------------------------------///

	Book_ljet_0_ljet_1_mass_EXCEPT(bins, 0, 4500);
	Book_ljet_0_ljet_1_mass_CONTROL(bins, 0, 4500);
	Book_ljet_0_ljet_1_mass_PRE(bins, 0, 4500);
	Book_ljet_0_ljet_1_mass(bins, 0, 4500);

	///------------------ pT balance for lep_0 & lep_1 ljet_0 & ljet_1-----------------///

	Book_pT_balance_PRE(bins, 0, 1);
	Book_pT_balance(bins, 0, 1);
	Book_pT_balance_CONTROL(bins, 0, 1);
	Book_pT_balance_EXCEPT(bins, 0, 1);

	///------------------ pT balance 3 for lep_0 & lep_1 ljet_0 & ljet_1 & ljet_2 -----------------///

	Book_pT_balance_3_PRE(bins, 0, 1);
	Book_pT_balance_3(bins, 0, 1);
	Book_pT_balance_3_CONTROL(bins, 0, 1);
	Book_pT_balance_3_EXCEPT(bins, 0, 1);

	///------------------Centrality plot for Z boson inside rapidity interval of ljet_0 & ljet_1 -----------------///

	Book_Centrality_PRE(bins, -8, 8);
	Book_Centrality(bins, -8, 8);
	Book_Centrality_CONTROL(bins, -8, 8);

}

void MC_Analysis::ParticleSelection() {

	if (desired_particles == "ee") {

		lep_0 = & elec_0;
		lep_0_iso_ptvarcone40 = elec_0_iso_ptvarcone40;
		lep_0_p4 = elec_0_p4;
		lep_0_q = & elec_0_q;	

		lep_1 = & elec_1;
		lep_1_iso_ptvarcone40 = elec_1_iso_ptvarcone40;
		lep_1_p4 = elec_1_p4;
		lep_1_q = & elec_1_q;	
	
		n_leptons = n_electrons;

	}

	if (desired_particles == "mm") {

		lep_0 = & muon_0;
		lep_0_iso_ptvarcone40 = muon_0_iso_ptvarcone40;
		lep_0_p4 = muon_0_p4;
		lep_0_q = & muon_0_q;	

		lep_1 = & muon_1;
		lep_1_iso_ptvarcone40 = muon_1_iso_ptvarcone40;
		lep_1_p4 = muon_1_p4;
		lep_1_q = & muon_1_q;	
	
		n_leptons = n_muons;

	}

	if (desired_particles == "em" || desired_particles == "me") {

		lep_0 = & muon_0;
		lep_0_iso_ptvarcone40 = muon_0_iso_ptvarcone40;
		lep_0_p4 = muon_0_p4;
		lep_0_q = & muon_0_q;	

		lep_1 = & elec_0;
		lep_1_iso_ptvarcone40 = elec_0_iso_ptvarcone40;
		lep_1_p4 = elec_0_p4;
		lep_1_q = & elec_0_q;	

		if (n_muons == 1 && n_electrons == 1) n_leptons = n_muons + n_electrons;
		else n_leptons = 0;

	}


	// TAU analysis here:
	if (desired_particles == "tt") {

		if (n_taus == 2) { // tautau
			lep_0 = & tau_0;
			lep_0_iso_ptvarcone40 = 0;
			lep_0_p4 = tau_0_p4;
			lep_0_q = & tau_0_q;

			lep_1 = & tau_1;	
			lep_1_iso_ptvarcone40 = 0;
			lep_1_p4 = tau_1_p4;
			lep_1_q = & tau_1_q;

			n_leptons = n_taus; 
		}
		else if (n_taus == 1 && n_electrons == 1) { // etau
			lep_0 = & tau_0; 
			lep_0_iso_ptvarcone40 = 0;
			lep_0_p4 = tau_0_p4;
			lep_0_q = & tau_0_q;

			lep_1 = & elec_0;
			lep_1_iso_ptvarcone40 = elec_0_iso_ptvarcone40;
			lep_1_p4 = elec_0_p4;
			lep_1_q = & elec_0_q;

			n_leptons = n_taus + n_electrons; 
		}
		else if (n_taus == 1 && n_muons == 1) { // mtau
			lep_0 = & tau_0; 
			lep_0_iso_ptvarcone40 = 0;
			lep_0_p4 = tau_0_p4;
			lep_0_q = & tau_0_q;

			lep_1 = & muon_0;
			lep_1_iso_ptvarcone40 = muon_0_iso_ptvarcone40;
			lep_1_p4 = muon_0_p4;
			lep_1_q = & muon_0_q;

			n_leptons = n_taus + n_muons; 
		}
		else if (n_taus == 0 && n_muons == 1 && n_electrons == 1) { // em/me

			lep_0 = & muon_0;
			lep_0_iso_ptvarcone40 = muon_0_iso_ptvarcone40;
			lep_0_p4 = muon_0_p4;
			lep_0_q = & muon_0_q;	

			lep_1 = & elec_0;
			lep_1_iso_ptvarcone40 = elec_0_iso_ptvarcone40;
			lep_1_p4 = elec_0_p4;
			lep_1_q = & elec_0_q;	
			n_leptons = n_muons + n_electrons; 
		}
		else n_leptons = 0;

	}

}


//This function will perform the inital cuts, ensuring we have all the particles needed for analysis
bool MC_Analysis::InitialCut() {

	//Setting up conditions
	bool two_leptons = false;
	bool two_or_more_jets = false;
	bool leptons_opposite_charges = false;
	bool no_bjets = false;
	bool lep1_momentum = false;
	bool lep1_eta = false;
	bool lep0_momentum = false;
	bool lep0_eta = false;

	//Condition Checking
	if (n_leptons == 2) { //If two leptons are found
		two_leptons = true;
		if (& lep_0_q != & lep_1_q) leptons_opposite_charges = true;  //If lepton +/- pair found
	}

	if (n_bjets == 0) no_bjets = true;  //If there are no bjets
	if (n_jets >= 2) two_or_more_jets = true;  //If two or more jets were found

	// If the conditions are met, don't cut
	if (two_leptons && two_or_more_jets && leptons_opposite_charges && no_bjets) return false; ///  && elec1_momentum  && elec1_eta  && elec0_momentum && elec0_eta
	//Otherwise, cut
	return true;	

}

//This function will generate variables, put them in a vector, and return said vector
void MC_Analysis::GenerateVariables() {

	//Invariant Mass
	lep_0_lep_1_mass = InvariantMass(lep_0_p4, lep_1_p4);
	ljet_0_ljet_1_mass = InvariantMass(ljet_0_p4, ljet_1_p4);

	//Delta R
	DeltaR = DeltaRCalc(lep_0_p4, lep_1_p4);

	// Rapidity of dilepton pair
	RapidityDilepton = RapidityDisomething(lep_0_p4, lep_1_p4);

	// Rapidity of dijet pair
	RapidityDijet = RapidityDisomething(ljet_0_p4, ljet_1_p4);

	//Combined Lepton momentum
	lep_0_lep_1_pt = CombinedTransverseMomentum(lep_0_p4, lep_1_p4);

	// p_T_Balance 
	pT_balance = pTBalanceCalc(lep_0_p4, lep_1_p4, ljet_0_p4, ljet_1_p4);
	
	// p_T_Balance_3
	pT_balance_3 = pTBalanceThreeCalc(lep_0_p4, lep_1_p4, ljet_0_p4, ljet_1_p4, ljet_2_p4);
	
	// Centrality of Z boson between two leading jets calc using rapidity
	Centrality = CentralityCalc(lep_0_p4, lep_1_p4, ljet_0_p4, ljet_1_p4);

	//Final Weighting
	final_weighting = Luminosity_Weight * weight_total;
  
}

// This function will fill the histograms that need to be filled before cuts are made
void MC_Analysis::FillAllData_PreCut() {

	if (weight_total_override) weight_total = 1;

	#include "_FillAllData_PreCut.h"

	//ptvarcones
	h_lep_1_iso_ptvarcone40_PRE->Fill(lep_1_iso_ptvarcone40, final_weighting);
	h_lep_0_iso_ptvarcone40_PRE->Fill(lep_0_iso_ptvarcone40, final_weighting);


	//Invariant mass
	h_lep_0_lep_1_mass_PRE->Fill(lep_0_lep_1_mass, final_weighting);
	h_ljet_0_ljet_1_mass_PRE->Fill(ljet_0_ljet_1_mass, final_weighting);

	// Combined
	h_RapidityDilepton_PRE->Fill(RapidityDilepton, final_weighting);// dilepton rapidity
	h_RapidityDijet_PRE->Fill(RapidityDijet, final_weighting);// dijet rapidity	
	h_lep_0_lep_1_pt_PRE->Fill(lep_0_lep_1_pt, final_weighting);

	//Delta R
	h_DeltaR_PRE->Fill(DeltaR, final_weighting);

	// pT balance PRE
	h_pT_balance_PRE->Fill(pT_balance, final_weighting);

	// pT balance 3 PRE
	h_pT_balance_3_PRE->Fill(pT_balance, final_weighting);

	// Centrality
	h_Centrality_PRE->Fill(Centrality, final_weighting);
}

void MC_Analysis::CutAndFill() {

	if (weight_total_override) weight_total = 1;

	//false means failed the cut, true means passed the cut

	// Initialise common bool conditions
	bool Z_mass_condition = false;
	bool combined_lepton_pt = false;
	bool ljet_0_pt_greater = false;
	bool ljet_1_pt_greater = false;
	bool leading_jets_invariant_mass = false;
	bool ptvarcone_40_0 = false;
	bool ptvarcone_40_1 = false;

	//Initialise specific bool conditions
	bool pT_balance_limit = false;
	bool pT_balance_3_limit = false;
	bool rap_int_condition = RapidityIntervalCheck(ljet_0_p4, ljet_1_p4, ljet_2_p4);

	//Z Boson Mass Cut
	if (lep_0_lep_1_mass >= 81 && lep_0_lep_1_mass <= 101 ) Z_mass_condition = true;	

	//Dilepton Pt Cut
	if (lep_0_lep_1_pt > 20) combined_lepton_pt = true;

	//Leading Jet 1 (ljet_0) Cut Condition 
	if (ljet_0_p4->Pt() > 55) ljet_0_pt_greater = true;

	//Leading Jet 2 (ljet_1) Cut Condition
	if (ljet_1_p4->Pt() > 45) ljet_1_pt_greater = true;

	// Dijjet mass = Leading Jets Combined Invariant mass
	if (ljet_0_ljet_1_mass > 250) leading_jets_invariant_mass = true; // invariant mass of 2 leading jets required to satisfy m_jj > 250 GeV

	//pt balance limit Cut Condition
	if (pT_balance < 0.15) pT_balance_limit = true;

	//pt balance 3 Cut Condition
	if (pT_balance_3 < 0.15) pT_balance_3_limit = true;

	//ptvarcone cuts
	if (lep_0_iso_ptvarcone40 < 0.1) ptvarcone_40_0 = true; 
	if (lep_1_iso_ptvarcone40 < 0.1) ptvarcone_40_1 = true; 

	//Initialise Common Cuts bool
	bool common_cuts = false;

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 && 			// ptvarcone_40_0 Cut
	   ptvarcone_40_1)			// ptvarcone_40_1 Cut
	{
	
		common_cuts = true;

	}

	if(//Z_mass_condition && 		// Z Boson Mass Cut ABSENT
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 && 			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 &&			// ptvarcone_40_1 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_lep_0_lep_1_mass_EXCEPT->Fill(lep_0_lep_1_mass, final_weighting);//Fill the EXCEPT histogram for mass

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   //combined_lepton_pt && 		// Dilepton Pt Cut ABSENT
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 && 			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 &&			// ptvarcone_40_1 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_lep_0_lep_1_pt_EXCEPT->Fill(lep_0_lep_1_pt, final_weighting);//Fill the EXCEPT histogram for combined lepton pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   //ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition ABSENT
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 && 			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 &&			// ptvarcone_40_1 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_ljet_0_p4_Pt_EXCEPT->Fill(ljet_0_p4->Pt(), final_weighting);//Fill the EXCEPT histogram for ljet_0_pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   //ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition ABSENT
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 && 			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 &&			// ptvarcone_40_1 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_ljet_1_p4_Pt_EXCEPT->Fill(ljet_1_p4->Pt(), final_weighting);//Fill the EXCEPT histogram for ljet_1_pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   //leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass ABSENT
	   ptvarcone_40_0 && 			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 &&			// ptvarcone_40_1 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_ljet_0_ljet_1_mass_EXCEPT->Fill(ljet_0_ljet_1_mass, final_weighting);//Fill the EXCEPT histogram for leading jets combined invariant mass

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 && 			// ptvarcone_40_0 Cut ABSENT
	   ptvarcone_40_1 &&			// ptvarcone_40_1 Cut
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{

		h_lep_1_iso_ptvarcone40_EXCEPT->Fill(lep_1_iso_ptvarcone40, final_weighting);

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 &&			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 && 			// ptvarcone_40_1 Cut ABSENT
	   rap_int_condition &&			// rapidity interval condition
	   pT_balance_limit)			// pT balance limit
	{
	
		h_lep_0_iso_ptvarcone40_EXCEPT->Fill(lep_0_iso_ptvarcone40, final_weighting);

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 &&			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 && 			// ptvarcone_40_1 Cut
	   rap_int_condition			// rapidity interval condition
	   //pT_balance_limit)			// pT balance limit ABSENT
	) {
	
		h_pT_balance_EXCEPT->Fill(pT_balance, final_weighting);

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_40_0 &&			// ptvarcone_40_0 Cut
	   ptvarcone_40_1 && 			// ptvarcone_40_1 Cut ABSENT
	   !(rap_int_condition)			// rapidity interval condition
	   //pT_balance_3_limit)		// pT balance 3 limit
	) {
	
		h_pT_balance_3_EXCEPT->Fill(pT_balance_3, final_weighting);

	}

	if (common_cuts && rap_int_condition && pT_balance_limit) {

		#include "_FillAllData_PostCut.h"

		//ptvar cone histograms
		h_lep_1_iso_ptvarcone40->Fill(lep_1_iso_ptvarcone40, final_weighting);
		h_lep_0_iso_ptvarcone40->Fill(lep_0_iso_ptvarcone40, final_weighting);

		//Invariant mass
		h_lep_0_lep_1_mass->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
		h_ljet_0_ljet_1_mass->Fill(ljet_0_ljet_1_mass, final_weighting); // two jets

		//Combined lepton
		h_RapidityDilepton->Fill(RapidityDilepton, final_weighting);// (elec) dilepton rapidity
		h_RapidityDijet->Fill(RapidityDijet, final_weighting);// (jet) dijet rapidity
		h_lep_0_lep_1_pt->Fill(lep_0_lep_1_pt, final_weighting);

		//Delta R for two electrons
		h_DeltaR->Fill(DeltaR, final_weighting);

		// pT balance
		h_pT_balance->Fill(pT_balance, final_weighting);	

		if(pT_balance > 0.15) cout << "HOW COULD THIS HAPPEN TO ME" << endl;

		// Centrality
		h_Centrality->Fill(Centrality, final_weighting);

	}
	
	else if (common_cuts && !(rap_int_condition) && pT_balance_3_limit) {

		#include "_FillAllData_ControlCut.h"

		//ptvar cone histograms
		h_lep_1_iso_ptvarcone40_CONTROL->Fill(lep_1_iso_ptvarcone40, final_weighting);
		h_lep_0_iso_ptvarcone40_CONTROL->Fill(lep_0_iso_ptvarcone40, final_weighting);


		//Invariant mass
		h_lep_0_lep_1_mass_CONTROL->Fill(lep_0_lep_1_mass, final_weighting); // two electrons
		h_ljet_0_ljet_1_mass_CONTROL->Fill(ljet_0_ljet_1_mass, final_weighting); // two jets

		//Combined 
		h_RapidityDilepton_CONTROL->Fill(RapidityDilepton, final_weighting); // lepton (elec) dilepton rapidity
		h_RapidityDijet_CONTROL->Fill(RapidityDijet, final_weighting); // ljet dijet rapidity
		h_lep_0_lep_1_pt_CONTROL->Fill(lep_0_lep_1_pt, final_weighting);

		//Delta R for two electrons
		h_DeltaR_CONTROL->Fill(DeltaR, final_weighting);

		// pT balance CONTROL
		h_pT_balance_3_CONTROL->Fill(pT_balance_3, final_weighting);
		
		// Centrality CONTROL
		h_Centrality_CONTROL->Fill(Centrality, final_weighting);

	}


}

//This functinon will Draw all the histograms, and write them to a file
void MC_Analysis::DrawHistos() {

	TFile *Histograms;
	string ROOTFilePath = "../../Root-Files/" + AnalysisType + "/" + ChainName + "_Histograms.root";

	if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 1) Histograms = new TFile(ROOTFilePath.c_str(),"NEW");
	else if (gSystem->AccessPathName(ROOTFilePath.c_str()) == 0) Histograms = new TFile(ROOTFilePath.c_str(),"RECREATE");
	else cout << "HOW DID THIS HAPPEN TO ME" << endl;

	//Draw histogram function takes the following:
	//DrawHistogram(histogram, canvas name, histogram name, x axis title, canvas x size, canvas y size, bool for log y axis, output file name)
	#include "_DrawHistos.h"

	//ptvar cone histograms
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_1_iso_ptvarcone40_PRE, h_lep_1_iso_ptvarcone40, h_lep_1_iso_ptvarcone40_CONTROL, h_lep_1_iso_ptvarcone40_EXCEPT, "ptvarcone40 for lepton 1", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_1_iso_ptvarcone40", "h_lep_1_iso_ptvarcone40", ";Momentum [GeV/c];Events", 600, 400, true, "h_lep_1_iso_ptvarcone40_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_iso_ptvarcone40_PRE, h_lep_0_iso_ptvarcone40, h_lep_0_iso_ptvarcone40_CONTROL, h_lep_0_iso_ptvarcone40_EXCEPT, "ptvarcone40 for lepton 0", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_iso_ptvarcone40", "h_lep_0_iso_ptvarcone40", ";Momentum [GeV/c];Events", 600, 400, true, "h_lep_0_iso_ptvarcone40_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	

	// lep 0 & lep 1 invariant mass 
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_mass_PRE, h_lep_0_lep_1_mass, h_lep_0_lep_1_mass_CONTROL, h_lep_0_lep_1_mass_EXCEPT, "Dilepton Pair Invariant Mass", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_mass", "h_lep_0_lep_1_mass", ";Invariant Mass [GeV/c^{2}];Events", 600, 400, true, "h_lep_0_lep_1_mass_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);
	
	//combined lepton lep 0 & lep 1 momentum
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_lep_0_lep_1_pt_PRE, h_lep_0_lep_1_pt, h_lep_0_lep_1_pt_CONTROL, h_lep_0_lep_1_pt_EXCEPT, "Combined Lepton Momentum", "Pre Cut", "Post Cut", "Control", "Except", "h_lep_0_lep_1_pt", "h_lep_0_lep_1_pt", ";Momentum [GeV/c];Events", 600, 400, false, "h_lep_0_lep_1_pt_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	
	
	//leading jets ljet_0 ljet_1 invariant masses
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_0_ljet_1_mass_PRE, h_ljet_0_ljet_1_mass, h_ljet_0_ljet_1_mass_CONTROL, h_ljet_0_ljet_1_mass_EXCEPT, "Leading Jets Combined Invariant Mass", "Pre Cut", "Post Cut", "Control", "Except", "h_ljet_0_ljet_1_mass", "h_ljet_0_ljet_1_mass", ";Invariant Mass [GeV/c^{2}];Events", 600, 400, false, "h_ljet_0_ljet_1_mass_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	//leading jets ljet_0 ljet_1 transverse momentum < already exists in DrawHistos.h
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_0_p4_Pt_PRE, h_ljet_0_p4_Pt, h_ljet_0_p4_Pt_CONTROL, h_ljet_0_p4_Pt_EXCEPT, "Leading Jet Pt", "Pre Cut", "Post Cut", "Control", "Except", "h_ljet_0_p4_Pt", "h_ljet_0_p4_Pt", ";Momentum [GeV/c];Events", 600, 400, false, "h_ljet_0_p4_Pt_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_ljet_1_p4_Pt_PRE, h_ljet_1_p4_Pt, h_ljet_1_p4_Pt_CONTROL, h_ljet_1_p4_Pt_EXCEPT, "Subleading Jet Pt", "Pre Cut", "Post Cut", "Control", "Except", "h_ljet_1_p4_Pt", "h_ljet_1_p4_Pt", ";Momentum [GeV/c];Events", 600, 400, false, "h_ljet_1_p4_Pt_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	// Dilepton Rapidity
	DrawHistogram_Quiet(h_RapidityDilepton_PRE, "h_RapidityDilepton_PRE", "h_RapidityDilepton_PRE", ";Dilepton Rapidity [rads];Events", 600, 400, false, "h_RapidityDilepton_PRE_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDilepton, "h_RapidityDilepton", "h_RapidityDilepton", ";Dilepton Rapidity [rads];Events", 600, 400, false, "h_RapidityDilepton_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDilepton_CONTROL, "h_RapidityDilepton_CONTROL", "h_RapidityDilepton_CONTROL", ";Dilepton Rapidity [rads];Events", 600, 400, false, "h_RapidityDilepton_CONTROL_" + ChainName + ".pdf", ChainName, AnalysisType);

	// Dijet Rapidity
	DrawHistogram_Quiet(h_RapidityDijet_PRE, "h_RapidityDijet_PRE", "h_RapidityDijet_PRE", ";Dijet Rapidity [rads];Events", 600, 400, false, "h_RapidityDijet_PRE_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDijet, "h_RapidityDijet", "h_RapidityDijet", ";Events", 600, 400, false, "h_RapidityDijet_" + ChainName + ".pdf", ChainName, AnalysisType);
	DrawHistogram_Quiet(h_RapidityDijet_CONTROL, "h_RapidityDijet_CONTROL", "h_RapidityDijet_CONTROL", ";Dijet Rapidity [rads];Events", 600, 400, false, "h_RapidityDijet_CONTROL_" + ChainName + ".pdf", ChainName, AnalysisType);

	//Delta R Histograms
	DrawHistogram_PRE_SEARCH_CONTROL(h_DeltaR_PRE, h_DeltaR, h_DeltaR_CONTROL, "\\Delta R", "Pre-Cut", "Post Cut", "Control", "h_DeltaR", "h_DeltaR", ";Delta R;Events", 600, 400, false, "h_DeltaR_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	// pT balance
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_PRE, h_pT_balance, h_pT_balance_CONTROL, h_pT_balance_EXCEPT, "p_{T}^{balance}", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance", "h_pT_balance", ";pT Balance;Events", 600, 400, false, "h_pT_balance_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	// pT balance 3
	DrawHistogram_PRE_SEARCH_CONTROL_EXCEPT(h_pT_balance_3_PRE, h_pT_balance_3, h_pT_balance_3_CONTROL, h_pT_balance_3_EXCEPT, "p_{T}^{balance, 3}", "Pre Cut", "Post Cut", "Control", "Except", "h_pT_balance_3", "h_pT_balance_3", ";pT Balance 3;Events", 600, 400, false, "h_pT_balance_3_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);	

	// Centrality histograms
	DrawHistogram_PRE_SEARCH_CONTROL(h_Centrality_PRE, h_Centrality, h_Centrality_CONTROL, "\\Centrality", "Pre-Cut", "Post Cut", "Control", "h_Centrality", "h_Centrality", ";Centrality;Events", 600, 400, false, "h_Centrality_" + ChainName + "_Combo.pdf", ChainName, AnalysisType);

	Histograms->Close();

}

#endif
