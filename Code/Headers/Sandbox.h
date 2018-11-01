void MC_Analysis::Zee2Jets_CutAndFill() {

	//false means failed the cut, true means passed the cut

	// Initialise bool conditions
	bool Z_mass_condition = false;
	bool combined_lepton_pt = false;
	bool ljet_0_pt_greater = false;
	bool ljet_1_pt_greater = false;
	bool leading_jets_invariant_mass = false;
	bool ptvarcone_20 = false;
	bool ptvarcone_40 = false;
	bool pT_balance_limit = false;
	bool rap_int_condition = RapidityIntervalCheck(ljet_0_p4, ljet_1_p4, ljet_2_p4);

	//Z Boson Mass Cut
	if (elec_0_elec_1_mass >= 81 && elec_0_elec_1_mass <= 101 ) Z_mass_condition = true;	

	//Dilepton Pt Cut
	if (elec_0_elec_1_pt > 20) combined_lepton_pt = true;

	//Leading Jet 1 (ljet_0) Cut Condition 
	if (ljet_0_p4->Pt() > 50) ljet_0_pt_greater = true;

	//Leading Jet 2 (ljet_1) Cut Condition
	if (ljet_1_p4->Pt() > 50) ljet_1_pt_greater = true;

	//Leading Jets Combined Invariant mass
	if (ljet_0_ljet_1_mass > 250) leading_jets_invariant_mass = true; // invariant mass of 2 leading jets required to satisfy m_jj > 250 GeV

	//ptvarcone cuts
	if (elec_0_iso_ptvarcone20 < 0.1) ptvarcone_20 = true; 
	if (elec_0_iso_ptvarcone40 < 0.1) ptvarcone_40 = true; 

	//Initialise Common Cuts bool
	bool common_cuts = false;

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		common_cuts = true;

	}

	if(//Z_mass_condition && 		// Z Boson Mass Cut ABSENT
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		double value;//Fill the EXCEPT histogram for mass

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   //combined_lepton_pt && 		// Dilepton Pt Cut ABSENT
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition 
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		double value;//Fill the EXCEPT histogram for combined lepton pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   //ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition ABSENT
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		double value;//Fill the EXCEPT histogram for ljet_0_pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   //ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition ABSENT
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		double value;//Fill the EXCEPT histogram for ljet_1_pt

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   //leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass ABSENT
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		double value;//Fill the EXCEPT histogram for leading jets combined invariant mass

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   //ptvarcone_20 && 			// ptvarcone_20 Cut ABSENT
	   ptvarcone_40)			// ptvarcone_40 Cut
	{
	
		double value;//Fill the EXCEPT histogram for ptvarcone20

	}

	if(Z_mass_condition && 			// Z Boson Mass Cut
	   combined_lepton_pt && 		// Dilepton Pt Cut
	   ljet_0_pt_greater && 		// Leading Jet 1 (ljet_0) Cut Condition
	   ljet_1_pt_greater && 		// Leading Jet 2 (ljet_1) Cut Condition
	   leading_jets_invariant_mass && 	// Leading Jets Combined Invariant mass
	   ptvarcone_20 && 			// ptvarcone_20 Cut
	   //ptvarcone_40			// ptvarcone_40 Cut ABSENT
	) {
	
		double value;//Fill the EXCEPT histogram for ptvarcone40

	}

	if (common_cuts && rap_int_condition) {

		#include "_FillAllData_PostCut.h"

		//ptvar cone histograms
		h_elec_0_iso_ptvarcone20->Fill(elec_0_iso_ptvarcone20);
		h_elec_0_iso_ptvarcone40->Fill(elec_0_iso_ptvarcone40);

		//topoet cone histograms
		h_elec_0_iso_topoetcone20->Fill(elec_0_iso_topoetcone20);
		h_elec_0_iso_topoetcone40->Fill(elec_0_iso_topoetcone40);

		//Invariant mass
		h_elec_0_elec_1_mass->Fill(elec_0_elec_1_mass); // two electrons
		h_ljet_0_ljet_1_mass->Fill(ljet_0_ljet_1_mass); // two jets

		//Combined lepton (electron) pT
		h_elec_0_elec_1_pt->Fill(elec_0_elec_1_pt);

		//Delta R for two electrons
		h_DeltaR->Fill(DeltaR);

		// pT balance
		h_pT_balance->Fill(pT_balance);	

	}
	
	else if (common_cuts && !(rap_int_condition)) {

		#include "_FillAllData_ControlCut.h"

		//Invariant mass
		h_elec_0_elec_1_mass_CONTROL->Fill(elec_0_elec_1_mass); // two electrons
		h_ljet_0_ljet_1_mass_CONTROL->Fill(ljet_0_ljet_1_mass); // two jets

		//Combined lepton (electron) pT
		h_elec_0_elec_1_pt_CONTROL->Fill(elec_0_elec_1_pt);

		//Delta R for two electrons
		h_DeltaR_CONTROL->Fill(DeltaR);

		// pT balance CONTROL
		h_pT_balance_CONTROL->Fill(pT_balance);

	}


}
