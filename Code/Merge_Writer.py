mc_locations = open("MC_Paths.txt", "r") # Open the MC Paths for files that need merging
merge_functions = open("Headers/Merge_Functions.h", "w") # Open the file to be written to

merge_functions.write("#ifndef Merge_Functions_h\n")
merge_functions.write("#define Merge_Functions_h\n\n")

initial_function = 0
name = ""
ID = ""
counter = 0

for line in mc_locations:

	if line[0:2] == "##":
		counter = 0
		name = line[2:len(line)-1]

		if initial_function != 0:
			merge_functions.write("\tNOMINAL->Merge(\"/pc2014-data4/alice-luca/" + name + ".root\");\n\n")
			merge_functions.write("}\n\n")
		else:
			initial_function = 1

		name = line[2:len(line)-1]
		merge_functions.write("//Merge function for " + name + "\n")
		merge_functions.write("void Merge_" + name + "() {\n\n")
		merge_functions.write("\tdouble N = 0;\n")

	elif line[0:2] == "@@":
		ID = line[2:len(line)-1]
		merge_functions.write("\tdouble ID = " + ID + ";\n\n")
		merge_functions.write("\tTChain *NOMINAL = new TChain(\"NOMINAL\");\n\n")

	else:
		counter = counter + 1
		merge_functions.write("\tTFile *file" + str(counter) + " = new TFile(\"" + line[0:len(line) - 1] + "\");\n")
		merge_functions.write("\tTH1F *histogram" + str(counter) + " = (TH1F*)file" + str(counter) + "->Get(\"h_metadata\");\n")
		merge_functions.write("\tN += histogram" + str(counter) + "->GetBinContent(8);\n")
		merge_functions.write("\tfile" + str(counter) + "->Close();\n\n")
		merge_functions.write("\tNOMINAL->Add(\"" + line[2:len(line)-1]  + "\");\n\n")
		
	

merge_functions.write("} \n\n")
merge_functions.write("#endif")
