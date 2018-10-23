///////////////////////////////////////////////////////////////////////////////////////
/// ---------------------FORMATTING OF CUSTOM HISTOGRAM DEFINITIONS-----------------///
///////////////////////////////////////////////////////////////////////////////////////

/// -- Variable to be plotted in histogram
//double variable;

/// -- Virtual book function to book the histogram
//virtual void Book_variable(int bins, double min, double max);
/// -- Declaration of Histogram
//TH1F	*h_variable

/// -- Virtual book function to book the histogram (PRE version)
//virtual void Book_variable_PRE(int bins, double min, double max);
/// -- Declaration of Histogram (PRE version)
//TH1F	*h_variable_PRE

///////////////////////////////////////////////////////////////////////////////////////
/// ----------------END OF FORMATTING OF CUSTOM HISTOGRAM DEFINITIONS---------------///
///////////////////////////////////////////////////////////////////////////////////////


/// -------- RECYCLABLE VARIABLES ------ ///

///----------Delta R---------------------------------///

/// -- Variable to be plotted in histogram
double DeltaR;

/// -- Virtual book function to book the histogram
virtual void Book_DeltaR(int bins, double min, double max);
TH1F	*h_DeltaR;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_DeltaR_PRE(int bins, double min, double max);
TH1F	*h_DeltaR_PRE;

///----------- Leading Jets Invariant Mass ------------///

///Leading jets invariant mass
double ljet_0_ljet_1_mass; 

/// -- Virtual book function to book the histogram
virtual void Book_ljet_0_ljet_1_mass(int bins, double min, double max);
/// -- Declaration of Histogram
TH1F	*h_ljet_0_ljet_1_mass;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_ljet_0_ljet_1_mass_PRE(int bins, double min, double max);
/// -- Declaration of Histogram (PRE version)
TH1F	*h_ljet_0_ljet_1_mass_PRE;


/// ----------- ELECTRONS ------------- ///

///-------------Invariant mass of electron 0 and electron 1-----------------///
/// -- Variable to be plotted in histogram
double elec_0_elec_1_Mass;

/// -- Virtual book function to book the histogram
virtual void Book_elec_0_elec_1_mass(int bins, double min, double max);
TH1F	*h_elec_0_elec_1_mass;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_elec_0_elec_1_mass_PRE(int bins, double min, double max);
TH1F	*h_elec_0_elec_1_mass_PRE;


/// ----------- MUONS ------------- ///

///-------------Invariant mass of muon 0 and muon 1-----------------///
/// -- Variable to be plotted in histogram
double muon_0_muon_1_Mass;

/// -- Virtual book function to book the histogram
virtual void Book_muon_0_muon_1_mass(int bins, double min, double max);
TH1F	*h_muon_0_muon_1_mass;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_muon_0_muon_1_mass_PRE(int bins, double min, double max);
TH1F	*h_muon_0_muon_1_mass_PRE;



