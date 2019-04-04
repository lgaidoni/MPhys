import os
import argparse

parser = argparse.ArgumentParser(description='arguments for chain writer')
parser.add_argument('--higgs', nargs='?', help='write higgs information instead')

args = parser.parse_args()
print args.higgs

higgs = ""
higgs_bool = "false"

if args.higgs == "True" or args.higgs == "true" or args.higgs == "t":
	higgs = "_Higgs"
	higgs_bool = "true"


mc_locations = open("MC_Paths" + higgs + ".txt", "r")
data_locations = open("Data_Paths" + higgs + ".txt", "r") # Open the DATA Paths for files that need merging
chain_functions = open("Headers/Chain_Functions" + higgs + ".h", "w")
N_functions = open("Headers/N_Functions" + higgs + ".h", "w")
analysis_start_functions = open("Headers/Analysis_Start_Functions" + higgs + ".h", "w")
run_all_analyses = open("Headers/Run_All_Analyses_Functions" + higgs + ".h", "w")
run_all_analyses_shell = open("Run_All_Analyses_V2" + higgs + ".sh", "w")

Types = ["Electron","ElectronMuon","ElectronTau","Muon","MuonTau"]
Regions = ["SEARCH", "CONTROL", "BJET", "HIGH_E", "PRE", "EXCEPT", "TRUTH"]

def process_line_writer(inputFile, line, Name, AnalysisType, Process):
	if (line.find(Process) != -1): 
		inputFile.write("../../Root-Files/" + AnalysisType + higgs + "/" + Name + higgs + "_Histograms.root\n")

def process_chains_writer(AnalysisType):

	ttb_process_chains = open("../Processes/" + AnalysisType + higgs + "/ttb_Chains" + higgs + ".txt", "w")
	Wenu_process_chains = open("../Processes/" + AnalysisType + higgs + "/Wenu_Chains" + higgs + ".txt", "w")
	Wmunu_process_chains = open("../Processes/" + AnalysisType + higgs + "/Wmunu_Chains" + higgs + ".txt", "w")
	Wtaunu_process_chains = open("../Processes/" + AnalysisType + higgs + "/Wtaunu_Chains" + higgs + ".txt", "w")
	Zee2jets_process_chains = open("../Processes/" + AnalysisType + higgs + "/Zee2jets_Chains" + higgs + ".txt", "w")
	Zee_process_chains = open("../Processes/" + AnalysisType + higgs + "/Zee_Chains" + higgs + ".txt", "w")
	Zmm2jets_process_chains = open("../Processes/" + AnalysisType + higgs + "/Zmm2jets_Chains" + higgs + ".txt", "w")
	Zmumu_process_chains = open("../Processes/" + AnalysisType + higgs + "/Zmumu_Chains" + higgs + ".txt", "w")
	ZqqZll_process_chains = open("../Processes/" + AnalysisType + higgs + "/ZqqZll_Chains" + higgs + ".txt", "w")
	Ztt2jets_process_chains = open("../Processes/" + AnalysisType + higgs + "/Ztt2jets_Chains" + higgs + ".txt", "w")
	Ztt_process_chains = open("../Processes/" + AnalysisType + higgs + "/Ztt_Chains" + higgs + ".txt", "w")
	
	mc_locations = open("MC_Paths" + higgs + ".txt", "r")

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

	Luminosity = 36236.9

	if higgs_bool:
		if Name.find("r9364") != -1:
			Luminosity = 36236.9
		elif Name.find("r10201") != -1:
			Luminosity = 43587.3

	inputFile.write("void Start_" + Name + higgs + "_Analysis(string AnalysisType, bool draw, bool Higgs) {\n")
	inputFile.write("\tgErrorIgnoreLevel = kError;\n")

   	inputFile.write("\tstring completion_file = \"../../Completion_Files/\" + AnalysisType + \"" + higgs + "/" + Name + "_completion.txt\";\n");
   
	inputFile.write("\tfstream completion(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Started " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")

	inputFile.write("\tvector<double> luminosity_info = csv_reader(\"" + IDtag + "\", " + higgs_bool + ");\n")
	inputFile.write("\tdouble lum_weight = luminosity_weighting_function(luminosity_info, N_" + Name + higgs + "(), " + str(Luminosity) + ");\n")
		
	inputFile.write("\tMC_Analysis *" + Name + " = new MC_Analysis(Chain_" + Name + higgs + "(), AnalysisType, \"" + Name + higgs + "\", lum_weight, draw, Higgs);\n")

	inputFile.write("\t" + Name + "->BookHistos();\n")

	inputFile.write("\tcompletion.open(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Analysing " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")

	inputFile.write("\t" + Name + "->Loop();\n")

	inputFile.write("\tcompletion.open(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Analysed " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")

	inputFile.write("\t" + Name + "->DrawHistos();\n")

	inputFile.write("\tcompletion.open(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Finished " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")

	inputFile.write("}\n\n")

def analysis_start_function_writer_data(inputFile, IDtag, Name):
	inputFile.write("void Start_" + Name + higgs + "_Analysis(string AnalysisType, bool draw, bool Higgs) {\n")
	inputFile.write("\tgErrorIgnoreLevel = kError;\n")

   	inputFile.write("\tstring completion_file = \"../../Completion_Files/\" + AnalysisType + \"" + higgs + "/" + Name + "_completion.txt\";\n");
   
	inputFile.write("\tfstream completion(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Started " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")

	inputFile.write("\tMC_Analysis *" + Name + " = new MC_Analysis(Chain_" + Name + "(), AnalysisType, \"" + Name + "\", 1, draw, Higgs);\n")

	inputFile.write("\t" + Name + "->BookHistos();\n")

	inputFile.write("\tcompletion.open(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Analysing " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")

	inputFile.write("\t" + Name + "->Loop();\n")

	inputFile.write("\tcompletion.open(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Analysed " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")

	inputFile.write("\t" + Name + "->DrawHistos();\n")

	inputFile.write("\tcompletion.open(completion_file, completion.out | completion.trunc); ")
	inputFile.write("\tcompletion << \"Finished " + Name + "\"; ");
	inputFile.write("\tcompletion.flush(); ")
	inputFile.write("\tcompletion.close();\n")
	
	inputFile.write("}\n\n")

def run_all_analyses_writer_top(inputFile):
	inputFile.write("void Run_All_Analyses" + higgs + "(string AnalysisType, bool draw, bool Higgs) {\n\n")

def run_all_analyses_writer_centre(inputFile, Name):
	inputFile.write("\tStart_" + Name + higgs + "_Analysis(AnalysisType, draw, Higgs);\n")

chain_functions.write("#ifndef Chain_Functions" + higgs + "_h\n")
chain_functions.write("#define Chain_Functions" + higgs + "_h\n\n")

N_functions.write("#ifndef N_Functions" + higgs + "_h\n")
N_functions.write("#define N_Functions" + higgs + "_h\n\n")


analysis_start_functions.write("#ifndef Analysis_Start_Functions" + higgs + "_h\n")
analysis_start_functions.write("#define Analysis_Start_Functions" + higgs + "_h\n\n")

run_all_analyses_writer_top(run_all_analyses)

initial_function = 0
name = ""
ID = ""
counter = 0

for Type in Types:
	try:
		os.makedirs("../../Root-Files/" + Type + higgs +  "/Processes")
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
		chain_functions.write("//Chain Return function for " + name + higgs + "\n")
		chain_functions.write("TChain *Chain_" + name + higgs + "() {\n\n")
		N_functions.write("//N Return function for " + name + higgs + "\n")
		N_functions.write("Long64_t N_" + name + higgs + "() {\n\n")
		N_functions.write("\tLong64_t N = 0;\n")

		run_all_analyses_shell.write("root \"Start_Analysis.C(\\\\\\\"Start_" + name + higgs + "_Analysis\\\\\\\",\\\\\\\"Electron\\\\\\\")\" -l -b\n")

		for Type in Types:
			try:
				os.makedirs("../../Output-Files/" + Type + higgs +  "/" + name)
				#print("../../Output-Files/" + Type +  "/" + name + " Created")
			except:
				#print("../../Output-Files/" + Type +  "/" + name + " Already Exists")
				value = 1

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

for Type in Types:
	try:
		os.makedirs("../../Output-Files/" + Type + higgs + "/DATA")
		#print("../../Output-Files/" + Type +  "/DATA Created")
	except:
		#print("../../Output-Files/" + Type +  "/DATA Already Exists")
		value = 1

run_all_analyses_writer_centre(run_all_analyses, "DATA")

chain_functions.write("//Chain Return function for DATA" + higgs + "\n")
chain_functions.write("TChain *Chain_DATA" + higgs + "() {\n\n")

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

data_locations.close()

data_locations = open("Data_Paths" + higgs + ".txt", "r") # Open the DATA Paths for files that need merging

data_loop_counter = 0
data_chain_counter = 0
ID = ""
name = ""

Electron_data_chain_locations = open("../Processes/Electron" + higgs + "/DATA_Chains" + higgs + ".txt", "w")
ElectronMuon_data_chain_locations = open("../Processes/ElectronMuon" + higgs + "/DATA_Chains" + higgs + ".txt", "w")
ElectronTau_data_chain_locations = open("../Processes/ElectronTau" + higgs + "/DATA_Chains" + higgs + ".txt", "w")
Muon_data_chain_locations = open("../Processes/Muon" + higgs + "/DATA_Chains" + higgs + ".txt", "w")
MuonTau_data_chain_locations = open("../Processes/MuonTau" + higgs + "/DATA_Chains" + higgs + ".txt", "w")

for line in data_locations:

	name = "DATA_" + str(data_chain_counter) + higgs

	if line[0:2] == "##":
		random_variable = 0

	elif line[0:2] == "@@":
		ID = line[2:len(line)-1]

	else:
		if data_loop_counter == 0:
			chain_functions.write("//Chain Return function for " + name + "\n")
			chain_functions.write("TChain *Chain_" + name + "() {\n\n")
			chain_functions.write("\tTChain *NOMINAL = new TChain(\"NOMINAL\");\n\n")

			Electron_data_chain_locations.write("../../Root-Files/Electron" + higgs + "/" + name + "_Histograms.root\n")
			ElectronMuon_data_chain_locations.write("../../Root-Files/ElectronMuon" + higgs + "/" + name + "_Histograms.root\n")
			ElectronTau_data_chain_locations.write("../../Root-Files/ElectronTau" + higgs + "/" + name + "_Histograms.root\n")
			Muon_data_chain_locations.write("../../Root-Files/Muon" + higgs + "/" + name + "_Histograms.root\n")
			MuonTau_data_chain_locations.write("../../Root-Files/MuonTau" + higgs + "/" + name + "_Histograms.root\n")

		chain_functions.write("\tNOMINAL->Add(\"" + line[0:len(line)-1]  + "\");\n")
		data_loop_counter += 1
		if data_loop_counter == 10:

			analysis_start_function_writer_data(analysis_start_functions, ID, name)


			for Type in Types:
				try:
					os.makedirs("../../Output-Files/" + Type + higgs + "/" + name)
					#print("../../Output-Files/" + Type +  "/" + name + " Created")
				except:
					#print("../../Output-Files/" + Type +  "/" + name + " Already Exists")
					value = 1

			chain_functions.write("\treturn NOMINAL;\n")
			chain_functions.write("} \n\n")
			data_loop_counter = 0
			data_chain_counter += 1

analysis_start_function_writer_data(analysis_start_functions, ID, name)

Electron_data_chain_locations.close()
ElectronMuon_data_chain_locations.close()
ElectronTau_data_chain_locations.close()
Muon_data_chain_locations.close()
MuonTau_data_chain_locations.close()

for Type in Types:
	try:
		os.makedirs("../../Output-Files/" + Type + higgs + "/" + name)
		#print("../../Output-Files/" + Type +  "/" + name + " Created")
	except:
		#print("../../Output-Files/" + Type +  "/" + name + " Already Exists")
		value = 1
		
chain_functions.write("\treturn NOMINAL;\n")
chain_functions.write("} \n\n")

process_chains_writer("Electron")
process_chains_writer("ElectronMuon")
process_chains_writer("Muon")
process_chains_writer("Tau")
process_chains_writer("ElectronTau")
process_chains_writer("MuonTau")

chain_functions.write("#endif")

for Type in Types:
	try:
		os.makedirs("../../Output-Files/Final_Graphs/" + Type + higgs)
		#print("../../Output-Files/Final_Graphs/" + Type +  " Created")
	except:
		#print("../../Output-Files/Final_Graphs/" + Type + " Exists")
		value = 1
	
	for Region in Regions:
		try:
			os.makedirs("../../Output-Files/Final_Graphs/" + Type + higgs + "/" + Region)
			#print("../../Output-Files/Final_Graphs/" + Type +  "/" + Region + " Created")
		except:
			#print("../../Output-Files/Final_Graphs/" + Type +  "/" + Region + " Exists")
			value = 1

analysis_start_functions.write("#endif")

run_all_analyses.write("\n}\n")
