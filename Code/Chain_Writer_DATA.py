data_locations = open("Data_Paths.txt", "r") # Open the DATA Paths for files that need merging
chain_functions = open("Headers/Chain_Functions_DATA.h", "w")
electron_analysis_start_functions = open("Headers/Electron_Analysis_Start_Functions_DATA.h", "w")
muon_analysis_start_functions = open("Headers/Muon_Analysis_Start_Functions_DATA.h", "w")
tau_analysis_start_functions = open("Headers/Tau_Analysis_Start_Functions_DATA.h", "w")

run_all_electron_analyses = open("../Init/Run_All_DATA_Electron_Analyses.C", "w")
run_all_muon_analyses = open("../Init/Run_All_DATA_Muon_Analyses.C", "w")
run_all_tau_analyses = open("../Init/Run_All_DATA_Tau_Analyses.C", "w")

import os

def analysis_start_function_writer(inputFile, IDtag, Name, AnalysisType):
	inputFile.write("void Start_" + AnalysisType + "_DATA_Analysis() {\n")
	inputFile.write("\tgErrorIgnoreLevel = kError;\n")

	inputFile.write("\tDATA_Analysis *DATA = new DATA_Analysis(Chain_DATA(), \"" + AnalysisType + "\", \"" + Name + "\");\n")
	inputFile.write("\tDATA->" + AnalysisType + "_BookHistos();\n")
	inputFile.write("\tDATA->Loop();\n")
	inputFile.write("\tDATA->" + AnalysisType + "_DrawHistos();\n")
	
	inputFile.write("}\n\n")

def run_all_analyses_writer_top(inputFile, AnalysisType):
	inputFile.write("#include <iostream>\n")
	inputFile.write("#include \"TROOT.h\"\n")
	inputFile.write("using namespace std;\n")
	inputFile.write("void Run_All_DATA_" + AnalysisType + "_Analyses() {\n\n")
	inputFile.write("\tgROOT->ProcessLine(\".x ../Code/DATA_Analysis.C\");\n")

def run_all_analyses_writer_centre(inputFile, Name, AnalysisType):
	inputFile.write("\tgROOT->ProcessLine(\"Start_" + AnalysisType + "_DATA_Analysis()\");\n")
	

chain_functions.write("#ifndef Chain_Functions_DATA_h\n")
chain_functions.write("#define Chain_Functions_DATA_h\n\n")

electron_analysis_start_functions.write("#ifndef Electron_Analysis_Start_Functions_h\n")
electron_analysis_start_functions.write("#define Electron_Analysis_Start_Functions_h\n\n")

muon_analysis_start_functions.write("#ifndef Muon_Analysis_Start_Functions_h\n")
muon_analysis_start_functions.write("#define Muon_Analysis_Start_Functions_h\n\n")

tau_analysis_start_functions.write("#ifndef Tau_Analysis_Start_Functions_h\n")
tau_analysis_start_functions.write("#define Tau_Analysis_Start_Functions_h\n\n")

run_all_analyses_writer_top(run_all_electron_analyses, "Electron")
run_all_analyses_writer_top(run_all_muon_analyses, "Muon")
run_all_analyses_writer_top(run_all_tau_analyses, "Tau")

name = "DATA"
ID = ""
counter = 0

chain_functions.write("//Chain Return function for DATA\n")
chain_functions.write("TChain *Chain_DATA() {\n\n")

chain_functions.write("\tTChain *NOMINAL = new TChain(\"NOMINAL\");\n\n")

run_all_analyses_writer_centre(run_all_electron_analyses, "DATA", "Electron")
run_all_analyses_writer_centre(run_all_muon_analyses, "DATA", "Muon")
run_all_analyses_writer_centre(run_all_tau_analyses, "DATA", "Tau")

for line in data_locations:

	if line[0:2] == "##":
		counter = 0


	elif line[0:2] == "@@":
		ID = line[2:len(line)-1]


	else:
		counter = counter + 1
		chain_functions.write("\tNOMINAL->Add(\"" + line[0:len(line)-1]  + "\");\n\n")

analysis_start_function_writer(electron_analysis_start_functions, ID, name, "Electron")
analysis_start_function_writer(muon_analysis_start_functions, ID, name, "Muon")
analysis_start_function_writer(tau_analysis_start_functions, ID, name, "Tau")

chain_functions.write("return NOMINAL;\n")
chain_functions.write("} \n\n")
chain_functions.write("#endif")

electron_analysis_start_functions.write("#endif")
muon_analysis_start_functions.write("#endif")
tau_analysis_start_functions.write("#endif")

run_all_electron_analyses.write("\n}\n")
run_all_muon_analyses.write("\n}\n")
run_all_tau_analyses.write("\n}\n")

data_locations.close()
