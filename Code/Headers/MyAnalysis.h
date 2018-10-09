//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Sep 25 16:20:24 2018 by ROOT version 6.10/04
// from TTree NOMINAL/NOMINAL
// found on file: /pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/data/user.sdysch.v5.0.data16_13TeV.00311481.physics_Main.D1.r9264_p3083_p3372.sv1.1_hist/user.sdysch.14363946._000001.hist-output.root
//////////////////////////////////////////////////////////

#ifndef MyAnalysis_h
#define MyAnalysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TLorentzVector.h"
#include "TVector3.h"

class MyAnalysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

/////////////////////////////////////////////////////////////////////////////
///---------------------- HISTOGRAM DEFINITIONS --------------------------///
/////////////////////////////////////////////////////////////////////////////

   TH1F           *h_e0_pT;
   TH1F		  *h_e1_pT;
   TH1F		  *h_e0e1_MX;

   TH1F           *h_u0_pT;
   TH1F		  *h_u1_pT;
   TH1F		  *h_u0u1_MX;

/////////////////////////////////////////////////////////////////////////////
///----------------- END OF HISTOGRAM DEFINITIONS ------------------------///
/////////////////////////////////////////////////////////////////////////////

///////////DO NOT CHANGE ANYTHING BELOW THIS LINE FOR NOW///////////////////

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          HLT_e120_lhloose;
   UInt_t          HLT_e140_lhloose_nod0;
   UInt_t          HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo;
   UInt_t          HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo;
   UInt_t          HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo;
   UInt_t          HLT_e24_lhmedium_L1EM20VH;
   UInt_t          HLT_e24_lhmedium_nod0_L1EM20VH;
   UInt_t          HLT_e24_lhtight_nod0_ivarloose;
   UInt_t          HLT_e26_lhtight_nod0_ivarloose;
   UInt_t          HLT_e60_lhmedium;
   UInt_t          HLT_e60_lhmedium_nod0;
   UInt_t          HLT_mu20_iloose_L1MU15;
   UInt_t          HLT_mu24_imedium;
   UInt_t          HLT_mu24_ivarmedium;
   UInt_t          HLT_mu26_imedium;
   UInt_t          HLT_mu26_ivarmedium;
   UInt_t          HLT_mu40;
   UInt_t          HLT_mu50;
   UInt_t          bjet_0;
   Int_t           bjet_0_b_tag_quantile;
   Float_t         bjet_0_b_tag_score;
   Int_t           bjet_0_b_tagged;
   Float_t         bjet_0_fjvt;
   Int_t           bjet_0_flavorlabel;
   Int_t           bjet_0_flavorlabel_cone;
   Int_t           bjet_0_flavorlabel_part;
   Int_t           bjet_0_is_Jvt_HS;
   Float_t         bjet_0_jvt;
   Int_t           bjet_0_origin;
   TLorentzVector  *bjet_0_p4;
   Float_t         bjet_0_q;
   Int_t           bjet_0_type;
   Float_t         bjet_0_width;
   UInt_t          bjet_1;
   Int_t           bjet_1_b_tag_quantile;
   Float_t         bjet_1_b_tag_score;
   Int_t           bjet_1_b_tagged;
   Float_t         bjet_1_fjvt;
   Int_t           bjet_1_flavorlabel;
   Int_t           bjet_1_flavorlabel_cone;
   Int_t           bjet_1_flavorlabel_part;
   Int_t           bjet_1_is_Jvt_HS;
   Float_t         bjet_1_jvt;
   Int_t           bjet_1_origin;
   TLorentzVector  *bjet_1_p4;
   Float_t         bjet_1_q;
   Int_t           bjet_1_type;
   Float_t         bjet_1_width;
   UInt_t          eleTrigMatch_0_HLT_e120_lhloose;
   UInt_t          eleTrigMatch_0_HLT_e140_lhloose_nod0;
   UInt_t          eleTrigMatch_0_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo;
   UInt_t          eleTrigMatch_0_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo;
   UInt_t          eleTrigMatch_0_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo;
   UInt_t          eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH;
   UInt_t          eleTrigMatch_0_HLT_e24_lhmedium_nod0_L1EM20VH;
   UInt_t          eleTrigMatch_0_HLT_e24_lhtight_nod0_ivarloose;
   UInt_t          eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose;
   UInt_t          eleTrigMatch_0_HLT_e60_lhmedium;
   UInt_t          eleTrigMatch_0_HLT_e60_lhmedium_nod0;
   UInt_t          eleTrigMatch_0_trigger_matched;
   UInt_t          eleTrigMatch_1_HLT_e120_lhloose;
   UInt_t          eleTrigMatch_1_HLT_e140_lhloose_nod0;
   UInt_t          eleTrigMatch_1_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo;
   UInt_t          eleTrigMatch_1_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo;
   UInt_t          eleTrigMatch_1_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo;
   UInt_t          eleTrigMatch_1_HLT_e24_lhmedium_L1EM20VH;
   UInt_t          eleTrigMatch_1_HLT_e24_lhmedium_nod0_L1EM20VH;
   UInt_t          eleTrigMatch_1_HLT_e24_lhtight_nod0_ivarloose;
   UInt_t          eleTrigMatch_1_HLT_e26_lhtight_nod0_ivarloose;
   UInt_t          eleTrigMatch_1_HLT_e60_lhmedium;
   UInt_t          eleTrigMatch_1_HLT_e60_lhmedium_nod0;
   UInt_t          eleTrigMatch_1_trigger_matched;
   UInt_t          elec_0;
   Float_t         elec_0_PLI_score;
   Float_t         elec_0_PLV_score;
   Float_t         elec_0_cluster_eta;
   Float_t         elec_0_cluster_eta_be2;
   Int_t           elec_0_id_bad;
   Int_t           elec_0_id_loose;
   Int_t           elec_0_id_medium;
   Int_t           elec_0_id_tight;
   Int_t           elec_0_id_veryloose;
   UInt_t          elec_0_iso_FixedCutHighPtCaloOnly;
   UInt_t          elec_0_iso_FixedCutHighPtTrackOnly;
   UInt_t          elec_0_iso_FixedCutLoose;
   UInt_t          elec_0_iso_FixedCutTight;
   UInt_t          elec_0_iso_FixedCutTightTrackOnly;
   UInt_t          elec_0_iso_FixedCutTrackCone40;
   UInt_t          elec_0_iso_Gradient;
   UInt_t          elec_0_iso_GradientLoose;
   UInt_t          elec_0_iso_Loose;
   UInt_t          elec_0_iso_LooseTrackOnly;
   Float_t         elec_0_iso_etcone20;
   Float_t         elec_0_iso_etcone30;
   Float_t         elec_0_iso_etcone40;
   Float_t         elec_0_iso_ptcone20;
   Float_t         elec_0_iso_ptcone30;
   Float_t         elec_0_iso_ptcone40;
   Float_t         elec_0_iso_ptvarcone20;
   Float_t         elec_0_iso_ptvarcone30;
   Float_t         elec_0_iso_ptvarcone40;
   Float_t         elec_0_iso_topoetcone20;
   Float_t         elec_0_iso_topoetcone30;
   Float_t         elec_0_iso_topoetcone40;
   Int_t           elec_0_muonAuthor;
   Int_t           elec_0_muonType;
   Int_t           elec_0_origin;
   TLorentzVector  *elec_0_p4;
   Float_t         elec_0_q;
   Float_t         elec_0_trk_d0;
   Float_t         elec_0_trk_d0_sig;
   Float_t         elec_0_trk_pt_error;
   Float_t         elec_0_trk_pvx_z0;
   Float_t         elec_0_trk_pvx_z0_sig;
   Float_t         elec_0_trk_pvx_z0_sintheta;
   Int_t           elec_0_trk_vx;
   TVector3        *elec_0_trk_vx_v;
   Float_t         elec_0_trk_z0;
   Float_t         elec_0_trk_z0_sig;
   Float_t         elec_0_trk_z0_sintheta;
   Int_t           elec_0_type;
   UInt_t          elec_1;
   Float_t         elec_1_PLI_score;
   Float_t         elec_1_PLV_score;
   Float_t         elec_1_cluster_eta;
   Float_t         elec_1_cluster_eta_be2;
   Int_t           elec_1_id_bad;
   Int_t           elec_1_id_loose;
   Int_t           elec_1_id_medium;
   Int_t           elec_1_id_tight;
   Int_t           elec_1_id_veryloose;
   UInt_t          elec_1_iso_FixedCutHighPtCaloOnly;
   UInt_t          elec_1_iso_FixedCutHighPtTrackOnly;
   UInt_t          elec_1_iso_FixedCutLoose;
   UInt_t          elec_1_iso_FixedCutTight;
   UInt_t          elec_1_iso_FixedCutTightTrackOnly;
   UInt_t          elec_1_iso_FixedCutTrackCone40;
   UInt_t          elec_1_iso_Gradient;
   UInt_t          elec_1_iso_GradientLoose;
   UInt_t          elec_1_iso_Loose;
   UInt_t          elec_1_iso_LooseTrackOnly;
   Float_t         elec_1_iso_etcone20;
   Float_t         elec_1_iso_etcone30;
   Float_t         elec_1_iso_etcone40;
   Float_t         elec_1_iso_ptcone20;
   Float_t         elec_1_iso_ptcone30;
   Float_t         elec_1_iso_ptcone40;
   Float_t         elec_1_iso_ptvarcone20;
   Float_t         elec_1_iso_ptvarcone30;
   Float_t         elec_1_iso_ptvarcone40;
   Float_t         elec_1_iso_topoetcone20;
   Float_t         elec_1_iso_topoetcone30;
   Float_t         elec_1_iso_topoetcone40;
   Int_t           elec_1_muonAuthor;
   Int_t           elec_1_muonType;
   Int_t           elec_1_origin;
   TLorentzVector  *elec_1_p4;
   Float_t         elec_1_q;
   Float_t         elec_1_trk_d0;
   Float_t         elec_1_trk_d0_sig;
   Float_t         elec_1_trk_pt_error;
   Float_t         elec_1_trk_pvx_z0;
   Float_t         elec_1_trk_pvx_z0_sig;
   Float_t         elec_1_trk_pvx_z0_sintheta;
   Int_t           elec_1_trk_vx;
   TVector3        *elec_1_trk_vx_v;
   Float_t         elec_1_trk_z0;
   Float_t         elec_1_trk_z0_sig;
   Float_t         elec_1_trk_z0_sintheta;
   Int_t           elec_1_type;
   Int_t           event_clean_detector_core;
   ULong64_t       event_number;
   UInt_t          lb_number;
   UInt_t          ljet_0;
   Int_t           ljet_0_b_tag_quantile;
   Float_t         ljet_0_b_tag_score;
   Int_t           ljet_0_b_tagged;
   Float_t         ljet_0_fjvt;
   Int_t           ljet_0_flavorlabel;
   Int_t           ljet_0_flavorlabel_cone;
   Int_t           ljet_0_flavorlabel_part;
   Int_t           ljet_0_is_Jvt_HS;
   Float_t         ljet_0_jvt;
   Int_t           ljet_0_origin;
   TLorentzVector  *ljet_0_p4;
   Float_t         ljet_0_q;
   Int_t           ljet_0_type;
   Float_t         ljet_0_width;
   UInt_t          ljet_1;
   Int_t           ljet_1_b_tag_quantile;
   Float_t         ljet_1_b_tag_score;
   Int_t           ljet_1_b_tagged;
   Float_t         ljet_1_fjvt;
   Int_t           ljet_1_flavorlabel;
   Int_t           ljet_1_flavorlabel_cone;
   Int_t           ljet_1_flavorlabel_part;
   Int_t           ljet_1_is_Jvt_HS;
   Float_t         ljet_1_jvt;
   Int_t           ljet_1_origin;
   TLorentzVector  *ljet_1_p4;
   Float_t         ljet_1_q;
   Int_t           ljet_1_type;
   Float_t         ljet_1_width;
   UInt_t          ljet_2;
   Int_t           ljet_2_b_tag_quantile;
   Float_t         ljet_2_b_tag_score;
   Int_t           ljet_2_b_tagged;
   Float_t         ljet_2_fjvt;
   Int_t           ljet_2_flavorlabel;
   Int_t           ljet_2_flavorlabel_cone;
   Int_t           ljet_2_flavorlabel_part;
   Int_t           ljet_2_is_Jvt_HS;
   Float_t         ljet_2_jvt;
   Int_t           ljet_2_origin;
   TLorentzVector  *ljet_2_p4;
   Float_t         ljet_2_q;
   Int_t           ljet_2_type;
   Float_t         ljet_2_width;
   UInt_t          ljet_3;
   Int_t           ljet_3_b_tag_quantile;
   Float_t         ljet_3_b_tag_score;
   Int_t           ljet_3_b_tagged;
   Float_t         ljet_3_fjvt;
   Int_t           ljet_3_flavorlabel;
   Int_t           ljet_3_flavorlabel_cone;
   Int_t           ljet_3_flavorlabel_part;
   Int_t           ljet_3_is_Jvt_HS;
   Float_t         ljet_3_jvt;
   Int_t           ljet_3_origin;
   TLorentzVector  *ljet_3_p4;
   Float_t         ljet_3_q;
   Int_t           ljet_3_type;
   Float_t         ljet_3_width;
   TLorentzVector  *met_hpto_p4;
   Float_t         met_more_met_et_ele;
   Float_t         met_more_met_et_jet;
   Float_t         met_more_met_et_muon;
   Float_t         met_more_met_et_pho;
   Float_t         met_more_met_et_soft;
   Float_t         met_more_met_et_tau;
   Float_t         met_more_met_phi_ele;
   Float_t         met_more_met_phi_jet;
   Float_t         met_more_met_phi_muon;
   Float_t         met_more_met_phi_pho;
   Float_t         met_more_met_phi_soft;
   Float_t         met_more_met_phi_tau;
   Float_t         met_more_met_sumet_ele;
   Float_t         met_more_met_sumet_jet;
   Float_t         met_more_met_sumet_muon;
   Float_t         met_more_met_sumet_pho;
   Float_t         met_more_met_sumet_soft;
   Float_t         met_more_met_sumet_tau;
   TLorentzVector  *met_reco_p4;
   Float_t         met_reco_sig;
   Float_t         met_reco_sig_tracks;
   Float_t         met_reco_sumet;
   UInt_t          muTrigMatch_0_HLT_mu20_iloose_L1MU15;
   UInt_t          muTrigMatch_0_HLT_mu24_imedium;
   UInt_t          muTrigMatch_0_HLT_mu24_ivarmedium;
   UInt_t          muTrigMatch_0_HLT_mu26_imedium;
   UInt_t          muTrigMatch_0_HLT_mu26_ivarmedium;
   UInt_t          muTrigMatch_0_HLT_mu40;
   UInt_t          muTrigMatch_0_HLT_mu50;
   UInt_t          muTrigMatch_0_trigger_matched;
   UInt_t          muTrigMatch_1_HLT_mu20_iloose_L1MU15;
   UInt_t          muTrigMatch_1_HLT_mu24_imedium;
   UInt_t          muTrigMatch_1_HLT_mu24_ivarmedium;
   UInt_t          muTrigMatch_1_HLT_mu26_imedium;
   UInt_t          muTrigMatch_1_HLT_mu26_ivarmedium;
   UInt_t          muTrigMatch_1_HLT_mu40;
   UInt_t          muTrigMatch_1_HLT_mu50;
   UInt_t          muTrigMatch_1_trigger_matched;
   UInt_t          muon_0;
   Float_t         muon_0_PLI_score;
   Float_t         muon_0_PLV_score;
   Float_t         muon_0_cluster_eta;
   Float_t         muon_0_cluster_eta_be2;
   Int_t           muon_0_id_bad;
   Int_t           muon_0_id_loose;
   Int_t           muon_0_id_medium;
   Int_t           muon_0_id_tight;
   Int_t           muon_0_id_veryloose;
   UInt_t          muon_0_iso_FixedCutHighPtCaloOnly;
   UInt_t          muon_0_iso_FixedCutHighPtTrackOnly;
   UInt_t          muon_0_iso_FixedCutLoose;
   UInt_t          muon_0_iso_FixedCutTight;
   UInt_t          muon_0_iso_FixedCutTightTrackOnly;
   UInt_t          muon_0_iso_FixedCutTrackCone40;
   UInt_t          muon_0_iso_Gradient;
   UInt_t          muon_0_iso_GradientLoose;
   UInt_t          muon_0_iso_Loose;
   UInt_t          muon_0_iso_LooseTrackOnly;
   Float_t         muon_0_iso_etcone20;
   Float_t         muon_0_iso_etcone30;
   Float_t         muon_0_iso_etcone40;
   Float_t         muon_0_iso_ptcone20;
   Float_t         muon_0_iso_ptcone30;
   Float_t         muon_0_iso_ptcone40;
   Float_t         muon_0_iso_ptvarcone20;
   Float_t         muon_0_iso_ptvarcone30;
   Float_t         muon_0_iso_ptvarcone40;
   Float_t         muon_0_iso_topoetcone20;
   Float_t         muon_0_iso_topoetcone30;
   Float_t         muon_0_iso_topoetcone40;
   Int_t           muon_0_muonAuthor;
   Int_t           muon_0_muonType;
   Int_t           muon_0_origin;
   TLorentzVector  *muon_0_p4;
   Float_t         muon_0_q;
   Float_t         muon_0_trk_d0;
   Float_t         muon_0_trk_d0_sig;
   Float_t         muon_0_trk_pt_error;
   Float_t         muon_0_trk_pvx_z0;
   Float_t         muon_0_trk_pvx_z0_sig;
   Float_t         muon_0_trk_pvx_z0_sintheta;
   Int_t           muon_0_trk_vx;
   TVector3        *muon_0_trk_vx_v;
   Float_t         muon_0_trk_z0;
   Float_t         muon_0_trk_z0_sig;
   Float_t         muon_0_trk_z0_sintheta;
   Int_t           muon_0_type;
   UInt_t          muon_1;
   Float_t         muon_1_PLI_score;
   Float_t         muon_1_PLV_score;
   Float_t         muon_1_cluster_eta;
   Float_t         muon_1_cluster_eta_be2;
   Int_t           muon_1_id_bad;
   Int_t           muon_1_id_loose;
   Int_t           muon_1_id_medium;
   Int_t           muon_1_id_tight;
   Int_t           muon_1_id_veryloose;
   UInt_t          muon_1_iso_FixedCutHighPtCaloOnly;
   UInt_t          muon_1_iso_FixedCutHighPtTrackOnly;
   UInt_t          muon_1_iso_FixedCutLoose;
   UInt_t          muon_1_iso_FixedCutTight;
   UInt_t          muon_1_iso_FixedCutTightTrackOnly;
   UInt_t          muon_1_iso_FixedCutTrackCone40;
   UInt_t          muon_1_iso_Gradient;
   UInt_t          muon_1_iso_GradientLoose;
   UInt_t          muon_1_iso_Loose;
   UInt_t          muon_1_iso_LooseTrackOnly;
   Float_t         muon_1_iso_etcone20;
   Float_t         muon_1_iso_etcone30;
   Float_t         muon_1_iso_etcone40;
   Float_t         muon_1_iso_ptcone20;
   Float_t         muon_1_iso_ptcone30;
   Float_t         muon_1_iso_ptcone40;
   Float_t         muon_1_iso_ptvarcone20;
   Float_t         muon_1_iso_ptvarcone30;
   Float_t         muon_1_iso_ptvarcone40;
   Float_t         muon_1_iso_topoetcone20;
   Float_t         muon_1_iso_topoetcone30;
   Float_t         muon_1_iso_topoetcone40;
   Int_t           muon_1_muonAuthor;
   Int_t           muon_1_muonType;
   Int_t           muon_1_origin;
   TLorentzVector  *muon_1_p4;
   Float_t         muon_1_q;
   Float_t         muon_1_trk_d0;
   Float_t         muon_1_trk_d0_sig;
   Float_t         muon_1_trk_pt_error;
   Float_t         muon_1_trk_pvx_z0;
   Float_t         muon_1_trk_pvx_z0_sig;
   Float_t         muon_1_trk_pvx_z0_sintheta;
   Int_t           muon_1_trk_vx;
   TVector3        *muon_1_trk_vx_v;
   Float_t         muon_1_trk_z0;
   Float_t         muon_1_trk_z0_sig;
   Float_t         muon_1_trk_z0_sintheta;
   Int_t           muon_1_type;
   Float_t         n_actual_int;
   Float_t         n_avg_int;
   Float_t         n_avg_int_cor;
   Int_t           n_bjets;
   Int_t           n_electrons;
   Int_t           n_electrons_met;
   Int_t           n_electrons_olr;
   Int_t           n_jets;
   Int_t           n_jets_30;
   Int_t           n_jets_40;
   Int_t           n_jets_bad;
   Int_t           n_jets_mc_hs;
   Int_t           n_jets_met;
   Int_t           n_jets_olr;
   Int_t           n_muons;
   Int_t           n_muons_met;
   Int_t           n_muons_olr;
   Int_t           n_photons;
   Int_t           n_photons_met;
   Int_t           n_photons_olr;
   Int_t           n_pvx;
   Int_t           n_taus;
   Int_t           n_taus_loose;
   Int_t           n_taus_medium;
   Int_t           n_taus_met;
   Int_t           n_taus_olr;
   Int_t           n_taus_tight;
   Int_t           n_vx;
   UInt_t          run_number;
   UInt_t          tau_0;
   Float_t         tau_0_PTV_score;
   Float_t         tau_0_allTrk_eta;
   UInt_t          tau_0_allTrk_n;
   Float_t         tau_0_allTrk_phi;
   Float_t         tau_0_allTrk_pt;
   Float_t         tau_0_b_tag_score;
   Int_t           tau_0_b_tagged;
   UInt_t          tau_0_decay_mode;
   Float_t         tau_0_ele_BDTEleScoreTrans_run2;
   UInt_t          tau_0_ele_bdt_loose;
   UInt_t          tau_0_ele_bdt_medium;
   Float_t         tau_0_ele_bdt_score;
   UInt_t          tau_0_ele_bdt_tight;
   Float_t         tau_0_ele_match_lhscore;
   UInt_t          tau_0_ele_olr_pass;
   UInt_t          tau_0_jet_bdt_loose;
   UInt_t          tau_0_jet_bdt_medium;
   Float_t         tau_0_jet_bdt_score;
   Float_t         tau_0_jet_bdt_score_trans;
   UInt_t          tau_0_jet_bdt_tight;
   Float_t         tau_0_jet_jvt;
   Float_t         tau_0_jet_width;
   Float_t         tau_0_leadTrk_eta;
   Float_t         tau_0_leadTrk_phi;
   Float_t         tau_0_leadTrk_pt;
   UInt_t          tau_0_n_all_tracks;
   UInt_t          tau_0_n_charged_tracks;
   UInt_t          tau_0_n_conversion_tracks;
   UInt_t          tau_0_n_core_tracks;
   UInt_t          tau_0_n_failTrackFilter_tracks;
   UInt_t          tau_0_n_fake_tracks;
   UInt_t          tau_0_n_isolation_tracks;
   UInt_t          tau_0_n_modified_isolation_tracks;
   UInt_t          tau_0_n_old_tracks;
   UInt_t          tau_0_n_passTrkSelectionTight_tracks;
   UInt_t          tau_0_n_passTrkSelector_tracks;
   UInt_t          tau_0_n_unclassified_tracks;
   UInt_t          tau_0_n_wide_tracks;
   Int_t           tau_0_origin;
   TLorentzVector  *tau_0_p4;
   Float_t         tau_0_q;
   Int_t           tau_0_type;
   UInt_t          tau_1;
   Float_t         tau_1_PTV_score;
   Float_t         tau_1_allTrk_eta;
   UInt_t          tau_1_allTrk_n;
   Float_t         tau_1_allTrk_phi;
   Float_t         tau_1_allTrk_pt;
   Float_t         tau_1_b_tag_score;
   Int_t           tau_1_b_tagged;
   UInt_t          tau_1_decay_mode;
   Float_t         tau_1_ele_BDTEleScoreTrans_run2;
   UInt_t          tau_1_ele_bdt_loose;
   UInt_t          tau_1_ele_bdt_medium;
   Float_t         tau_1_ele_bdt_score;
   UInt_t          tau_1_ele_bdt_tight;
   Float_t         tau_1_ele_match_lhscore;
   UInt_t          tau_1_ele_olr_pass;
   UInt_t          tau_1_jet_bdt_loose;
   UInt_t          tau_1_jet_bdt_medium;
   Float_t         tau_1_jet_bdt_score;
   Float_t         tau_1_jet_bdt_score_trans;
   UInt_t          tau_1_jet_bdt_tight;
   Float_t         tau_1_jet_jvt;
   Float_t         tau_1_jet_width;
   Float_t         tau_1_leadTrk_eta;
   Float_t         tau_1_leadTrk_phi;
   Float_t         tau_1_leadTrk_pt;
   UInt_t          tau_1_n_all_tracks;
   UInt_t          tau_1_n_charged_tracks;
   UInt_t          tau_1_n_conversion_tracks;
   UInt_t          tau_1_n_core_tracks;
   UInt_t          tau_1_n_failTrackFilter_tracks;
   UInt_t          tau_1_n_fake_tracks;
   UInt_t          tau_1_n_isolation_tracks;
   UInt_t          tau_1_n_modified_isolation_tracks;
   UInt_t          tau_1_n_old_tracks;
   UInt_t          tau_1_n_passTrkSelectionTight_tracks;
   UInt_t          tau_1_n_passTrkSelector_tracks;
   UInt_t          tau_1_n_unclassified_tracks;
   UInt_t          tau_1_n_wide_tracks;
   Int_t           tau_1_origin;
   TLorentzVector  *tau_1_p4;
   Float_t         tau_1_q;
   Int_t           tau_1_type;

   // List of branches
   TBranch        *b_HLT_e120_lhloose;   //!
   TBranch        *b_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo;   //!
   TBranch        *b_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo;   //!
   TBranch        *b_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo;   //!
   TBranch        *b_HLT_e24_lhmedium_L1EM20VH;   //!
   TBranch        *b_HLT_e24_lhmedium_nod0_L1EM20VH;   //!
   TBranch        *b_HLT_e24_lhtight_nod0_ivarloose;   //!
   TBranch        *b_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_HLT_e60_lhmedium;   //!
   TBranch        *b_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_HLT_mu24_imedium;   //!
   TBranch        *b_HLT_mu24_ivarmedium;   //!
   TBranch        *b_HLT_mu26_imedium;   //!
   TBranch        *b_HLT_mu26_ivarmedium;   //!
   TBranch        *b_HLT_mu40;   //!
   TBranch        *b_HLT_mu50;   //!
   TBranch        *b_bjet_0;   //!
   TBranch        *b_bjet_0_b_tag_quantile;   //!
   TBranch        *b_bjet_0_b_tag_score;   //!
   TBranch        *b_bjet_0_b_tagged;   //!
   TBranch        *b_bjet_0_fjvt;   //!
   TBranch        *b_bjet_0_flavorlabel;   //!
   TBranch        *b_bjet_0_flavorlabel_cone;   //!
   TBranch        *b_bjet_0_flavorlabel_part;   //!
   TBranch        *b_bjet_0_is_Jvt_HS;   //!
   TBranch        *b_bjet_0_jvt;   //!
   TBranch        *b_bjet_0_origin;   //!
   TBranch        *b_bjet_0_p4;   //!
   TBranch        *b_bjet_0_q;   //!
   TBranch        *b_bjet_0_type;   //!
   TBranch        *b_bjet_0_width;   //!
   TBranch        *b_bjet_1;   //!
   TBranch        *b_bjet_1_b_tag_quantile;   //!
   TBranch        *b_bjet_1_b_tag_score;   //!
   TBranch        *b_bjet_1_b_tagged;   //!
   TBranch        *b_bjet_1_fjvt;   //!
   TBranch        *b_bjet_1_flavorlabel;   //!
   TBranch        *b_bjet_1_flavorlabel_cone;   //!
   TBranch        *b_bjet_1_flavorlabel_part;   //!
   TBranch        *b_bjet_1_is_Jvt_HS;   //!
   TBranch        *b_bjet_1_jvt;   //!
   TBranch        *b_bjet_1_origin;   //!
   TBranch        *b_bjet_1_p4;   //!
   TBranch        *b_bjet_1_q;   //!
   TBranch        *b_bjet_1_type;   //!
   TBranch        *b_bjet_1_width;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e120_lhloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e24_lhmedium_nod0_L1EM20VH;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e24_lhtight_nod0_ivarloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e60_lhmedium;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_eleTrigMatch_0_trigger_matched;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e120_lhloose;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e24_lhmedium_L1EM20VH;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e24_lhmedium_nod0_L1EM20VH;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e24_lhtight_nod0_ivarloose;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e60_lhmedium;   //!
   TBranch        *b_eleTrigMatch_1_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_eleTrigMatch_1_trigger_matched;   //!
   TBranch        *b_elec_0;   //!
   TBranch        *b_elec_0_PLI_score;   //!
   TBranch        *b_elec_0_PLV_score;   //!
   TBranch        *b_elec_0_cluster_eta;   //!
   TBranch        *b_elec_0_cluster_eta_be2;   //!
   TBranch        *b_elec_0_id_bad;   //!
   TBranch        *b_elec_0_id_loose;   //!
   TBranch        *b_elec_0_id_medium;   //!
   TBranch        *b_elec_0_id_tight;   //!
   TBranch        *b_elec_0_id_veryloose;   //!
   TBranch        *b_elec_0_iso_FixedCutHighPtCaloOnly;   //!
   TBranch        *b_elec_0_iso_FixedCutHighPtTrackOnly;   //!
   TBranch        *b_elec_0_iso_FixedCutLoose;   //!
   TBranch        *b_elec_0_iso_FixedCutTight;   //!
   TBranch        *b_elec_0_iso_FixedCutTightTrackOnly;   //!
   TBranch        *b_elec_0_iso_FixedCutTrackCone40;   //!
   TBranch        *b_elec_0_iso_Gradient;   //!
   TBranch        *b_elec_0_iso_GradientLoose;   //!
   TBranch        *b_elec_0_iso_Loose;   //!
   TBranch        *b_elec_0_iso_LooseTrackOnly;   //!
   TBranch        *b_elec_0_iso_etcone20;   //!
   TBranch        *b_elec_0_iso_etcone30;   //!
   TBranch        *b_elec_0_iso_etcone40;   //!
   TBranch        *b_elec_0_iso_ptcone20;   //!
   TBranch        *b_elec_0_iso_ptcone30;   //!
   TBranch        *b_elec_0_iso_ptcone40;   //!
   TBranch        *b_elec_0_iso_ptvarcone20;   //!
   TBranch        *b_elec_0_iso_ptvarcone30;   //!
   TBranch        *b_elec_0_iso_ptvarcone40;   //!
   TBranch        *b_elec_0_iso_topoetcone20;   //!
   TBranch        *b_elec_0_iso_topoetcone30;   //!
   TBranch        *b_elec_0_iso_topoetcone40;   //!
   TBranch        *b_elec_0_muonAuthor;   //!
   TBranch        *b_elec_0_muonType;   //!
   TBranch        *b_elec_0_origin;   //!
   TBranch        *b_elec_0_p4;   //!
   TBranch        *b_elec_0_q;   //!
   TBranch        *b_elec_0_trk_d0;   //!
   TBranch        *b_elec_0_trk_d0_sig;   //!
   TBranch        *b_elec_0_trk_pt_error;   //!
   TBranch        *b_elec_0_trk_pvx_z0;   //!
   TBranch        *b_elec_0_trk_pvx_z0_sig;   //!
   TBranch        *b_elec_0_trk_pvx_z0_sintheta;   //!
   TBranch        *b_elec_0_trk_vx;   //!
   TBranch        *b_elec_0_trk_vx_v;   //!
   TBranch        *b_elec_0_trk_z0;   //!
   TBranch        *b_elec_0_trk_z0_sig;   //!
   TBranch        *b_elec_0_trk_z0_sintheta;   //!
   TBranch        *b_elec_0_type;   //!
   TBranch        *b_elec_1;   //!
   TBranch        *b_elec_1_PLI_score;   //!
   TBranch        *b_elec_1_PLV_score;   //!
   TBranch        *b_elec_1_cluster_eta;   //!
   TBranch        *b_elec_1_cluster_eta_be2;   //!
   TBranch        *b_elec_1_id_bad;   //!
   TBranch        *b_elec_1_id_loose;   //!
   TBranch        *b_elec_1_id_medium;   //!
   TBranch        *b_elec_1_id_tight;   //!
   TBranch        *b_elec_1_id_veryloose;   //!
   TBranch        *b_elec_1_iso_FixedCutHighPtCaloOnly;   //!
   TBranch        *b_elec_1_iso_FixedCutHighPtTrackOnly;   //!
   TBranch        *b_elec_1_iso_FixedCutLoose;   //!
   TBranch        *b_elec_1_iso_FixedCutTight;   //!
   TBranch        *b_elec_1_iso_FixedCutTightTrackOnly;   //!
   TBranch        *b_elec_1_iso_FixedCutTrackCone40;   //!
   TBranch        *b_elec_1_iso_Gradient;   //!
   TBranch        *b_elec_1_iso_GradientLoose;   //!
   TBranch        *b_elec_1_iso_Loose;   //!
   TBranch        *b_elec_1_iso_LooseTrackOnly;   //!
   TBranch        *b_elec_1_iso_etcone20;   //!
   TBranch        *b_elec_1_iso_etcone30;   //!
   TBranch        *b_elec_1_iso_etcone40;   //!
   TBranch        *b_elec_1_iso_ptcone20;   //!
   TBranch        *b_elec_1_iso_ptcone30;   //!
   TBranch        *b_elec_1_iso_ptcone40;   //!
   TBranch        *b_elec_1_iso_ptvarcone20;   //!
   TBranch        *b_elec_1_iso_ptvarcone30;   //!
   TBranch        *b_elec_1_iso_ptvarcone40;   //!
   TBranch        *b_elec_1_iso_topoetcone20;   //!
   TBranch        *b_elec_1_iso_topoetcone30;   //!
   TBranch        *b_elec_1_iso_topoetcone40;   //!
   TBranch        *b_elec_1_muonAuthor;   //!
   TBranch        *b_elec_1_muonType;   //!
   TBranch        *b_elec_1_origin;   //!
   TBranch        *b_elec_1_p4;   //!
   TBranch        *b_elec_1_q;   //!
   TBranch        *b_elec_1_trk_d0;   //!
   TBranch        *b_elec_1_trk_d0_sig;   //!
   TBranch        *b_elec_1_trk_pt_error;   //!
   TBranch        *b_elec_1_trk_pvx_z0;   //!
   TBranch        *b_elec_1_trk_pvx_z0_sig;   //!
   TBranch        *b_elec_1_trk_pvx_z0_sintheta;   //!
   TBranch        *b_elec_1_trk_vx;   //!
   TBranch        *b_elec_1_trk_vx_v;   //!
   TBranch        *b_elec_1_trk_z0;   //!
   TBranch        *b_elec_1_trk_z0_sig;   //!
   TBranch        *b_elec_1_trk_z0_sintheta;   //!
   TBranch        *b_elec_1_type;   //!
   TBranch        *b_event_clean_detector_core;   //!
   TBranch        *b_event_number;   //!
   TBranch        *b_lb_number;   //!
   TBranch        *b_ljet_0;   //!
   TBranch        *b_ljet_0_b_tag_quantile;   //!
   TBranch        *b_ljet_0_b_tag_score;   //!
   TBranch        *b_ljet_0_b_tagged;   //!
   TBranch        *b_ljet_0_fjvt;   //!
   TBranch        *b_ljet_0_flavorlabel;   //!
   TBranch        *b_ljet_0_flavorlabel_cone;   //!
   TBranch        *b_ljet_0_flavorlabel_part;   //!
   TBranch        *b_ljet_0_is_Jvt_HS;   //!
   TBranch        *b_ljet_0_jvt;   //!
   TBranch        *b_ljet_0_origin;   //!
   TBranch        *b_ljet_0_p4;   //!
   TBranch        *b_ljet_0_q;   //!
   TBranch        *b_ljet_0_type;   //!
   TBranch        *b_ljet_0_width;   //!
   TBranch        *b_ljet_1;   //!
   TBranch        *b_ljet_1_b_tag_quantile;   //!
   TBranch        *b_ljet_1_b_tag_score;   //!
   TBranch        *b_ljet_1_b_tagged;   //!
   TBranch        *b_ljet_1_fjvt;   //!
   TBranch        *b_ljet_1_flavorlabel;   //!
   TBranch        *b_ljet_1_flavorlabel_cone;   //!
   TBranch        *b_ljet_1_flavorlabel_part;   //!
   TBranch        *b_ljet_1_is_Jvt_HS;   //!
   TBranch        *b_ljet_1_jvt;   //!
   TBranch        *b_ljet_1_origin;   //!
   TBranch        *b_ljet_1_p4;   //!
   TBranch        *b_ljet_1_q;   //!
   TBranch        *b_ljet_1_type;   //!
   TBranch        *b_ljet_1_width;   //!
   TBranch        *b_ljet_2;   //!
   TBranch        *b_ljet_2_b_tag_quantile;   //!
   TBranch        *b_ljet_2_b_tag_score;   //!
   TBranch        *b_ljet_2_b_tagged;   //!
   TBranch        *b_ljet_2_fjvt;   //!
   TBranch        *b_ljet_2_flavorlabel;   //!
   TBranch        *b_ljet_2_flavorlabel_cone;   //!
   TBranch        *b_ljet_2_flavorlabel_part;   //!
   TBranch        *b_ljet_2_is_Jvt_HS;   //!
   TBranch        *b_ljet_2_jvt;   //!
   TBranch        *b_ljet_2_origin;   //!
   TBranch        *b_ljet_2_p4;   //!
   TBranch        *b_ljet_2_q;   //!
   TBranch        *b_ljet_2_type;   //!
   TBranch        *b_ljet_2_width;   //!
   TBranch        *b_ljet_3;   //!
   TBranch        *b_ljet_3_b_tag_quantile;   //!
   TBranch        *b_ljet_3_b_tag_score;   //!
   TBranch        *b_ljet_3_b_tagged;   //!
   TBranch        *b_ljet_3_fjvt;   //!
   TBranch        *b_ljet_3_flavorlabel;   //!
   TBranch        *b_ljet_3_flavorlabel_cone;   //!
   TBranch        *b_ljet_3_flavorlabel_part;   //!
   TBranch        *b_ljet_3_is_Jvt_HS;   //!
   TBranch        *b_ljet_3_jvt;   //!
   TBranch        *b_ljet_3_origin;   //!
   TBranch        *b_ljet_3_p4;   //!
   TBranch        *b_ljet_3_q;   //!
   TBranch        *b_ljet_3_type;   //!
   TBranch        *b_ljet_3_width;   //!
   TBranch        *b_met_hpto_p4;   //!
   TBranch        *b_met_more_met_et_ele;   //!
   TBranch        *b_met_more_met_et_jet;   //!
   TBranch        *b_met_more_met_et_muon;   //!
   TBranch        *b_met_more_met_et_pho;   //!
   TBranch        *b_met_more_met_et_soft;   //!
   TBranch        *b_met_more_met_et_tau;   //!
   TBranch        *b_met_more_met_phi_ele;   //!
   TBranch        *b_met_more_met_phi_jet;   //!
   TBranch        *b_met_more_met_phi_muon;   //!
   TBranch        *b_met_more_met_phi_pho;   //!
   TBranch        *b_met_more_met_phi_soft;   //!
   TBranch        *b_met_more_met_phi_tau;   //!
   TBranch        *b_met_more_met_sumet_ele;   //!
   TBranch        *b_met_more_met_sumet_jet;   //!
   TBranch        *b_met_more_met_sumet_muon;   //!
   TBranch        *b_met_more_met_sumet_pho;   //!
   TBranch        *b_met_more_met_sumet_soft;   //!
   TBranch        *b_met_more_met_sumet_tau;   //!
   TBranch        *b_met_reco_p4;   //!
   TBranch        *b_met_reco_sig;   //!
   TBranch        *b_met_reco_sig_tracks;   //!
   TBranch        *b_met_reco_sumet;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu24_imedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu24_ivarmedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu26_imedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu26_ivarmedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu40;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu50;   //!
   TBranch        *b_muTrigMatch_0_trigger_matched;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu24_imedium;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu24_ivarmedium;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu26_imedium;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu26_ivarmedium;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu40;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu50;   //!
   TBranch        *b_muTrigMatch_1_trigger_matched;   //!
   TBranch        *b_muon_0;   //!
   TBranch        *b_muon_0_PLI_score;   //!
   TBranch        *b_muon_0_PLV_score;   //!
   TBranch        *b_muon_0_cluster_eta;   //!
   TBranch        *b_muon_0_cluster_eta_be2;   //!
   TBranch        *b_muon_0_id_bad;   //!
   TBranch        *b_muon_0_id_loose;   //!
   TBranch        *b_muon_0_id_medium;   //!
   TBranch        *b_muon_0_id_tight;   //!
   TBranch        *b_muon_0_id_veryloose;   //!
   TBranch        *b_muon_0_iso_FixedCutHighPtCaloOnly;   //!
   TBranch        *b_muon_0_iso_FixedCutHighPtTrackOnly;   //!
   TBranch        *b_muon_0_iso_FixedCutLoose;   //!
   TBranch        *b_muon_0_iso_FixedCutTight;   //!
   TBranch        *b_muon_0_iso_FixedCutTightTrackOnly;   //!
   TBranch        *b_muon_0_iso_FixedCutTrackCone40;   //!
   TBranch        *b_muon_0_iso_Gradient;   //!
   TBranch        *b_muon_0_iso_GradientLoose;   //!
   TBranch        *b_muon_0_iso_Loose;   //!
   TBranch        *b_muon_0_iso_LooseTrackOnly;   //!
   TBranch        *b_muon_0_iso_etcone20;   //!
   TBranch        *b_muon_0_iso_etcone30;   //!
   TBranch        *b_muon_0_iso_etcone40;   //!
   TBranch        *b_muon_0_iso_ptcone20;   //!
   TBranch        *b_muon_0_iso_ptcone30;   //!
   TBranch        *b_muon_0_iso_ptcone40;   //!
   TBranch        *b_muon_0_iso_ptvarcone20;   //!
   TBranch        *b_muon_0_iso_ptvarcone30;   //!
   TBranch        *b_muon_0_iso_ptvarcone40;   //!
   TBranch        *b_muon_0_iso_topoetcone20;   //!
   TBranch        *b_muon_0_iso_topoetcone30;   //!
   TBranch        *b_muon_0_iso_topoetcone40;   //!
   TBranch        *b_muon_0_muonAuthor;   //!
   TBranch        *b_muon_0_muonType;   //!
   TBranch        *b_muon_0_origin;   //!
   TBranch        *b_muon_0_p4;   //!
   TBranch        *b_muon_0_q;   //!
   TBranch        *b_muon_0_trk_d0;   //!
   TBranch        *b_muon_0_trk_d0_sig;   //!
   TBranch        *b_muon_0_trk_pt_error;   //!
   TBranch        *b_muon_0_trk_pvx_z0;   //!
   TBranch        *b_muon_0_trk_pvx_z0_sig;   //!
   TBranch        *b_muon_0_trk_pvx_z0_sintheta;   //!
   TBranch        *b_muon_0_trk_vx;   //!
   TBranch        *b_muon_0_trk_vx_v;   //!
   TBranch        *b_muon_0_trk_z0;   //!
   TBranch        *b_muon_0_trk_z0_sig;   //!
   TBranch        *b_muon_0_trk_z0_sintheta;   //!
   TBranch        *b_muon_0_type;   //!
   TBranch        *b_muon_1;   //!
   TBranch        *b_muon_1_PLI_score;   //!
   TBranch        *b_muon_1_PLV_score;   //!
   TBranch        *b_muon_1_cluster_eta;   //!
   TBranch        *b_muon_1_cluster_eta_be2;   //!
   TBranch        *b_muon_1_id_bad;   //!
   TBranch        *b_muon_1_id_loose;   //!
   TBranch        *b_muon_1_id_medium;   //!
   TBranch        *b_muon_1_id_tight;   //!
   TBranch        *b_muon_1_id_veryloose;   //!
   TBranch        *b_muon_1_iso_FixedCutHighPtCaloOnly;   //!
   TBranch        *b_muon_1_iso_FixedCutHighPtTrackOnly;   //!
   TBranch        *b_muon_1_iso_FixedCutLoose;   //!
   TBranch        *b_muon_1_iso_FixedCutTight;   //!
   TBranch        *b_muon_1_iso_FixedCutTightTrackOnly;   //!
   TBranch        *b_muon_1_iso_FixedCutTrackCone40;   //!
   TBranch        *b_muon_1_iso_Gradient;   //!
   TBranch        *b_muon_1_iso_GradientLoose;   //!
   TBranch        *b_muon_1_iso_Loose;   //!
   TBranch        *b_muon_1_iso_LooseTrackOnly;   //!
   TBranch        *b_muon_1_iso_etcone20;   //!
   TBranch        *b_muon_1_iso_etcone30;   //!
   TBranch        *b_muon_1_iso_etcone40;   //!
   TBranch        *b_muon_1_iso_ptcone20;   //!
   TBranch        *b_muon_1_iso_ptcone30;   //!
   TBranch        *b_muon_1_iso_ptcone40;   //!
   TBranch        *b_muon_1_iso_ptvarcone20;   //!
   TBranch        *b_muon_1_iso_ptvarcone30;   //!
   TBranch        *b_muon_1_iso_ptvarcone40;   //!
   TBranch        *b_muon_1_iso_topoetcone20;   //!
   TBranch        *b_muon_1_iso_topoetcone30;   //!
   TBranch        *b_muon_1_iso_topoetcone40;   //!
   TBranch        *b_muon_1_muonAuthor;   //!
   TBranch        *b_muon_1_muonType;   //!
   TBranch        *b_muon_1_origin;   //!
   TBranch        *b_muon_1_p4;   //!
   TBranch        *b_muon_1_q;   //!
   TBranch        *b_muon_1_trk_d0;   //!
   TBranch        *b_muon_1_trk_d0_sig;   //!
   TBranch        *b_muon_1_trk_pt_error;   //!
   TBranch        *b_muon_1_trk_pvx_z0;   //!
   TBranch        *b_muon_1_trk_pvx_z0_sig;   //!
   TBranch        *b_muon_1_trk_pvx_z0_sintheta;   //!
   TBranch        *b_muon_1_trk_vx;   //!
   TBranch        *b_muon_1_trk_vx_v;   //!
   TBranch        *b_muon_1_trk_z0;   //!
   TBranch        *b_muon_1_trk_z0_sig;   //!
   TBranch        *b_muon_1_trk_z0_sintheta;   //!
   TBranch        *b_muon_1_type;   //!
   TBranch        *b_n_actual_int;   //!
   TBranch        *b_n_avg_int;   //!
   TBranch        *b_n_avg_int_cor;   //!
   TBranch        *b_n_bjets;   //!
   TBranch        *b_n_electrons;   //!
   TBranch        *b_n_electrons_met;   //!
   TBranch        *b_n_electrons_olr;   //!
   TBranch        *b_n_jets;   //!
   TBranch        *b_n_jets_30;   //!
   TBranch        *b_n_jets_40;   //!
   TBranch        *b_n_jets_bad;   //!
   TBranch        *b_n_jets_mc_hs;   //!
   TBranch        *b_n_jets_met;   //!
   TBranch        *b_n_jets_olr;   //!
   TBranch        *b_n_muons;   //!
   TBranch        *b_n_muons_met;   //!
   TBranch        *b_n_muons_olr;   //!
   TBranch        *b_n_photons;   //!
   TBranch        *b_n_photons_met;   //!
   TBranch        *b_n_photons_olr;   //!
   TBranch        *b_n_pvx;   //!
   TBranch        *b_n_taus;   //!
   TBranch        *b_n_taus_loose;   //!
   TBranch        *b_n_taus_medium;   //!
   TBranch        *b_n_taus_met;   //!
   TBranch        *b_n_taus_olr;   //!
   TBranch        *b_n_taus_tight;   //!
   TBranch        *b_n_vx;   //!
   TBranch        *b_run_number;   //!
   TBranch        *b_tau_0;   //!
   TBranch        *b_tau_0_PTV_score;   //!
   TBranch        *b_tau_0_allTrk_eta;   //!
   TBranch        *b_tau_0_allTrk_n;   //!
   TBranch        *b_tau_0_allTrk_phi;   //!
   TBranch        *b_tau_0_allTrk_pt;   //!
   TBranch        *b_tau_0_b_tag_score;   //!
   TBranch        *b_tau_0_b_tagged;   //!
   TBranch        *b_tau_0_decay_mode;   //!
   TBranch        *b_tau_0_ele_BDTEleScoreTrans_run2;   //!
   TBranch        *b_tau_0_ele_bdt_loose;   //!
   TBranch        *b_tau_0_ele_bdt_medium;   //!
   TBranch        *b_tau_0_ele_bdt_score;   //!
   TBranch        *b_tau_0_ele_bdt_tight;   //!
   TBranch        *b_tau_0_ele_match_lhscore;   //!
   TBranch        *b_tau_0_ele_olr_pass;   //!
   TBranch        *b_tau_0_jet_bdt_loose;   //!
   TBranch        *b_tau_0_jet_bdt_medium;   //!
   TBranch        *b_tau_0_jet_bdt_score;   //!
   TBranch        *b_tau_0_jet_bdt_score_trans;   //!
   TBranch        *b_tau_0_jet_bdt_tight;   //!
   TBranch        *b_tau_0_jet_jvt;   //!
   TBranch        *b_tau_0_jet_width;   //!
   TBranch        *b_tau_0_leadTrk_eta;   //!
   TBranch        *b_tau_0_leadTrk_phi;   //!
   TBranch        *b_tau_0_leadTrk_pt;   //!
   TBranch        *b_tau_0_n_all_tracks;   //!
   TBranch        *b_tau_0_n_charged_tracks;   //!
   TBranch        *b_tau_0_n_conversion_tracks;   //!
   TBranch        *b_tau_0_n_core_tracks;   //!
   TBranch        *b_tau_0_n_failTrackFilter_tracks;   //!
   TBranch        *b_tau_0_n_fake_tracks;   //!
   TBranch        *b_tau_0_n_isolation_tracks;   //!
   TBranch        *b_tau_0_n_modified_isolation_tracks;   //!
   TBranch        *b_tau_0_n_old_tracks;   //!
   TBranch        *b_tau_0_n_passTrkSelectionTight_tracks;   //!
   TBranch        *b_tau_0_n_passTrkSelector_tracks;   //!
   TBranch        *b_tau_0_n_unclassified_tracks;   //!
   TBranch        *b_tau_0_n_wide_tracks;   //!
   TBranch        *b_tau_0_origin;   //!
   TBranch        *b_tau_0_p4;   //!
   TBranch        *b_tau_0_q;   //!
   TBranch        *b_tau_0_type;   //!
   TBranch        *b_tau_1;   //!
   TBranch        *b_tau_1_PTV_score;   //!
   TBranch        *b_tau_1_allTrk_eta;   //!
   TBranch        *b_tau_1_allTrk_n;   //!
   TBranch        *b_tau_1_allTrk_phi;   //!
   TBranch        *b_tau_1_allTrk_pt;   //!
   TBranch        *b_tau_1_b_tag_score;   //!
   TBranch        *b_tau_1_b_tagged;   //!
   TBranch        *b_tau_1_decay_mode;   //!
   TBranch        *b_tau_1_ele_BDTEleScoreTrans_run2;   //!
   TBranch        *b_tau_1_ele_bdt_loose;   //!
   TBranch        *b_tau_1_ele_bdt_medium;   //!
   TBranch        *b_tau_1_ele_bdt_score;   //!
   TBranch        *b_tau_1_ele_bdt_tight;   //!
   TBranch        *b_tau_1_ele_match_lhscore;   //!
   TBranch        *b_tau_1_ele_olr_pass;   //!
   TBranch        *b_tau_1_jet_bdt_loose;   //!
   TBranch        *b_tau_1_jet_bdt_medium;   //!
   TBranch        *b_tau_1_jet_bdt_score;   //!
   TBranch        *b_tau_1_jet_bdt_score_trans;   //!
   TBranch        *b_tau_1_jet_bdt_tight;   //!
   TBranch        *b_tau_1_jet_jvt;   //!
   TBranch        *b_tau_1_jet_width;   //!
   TBranch        *b_tau_1_leadTrk_eta;   //!
   TBranch        *b_tau_1_leadTrk_phi;   //!
   TBranch        *b_tau_1_leadTrk_pt;   //!
   TBranch        *b_tau_1_n_all_tracks;   //!
   TBranch        *b_tau_1_n_charged_tracks;   //!
   TBranch        *b_tau_1_n_conversion_tracks;   //!
   TBranch        *b_tau_1_n_core_tracks;   //!
   TBranch        *b_tau_1_n_failTrackFilter_tracks;   //!
   TBranch        *b_tau_1_n_fake_tracks;   //!
   TBranch        *b_tau_1_n_isolation_tracks;   //!
   TBranch        *b_tau_1_n_modified_isolation_tracks;   //!
   TBranch        *b_tau_1_n_old_tracks;   //!
   TBranch        *b_tau_1_n_passTrkSelectionTight_tracks;   //!
   TBranch        *b_tau_1_n_passTrkSelector_tracks;   //!
   TBranch        *b_tau_1_n_unclassified_tracks;   //!
   TBranch        *b_tau_1_n_wide_tracks;   //!
   TBranch        *b_tau_1_origin;   //!
   TBranch        *b_tau_1_p4;   //!
   TBranch        *b_tau_1_q;   //!
   TBranch        *b_tau_1_type;   //!

   MyAnalysis(TTree *tree=0);
   MyAnalysis(string fileLocation);
   virtual ~MyAnalysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     BookHistos();
   virtual void     DrawHistos();

};

#endif

#ifdef MyAnalysis_cxx
MyAnalysis::MyAnalysis(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/data/user.sdysch.v5.0.data16_13TeV.00311481.physics_Main.D1.r9264_p3083_p3372.sv1.1_hist/user.sdysch.14363946._000001.hist-output.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/data/user.sdysch.v5.0.data16_13TeV.00311481.physics_Main.D1.r9264_p3083_p3372.sv1.1_hist/user.sdysch.14363946._000001.hist-output.root");
      }
      f->GetObject("NOMINAL",tree);

   }
   Init(tree);
}


MyAnalysis::MyAnalysis(string fileLocation) : fChain(0) 
{
    TTree *tree;
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(fileLocation.c_str());
    if (!f || !f->IsOpen()) {
       f = new TFile(fileLocation.c_str());
    }
    f->GetObject("NOMINAL",tree);
    Init(tree);
}

MyAnalysis::~MyAnalysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MyAnalysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MyAnalysis::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MyAnalysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   bjet_0_p4 = 0;
   bjet_1_p4 = 0;
   elec_0_p4 = 0;
   elec_0_trk_vx_v = 0;
   elec_1_p4 = 0;
   elec_1_trk_vx_v = 0;
   ljet_0_p4 = 0;
   ljet_1_p4 = 0;
   ljet_2_p4 = 0;
   ljet_3_p4 = 0;
   met_hpto_p4 = 0;
   met_reco_p4 = 0;
   muon_0_p4 = 0;
   muon_0_trk_vx_v = 0;
   muon_1_p4 = 0;
   muon_1_trk_vx_v = 0;
   tau_0_p4 = 0;
   tau_1_p4 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("HLT_e120_lhloose", &HLT_e120_lhloose, &b_HLT_e120_lhloose);
   fChain->SetBranchAddress("HLT_e140_lhloose_nod0", &HLT_e140_lhloose_nod0, &b_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo", &HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo, &b_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo", &HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo, &b_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo", &HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo, &b_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("HLT_e24_lhmedium_L1EM20VH", &HLT_e24_lhmedium_L1EM20VH, &b_HLT_e24_lhmedium_L1EM20VH);
   fChain->SetBranchAddress("HLT_e24_lhmedium_nod0_L1EM20VH", &HLT_e24_lhmedium_nod0_L1EM20VH, &b_HLT_e24_lhmedium_nod0_L1EM20VH);
   fChain->SetBranchAddress("HLT_e24_lhtight_nod0_ivarloose", &HLT_e24_lhtight_nod0_ivarloose, &b_HLT_e24_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_e26_lhtight_nod0_ivarloose", &HLT_e26_lhtight_nod0_ivarloose, &b_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_e60_lhmedium", &HLT_e60_lhmedium, &b_HLT_e60_lhmedium);
   fChain->SetBranchAddress("HLT_e60_lhmedium_nod0", &HLT_e60_lhmedium_nod0, &b_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("HLT_mu20_iloose_L1MU15", &HLT_mu20_iloose_L1MU15, &b_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("HLT_mu24_imedium", &HLT_mu24_imedium, &b_HLT_mu24_imedium);
   fChain->SetBranchAddress("HLT_mu24_ivarmedium", &HLT_mu24_ivarmedium, &b_HLT_mu24_ivarmedium);
   fChain->SetBranchAddress("HLT_mu26_imedium", &HLT_mu26_imedium, &b_HLT_mu26_imedium);
   fChain->SetBranchAddress("HLT_mu26_ivarmedium", &HLT_mu26_ivarmedium, &b_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("HLT_mu40", &HLT_mu40, &b_HLT_mu40);
   fChain->SetBranchAddress("HLT_mu50", &HLT_mu50, &b_HLT_mu50);
   fChain->SetBranchAddress("bjet_0", &bjet_0, &b_bjet_0);
   fChain->SetBranchAddress("bjet_0_b_tag_quantile", &bjet_0_b_tag_quantile, &b_bjet_0_b_tag_quantile);
   fChain->SetBranchAddress("bjet_0_b_tag_score", &bjet_0_b_tag_score, &b_bjet_0_b_tag_score);
   fChain->SetBranchAddress("bjet_0_b_tagged", &bjet_0_b_tagged, &b_bjet_0_b_tagged);
   fChain->SetBranchAddress("bjet_0_fjvt", &bjet_0_fjvt, &b_bjet_0_fjvt);
   fChain->SetBranchAddress("bjet_0_flavorlabel", &bjet_0_flavorlabel, &b_bjet_0_flavorlabel);
   fChain->SetBranchAddress("bjet_0_flavorlabel_cone", &bjet_0_flavorlabel_cone, &b_bjet_0_flavorlabel_cone);
   fChain->SetBranchAddress("bjet_0_flavorlabel_part", &bjet_0_flavorlabel_part, &b_bjet_0_flavorlabel_part);
   fChain->SetBranchAddress("bjet_0_is_Jvt_HS", &bjet_0_is_Jvt_HS, &b_bjet_0_is_Jvt_HS);
   fChain->SetBranchAddress("bjet_0_jvt", &bjet_0_jvt, &b_bjet_0_jvt);
   fChain->SetBranchAddress("bjet_0_origin", &bjet_0_origin, &b_bjet_0_origin);
   fChain->SetBranchAddress("bjet_0_p4", &bjet_0_p4, &b_bjet_0_p4);
   fChain->SetBranchAddress("bjet_0_q", &bjet_0_q, &b_bjet_0_q);
   fChain->SetBranchAddress("bjet_0_type", &bjet_0_type, &b_bjet_0_type);
   fChain->SetBranchAddress("bjet_0_width", &bjet_0_width, &b_bjet_0_width);
   fChain->SetBranchAddress("bjet_1", &bjet_1, &b_bjet_1);
   fChain->SetBranchAddress("bjet_1_b_tag_quantile", &bjet_1_b_tag_quantile, &b_bjet_1_b_tag_quantile);
   fChain->SetBranchAddress("bjet_1_b_tag_score", &bjet_1_b_tag_score, &b_bjet_1_b_tag_score);
   fChain->SetBranchAddress("bjet_1_b_tagged", &bjet_1_b_tagged, &b_bjet_1_b_tagged);
   fChain->SetBranchAddress("bjet_1_fjvt", &bjet_1_fjvt, &b_bjet_1_fjvt);
   fChain->SetBranchAddress("bjet_1_flavorlabel", &bjet_1_flavorlabel, &b_bjet_1_flavorlabel);
   fChain->SetBranchAddress("bjet_1_flavorlabel_cone", &bjet_1_flavorlabel_cone, &b_bjet_1_flavorlabel_cone);
   fChain->SetBranchAddress("bjet_1_flavorlabel_part", &bjet_1_flavorlabel_part, &b_bjet_1_flavorlabel_part);
   fChain->SetBranchAddress("bjet_1_is_Jvt_HS", &bjet_1_is_Jvt_HS, &b_bjet_1_is_Jvt_HS);
   fChain->SetBranchAddress("bjet_1_jvt", &bjet_1_jvt, &b_bjet_1_jvt);
   fChain->SetBranchAddress("bjet_1_origin", &bjet_1_origin, &b_bjet_1_origin);
   fChain->SetBranchAddress("bjet_1_p4", &bjet_1_p4, &b_bjet_1_p4);
   fChain->SetBranchAddress("bjet_1_q", &bjet_1_q, &b_bjet_1_q);
   fChain->SetBranchAddress("bjet_1_type", &bjet_1_type, &b_bjet_1_type);
   fChain->SetBranchAddress("bjet_1_width", &bjet_1_width, &b_bjet_1_width);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e120_lhloose", &eleTrigMatch_0_HLT_e120_lhloose, &b_eleTrigMatch_0_HLT_e120_lhloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e140_lhloose_nod0", &eleTrigMatch_0_HLT_e140_lhloose_nod0, &b_eleTrigMatch_0_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo", &eleTrigMatch_0_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo, &b_eleTrigMatch_0_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo", &eleTrigMatch_0_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo, &b_eleTrigMatch_0_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo", &eleTrigMatch_0_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo, &b_eleTrigMatch_0_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH", &eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH, &b_eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e24_lhmedium_nod0_L1EM20VH", &eleTrigMatch_0_HLT_e24_lhmedium_nod0_L1EM20VH, &b_eleTrigMatch_0_HLT_e24_lhmedium_nod0_L1EM20VH);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e24_lhtight_nod0_ivarloose", &eleTrigMatch_0_HLT_e24_lhtight_nod0_ivarloose, &b_eleTrigMatch_0_HLT_e24_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose", &eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose, &b_eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e60_lhmedium", &eleTrigMatch_0_HLT_e60_lhmedium, &b_eleTrigMatch_0_HLT_e60_lhmedium);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e60_lhmedium_nod0", &eleTrigMatch_0_HLT_e60_lhmedium_nod0, &b_eleTrigMatch_0_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("eleTrigMatch_0_trigger_matched", &eleTrigMatch_0_trigger_matched, &b_eleTrigMatch_0_trigger_matched);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e120_lhloose", &eleTrigMatch_1_HLT_e120_lhloose, &b_eleTrigMatch_1_HLT_e120_lhloose);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e140_lhloose_nod0", &eleTrigMatch_1_HLT_e140_lhloose_nod0, &b_eleTrigMatch_1_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo", &eleTrigMatch_1_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo, &b_eleTrigMatch_1_HLT_e17_lhmedium_nod0_iloose_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo", &eleTrigMatch_1_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo, &b_eleTrigMatch_1_HLT_e17_lhmedium_nod0_ivarloose_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo", &eleTrigMatch_1_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo, &b_eleTrigMatch_1_HLT_e17_lhmedium_nod0_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e24_lhmedium_L1EM20VH", &eleTrigMatch_1_HLT_e24_lhmedium_L1EM20VH, &b_eleTrigMatch_1_HLT_e24_lhmedium_L1EM20VH);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e24_lhmedium_nod0_L1EM20VH", &eleTrigMatch_1_HLT_e24_lhmedium_nod0_L1EM20VH, &b_eleTrigMatch_1_HLT_e24_lhmedium_nod0_L1EM20VH);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e24_lhtight_nod0_ivarloose", &eleTrigMatch_1_HLT_e24_lhtight_nod0_ivarloose, &b_eleTrigMatch_1_HLT_e24_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e26_lhtight_nod0_ivarloose", &eleTrigMatch_1_HLT_e26_lhtight_nod0_ivarloose, &b_eleTrigMatch_1_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e60_lhmedium", &eleTrigMatch_1_HLT_e60_lhmedium, &b_eleTrigMatch_1_HLT_e60_lhmedium);
   fChain->SetBranchAddress("eleTrigMatch_1_HLT_e60_lhmedium_nod0", &eleTrigMatch_1_HLT_e60_lhmedium_nod0, &b_eleTrigMatch_1_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("eleTrigMatch_1_trigger_matched", &eleTrigMatch_1_trigger_matched, &b_eleTrigMatch_1_trigger_matched);
   fChain->SetBranchAddress("elec_0", &elec_0, &b_elec_0);
   fChain->SetBranchAddress("elec_0_PLI_score", &elec_0_PLI_score, &b_elec_0_PLI_score);
   fChain->SetBranchAddress("elec_0_PLV_score", &elec_0_PLV_score, &b_elec_0_PLV_score);
   fChain->SetBranchAddress("elec_0_cluster_eta", &elec_0_cluster_eta, &b_elec_0_cluster_eta);
   fChain->SetBranchAddress("elec_0_cluster_eta_be2", &elec_0_cluster_eta_be2, &b_elec_0_cluster_eta_be2);
   fChain->SetBranchAddress("elec_0_id_bad", &elec_0_id_bad, &b_elec_0_id_bad);
   fChain->SetBranchAddress("elec_0_id_loose", &elec_0_id_loose, &b_elec_0_id_loose);
   fChain->SetBranchAddress("elec_0_id_medium", &elec_0_id_medium, &b_elec_0_id_medium);
   fChain->SetBranchAddress("elec_0_id_tight", &elec_0_id_tight, &b_elec_0_id_tight);
   fChain->SetBranchAddress("elec_0_id_veryloose", &elec_0_id_veryloose, &b_elec_0_id_veryloose);
   fChain->SetBranchAddress("elec_0_iso_FixedCutHighPtCaloOnly", &elec_0_iso_FixedCutHighPtCaloOnly, &b_elec_0_iso_FixedCutHighPtCaloOnly);
   fChain->SetBranchAddress("elec_0_iso_FixedCutHighPtTrackOnly", &elec_0_iso_FixedCutHighPtTrackOnly, &b_elec_0_iso_FixedCutHighPtTrackOnly);
   fChain->SetBranchAddress("elec_0_iso_FixedCutLoose", &elec_0_iso_FixedCutLoose, &b_elec_0_iso_FixedCutLoose);
   fChain->SetBranchAddress("elec_0_iso_FixedCutTight", &elec_0_iso_FixedCutTight, &b_elec_0_iso_FixedCutTight);
   fChain->SetBranchAddress("elec_0_iso_FixedCutTightTrackOnly", &elec_0_iso_FixedCutTightTrackOnly, &b_elec_0_iso_FixedCutTightTrackOnly);
   fChain->SetBranchAddress("elec_0_iso_FixedCutTrackCone40", &elec_0_iso_FixedCutTrackCone40, &b_elec_0_iso_FixedCutTrackCone40);
   fChain->SetBranchAddress("elec_0_iso_Gradient", &elec_0_iso_Gradient, &b_elec_0_iso_Gradient);
   fChain->SetBranchAddress("elec_0_iso_GradientLoose", &elec_0_iso_GradientLoose, &b_elec_0_iso_GradientLoose);
   fChain->SetBranchAddress("elec_0_iso_Loose", &elec_0_iso_Loose, &b_elec_0_iso_Loose);
   fChain->SetBranchAddress("elec_0_iso_LooseTrackOnly", &elec_0_iso_LooseTrackOnly, &b_elec_0_iso_LooseTrackOnly);
   fChain->SetBranchAddress("elec_0_iso_etcone20", &elec_0_iso_etcone20, &b_elec_0_iso_etcone20);
   fChain->SetBranchAddress("elec_0_iso_etcone30", &elec_0_iso_etcone30, &b_elec_0_iso_etcone30);
   fChain->SetBranchAddress("elec_0_iso_etcone40", &elec_0_iso_etcone40, &b_elec_0_iso_etcone40);
   fChain->SetBranchAddress("elec_0_iso_ptcone20", &elec_0_iso_ptcone20, &b_elec_0_iso_ptcone20);
   fChain->SetBranchAddress("elec_0_iso_ptcone30", &elec_0_iso_ptcone30, &b_elec_0_iso_ptcone30);
   fChain->SetBranchAddress("elec_0_iso_ptcone40", &elec_0_iso_ptcone40, &b_elec_0_iso_ptcone40);
   fChain->SetBranchAddress("elec_0_iso_ptvarcone20", &elec_0_iso_ptvarcone20, &b_elec_0_iso_ptvarcone20);
   fChain->SetBranchAddress("elec_0_iso_ptvarcone30", &elec_0_iso_ptvarcone30, &b_elec_0_iso_ptvarcone30);
   fChain->SetBranchAddress("elec_0_iso_ptvarcone40", &elec_0_iso_ptvarcone40, &b_elec_0_iso_ptvarcone40);
   fChain->SetBranchAddress("elec_0_iso_topoetcone20", &elec_0_iso_topoetcone20, &b_elec_0_iso_topoetcone20);
   fChain->SetBranchAddress("elec_0_iso_topoetcone30", &elec_0_iso_topoetcone30, &b_elec_0_iso_topoetcone30);
   fChain->SetBranchAddress("elec_0_iso_topoetcone40", &elec_0_iso_topoetcone40, &b_elec_0_iso_topoetcone40);
   fChain->SetBranchAddress("elec_0_muonAuthor", &elec_0_muonAuthor, &b_elec_0_muonAuthor);
   fChain->SetBranchAddress("elec_0_muonType", &elec_0_muonType, &b_elec_0_muonType);
   fChain->SetBranchAddress("elec_0_origin", &elec_0_origin, &b_elec_0_origin);
   fChain->SetBranchAddress("elec_0_p4", &elec_0_p4, &b_elec_0_p4);
   fChain->SetBranchAddress("elec_0_q", &elec_0_q, &b_elec_0_q);
   fChain->SetBranchAddress("elec_0_trk_d0", &elec_0_trk_d0, &b_elec_0_trk_d0);
   fChain->SetBranchAddress("elec_0_trk_d0_sig", &elec_0_trk_d0_sig, &b_elec_0_trk_d0_sig);
   fChain->SetBranchAddress("elec_0_trk_pt_error", &elec_0_trk_pt_error, &b_elec_0_trk_pt_error);
   fChain->SetBranchAddress("elec_0_trk_pvx_z0", &elec_0_trk_pvx_z0, &b_elec_0_trk_pvx_z0);
   fChain->SetBranchAddress("elec_0_trk_pvx_z0_sig", &elec_0_trk_pvx_z0_sig, &b_elec_0_trk_pvx_z0_sig);
   fChain->SetBranchAddress("elec_0_trk_pvx_z0_sintheta", &elec_0_trk_pvx_z0_sintheta, &b_elec_0_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("elec_0_trk_vx", &elec_0_trk_vx, &b_elec_0_trk_vx);
   fChain->SetBranchAddress("elec_0_trk_vx_v", &elec_0_trk_vx_v, &b_elec_0_trk_vx_v);
   fChain->SetBranchAddress("elec_0_trk_z0", &elec_0_trk_z0, &b_elec_0_trk_z0);
   fChain->SetBranchAddress("elec_0_trk_z0_sig", &elec_0_trk_z0_sig, &b_elec_0_trk_z0_sig);
   fChain->SetBranchAddress("elec_0_trk_z0_sintheta", &elec_0_trk_z0_sintheta, &b_elec_0_trk_z0_sintheta);
   fChain->SetBranchAddress("elec_0_type", &elec_0_type, &b_elec_0_type);
   fChain->SetBranchAddress("elec_1", &elec_1, &b_elec_1);
   fChain->SetBranchAddress("elec_1_PLI_score", &elec_1_PLI_score, &b_elec_1_PLI_score);
   fChain->SetBranchAddress("elec_1_PLV_score", &elec_1_PLV_score, &b_elec_1_PLV_score);
   fChain->SetBranchAddress("elec_1_cluster_eta", &elec_1_cluster_eta, &b_elec_1_cluster_eta);
   fChain->SetBranchAddress("elec_1_cluster_eta_be2", &elec_1_cluster_eta_be2, &b_elec_1_cluster_eta_be2);
   fChain->SetBranchAddress("elec_1_id_bad", &elec_1_id_bad, &b_elec_1_id_bad);
   fChain->SetBranchAddress("elec_1_id_loose", &elec_1_id_loose, &b_elec_1_id_loose);
   fChain->SetBranchAddress("elec_1_id_medium", &elec_1_id_medium, &b_elec_1_id_medium);
   fChain->SetBranchAddress("elec_1_id_tight", &elec_1_id_tight, &b_elec_1_id_tight);
   fChain->SetBranchAddress("elec_1_id_veryloose", &elec_1_id_veryloose, &b_elec_1_id_veryloose);
   fChain->SetBranchAddress("elec_1_iso_FixedCutHighPtCaloOnly", &elec_1_iso_FixedCutHighPtCaloOnly, &b_elec_1_iso_FixedCutHighPtCaloOnly);
   fChain->SetBranchAddress("elec_1_iso_FixedCutHighPtTrackOnly", &elec_1_iso_FixedCutHighPtTrackOnly, &b_elec_1_iso_FixedCutHighPtTrackOnly);
   fChain->SetBranchAddress("elec_1_iso_FixedCutLoose", &elec_1_iso_FixedCutLoose, &b_elec_1_iso_FixedCutLoose);
   fChain->SetBranchAddress("elec_1_iso_FixedCutTight", &elec_1_iso_FixedCutTight, &b_elec_1_iso_FixedCutTight);
   fChain->SetBranchAddress("elec_1_iso_FixedCutTightTrackOnly", &elec_1_iso_FixedCutTightTrackOnly, &b_elec_1_iso_FixedCutTightTrackOnly);
   fChain->SetBranchAddress("elec_1_iso_FixedCutTrackCone40", &elec_1_iso_FixedCutTrackCone40, &b_elec_1_iso_FixedCutTrackCone40);
   fChain->SetBranchAddress("elec_1_iso_Gradient", &elec_1_iso_Gradient, &b_elec_1_iso_Gradient);
   fChain->SetBranchAddress("elec_1_iso_GradientLoose", &elec_1_iso_GradientLoose, &b_elec_1_iso_GradientLoose);
   fChain->SetBranchAddress("elec_1_iso_Loose", &elec_1_iso_Loose, &b_elec_1_iso_Loose);
   fChain->SetBranchAddress("elec_1_iso_LooseTrackOnly", &elec_1_iso_LooseTrackOnly, &b_elec_1_iso_LooseTrackOnly);
   fChain->SetBranchAddress("elec_1_iso_etcone20", &elec_1_iso_etcone20, &b_elec_1_iso_etcone20);
   fChain->SetBranchAddress("elec_1_iso_etcone30", &elec_1_iso_etcone30, &b_elec_1_iso_etcone30);
   fChain->SetBranchAddress("elec_1_iso_etcone40", &elec_1_iso_etcone40, &b_elec_1_iso_etcone40);
   fChain->SetBranchAddress("elec_1_iso_ptcone20", &elec_1_iso_ptcone20, &b_elec_1_iso_ptcone20);
   fChain->SetBranchAddress("elec_1_iso_ptcone30", &elec_1_iso_ptcone30, &b_elec_1_iso_ptcone30);
   fChain->SetBranchAddress("elec_1_iso_ptcone40", &elec_1_iso_ptcone40, &b_elec_1_iso_ptcone40);
   fChain->SetBranchAddress("elec_1_iso_ptvarcone20", &elec_1_iso_ptvarcone20, &b_elec_1_iso_ptvarcone20);
   fChain->SetBranchAddress("elec_1_iso_ptvarcone30", &elec_1_iso_ptvarcone30, &b_elec_1_iso_ptvarcone30);
   fChain->SetBranchAddress("elec_1_iso_ptvarcone40", &elec_1_iso_ptvarcone40, &b_elec_1_iso_ptvarcone40);
   fChain->SetBranchAddress("elec_1_iso_topoetcone20", &elec_1_iso_topoetcone20, &b_elec_1_iso_topoetcone20);
   fChain->SetBranchAddress("elec_1_iso_topoetcone30", &elec_1_iso_topoetcone30, &b_elec_1_iso_topoetcone30);
   fChain->SetBranchAddress("elec_1_iso_topoetcone40", &elec_1_iso_topoetcone40, &b_elec_1_iso_topoetcone40);
   fChain->SetBranchAddress("elec_1_muonAuthor", &elec_1_muonAuthor, &b_elec_1_muonAuthor);
   fChain->SetBranchAddress("elec_1_muonType", &elec_1_muonType, &b_elec_1_muonType);
   fChain->SetBranchAddress("elec_1_origin", &elec_1_origin, &b_elec_1_origin);
   fChain->SetBranchAddress("elec_1_p4", &elec_1_p4, &b_elec_1_p4);
   fChain->SetBranchAddress("elec_1_q", &elec_1_q, &b_elec_1_q);
   fChain->SetBranchAddress("elec_1_trk_d0", &elec_1_trk_d0, &b_elec_1_trk_d0);
   fChain->SetBranchAddress("elec_1_trk_d0_sig", &elec_1_trk_d0_sig, &b_elec_1_trk_d0_sig);
   fChain->SetBranchAddress("elec_1_trk_pt_error", &elec_1_trk_pt_error, &b_elec_1_trk_pt_error);
   fChain->SetBranchAddress("elec_1_trk_pvx_z0", &elec_1_trk_pvx_z0, &b_elec_1_trk_pvx_z0);
   fChain->SetBranchAddress("elec_1_trk_pvx_z0_sig", &elec_1_trk_pvx_z0_sig, &b_elec_1_trk_pvx_z0_sig);
   fChain->SetBranchAddress("elec_1_trk_pvx_z0_sintheta", &elec_1_trk_pvx_z0_sintheta, &b_elec_1_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("elec_1_trk_vx", &elec_1_trk_vx, &b_elec_1_trk_vx);
   fChain->SetBranchAddress("elec_1_trk_vx_v", &elec_1_trk_vx_v, &b_elec_1_trk_vx_v);
   fChain->SetBranchAddress("elec_1_trk_z0", &elec_1_trk_z0, &b_elec_1_trk_z0);
   fChain->SetBranchAddress("elec_1_trk_z0_sig", &elec_1_trk_z0_sig, &b_elec_1_trk_z0_sig);
   fChain->SetBranchAddress("elec_1_trk_z0_sintheta", &elec_1_trk_z0_sintheta, &b_elec_1_trk_z0_sintheta);
   fChain->SetBranchAddress("elec_1_type", &elec_1_type, &b_elec_1_type);
   fChain->SetBranchAddress("event_clean_detector_core", &event_clean_detector_core, &b_event_clean_detector_core);
   fChain->SetBranchAddress("event_number", &event_number, &b_event_number);
   fChain->SetBranchAddress("lb_number", &lb_number, &b_lb_number);
   fChain->SetBranchAddress("ljet_0", &ljet_0, &b_ljet_0);
   fChain->SetBranchAddress("ljet_0_b_tag_quantile", &ljet_0_b_tag_quantile, &b_ljet_0_b_tag_quantile);
   fChain->SetBranchAddress("ljet_0_b_tag_score", &ljet_0_b_tag_score, &b_ljet_0_b_tag_score);
   fChain->SetBranchAddress("ljet_0_b_tagged", &ljet_0_b_tagged, &b_ljet_0_b_tagged);
   fChain->SetBranchAddress("ljet_0_fjvt", &ljet_0_fjvt, &b_ljet_0_fjvt);
   fChain->SetBranchAddress("ljet_0_flavorlabel", &ljet_0_flavorlabel, &b_ljet_0_flavorlabel);
   fChain->SetBranchAddress("ljet_0_flavorlabel_cone", &ljet_0_flavorlabel_cone, &b_ljet_0_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_0_flavorlabel_part", &ljet_0_flavorlabel_part, &b_ljet_0_flavorlabel_part);
   fChain->SetBranchAddress("ljet_0_is_Jvt_HS", &ljet_0_is_Jvt_HS, &b_ljet_0_is_Jvt_HS);
   fChain->SetBranchAddress("ljet_0_jvt", &ljet_0_jvt, &b_ljet_0_jvt);
   fChain->SetBranchAddress("ljet_0_origin", &ljet_0_origin, &b_ljet_0_origin);
   fChain->SetBranchAddress("ljet_0_p4", &ljet_0_p4, &b_ljet_0_p4);
   fChain->SetBranchAddress("ljet_0_q", &ljet_0_q, &b_ljet_0_q);
   fChain->SetBranchAddress("ljet_0_type", &ljet_0_type, &b_ljet_0_type);
   fChain->SetBranchAddress("ljet_0_width", &ljet_0_width, &b_ljet_0_width);
   fChain->SetBranchAddress("ljet_1", &ljet_1, &b_ljet_1);
   fChain->SetBranchAddress("ljet_1_b_tag_quantile", &ljet_1_b_tag_quantile, &b_ljet_1_b_tag_quantile);
   fChain->SetBranchAddress("ljet_1_b_tag_score", &ljet_1_b_tag_score, &b_ljet_1_b_tag_score);
   fChain->SetBranchAddress("ljet_1_b_tagged", &ljet_1_b_tagged, &b_ljet_1_b_tagged);
   fChain->SetBranchAddress("ljet_1_fjvt", &ljet_1_fjvt, &b_ljet_1_fjvt);
   fChain->SetBranchAddress("ljet_1_flavorlabel", &ljet_1_flavorlabel, &b_ljet_1_flavorlabel);
   fChain->SetBranchAddress("ljet_1_flavorlabel_cone", &ljet_1_flavorlabel_cone, &b_ljet_1_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_1_flavorlabel_part", &ljet_1_flavorlabel_part, &b_ljet_1_flavorlabel_part);
   fChain->SetBranchAddress("ljet_1_is_Jvt_HS", &ljet_1_is_Jvt_HS, &b_ljet_1_is_Jvt_HS);
   fChain->SetBranchAddress("ljet_1_jvt", &ljet_1_jvt, &b_ljet_1_jvt);
   fChain->SetBranchAddress("ljet_1_origin", &ljet_1_origin, &b_ljet_1_origin);
   fChain->SetBranchAddress("ljet_1_p4", &ljet_1_p4, &b_ljet_1_p4);
   fChain->SetBranchAddress("ljet_1_q", &ljet_1_q, &b_ljet_1_q);
   fChain->SetBranchAddress("ljet_1_type", &ljet_1_type, &b_ljet_1_type);
   fChain->SetBranchAddress("ljet_1_width", &ljet_1_width, &b_ljet_1_width);
   fChain->SetBranchAddress("ljet_2", &ljet_2, &b_ljet_2);
   fChain->SetBranchAddress("ljet_2_b_tag_quantile", &ljet_2_b_tag_quantile, &b_ljet_2_b_tag_quantile);
   fChain->SetBranchAddress("ljet_2_b_tag_score", &ljet_2_b_tag_score, &b_ljet_2_b_tag_score);
   fChain->SetBranchAddress("ljet_2_b_tagged", &ljet_2_b_tagged, &b_ljet_2_b_tagged);
   fChain->SetBranchAddress("ljet_2_fjvt", &ljet_2_fjvt, &b_ljet_2_fjvt);
   fChain->SetBranchAddress("ljet_2_flavorlabel", &ljet_2_flavorlabel, &b_ljet_2_flavorlabel);
   fChain->SetBranchAddress("ljet_2_flavorlabel_cone", &ljet_2_flavorlabel_cone, &b_ljet_2_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_2_flavorlabel_part", &ljet_2_flavorlabel_part, &b_ljet_2_flavorlabel_part);
   fChain->SetBranchAddress("ljet_2_is_Jvt_HS", &ljet_2_is_Jvt_HS, &b_ljet_2_is_Jvt_HS);
   fChain->SetBranchAddress("ljet_2_jvt", &ljet_2_jvt, &b_ljet_2_jvt);
   fChain->SetBranchAddress("ljet_2_origin", &ljet_2_origin, &b_ljet_2_origin);
   fChain->SetBranchAddress("ljet_2_p4", &ljet_2_p4, &b_ljet_2_p4);
   fChain->SetBranchAddress("ljet_2_q", &ljet_2_q, &b_ljet_2_q);
   fChain->SetBranchAddress("ljet_2_type", &ljet_2_type, &b_ljet_2_type);
   fChain->SetBranchAddress("ljet_2_width", &ljet_2_width, &b_ljet_2_width);
   fChain->SetBranchAddress("ljet_3", &ljet_3, &b_ljet_3);
   fChain->SetBranchAddress("ljet_3_b_tag_quantile", &ljet_3_b_tag_quantile, &b_ljet_3_b_tag_quantile);
   fChain->SetBranchAddress("ljet_3_b_tag_score", &ljet_3_b_tag_score, &b_ljet_3_b_tag_score);
   fChain->SetBranchAddress("ljet_3_b_tagged", &ljet_3_b_tagged, &b_ljet_3_b_tagged);
   fChain->SetBranchAddress("ljet_3_fjvt", &ljet_3_fjvt, &b_ljet_3_fjvt);
   fChain->SetBranchAddress("ljet_3_flavorlabel", &ljet_3_flavorlabel, &b_ljet_3_flavorlabel);
   fChain->SetBranchAddress("ljet_3_flavorlabel_cone", &ljet_3_flavorlabel_cone, &b_ljet_3_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_3_flavorlabel_part", &ljet_3_flavorlabel_part, &b_ljet_3_flavorlabel_part);
   fChain->SetBranchAddress("ljet_3_is_Jvt_HS", &ljet_3_is_Jvt_HS, &b_ljet_3_is_Jvt_HS);
   fChain->SetBranchAddress("ljet_3_jvt", &ljet_3_jvt, &b_ljet_3_jvt);
   fChain->SetBranchAddress("ljet_3_origin", &ljet_3_origin, &b_ljet_3_origin);
   fChain->SetBranchAddress("ljet_3_p4", &ljet_3_p4, &b_ljet_3_p4);
   fChain->SetBranchAddress("ljet_3_q", &ljet_3_q, &b_ljet_3_q);
   fChain->SetBranchAddress("ljet_3_type", &ljet_3_type, &b_ljet_3_type);
   fChain->SetBranchAddress("ljet_3_width", &ljet_3_width, &b_ljet_3_width);
   fChain->SetBranchAddress("met_hpto_p4", &met_hpto_p4, &b_met_hpto_p4);
   fChain->SetBranchAddress("met_more_met_et_ele", &met_more_met_et_ele, &b_met_more_met_et_ele);
   fChain->SetBranchAddress("met_more_met_et_jet", &met_more_met_et_jet, &b_met_more_met_et_jet);
   fChain->SetBranchAddress("met_more_met_et_muon", &met_more_met_et_muon, &b_met_more_met_et_muon);
   fChain->SetBranchAddress("met_more_met_et_pho", &met_more_met_et_pho, &b_met_more_met_et_pho);
   fChain->SetBranchAddress("met_more_met_et_soft", &met_more_met_et_soft, &b_met_more_met_et_soft);
   fChain->SetBranchAddress("met_more_met_et_tau", &met_more_met_et_tau, &b_met_more_met_et_tau);
   fChain->SetBranchAddress("met_more_met_phi_ele", &met_more_met_phi_ele, &b_met_more_met_phi_ele);
   fChain->SetBranchAddress("met_more_met_phi_jet", &met_more_met_phi_jet, &b_met_more_met_phi_jet);
   fChain->SetBranchAddress("met_more_met_phi_muon", &met_more_met_phi_muon, &b_met_more_met_phi_muon);
   fChain->SetBranchAddress("met_more_met_phi_pho", &met_more_met_phi_pho, &b_met_more_met_phi_pho);
   fChain->SetBranchAddress("met_more_met_phi_soft", &met_more_met_phi_soft, &b_met_more_met_phi_soft);
   fChain->SetBranchAddress("met_more_met_phi_tau", &met_more_met_phi_tau, &b_met_more_met_phi_tau);
   fChain->SetBranchAddress("met_more_met_sumet_ele", &met_more_met_sumet_ele, &b_met_more_met_sumet_ele);
   fChain->SetBranchAddress("met_more_met_sumet_jet", &met_more_met_sumet_jet, &b_met_more_met_sumet_jet);
   fChain->SetBranchAddress("met_more_met_sumet_muon", &met_more_met_sumet_muon, &b_met_more_met_sumet_muon);
   fChain->SetBranchAddress("met_more_met_sumet_pho", &met_more_met_sumet_pho, &b_met_more_met_sumet_pho);
   fChain->SetBranchAddress("met_more_met_sumet_soft", &met_more_met_sumet_soft, &b_met_more_met_sumet_soft);
   fChain->SetBranchAddress("met_more_met_sumet_tau", &met_more_met_sumet_tau, &b_met_more_met_sumet_tau);
   fChain->SetBranchAddress("met_reco_p4", &met_reco_p4, &b_met_reco_p4);
   fChain->SetBranchAddress("met_reco_sig", &met_reco_sig, &b_met_reco_sig);
   fChain->SetBranchAddress("met_reco_sig_tracks", &met_reco_sig_tracks, &b_met_reco_sig_tracks);
   fChain->SetBranchAddress("met_reco_sumet", &met_reco_sumet, &b_met_reco_sumet);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu20_iloose_L1MU15", &muTrigMatch_0_HLT_mu20_iloose_L1MU15, &b_muTrigMatch_0_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu24_imedium", &muTrigMatch_0_HLT_mu24_imedium, &b_muTrigMatch_0_HLT_mu24_imedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu24_ivarmedium", &muTrigMatch_0_HLT_mu24_ivarmedium, &b_muTrigMatch_0_HLT_mu24_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu26_imedium", &muTrigMatch_0_HLT_mu26_imedium, &b_muTrigMatch_0_HLT_mu26_imedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu26_ivarmedium", &muTrigMatch_0_HLT_mu26_ivarmedium, &b_muTrigMatch_0_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu40", &muTrigMatch_0_HLT_mu40, &b_muTrigMatch_0_HLT_mu40);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu50", &muTrigMatch_0_HLT_mu50, &b_muTrigMatch_0_HLT_mu50);
   fChain->SetBranchAddress("muTrigMatch_0_trigger_matched", &muTrigMatch_0_trigger_matched, &b_muTrigMatch_0_trigger_matched);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu20_iloose_L1MU15", &muTrigMatch_1_HLT_mu20_iloose_L1MU15, &b_muTrigMatch_1_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu24_imedium", &muTrigMatch_1_HLT_mu24_imedium, &b_muTrigMatch_1_HLT_mu24_imedium);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu24_ivarmedium", &muTrigMatch_1_HLT_mu24_ivarmedium, &b_muTrigMatch_1_HLT_mu24_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu26_imedium", &muTrigMatch_1_HLT_mu26_imedium, &b_muTrigMatch_1_HLT_mu26_imedium);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu26_ivarmedium", &muTrigMatch_1_HLT_mu26_ivarmedium, &b_muTrigMatch_1_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu40", &muTrigMatch_1_HLT_mu40, &b_muTrigMatch_1_HLT_mu40);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu50", &muTrigMatch_1_HLT_mu50, &b_muTrigMatch_1_HLT_mu50);
   fChain->SetBranchAddress("muTrigMatch_1_trigger_matched", &muTrigMatch_1_trigger_matched, &b_muTrigMatch_1_trigger_matched);
   fChain->SetBranchAddress("muon_0", &muon_0, &b_muon_0);
   fChain->SetBranchAddress("muon_0_PLI_score", &muon_0_PLI_score, &b_muon_0_PLI_score);
   fChain->SetBranchAddress("muon_0_PLV_score", &muon_0_PLV_score, &b_muon_0_PLV_score);
   fChain->SetBranchAddress("muon_0_cluster_eta", &muon_0_cluster_eta, &b_muon_0_cluster_eta);
   fChain->SetBranchAddress("muon_0_cluster_eta_be2", &muon_0_cluster_eta_be2, &b_muon_0_cluster_eta_be2);
   fChain->SetBranchAddress("muon_0_id_bad", &muon_0_id_bad, &b_muon_0_id_bad);
   fChain->SetBranchAddress("muon_0_id_loose", &muon_0_id_loose, &b_muon_0_id_loose);
   fChain->SetBranchAddress("muon_0_id_medium", &muon_0_id_medium, &b_muon_0_id_medium);
   fChain->SetBranchAddress("muon_0_id_tight", &muon_0_id_tight, &b_muon_0_id_tight);
   fChain->SetBranchAddress("muon_0_id_veryloose", &muon_0_id_veryloose, &b_muon_0_id_veryloose);
   fChain->SetBranchAddress("muon_0_iso_FixedCutHighPtCaloOnly", &muon_0_iso_FixedCutHighPtCaloOnly, &b_muon_0_iso_FixedCutHighPtCaloOnly);
   fChain->SetBranchAddress("muon_0_iso_FixedCutHighPtTrackOnly", &muon_0_iso_FixedCutHighPtTrackOnly, &b_muon_0_iso_FixedCutHighPtTrackOnly);
   fChain->SetBranchAddress("muon_0_iso_FixedCutLoose", &muon_0_iso_FixedCutLoose, &b_muon_0_iso_FixedCutLoose);
   fChain->SetBranchAddress("muon_0_iso_FixedCutTight", &muon_0_iso_FixedCutTight, &b_muon_0_iso_FixedCutTight);
   fChain->SetBranchAddress("muon_0_iso_FixedCutTightTrackOnly", &muon_0_iso_FixedCutTightTrackOnly, &b_muon_0_iso_FixedCutTightTrackOnly);
   fChain->SetBranchAddress("muon_0_iso_FixedCutTrackCone40", &muon_0_iso_FixedCutTrackCone40, &b_muon_0_iso_FixedCutTrackCone40);
   fChain->SetBranchAddress("muon_0_iso_Gradient", &muon_0_iso_Gradient, &b_muon_0_iso_Gradient);
   fChain->SetBranchAddress("muon_0_iso_GradientLoose", &muon_0_iso_GradientLoose, &b_muon_0_iso_GradientLoose);
   fChain->SetBranchAddress("muon_0_iso_Loose", &muon_0_iso_Loose, &b_muon_0_iso_Loose);
   fChain->SetBranchAddress("muon_0_iso_LooseTrackOnly", &muon_0_iso_LooseTrackOnly, &b_muon_0_iso_LooseTrackOnly);
   fChain->SetBranchAddress("muon_0_iso_etcone20", &muon_0_iso_etcone20, &b_muon_0_iso_etcone20);
   fChain->SetBranchAddress("muon_0_iso_etcone30", &muon_0_iso_etcone30, &b_muon_0_iso_etcone30);
   fChain->SetBranchAddress("muon_0_iso_etcone40", &muon_0_iso_etcone40, &b_muon_0_iso_etcone40);
   fChain->SetBranchAddress("muon_0_iso_ptcone20", &muon_0_iso_ptcone20, &b_muon_0_iso_ptcone20);
   fChain->SetBranchAddress("muon_0_iso_ptcone30", &muon_0_iso_ptcone30, &b_muon_0_iso_ptcone30);
   fChain->SetBranchAddress("muon_0_iso_ptcone40", &muon_0_iso_ptcone40, &b_muon_0_iso_ptcone40);
   fChain->SetBranchAddress("muon_0_iso_ptvarcone20", &muon_0_iso_ptvarcone20, &b_muon_0_iso_ptvarcone20);
   fChain->SetBranchAddress("muon_0_iso_ptvarcone30", &muon_0_iso_ptvarcone30, &b_muon_0_iso_ptvarcone30);
   fChain->SetBranchAddress("muon_0_iso_ptvarcone40", &muon_0_iso_ptvarcone40, &b_muon_0_iso_ptvarcone40);
   fChain->SetBranchAddress("muon_0_iso_topoetcone20", &muon_0_iso_topoetcone20, &b_muon_0_iso_topoetcone20);
   fChain->SetBranchAddress("muon_0_iso_topoetcone30", &muon_0_iso_topoetcone30, &b_muon_0_iso_topoetcone30);
   fChain->SetBranchAddress("muon_0_iso_topoetcone40", &muon_0_iso_topoetcone40, &b_muon_0_iso_topoetcone40);
   fChain->SetBranchAddress("muon_0_muonAuthor", &muon_0_muonAuthor, &b_muon_0_muonAuthor);
   fChain->SetBranchAddress("muon_0_muonType", &muon_0_muonType, &b_muon_0_muonType);
   fChain->SetBranchAddress("muon_0_origin", &muon_0_origin, &b_muon_0_origin);
   fChain->SetBranchAddress("muon_0_p4", &muon_0_p4, &b_muon_0_p4);
   fChain->SetBranchAddress("muon_0_q", &muon_0_q, &b_muon_0_q);
   fChain->SetBranchAddress("muon_0_trk_d0", &muon_0_trk_d0, &b_muon_0_trk_d0);
   fChain->SetBranchAddress("muon_0_trk_d0_sig", &muon_0_trk_d0_sig, &b_muon_0_trk_d0_sig);
   fChain->SetBranchAddress("muon_0_trk_pt_error", &muon_0_trk_pt_error, &b_muon_0_trk_pt_error);
   fChain->SetBranchAddress("muon_0_trk_pvx_z0", &muon_0_trk_pvx_z0, &b_muon_0_trk_pvx_z0);
   fChain->SetBranchAddress("muon_0_trk_pvx_z0_sig", &muon_0_trk_pvx_z0_sig, &b_muon_0_trk_pvx_z0_sig);
   fChain->SetBranchAddress("muon_0_trk_pvx_z0_sintheta", &muon_0_trk_pvx_z0_sintheta, &b_muon_0_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("muon_0_trk_vx", &muon_0_trk_vx, &b_muon_0_trk_vx);
   fChain->SetBranchAddress("muon_0_trk_vx_v", &muon_0_trk_vx_v, &b_muon_0_trk_vx_v);
   fChain->SetBranchAddress("muon_0_trk_z0", &muon_0_trk_z0, &b_muon_0_trk_z0);
   fChain->SetBranchAddress("muon_0_trk_z0_sig", &muon_0_trk_z0_sig, &b_muon_0_trk_z0_sig);
   fChain->SetBranchAddress("muon_0_trk_z0_sintheta", &muon_0_trk_z0_sintheta, &b_muon_0_trk_z0_sintheta);
   fChain->SetBranchAddress("muon_0_type", &muon_0_type, &b_muon_0_type);
   fChain->SetBranchAddress("muon_1", &muon_1, &b_muon_1);
   fChain->SetBranchAddress("muon_1_PLI_score", &muon_1_PLI_score, &b_muon_1_PLI_score);
   fChain->SetBranchAddress("muon_1_PLV_score", &muon_1_PLV_score, &b_muon_1_PLV_score);
   fChain->SetBranchAddress("muon_1_cluster_eta", &muon_1_cluster_eta, &b_muon_1_cluster_eta);
   fChain->SetBranchAddress("muon_1_cluster_eta_be2", &muon_1_cluster_eta_be2, &b_muon_1_cluster_eta_be2);
   fChain->SetBranchAddress("muon_1_id_bad", &muon_1_id_bad, &b_muon_1_id_bad);
   fChain->SetBranchAddress("muon_1_id_loose", &muon_1_id_loose, &b_muon_1_id_loose);
   fChain->SetBranchAddress("muon_1_id_medium", &muon_1_id_medium, &b_muon_1_id_medium);
   fChain->SetBranchAddress("muon_1_id_tight", &muon_1_id_tight, &b_muon_1_id_tight);
   fChain->SetBranchAddress("muon_1_id_veryloose", &muon_1_id_veryloose, &b_muon_1_id_veryloose);
   fChain->SetBranchAddress("muon_1_iso_FixedCutHighPtCaloOnly", &muon_1_iso_FixedCutHighPtCaloOnly, &b_muon_1_iso_FixedCutHighPtCaloOnly);
   fChain->SetBranchAddress("muon_1_iso_FixedCutHighPtTrackOnly", &muon_1_iso_FixedCutHighPtTrackOnly, &b_muon_1_iso_FixedCutHighPtTrackOnly);
   fChain->SetBranchAddress("muon_1_iso_FixedCutLoose", &muon_1_iso_FixedCutLoose, &b_muon_1_iso_FixedCutLoose);
   fChain->SetBranchAddress("muon_1_iso_FixedCutTight", &muon_1_iso_FixedCutTight, &b_muon_1_iso_FixedCutTight);
   fChain->SetBranchAddress("muon_1_iso_FixedCutTightTrackOnly", &muon_1_iso_FixedCutTightTrackOnly, &b_muon_1_iso_FixedCutTightTrackOnly);
   fChain->SetBranchAddress("muon_1_iso_FixedCutTrackCone40", &muon_1_iso_FixedCutTrackCone40, &b_muon_1_iso_FixedCutTrackCone40);
   fChain->SetBranchAddress("muon_1_iso_Gradient", &muon_1_iso_Gradient, &b_muon_1_iso_Gradient);
   fChain->SetBranchAddress("muon_1_iso_GradientLoose", &muon_1_iso_GradientLoose, &b_muon_1_iso_GradientLoose);
   fChain->SetBranchAddress("muon_1_iso_Loose", &muon_1_iso_Loose, &b_muon_1_iso_Loose);
   fChain->SetBranchAddress("muon_1_iso_LooseTrackOnly", &muon_1_iso_LooseTrackOnly, &b_muon_1_iso_LooseTrackOnly);
   fChain->SetBranchAddress("muon_1_iso_etcone20", &muon_1_iso_etcone20, &b_muon_1_iso_etcone20);
   fChain->SetBranchAddress("muon_1_iso_etcone30", &muon_1_iso_etcone30, &b_muon_1_iso_etcone30);
   fChain->SetBranchAddress("muon_1_iso_etcone40", &muon_1_iso_etcone40, &b_muon_1_iso_etcone40);
   fChain->SetBranchAddress("muon_1_iso_ptcone20", &muon_1_iso_ptcone20, &b_muon_1_iso_ptcone20);
   fChain->SetBranchAddress("muon_1_iso_ptcone30", &muon_1_iso_ptcone30, &b_muon_1_iso_ptcone30);
   fChain->SetBranchAddress("muon_1_iso_ptcone40", &muon_1_iso_ptcone40, &b_muon_1_iso_ptcone40);
   fChain->SetBranchAddress("muon_1_iso_ptvarcone20", &muon_1_iso_ptvarcone20, &b_muon_1_iso_ptvarcone20);
   fChain->SetBranchAddress("muon_1_iso_ptvarcone30", &muon_1_iso_ptvarcone30, &b_muon_1_iso_ptvarcone30);
   fChain->SetBranchAddress("muon_1_iso_ptvarcone40", &muon_1_iso_ptvarcone40, &b_muon_1_iso_ptvarcone40);
   fChain->SetBranchAddress("muon_1_iso_topoetcone20", &muon_1_iso_topoetcone20, &b_muon_1_iso_topoetcone20);
   fChain->SetBranchAddress("muon_1_iso_topoetcone30", &muon_1_iso_topoetcone30, &b_muon_1_iso_topoetcone30);
   fChain->SetBranchAddress("muon_1_iso_topoetcone40", &muon_1_iso_topoetcone40, &b_muon_1_iso_topoetcone40);
   fChain->SetBranchAddress("muon_1_muonAuthor", &muon_1_muonAuthor, &b_muon_1_muonAuthor);
   fChain->SetBranchAddress("muon_1_muonType", &muon_1_muonType, &b_muon_1_muonType);
   fChain->SetBranchAddress("muon_1_origin", &muon_1_origin, &b_muon_1_origin);
   fChain->SetBranchAddress("muon_1_p4", &muon_1_p4, &b_muon_1_p4);
   fChain->SetBranchAddress("muon_1_q", &muon_1_q, &b_muon_1_q);
   fChain->SetBranchAddress("muon_1_trk_d0", &muon_1_trk_d0, &b_muon_1_trk_d0);
   fChain->SetBranchAddress("muon_1_trk_d0_sig", &muon_1_trk_d0_sig, &b_muon_1_trk_d0_sig);
   fChain->SetBranchAddress("muon_1_trk_pt_error", &muon_1_trk_pt_error, &b_muon_1_trk_pt_error);
   fChain->SetBranchAddress("muon_1_trk_pvx_z0", &muon_1_trk_pvx_z0, &b_muon_1_trk_pvx_z0);
   fChain->SetBranchAddress("muon_1_trk_pvx_z0_sig", &muon_1_trk_pvx_z0_sig, &b_muon_1_trk_pvx_z0_sig);
   fChain->SetBranchAddress("muon_1_trk_pvx_z0_sintheta", &muon_1_trk_pvx_z0_sintheta, &b_muon_1_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("muon_1_trk_vx", &muon_1_trk_vx, &b_muon_1_trk_vx);
   fChain->SetBranchAddress("muon_1_trk_vx_v", &muon_1_trk_vx_v, &b_muon_1_trk_vx_v);
   fChain->SetBranchAddress("muon_1_trk_z0", &muon_1_trk_z0, &b_muon_1_trk_z0);
   fChain->SetBranchAddress("muon_1_trk_z0_sig", &muon_1_trk_z0_sig, &b_muon_1_trk_z0_sig);
   fChain->SetBranchAddress("muon_1_trk_z0_sintheta", &muon_1_trk_z0_sintheta, &b_muon_1_trk_z0_sintheta);
   fChain->SetBranchAddress("muon_1_type", &muon_1_type, &b_muon_1_type);
   fChain->SetBranchAddress("n_actual_int", &n_actual_int, &b_n_actual_int);
   fChain->SetBranchAddress("n_avg_int", &n_avg_int, &b_n_avg_int);
   fChain->SetBranchAddress("n_avg_int_cor", &n_avg_int_cor, &b_n_avg_int_cor);
   fChain->SetBranchAddress("n_bjets", &n_bjets, &b_n_bjets);
   fChain->SetBranchAddress("n_electrons", &n_electrons, &b_n_electrons);
   fChain->SetBranchAddress("n_electrons_met", &n_electrons_met, &b_n_electrons_met);
   fChain->SetBranchAddress("n_electrons_olr", &n_electrons_olr, &b_n_electrons_olr);
   fChain->SetBranchAddress("n_jets", &n_jets, &b_n_jets);
   fChain->SetBranchAddress("n_jets_30", &n_jets_30, &b_n_jets_30);
   fChain->SetBranchAddress("n_jets_40", &n_jets_40, &b_n_jets_40);
   fChain->SetBranchAddress("n_jets_bad", &n_jets_bad, &b_n_jets_bad);
   fChain->SetBranchAddress("n_jets_mc_hs", &n_jets_mc_hs, &b_n_jets_mc_hs);
   fChain->SetBranchAddress("n_jets_met", &n_jets_met, &b_n_jets_met);
   fChain->SetBranchAddress("n_jets_olr", &n_jets_olr, &b_n_jets_olr);
   fChain->SetBranchAddress("n_muons", &n_muons, &b_n_muons);
   fChain->SetBranchAddress("n_muons_met", &n_muons_met, &b_n_muons_met);
   fChain->SetBranchAddress("n_muons_olr", &n_muons_olr, &b_n_muons_olr);
   fChain->SetBranchAddress("n_photons", &n_photons, &b_n_photons);
   fChain->SetBranchAddress("n_photons_met", &n_photons_met, &b_n_photons_met);
   fChain->SetBranchAddress("n_photons_olr", &n_photons_olr, &b_n_photons_olr);
   fChain->SetBranchAddress("n_pvx", &n_pvx, &b_n_pvx);
   fChain->SetBranchAddress("n_taus", &n_taus, &b_n_taus);
   fChain->SetBranchAddress("n_taus_loose", &n_taus_loose, &b_n_taus_loose);
   fChain->SetBranchAddress("n_taus_medium", &n_taus_medium, &b_n_taus_medium);
   fChain->SetBranchAddress("n_taus_met", &n_taus_met, &b_n_taus_met);
   fChain->SetBranchAddress("n_taus_olr", &n_taus_olr, &b_n_taus_olr);
   fChain->SetBranchAddress("n_taus_tight", &n_taus_tight, &b_n_taus_tight);
   fChain->SetBranchAddress("n_vx", &n_vx, &b_n_vx);
   fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
   fChain->SetBranchAddress("tau_0", &tau_0, &b_tau_0);
   fChain->SetBranchAddress("tau_0_PTV_score", &tau_0_PTV_score, &b_tau_0_PTV_score);
   fChain->SetBranchAddress("tau_0_allTrk_eta", &tau_0_allTrk_eta, &b_tau_0_allTrk_eta);
   fChain->SetBranchAddress("tau_0_allTrk_n", &tau_0_allTrk_n, &b_tau_0_allTrk_n);
   fChain->SetBranchAddress("tau_0_allTrk_phi", &tau_0_allTrk_phi, &b_tau_0_allTrk_phi);
   fChain->SetBranchAddress("tau_0_allTrk_pt", &tau_0_allTrk_pt, &b_tau_0_allTrk_pt);
   fChain->SetBranchAddress("tau_0_b_tag_score", &tau_0_b_tag_score, &b_tau_0_b_tag_score);
   fChain->SetBranchAddress("tau_0_b_tagged", &tau_0_b_tagged, &b_tau_0_b_tagged);
   fChain->SetBranchAddress("tau_0_decay_mode", &tau_0_decay_mode, &b_tau_0_decay_mode);
   fChain->SetBranchAddress("tau_0_ele_BDTEleScoreTrans_run2", &tau_0_ele_BDTEleScoreTrans_run2, &b_tau_0_ele_BDTEleScoreTrans_run2);
   fChain->SetBranchAddress("tau_0_ele_bdt_loose", &tau_0_ele_bdt_loose, &b_tau_0_ele_bdt_loose);
   fChain->SetBranchAddress("tau_0_ele_bdt_medium", &tau_0_ele_bdt_medium, &b_tau_0_ele_bdt_medium);
   fChain->SetBranchAddress("tau_0_ele_bdt_score", &tau_0_ele_bdt_score, &b_tau_0_ele_bdt_score);
   fChain->SetBranchAddress("tau_0_ele_bdt_tight", &tau_0_ele_bdt_tight, &b_tau_0_ele_bdt_tight);
   fChain->SetBranchAddress("tau_0_ele_match_lhscore", &tau_0_ele_match_lhscore, &b_tau_0_ele_match_lhscore);
   fChain->SetBranchAddress("tau_0_ele_olr_pass", &tau_0_ele_olr_pass, &b_tau_0_ele_olr_pass);
   fChain->SetBranchAddress("tau_0_jet_bdt_loose", &tau_0_jet_bdt_loose, &b_tau_0_jet_bdt_loose);
   fChain->SetBranchAddress("tau_0_jet_bdt_medium", &tau_0_jet_bdt_medium, &b_tau_0_jet_bdt_medium);
   fChain->SetBranchAddress("tau_0_jet_bdt_score", &tau_0_jet_bdt_score, &b_tau_0_jet_bdt_score);
   fChain->SetBranchAddress("tau_0_jet_bdt_score_trans", &tau_0_jet_bdt_score_trans, &b_tau_0_jet_bdt_score_trans);
   fChain->SetBranchAddress("tau_0_jet_bdt_tight", &tau_0_jet_bdt_tight, &b_tau_0_jet_bdt_tight);
   fChain->SetBranchAddress("tau_0_jet_jvt", &tau_0_jet_jvt, &b_tau_0_jet_jvt);
   fChain->SetBranchAddress("tau_0_jet_width", &tau_0_jet_width, &b_tau_0_jet_width);
   fChain->SetBranchAddress("tau_0_leadTrk_eta", &tau_0_leadTrk_eta, &b_tau_0_leadTrk_eta);
   fChain->SetBranchAddress("tau_0_leadTrk_phi", &tau_0_leadTrk_phi, &b_tau_0_leadTrk_phi);
   fChain->SetBranchAddress("tau_0_leadTrk_pt", &tau_0_leadTrk_pt, &b_tau_0_leadTrk_pt);
   fChain->SetBranchAddress("tau_0_n_all_tracks", &tau_0_n_all_tracks, &b_tau_0_n_all_tracks);
   fChain->SetBranchAddress("tau_0_n_charged_tracks", &tau_0_n_charged_tracks, &b_tau_0_n_charged_tracks);
   fChain->SetBranchAddress("tau_0_n_conversion_tracks", &tau_0_n_conversion_tracks, &b_tau_0_n_conversion_tracks);
   fChain->SetBranchAddress("tau_0_n_core_tracks", &tau_0_n_core_tracks, &b_tau_0_n_core_tracks);
   fChain->SetBranchAddress("tau_0_n_failTrackFilter_tracks", &tau_0_n_failTrackFilter_tracks, &b_tau_0_n_failTrackFilter_tracks);
   fChain->SetBranchAddress("tau_0_n_fake_tracks", &tau_0_n_fake_tracks, &b_tau_0_n_fake_tracks);
   fChain->SetBranchAddress("tau_0_n_isolation_tracks", &tau_0_n_isolation_tracks, &b_tau_0_n_isolation_tracks);
   fChain->SetBranchAddress("tau_0_n_modified_isolation_tracks", &tau_0_n_modified_isolation_tracks, &b_tau_0_n_modified_isolation_tracks);
   fChain->SetBranchAddress("tau_0_n_old_tracks", &tau_0_n_old_tracks, &b_tau_0_n_old_tracks);
   fChain->SetBranchAddress("tau_0_n_passTrkSelectionTight_tracks", &tau_0_n_passTrkSelectionTight_tracks, &b_tau_0_n_passTrkSelectionTight_tracks);
   fChain->SetBranchAddress("tau_0_n_passTrkSelector_tracks", &tau_0_n_passTrkSelector_tracks, &b_tau_0_n_passTrkSelector_tracks);
   fChain->SetBranchAddress("tau_0_n_unclassified_tracks", &tau_0_n_unclassified_tracks, &b_tau_0_n_unclassified_tracks);
   fChain->SetBranchAddress("tau_0_n_wide_tracks", &tau_0_n_wide_tracks, &b_tau_0_n_wide_tracks);
   fChain->SetBranchAddress("tau_0_origin", &tau_0_origin, &b_tau_0_origin);
   fChain->SetBranchAddress("tau_0_p4", &tau_0_p4, &b_tau_0_p4);
   fChain->SetBranchAddress("tau_0_q", &tau_0_q, &b_tau_0_q);
   fChain->SetBranchAddress("tau_0_type", &tau_0_type, &b_tau_0_type);
   fChain->SetBranchAddress("tau_1", &tau_1, &b_tau_1);
   fChain->SetBranchAddress("tau_1_PTV_score", &tau_1_PTV_score, &b_tau_1_PTV_score);
   fChain->SetBranchAddress("tau_1_allTrk_eta", &tau_1_allTrk_eta, &b_tau_1_allTrk_eta);
   fChain->SetBranchAddress("tau_1_allTrk_n", &tau_1_allTrk_n, &b_tau_1_allTrk_n);
   fChain->SetBranchAddress("tau_1_allTrk_phi", &tau_1_allTrk_phi, &b_tau_1_allTrk_phi);
   fChain->SetBranchAddress("tau_1_allTrk_pt", &tau_1_allTrk_pt, &b_tau_1_allTrk_pt);
   fChain->SetBranchAddress("tau_1_b_tag_score", &tau_1_b_tag_score, &b_tau_1_b_tag_score);
   fChain->SetBranchAddress("tau_1_b_tagged", &tau_1_b_tagged, &b_tau_1_b_tagged);
   fChain->SetBranchAddress("tau_1_decay_mode", &tau_1_decay_mode, &b_tau_1_decay_mode);
   fChain->SetBranchAddress("tau_1_ele_BDTEleScoreTrans_run2", &tau_1_ele_BDTEleScoreTrans_run2, &b_tau_1_ele_BDTEleScoreTrans_run2);
   fChain->SetBranchAddress("tau_1_ele_bdt_loose", &tau_1_ele_bdt_loose, &b_tau_1_ele_bdt_loose);
   fChain->SetBranchAddress("tau_1_ele_bdt_medium", &tau_1_ele_bdt_medium, &b_tau_1_ele_bdt_medium);
   fChain->SetBranchAddress("tau_1_ele_bdt_score", &tau_1_ele_bdt_score, &b_tau_1_ele_bdt_score);
   fChain->SetBranchAddress("tau_1_ele_bdt_tight", &tau_1_ele_bdt_tight, &b_tau_1_ele_bdt_tight);
   fChain->SetBranchAddress("tau_1_ele_match_lhscore", &tau_1_ele_match_lhscore, &b_tau_1_ele_match_lhscore);
   fChain->SetBranchAddress("tau_1_ele_olr_pass", &tau_1_ele_olr_pass, &b_tau_1_ele_olr_pass);
   fChain->SetBranchAddress("tau_1_jet_bdt_loose", &tau_1_jet_bdt_loose, &b_tau_1_jet_bdt_loose);
   fChain->SetBranchAddress("tau_1_jet_bdt_medium", &tau_1_jet_bdt_medium, &b_tau_1_jet_bdt_medium);
   fChain->SetBranchAddress("tau_1_jet_bdt_score", &tau_1_jet_bdt_score, &b_tau_1_jet_bdt_score);
   fChain->SetBranchAddress("tau_1_jet_bdt_score_trans", &tau_1_jet_bdt_score_trans, &b_tau_1_jet_bdt_score_trans);
   fChain->SetBranchAddress("tau_1_jet_bdt_tight", &tau_1_jet_bdt_tight, &b_tau_1_jet_bdt_tight);
   fChain->SetBranchAddress("tau_1_jet_jvt", &tau_1_jet_jvt, &b_tau_1_jet_jvt);
   fChain->SetBranchAddress("tau_1_jet_width", &tau_1_jet_width, &b_tau_1_jet_width);
   fChain->SetBranchAddress("tau_1_leadTrk_eta", &tau_1_leadTrk_eta, &b_tau_1_leadTrk_eta);
   fChain->SetBranchAddress("tau_1_leadTrk_phi", &tau_1_leadTrk_phi, &b_tau_1_leadTrk_phi);
   fChain->SetBranchAddress("tau_1_leadTrk_pt", &tau_1_leadTrk_pt, &b_tau_1_leadTrk_pt);
   fChain->SetBranchAddress("tau_1_n_all_tracks", &tau_1_n_all_tracks, &b_tau_1_n_all_tracks);
   fChain->SetBranchAddress("tau_1_n_charged_tracks", &tau_1_n_charged_tracks, &b_tau_1_n_charged_tracks);
   fChain->SetBranchAddress("tau_1_n_conversion_tracks", &tau_1_n_conversion_tracks, &b_tau_1_n_conversion_tracks);
   fChain->SetBranchAddress("tau_1_n_core_tracks", &tau_1_n_core_tracks, &b_tau_1_n_core_tracks);
   fChain->SetBranchAddress("tau_1_n_failTrackFilter_tracks", &tau_1_n_failTrackFilter_tracks, &b_tau_1_n_failTrackFilter_tracks);
   fChain->SetBranchAddress("tau_1_n_fake_tracks", &tau_1_n_fake_tracks, &b_tau_1_n_fake_tracks);
   fChain->SetBranchAddress("tau_1_n_isolation_tracks", &tau_1_n_isolation_tracks, &b_tau_1_n_isolation_tracks);
   fChain->SetBranchAddress("tau_1_n_modified_isolation_tracks", &tau_1_n_modified_isolation_tracks, &b_tau_1_n_modified_isolation_tracks);
   fChain->SetBranchAddress("tau_1_n_old_tracks", &tau_1_n_old_tracks, &b_tau_1_n_old_tracks);
   fChain->SetBranchAddress("tau_1_n_passTrkSelectionTight_tracks", &tau_1_n_passTrkSelectionTight_tracks, &b_tau_1_n_passTrkSelectionTight_tracks);
   fChain->SetBranchAddress("tau_1_n_passTrkSelector_tracks", &tau_1_n_passTrkSelector_tracks, &b_tau_1_n_passTrkSelector_tracks);
   fChain->SetBranchAddress("tau_1_n_unclassified_tracks", &tau_1_n_unclassified_tracks, &b_tau_1_n_unclassified_tracks);
   fChain->SetBranchAddress("tau_1_n_wide_tracks", &tau_1_n_wide_tracks, &b_tau_1_n_wide_tracks);
   fChain->SetBranchAddress("tau_1_origin", &tau_1_origin, &b_tau_1_origin);
   fChain->SetBranchAddress("tau_1_p4", &tau_1_p4, &b_tau_1_p4);
   fChain->SetBranchAddress("tau_1_q", &tau_1_q, &b_tau_1_q);
   fChain->SetBranchAddress("tau_1_type", &tau_1_type, &b_tau_1_type);
   Notify();
}

Bool_t MyAnalysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MyAnalysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MyAnalysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MyAnalysis_cxx
