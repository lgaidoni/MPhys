mc_locations = open("MC_Paths.txt", "r") # Open the MC Paths for files that need merging
data_locations = open("Data_Paths.txt", "r") # Open the DATA Paths for files that need merging
chain_functions = open("Headers/Chain_Functions.h", "w")
N_functions = open("Headers/N_Functions.h", "w")
analysis_start_functions = open("Headers/Analysis_Start_Functions.h", "w")
run_all_analyses = open("Headers/Run_All_Analyses_Functions.h", "w")

import os

def process_line_writer(inputFile, line, Name, AnalysisType, Process):
	if (line.find(Process) != -1): 
		inputFile.write("../../Root-Files/" + AnalysisType + "/" + Name + "_Histograms.root\n")

def process_chains_writer(AnalysisType):

	ttb_process_chains = open("../Processes/" + AnalysisType + "/ttb_Chains.txt", "w")
	Wenu_process_chains = open("../Processes/" + AnalysisType + "/Wenu_Chains.txt", "w")
	Wmunu_process_chains = open("../Processes/" + AnalysisType + "/Wmunu_Chains.txt", "w")
	Wtaunu_process_chains = open("../Processes/" + AnalysisType + "/Wtaunu_Chains.txt", "w")
	Zee2jets_process_chains = open("../Processes/" + AnalysisType + "/Zee2jets_Chains.txt", "w")
	Zee_process_chains = open("../Processes/" + AnalysisType + "/Zee_Chains.txt", "w")
	Zmm2jets_process_chains = open("../Processes/" + AnalysisType + "/Zmm2jets_Chains.txt", "w")
	Zmumu_process_chains = open("../Processes/" + AnalysisType + "/Zmumu_Chains.txt", "w")
	ZqqZll_process_chains = open("../Processes/" + AnalysisType + "/ZqqZll_Chains.txt", "w")
	Ztt2jets_process_chains = open("../Processes/" + AnalysisType + "/Ztt2jets_Chains.txt", "w")
	Ztt_process_chains = open("../Processes/" + AnalysisType + "/Ztt_Chains.txt", "w")
	
	mc_locations = open("MC_Paths.txt", "r")

	initial_function = 0
	name = ""
	ID = ""
	counter = 0

	for line in mc_locations:
		if line[0:2] == "##":
			counter = 0
			name = line[2:len(line)-1]
			process_line_writer(ttb_process_chains, line, name, AnalysisType, "_ttb_")
			process_line_writer(Wenu_process_chains, line, name, AnalysisType, "_Wenu_")
			process_line_writer(Wmunu_process_chains, line, name, AnalysisType, "_Wmunu_")
			process_line_writer(Wtaunu_process_chains, line, name, AnalysisType, "_Wtaunu_")
			process_line_writer(Zee2jets_process_chains, line, name, AnalysisType, "_Zee2jets_")
			process_line_writer(Zee_process_chains, line, name, AnalysisType, "_Zee_")
			process_line_writer(Zmm2jets_process_chains, line, name, AnalysisType, "_Zmm2jets_")
			process_line_writer(Zmumu_process_chains, line, name, AnalysisType, "_Zmumu_")
			process_line_writer(ZqqZll_process_chains, line, name, AnalysisType, "_ZqqZll")
			process_line_writer(Ztt2jets_process_chains, line, name, AnalysisType, "_Ztt2jets_")
			process_line_writer(Ztt_process_chains, line, name, AnalysisType, "_Ztt_")

	ttb_process_chains.close()
	Wenu_process_chains.close()
	Wmunu_process_chains.close()
	Wtaunu_process_chains.close()
	Zee2jets_process_chains.close()
	Zee_process_chains.close()
	Zmm2jets_process_chains.close()
	Zmumu_process_chains.close()
	ZqqZll_process_chains.close()
	Ztt2jets_process_chains.close()
	Ztt_process_chains.close()
	

def analysis_start_function_writer(inputFile, IDtag, Name):
	inputFile.write("void Start_" + Name + "_Analysis(string AnalysisType, string Particles) {\n")
	inputFile.write("\tgErrorIgnoreLevel = kError;\n")

	inputFile.write("\tvector<double> luminosity_info = csv_reader(\"" + IDtag + "\");\n")
	inputFile.write("\tdouble lum_weight = luminosity_weighting_function(luminosity_info, N_" + Name + "(), 36200);\n")
		
	inputFile.write("\tMC_Analysis *" + Name + " = new MC_Analysis(Chain_" + Name + "(), AnalysisType, \"" + Name + "\", lum_weight, Particles);\n")
	inputFile.write("\t" + Name + "->BookHistos();\n")
	inputFile.write("\t" + Name + "->Loop();\n")
	inputFile.write("\t" + Name + "->DrawHistos();\n")
	
	inputFile.write("}\n\n")

def analysis_start_function_writer_data(inputFile, IDtag, Name):
	inputFile.write("void Start_" + Name + "_Analysis(string AnalysisType, string Particles) {\n")
	inputFile.write("\tgErrorIgnoreLevel = kError;\n")

	inputFile.write("\tMC_Analysis *" + Name + " = new MC_Analysis(Chain_" + Name + "(), AnalysisType, \"" + Name + "\", 1, Particles);\n")
	inputFile.write("\t" + Name + "->BookHistos();\n")
	inputFile.write("\t" + Name + "->Loop();\n")
	inputFile.write("\t" + Name + "->DrawHistos();\n")
	
	inputFile.write("}\n\n")

def run_all_analyses_writer_top(inputFile):
	inputFile.write("void Run_All_Analyses(string AnalysisType, string Particles) {\n\n")

def run_all_analyses_writer_centre(inputFile, Name):
	inputFile.write("\tStart_" + Name + "_Analysis(AnalysisType, Particles);\n")
	

chain_functions.write("#ifndef Chain_Functions_h\n")
chain_functions.write("#define Chain_Functions_h\n\n")

N_functions.write("#ifndef N_Functions_h\n")
N_functions.write("#define N_Functions_h\n\n")


analysis_start_functions.write("#ifndef Analysis_Start_Functions_h\n")
analysis_start_functions.write("#define Analysis_Start_Functions_h\n\n")

run_all_analyses_writer_top(run_all_analyses)

initial_function = 0
name = ""
ID = ""
counter = 0

try:
	os.makedirs("../../Root-Files/Electron/Processes")
	os.makedirs("../../Root-Files/ElectronMuon/Processes")
	os.makedirs("../../Root-Files/Muon/Processes")
	os.makedirs("../../Root-Files/Tau/Processes")
except:
	value = 1

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
			print("../../Output-Files/Electron/" + name + " Created")
		except:
			print("../../Output-Files/Electron/" + name + " Already Exists")

		try:
			os.makedirs("../../Output-Files/ElectronMuon/" + name)
			print("../../Output-Files/ElectronMuon/" + name + " Created")
		except:
			print("../../Output-Files/ElectronMuon/" + name + " Already Exists")

		try:
			os.makedirs("../../Output-Files/Tau/" + name)
			print("../../Output-Files/Tau/" + name + " Created")
		except:
			print("../../Output-Files/Tau/" + name + " Already Exists")

		try:
			os.makedirs("../../Output-Files/Muon/" + name)
			print("../../Output-Files/Muon/" + name + " Created")
		except:
			print("../../Output-Files/Muon/" + name + " Already Exists")

	elif line[0:2] == "@@":
		ID = line[2:len(line)-1]
		chain_functions.write("\tTChain *NOMINAL = new TChain(\"NOMINAL\");\n\n")
		
		run_all_analyses_writer_centre(run_all_analyses, name)

		analysis_start_function_writer(analysis_start_functions, ID, name)

	else:
		counter = counter + 1
		chain_functions.write("\tNOMINAL->Add(\"" + line[0:len(line)-1]  + "\");\n\n")
		N_functions.write("\tTFile *file" + str(counter) + " = new TFile(\"" + line[0:len(line) - 1] + "\");\n")
		N_functions.write("\tTH1F *histogram" + str(counter) + " = (TH1F*)file" + str(counter) + "->Get(\"h_metadata\");\n")
		N_functions.write("\tN += histogram" + str(counter) + "->GetBinContent(8);\n")
		N_functions.write("\tfile" + str(counter) + "->Close();\n\n")

chain_functions.write("return NOMINAL;\n")
chain_functions.write("} \n\n")

N_functions.write("return N;\n")
N_functions.write("} \n\n")
N_functions.write("#endif")

mc_locations.close()

name = "DATA"
ID = ""
counter = 0

try:
	os.makedirs("../../Output-Files/Muon/DATA")
	print("../../Output-Files/Muon/DATA Created")
except:
	print("../../Output-Files/Muon/DATA Exists")

try:
	os.makedirs("../../Output-Files/Electron/DATA")
	print("../../Output-Files/Electron/DATA Created")
except:
	print("../../Output-Files/Electron/DATA Exists")

try:
	os.makedirs("../../Output-Files/ElectronMuon/DATA")
	print("../../Output-Files/ElectronMuon/DATA Created")
except:
	print("../../Output-Files/ElectronMuon/DATA Exists")

try:
	os.makedirs("../../Output-Files/Tau/DATA")
	print("../../Output-Files/Tau/DATA Created")
except:
	print("../../Output-Files/Tau/DATA Exists")

run_all_analyses_writer_centre(run_all_analyses, "DATA")

chain_functions.write("//Chain Return function for DATA\n")
chain_functions.write("TChain *Chain_DATA() {\n\n")

chain_functions.write("\tTChain *NOMINAL = new TChain(\"NOMINAL\");\n\n")

for line in data_locations:

	if line[0:2] == "##":
		counter = 0


	elif line[0:2] == "@@":
		ID = line[2:len(line)-1]


	else:
		counter = counter + 1
		chain_functions.write("\tNOMINAL->Add(\"" + line[0:len(line)-1]  + "\");\n")

analysis_start_function_writer_data(analysis_start_functions, ID, name)

chain_functions.write("\treturn NOMINAL;\n")
chain_functions.write("} \n\n")

process_chains_writer("Electron")
process_chains_writer("ElectronMuon")
process_chains_writer("Muon")
process_chains_writer("Tau")

chain_functions.write("#endif")

analysis_start_functions.write("#endif")

run_all_analyses.write("\n}\n")
