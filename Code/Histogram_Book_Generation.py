#Histogram Booking Functions
Histo_Book_Functions_AutoGen = open("Headers/Histo_Book_Functions_AutoGen.h", "w")

#Histogram Definitions
Histo_Definitions = open("Headers/Histo_Book_Definitions_AutoGen.h", "w")

#MC_Analysis to be read
MC_Analysis = open("Headers/MC_Analysis.h", "r")

#To fill the _BookHistos Function inside SOMETHING_Analysis.h
_BookHistos = open("Headers/_BookHistos.h", "w")

#To fill the _FillAllData_PreCut Function inside SOMETHING_Analysis.h
_FillAllData_PreCut = open("Headers/_FillAllData_PreCut.h", "w")

#To fill the _FillAllData_PostCut Function inside SOMETHING_Analysis.h
_FillAllData_PostCut = open("Headers/_FillAllData_PostCut.h", "w")

#To fill the _FillAllData_ControlCut Function inside SOMETHING_Analysis.h
_FillAllData_ControlCut = open("Headers/_FillAllData_ControlCut.h", "w")

#To fill the _DrawHistos Function inside SOMETHING_Analysis.h
_DrawHistos = open("Headers/_DrawHistos.h", "w")

#Custom histograms to be created
Custom_Histos = open("Custom_Histogram_Names.txt", "r")

#Histogram Booking Functions for Custom Histograms
Histo_Custom_Book_Functions = open("Headers/Histo_Book_Functions_AutoGen_Custom.h", "w")

#Histogram Booking Definitions for Custom Histograms
Histo_Custom_Book_Definitions = open("Headers/Histo_Book_Definitions_AutoGen_Custom.h", "w")

reader = 0
oldLeafName = ""

bjet0found = 0
bjet1found = 0

elec0found = 0
elec1found = 0

ljet0found = 0
ljet1found = 0
ljet2found = 0
ljet3found = 0

muon0found = 0
muon1found = 0

tau0found = 0
tau1found = 0

def AnalysisAutoGen(InputTLorentzName, DesiredTLorentzName, Units):
	if InputTLorentzName == DesiredTLorentzName:
		#To fill the _BookHistos Function inside SOMETHING_Analysis.h
		_BookHistos.write("\t//Histogram Bookings for " + leafName + "_" + TLorentzName + "\n")
		_BookHistos.write("\tBook_" + leafName + "_" + TLorentzName + "(bins, " + InputTLorentzName + "Min, " + InputTLorentzName + "Max);\n")
		_BookHistos.write("\tBook_" + leafName + "_" + TLorentzName + "_CONTROL(bins, " + InputTLorentzName + "Min, " + InputTLorentzName + "Max);\n\n")
		_BookHistos.write("\tBook_" + leafName + "_" + TLorentzName + "_PRE(bins, " + InputTLorentzName + "Min, " + InputTLorentzName + "Max);\n\n")

		#To fill the _FillAllData_PreCut Function inside SOMETHING_Analysis.h
		_FillAllData_PreCut.write("\t//Pre-Cut Histogram Filling for " + leafName + "_" + TLorentzName + "\n")
		_FillAllData_PreCut.write("\th_" + leafName + "_" + TLorentzName + "_PRE->Fill(" + leafName + "->" + TLorentzName + "());\n\n")

		#To fill the _FillAllData_ControlCut Function inside SOMETHING_Analysis.h
		_FillAllData_ControlCut.write("\t//Control-Cut Histogram Filling for " + leafName + "_" + TLorentzName + "\n")
		_FillAllData_ControlCut.write("\th_" + leafName + "_" + TLorentzName + "_CONTROL->Fill(" + leafName + "->" + TLorentzName + "());\n\n")

		#To fill the _FillAllData_PostCut Function inside SOMETHING_Analysis.h
		_FillAllData_PostCut.write("\t//Post-Cut Histogram Filling for " + leafName + "_" + TLorentzName + "\n")
		_FillAllData_PostCut.write("\th_" + leafName + "_" + TLorentzName + "->Fill(" + leafName + "->" + TLorentzName + "());\n\n")

		#To fill the _DrawHistos Function inside SOMETHING_Analysis.h
		_DrawHistos.write("\t//Histogram Draw Functions for " + leafName + "_" + TLorentzName + "\n")
		_DrawHistos.write("\tDrawHistogram_Quiet(h_" + leafName + "_" + TLorentzName + ", \"h_" + leafName + "_" + TLorentzName + "\", \"h_" + leafName + "_" + TLorentzName + "_\" + AnalysisType, \"" + Units + "\", 600, 400, false, \"h_" + leafName + "_" + TLorentzName + "_\" + AnalysisType + \".pdf\", AnalysisType);\n")
		_DrawHistos.write("\tDrawHistogram_Quiet(h_" + leafName + "_" + TLorentzName + "_PRE, \"h_" + leafName + "_" + TLorentzName + "_PRE\", \"h_" + leafName + "_" + TLorentzName + "_PRE_\" + AnalysisType, \"" + Units + "\", 600, 400, false, \"h_" + leafName + "_" + TLorentzName + "_PRE_\" + AnalysisType + \".pdf\", AnalysisType);\n\n")
		_DrawHistos.write("\tDrawHistogram_Quiet(h_" + leafName + "_" + TLorentzName + "_CONTROL, \"h_" + leafName + "_" + TLorentzName + "_CONTROL\", \"h_" + leafName + "_" + TLorentzName + "_CONTROL_\" + AnalysisType, \"" + Units + "\", 600, 400, false, \"h_" + leafName + "_" + TLorentzName + "_CONTROL_\" + AnalysisType + \".pdf\", AnalysisType);\n\n")


for line in MC_Analysis:

	#Here the files have their relevant information written
	if reader == 1:
		#If the leaf is a TLorentzVector
		if line[3:17] == "TLorentzVector":

			#Find the semicolon at the end of the line, use it to get the leafName
			semicolonpos = line.find(";")
			leafName = line[20:semicolonpos]

			#Indicate that what follows is a TLorentzVector set of information
			Histo_Definitions.write("\t/// ---- Histogram booking functions and declarations for TLorentzVector " + leafName + " ---- ///\n")
			Histo_Book_Functions_AutoGen.write("// ----- HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector " + leafName + " ----- //\n")

			#Open the TLorentzVector_Leaves.txt file for reading (Can't be done at beginning, needs to happen every time the loop runs)
			TLorentzVector_Leaves = open("TLorentzVector_Leaves.txt", "r")

			for lorentzline in TLorentzVector_Leaves:
				TLorentzName = lorentzline[0:len(lorentzline)-1]

				#Write out the histogram booking functions to the Histo Definitions file
				Histo_Definitions.write("\t\t//Histogram booking functions and declarations for " + leafName + "_" + TLorentzName + "\n")
				Histo_Definitions.write("\t\tvirtual void Book_" + leafName + "_" + TLorentzName + "(int bins, double min, double max);\n")
				Histo_Definitions.write("\t\tTH1F\t*h_" + leafName + "_" + TLorentzName + ";\n")
				Histo_Definitions.write("\t\tvirtual void Book_" + leafName + "_" + TLorentzName + "_CONTROL(int bins, double min, double max);\n")
				Histo_Definitions.write("\t\tTH1F\t*h_" + leafName + "_" + TLorentzName + "_CONTROL;\n")
				Histo_Definitions.write("\t\tvirtual void Book_" + leafName + "_" + TLorentzName + "_PRE(int bins, double min, double max);\n")
				Histo_Definitions.write("\t\tTH1F\t*h_" + leafName + "_" + TLorentzName + "_PRE;\n")

				#Write out the histogram booking functions to the histogram booking functions file
				Histo_Book_Functions_AutoGen.write("\t//Histogram booking function for " + leafName + "_" + TLorentzName + "\n")
				Histo_Book_Functions_AutoGen.write("\tvoid MC_Analysis::Book_" + leafName + "_" + TLorentzName + "(int bins, double min, double max) {\n")
				Histo_Book_Functions_AutoGen.write("\t\th_" + leafName + "_" + TLorentzName + " = new TH1F(\"h_" + leafName + "_" + TLorentzName + "\",\"\", bins, min, max);\n")
				Histo_Book_Functions_AutoGen.write("\t}\n")
				Histo_Book_Functions_AutoGen.write("\tvoid MC_Analysis::Book_" + leafName + "_" + TLorentzName + "_CONTROL(int bins, double min, double max) {")
				Histo_Book_Functions_AutoGen.write("\t\th_" + leafName + "_" + TLorentzName + "_CONTROL = new TH1F(\"h_" + leafName + "_" + TLorentzName + "_CONTROL\",\"\", bins, min, max);\n")
				Histo_Book_Functions_AutoGen.write("\t}\n")
				Histo_Book_Functions_AutoGen.write("\tvoid MC_Analysis::Book_" + leafName + "_" + TLorentzName + "_PRE(int bins, double min, double max) {\n")
				Histo_Book_Functions_AutoGen.write("\t\th_" + leafName + "_" + TLorentzName + "_PRE = new TH1F(\"h_" + leafName + "_" + TLorentzName + "_PRE\",\"\", bins, min, max);\n")
				Histo_Book_Functions_AutoGen.write("\t}\n")

				AnalysisAutoGen(TLorentzName, "Pt", ";Momentum [GeV/c^{2}];Entries")
				AnalysisAutoGen(TLorentzName, "Phi", ";;Entries")
				AnalysisAutoGen(TLorentzName, "Eta", ";;Entries")
				AnalysisAutoGen(TLorentzName, "Rapidity", ";;Entries")


			Histo_Definitions.write("\t/// ---- End of booking functions and declarations for TLorentzVector " + leafName + " ---- ///\n\n")
			Histo_Book_Functions_AutoGen.write("/// ----- END OF HISTOGRAM BOOKING FUNCTIONS FOR TLorentzVector " + leafName + " ----- ///\n\n")

			TLorentzVector_Leaves.close()

		#If the leaf is a TVector3
		elif line[3:11] == "TVector3":
			print("This is a TVector3: " + line)

		#If the leaf is one of two useless lines at the end
		elif line[4:5] == "" or line[19:22] == "hes":
			print("")

		#If the leaf is anything else
		else:
			#Find the semicolon at the end of the line, use it to get the leafName
			semicolonpos = line.find(";")
			leafName = line[19:semicolonpos]

			#Write out the section to be included in the class definition
			Histo_Definitions.write("\t//Histogram declaration and booking function for " + leafName + "\n")
			Histo_Definitions.write("\tvirtual void Book_" + leafName + "(int bins, double min, double max);\n")
			Histo_Definitions.write("\tTH1F\t*h_" + leafName + ";\n")
			Histo_Definitions.write("\tvirtual void Book_" + leafName + "_CONTROL(int bins, double min, double max);\n")
			Histo_Definitions.write("\tTH1F\t*h_" + leafName + "_CONTROL;\n")
			Histo_Definitions.write("\n")
			Histo_Definitions.write("\tvirtual void Book_" + leafName + "_PRE(int bins, double min, double max);\n")
			Histo_Definitions.write("\tTH1F\t*h_" + leafName + "_PRE;\n")
			Histo_Definitions.write("\n")

			#Write out the Histogram Booking Functions header
			if bjet0found == 0:
				if line.find("bjet_0", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- bjet_0 --------------------------///\n\n")
					bjet0found = 1
			if bjet1found == 0:
				if line.find("bjet_1", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- bjet_1 --------------------------///\n\n")
					bjet1found = 1
			if elec0found == 0:
				if line.find("elec_0", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- elec_0 --------------------------///\n\n")
					elec0found = 1
			if elec1found == 0:
				if line.find("elec_1", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- elec_1 --------------------------///\n\n")
					elec1found = 1
			if ljet0found == 0:
				if line.find("ljet_0", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- ljet_0 --------------------------///\n\n")
					ljet0found = 1
			if ljet1found == 0:
				if line.find("ljet_1", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- ljet_1 --------------------------///\n\n")
					ljet1found = 1
			if ljet2found == 0:
				if line.find("ljet_2", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- ljet_2 --------------------------///\n\n")
					ljet2found = 1
			if ljet3found == 0:
				if line.find("ljet_3", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- ljet_3 --------------------------///\n\n")
					ljet3found = 1
			if muon0found == 0:
				if line.find("muon_0", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- muon_0 --------------------------///\n\n")
					muon0found = 1
			if muon1found == 0:
				if line.find("muon_1", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- muon_1 --------------------------///\n\n")
					muon1found = 1
			if tau0found == 0:
				if line.find("tau_0", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- tau_0 ---------------------------///\n\n")
					tau0found = 1
			if tau1found == 0:
				if line.find("tau_1", 0, len(line)) != -1:
					Histo_Book_Functions_AutoGen.write("\n\n///------------------------------- tau_1 ---------------------------///\n\n")
					tau1found = 1

			#Write out the booking functions to be included at the end of MC_Analysis.C
			Histo_Book_Functions_AutoGen.write("//Histogram booking function for " + leafName + "\n")
			Histo_Book_Functions_AutoGen.write("void MC_Analysis::Book_" + leafName + "(int bins, double min, double max) {\n")
			Histo_Book_Functions_AutoGen.write("\th_" + leafName + " = new TH1F(\"h_" + leafName + "\", \"\", bins, min, max);\n")
			Histo_Book_Functions_AutoGen.write("}\n")
			Histo_Book_Functions_AutoGen.write("void MC_Analysis::Book_" + leafName + "_CONTROL(int bins, double min, double max) {\n")
			Histo_Book_Functions_AutoGen.write("\th_" + leafName + "_CONTROL = new TH1F(\"h_" + leafName + "\", \"\", bins, min, max);\n")
			Histo_Book_Functions_AutoGen.write("}\n\n")
			Histo_Book_Functions_AutoGen.write("void MC_Analysis::Book_" + leafName + "_PRE(int bins, double min, double max) {\n")
			Histo_Book_Functions_AutoGen.write("\th_" + leafName + "_PRE = new TH1F(\"h_" + leafName + "\", \"\", bins, min, max);\n")
			Histo_Book_Functions_AutoGen.write("}\n\n")
			

	#If the line is the one at the beginning of the declaration of leaf types
	if line.find("// Declaration of leaf types", 0, len(line)) != -1:
		reader = 1

	#If the lines is the one at the beginning of the list of branches (end of leaf types)
	if line.find("// List of branches", 0, len(line)) != -1:
		reader = 0

#Header Declaration for C++ headers
Histo_Custom_Book_Functions.write("#ifndef Histo_Book_Functions_AutoGen_Custom_h\n")
Histo_Custom_Book_Functions.write("#define Histo_Book_Functions_AutoGen_Custom_h\n\n")

#Header Declaration for C++ headers
Histo_Custom_Book_Definitions.write("#ifndef Histo_Book_Definitions_AutoGen_Custom_h\n")
Histo_Custom_Book_Definitions.write("#define Histo_Book_Definitions_AutoGen_Custom_h\n\n")

for line in Custom_Histos:
	
	colonPos = line.find(":") #Find the position of the colon in the file, this separates the variable name from the comment

	if line[0:2] == "##": # If the line is a comment for separating things out
		Histo_Custom_Book_Functions.write("/// ------------------- " + line[2:len(line)-1] + " ---------------- ///\n\n")
		Histo_Custom_Book_Definitions.write("/// ------------------- " + line[2:len(line)-1] + " ---------------- ///\n\n")
	elif line[0:len(line) - 1] == "": # If the line is empty
		print("LINE IS EMPTY, PLEASE REMOVE EMPTY LINE")
	else: # Otherwise, output the line and comment to the files
		Histo_Custom_Book_Definitions.write("// -- " + line[colonPos + 1:len(line)-1] + "\n")
		Histo_Custom_Book_Functions.write("// -- " + line[colonPos + 1:len(line)-1] + "\n")

		Histo_Custom_Book_Definitions.write("double " + line[0:colonPos] + ";\n\n")

		Histo_Custom_Book_Definitions.write("virtual void Book_" + line[0:colonPos] + "_PRE(int bins, double min, double max); // PRE VERSION\n")
		Histo_Custom_Book_Definitions.write("TH1F\t*h_" + line[0:colonPos] + "_PRE; // PRE VERSION\n\n")

		Histo_Custom_Book_Definitions.write("virtual void Book_" + line[0:colonPos] + "_CONTROL(int bins, double min, double max); // CONTROL VERSION\n")
		Histo_Custom_Book_Definitions.write("TH1F\t*h_" + line[0:colonPos] + "_CONTROL; // CONTROL VERSION\n\n")

		Histo_Custom_Book_Definitions.write("virtual void Book_" + line[0:colonPos] + "(int bins, double min, double max); // SEARCH VERSION\n")
		Histo_Custom_Book_Definitions.write("TH1F\t*h_" + line[0:colonPos] + "; // SEARCH VERSION\n\n\n")

	
		Histo_Custom_Book_Functions.write("void MC_Analysis::Book_" + line[0:colonPos] + "_PRE(int bins, double min, double max) {\n")
		Histo_Custom_Book_Functions.write("\th_" + line[0:colonPos] + "_PRE = new TH1F(\"h_" + line[0:colonPos] + "_PRE\", \"\", bins, min, max);\n")
		Histo_Custom_Book_Functions.write("}\n")

		Histo_Custom_Book_Functions.write("void MC_Analysis::Book_" + line[0:colonPos] + "_CONTROL(int bins, double min, double max) {\n")
		Histo_Custom_Book_Functions.write("\th_" + line[0:colonPos] + "_CONTROL = new TH1F(\"h_" + line[0:colonPos] + "_CONTROL\", \"\", bins, min, max);\n")
		Histo_Custom_Book_Functions.write("}\n")

		Histo_Custom_Book_Functions.write("void MC_Analysis::Book_" + line[0:colonPos] + "(int bins, double min, double max) {\n")
		Histo_Custom_Book_Functions.write("\th_" + line[0:colonPos] + " = new TH1F(\"h_" + line[0:colonPos] + "\", \"\", bins, min, max);\n")
		Histo_Custom_Book_Functions.write("}\n\n\n")


#Header Endings for C++ headers
Histo_Custom_Book_Definitions.write("#endif")
Histo_Custom_Book_Functions.write("#endif")

