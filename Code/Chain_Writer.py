mc_locations = open("MC_Paths.txt", "r") # Open the MC Paths for files that need merging
chain_functions = open("Headers/Chain_Functions.h", "w")
N_functions = open("Headers/N_Functions.h", "w")
electron_analysis_start_functions = open("Headers/Electron_Analysis_Start_Functions.h", "w")
muon_analysis_start_functions = open("Headers/Muon_Analysis_Start_Functions.h", "w")
tau_analysis_start_functions = open("Headers/Tau_Analysis_Start_Functions.h", "w")

import os

def analysis_start_function_writer(inputFile, IDtag, Name, AnalysisType):
	inputFile.write("void Start_" + AnalysisType + "_" + Name + "_Analysis() {\n")
	inputFile.write("\tgErrorIgnoreLevel = kWarning;\n")

	inputFile.write("\tvector<double> luminosity_info = csv_reader(\"" + IDtag + "\");\n")
	inputFile.write("\tdouble lum_weight = luminosity_weighting_function(luminosity_info, N_" + Name + "(), 36200);\n")
		
	inputFile.write("\tMC_Analysis *" + Name + " = new MC_Analysis(Chain_" + Name + "(), \"" + AnalysisType + "\", \"" + Name + "\", lum_weight);\n")
	inputFile.write("\t" + Name + "->" + AnalysisType + "_BookHistos();\n")
	inputFile.write("\t" + Name + "->Loop();\n")
	inputFile.write("\t" + Name + "->" + AnalysisType + "_DrawHistos();\n")
	
	inputFile.write("}\n\n")

chain_functions.write("#ifndef Chain_Functions_h\n")
chain_functions.write("#define Chain_Functions_h\n\n")

N_functions.write("#ifndef N_Functions_h\n")
N_functions.write("#define N_Functions_h\n\n")


electron_analysis_start_functions.write("#ifndef Electron_Analysis_Start_Functions_h\n")
electron_analysis_start_functions.write("#define Electron_Analysis_Start_Functions_h\n\n")

muon_analysis_start_functions.write("#ifndef Muon_Analysis_Start_Functions_h\n")
muon_analysis_start_functions.write("#define Muon_Analysis_Start_Functions_h\n\n")

tau_analysis_start_functions.write("#ifndef Tau_Analysis_Start_Functions_h\n")
tau_analysis_start_functions.write("#define Tau_Analysis_Start_Functions_h\n\n")

initial_function = 0
name = ""
ID = ""
counter = 0

for line in mc_locations:

	if line[0:2] == "##":
		counter = 0
		name = line[2:len(line)-1]

		if initial_function != 0:
			chain_functions.write("\treturn NOMINAL;\n\n") 
			chain_functions.write("}\n\n")
			N_functions.write("\treturn N;\n\n") 
			N_functions.write("}\n\n")
		else:
			initial_function = 1

		name = line[2:len(line)-1]
		chain_functions.write("//Chain Return function for " + name + "\n")
		chain_functions.write("TChain *Chain_" + name + "() {\n\n")
		N_functions.write("//N Return function for " + name + "\n")
		N_functions.write("Long64_t N_" + name + "() {\n\n")
		N_functions.write("\tLong64_t N = 0;\n")

		try:
			os.makedirs("../../Output-Files/Electron/" + name)
			os.makedirs("../../Output-Files/Muon/" + name)
			os.makedirs("../../Output-Files/Tau/" + name)
			print("../../Output-Files/Electron/" + name + " Created")
			print("../../Output-Files/Muon/" + name + " Created")
			print("../../Output-Files/Tau/" + name + " Created")

		except:
			print("../../Output-Files/Electron/" + name + " Already Exists")
			print("../../Output-Files/Muon/" + name + " Already Exists")
			print("../../Output-Files/Tau/" + name + " Already Exists")

<<<<<<< HEAD

=======
>>>>>>> 13c84bebb10a5eee6da015e26b41c3f4927d675e
	elif line[0:2] == "@@":
		ID = line[2:len(line)-1]
		chain_functions.write("\tTChain *NOMINAL = new TChain(\"NOMINAL\");\n\n")

		analysis_start_function_writer(electron_analysis_start_functions, ID, name, "Electron")
		analysis_start_function_writer(muon_analysis_start_functions, ID, name, "Muon")
		analysis_start_function_writer(tau_analysis_start_functions, ID, name, "Tau")

	else:
		counter = counter + 1
		chain_functions.write("\tNOMINAL->Add(\"" + line[0:len(line)-1]  + "\");\n\n")
		N_functions.write("\tTFile *file" + str(counter) + " = new TFile(\"" + line[0:len(line) - 1] + "\");\n")
		N_functions.write("\tTH1F *histogram" + str(counter) + " = (TH1F*)file" + str(counter) + "->Get(\"h_metadata\");\n")
		N_functions.write("\tN += histogram" + str(counter) + "->GetBinContent(8);\n")
		N_functions.write("\tfile" + str(counter) + "->Close();\n\n")

chain_functions.write("return NOMINAL;\n")
chain_functions.write("} \n\n")
chain_functions.write("#endif")

N_functions.write("return N;\n")
N_functions.write("} \n\n")
N_functions.write("#endif")

electron_analysis_start_functions.write("#endif")
muon_analysis_start_functions.write("#endif")
tau_analysis_start_functions.write("#endif")
