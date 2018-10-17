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

///---------------------Invariant mass of electron 0 and electron 1-----------------///
/// -- Variable to be plotted in histogram
double elec_0_elec_1_Mass;

/// -- Virtual book function to book the histogram
virtual void Book_elec_0_elec_1_mass(int bins, double min, double max);
TH1F	*h_elec_0_elec_1_mass;

/// -- Virtual book function to book the histogram (PRE version)
virtual void Book_elec_0_elec_1_mass_PRE(int bins, double min, double max);
TH1F	*h_elec_0_elec_1_mass_PRE;

