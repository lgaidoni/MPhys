mc_locations = open("MC_Paths.txt", "r") # Open the MC Paths for files that need merging
chain_functions = open("Headers/Chain_Functions.h", "w") # Open the file to be written to
N_functions = open("Headers/N_Functions.h", "w") # Open the file to be written to

chain_functions.write("#ifndef Chain_Functions_h\n")
chain_functions.write("#define Chain_Functions_h\n\n")

N_functions.write("#ifndef N_Functions_h\n")
N_functions.write("#define N_Functions_h\n\n")

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

	elif line[0:2] == "@@":
		ID = line[2:len(line)-1]
		chain_functions.write("\tTChain *NOMINAL = new TChain(\"NOMINAL\");\n\n")

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
