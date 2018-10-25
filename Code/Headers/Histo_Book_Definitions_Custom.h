///////////////////////////////////////////////////////////////////////////////////////
/// ---------------------FORMATTING OF CUSTOM HISTOGRAM DEFINITIONS-----------------///
///////////////////////////////////////////////////////////////////////////////////////

// BOOK KEEPING - keep things in chronological order unless there is a reason not to!

/// -- Variable to be plotted in histogram
//double variable;

/// -- Virtual book function to book the histogram (PRE version)
//virtual void Book_variable_PRE(int bins, double min, double max);
/// -- Declaration of Histogram (PRE version)
//TH1F	*h_variable_PRE

/// -- Virtual book function to book the histogram
//virtual void Book_variable(int bins, double min, double max);
/// -- Declaration of Histogram
//TH1F	*h_variable


///////////////////////////////////////////////////////////////////////////////////////
/// ----------------END OF FORMATTING OF CUSTOM HISTOGRAM DEFINITIONS---------------///
///////////////////////////////////////////////////////////////////////////////////////


/// -------- RECYCLABLE VARIABLES ------ ///

///----------Delta R---------------------------------///

/// -- Variable to be plotted in histogram
double DeltaR;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_DeltaR_PRE(int bins, double min, double max);
TH1F	*h_DeltaR_PRE;

/// -- Virtual book function to book the histogram
virtual void Book_DeltaR(int bins, double min, double max);
TH1F	*h_DeltaR;

/// -- Variable to be plotted in histogram
double pT_balance;

/// -- lepton_0 lepton_1 ljet_0 ljet_1 pT balance histogram PRE CUT
virtual void Book_pT_balance_PRE(int bins, double min, double max);
TH1F	*h_pT_balance_PRE;

/// -- lepton_0 lepton_1 ljet_0 ljet_1 pT balance histogram POST CUT
virtual void Book_pT_balance(int bins, double min, double max);
TH1F	*h_pT_balance;

/// ----------- JETS ------------- ///

///----------- Leading Jets Invariant Mass ------------///

///Leading jets invariant mass
double ljet_0_ljet_1_mass; 

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max);
/// -- Declaration of Histogram (PRE version)
TH1F	*h_ljet_0_ljet_1_mass_PRE;

/// -- Virtual book function to book the histogram
virtual void Book_ljet_0_ljet_1_mass(int bins, double min, double max);
/// -- Declaration of Histogram
TH1F	*h_ljet_0_ljet_1_mass;


/// ----------- ELECTRONS ------------- ///

///-------------Invariant mass of electron 0 and electron 1-----------------///
/// -- Variable to be plotted in histogram
double elec_0_elec_1_mass;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_elec_0_elec_1_mass_PRE(int bins, double min, double max);
TH1F	*h_elec_0_elec_1_mass_PRE;

/// -- Virtual book function to book the histogram
virtual void Book_elec_0_elec_1_mass(int bins, double min, double max);
TH1F	*h_elec_0_elec_1_mass;

/////---------------------elec_0 & elec_1 combined pt---------------------/////
/// -- Variable to be plotted in histogram
double elec_0_elec_1_pt;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_elec_0_elec_1_pt_PRE(int bins, double min, double max);
/// -- Declaration of Histogram (PRE version)
TH1F	*h_elec_0_elec_1_pt_PRE;

/// -- Virtual book function to book the histogram
virtual void Book_elec_0_elec_1_pt(int bins, double min, double max);
/// -- Declaration of Histogram
TH1F	*h_elec_0_elec_1_pt;

/// ----------- MUONS ------------- ///

///-------------Invariant mass of muon 0 and muon 1-----------------///
/// -- Variable to be plotted in histogram
double muon_0_muon_1_mass;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_muon_0_muon_1_mass_PRE(int bins, double min, double max);
TH1F	*h_muon_0_muon_1_mass_PRE;

/// -- Virtual book function to book the histogram
virtual void Book_muon_0_muon_1_mass(int bins, double min, double max);
TH1F	*h_muon_0_muon_1_mass;

/////---------------------muon_0 & muon_1 combined pt---------------------/////
/// -- Variable to be plotted in histogram
double muon_0_muon_1_pt;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_muon_0_muon_1_pt_PRE(int bins, double min, double max);
/// -- Declaration of Histogram (PRE version)
TH1F	*h_muon_0_muon_1_pt_PRE;

/// -- muon0_muon1 invariant mass histogram
virtual void Book_muon_0_muon_1_pt(int bins, double min, double max);
/// -- Declaration of Histogram
TH1F	*h_muon_0_muon_1_pt;




