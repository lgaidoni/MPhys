import os

data_types = ["Electron", "Muon", "ElectronMuon", "ElectronTau", "MuonTau"]

def print_function(filename, name, data_type):

	filename.write("root \"Start_Analysis.C(\\\\\\\"Start_" + name + "_Analysis\\\\\\\",\\\\\\\"" + data_type + "\\\\\\\", false)\" -l -b\n")

for data_type in data_types:

	timing_file = open("../../Timing_Files/" + data_type + "_timing_sorted.txt","r")
	data_type_run_script = open("xarg_input_files/" + data_type + "_xarg_inputs.sh", "w")

	for line in timing_file:

		commapos = line.find(",")
		name = line[0:commapos]

		if (name == "DATA"):
			print_function(data_type_run_script, name, data_type)

		if (name == "PoPy8_A14_ttb_nonallh"):
			print_function(data_type_run_script, name, data_type)
	
	timing_file.close()
	
	timing_file = open("../../Timing_Files/" + data_type + "_timing_sorted.txt","r")

	for line in timing_file:

		commapos = line.find(",")
		name = line[0:commapos]
		if (name != "DATA" and name != "PoPy8_A14_ttb_nonallh"):
			print_function(data_type_run_script, name, data_type)
	data_type_run_script.close()

for data_type in data_types:
	run_analyses_v3 = open("Run_" + data_type + "_Analyses_V3.sh", "w")
	run_analyses_v3.write("cat xarg_input_files/" + data_type + "_xarg_inputs.sh | while read i; do printf \"%q\\n\" \"$i\"; done | xargs -I CMD --max-procs=10 bash -c CMD &\n")


run_analyses_v3 = open("Run_All_Analyses_V3.sh", "w")

for data_type in data_types:
	run_analyses_v3.write("rm -r ../../Completion_Files/" + data_type + "/*\n")

run_analyses_v3.write("rm -r ../../Status_Files/*\n")
run_analyses_v3.write(". Run_Electron_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_ElectronMuon_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_ElectronTau_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_Muon_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_MuonTau_Analyses_V3.sh")

run_analyses_v3.close()
