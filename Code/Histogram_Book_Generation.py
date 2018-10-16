Histo_Book_Functions_AutoGen = open("Headers/Histo_Book_Functions_AutoGen.h", "w")
Histo_Definitions = open("Copy-Into-MC_Analysis.txt", "w")
MC_Analysis = open("Headers/MC_Analysis.h", "r")

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

for line in MC_Analysis:

	#Here the files have their relevant information written
	if reader == 1:
		#If the leaf is a TLorentzVector
		if line[3:17] == "TLorentzVector":
			print("This is a TLorentzVector: " + line)
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

			#Write out the section to be pasted into the MC_Analysis.h file
			Histo_Definitions.write("\t//Histogram declaration and booking function for " + leafName + "\n")
			Histo_Definitions.write("\tvirtual void Book_" + leafName + "(int bins, double min, double max);\n")
			Histo_Definitions.write("\tTH1F\t*h_" + leafName + ";\n")
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

			Histo_Book_Functions_AutoGen.write("//Histogram booking function for " + leafName + "\n")
			Histo_Book_Functions_AutoGen.write("void MC_Analysis::Book_" + leafName + "(int bins, double min, double max) {\n")
			Histo_Book_Functions_AutoGen.write("\th_" + leafName + " = new TH1F(\"h_" + leafName + "\", \"\", bins, min, max);\n")
			Histo_Book_Functions_AutoGen.write("}\n\n")
			
			

	#If the line is the one at the beginning of the declaration of leaf types
	if line.find("// Declaration of leaf types", 0, len(line)) != -1:
		reader = 1

	#If the lines is the one at the beginning of the list of branches (end of leaf types)
	if line.find("// List of branches", 0, len(line)) != -1:
		reader = 0

