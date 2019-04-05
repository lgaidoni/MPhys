import os

data_types = ["Electron_Higgs", "ElectronMuon_Higgs", "ElectronTau_Higgs", "Muon_Higgs", "MuonTau_Higgs"]
data_types_no_higgs = ["Electron", "Muon", "ElectronMuon", "ElectronTau", "MuonTau"]

DATA_ARRAY = []

for i in range(0, 81):
	DATA_ARRAY.append("DATA_" + str(i) + "_Higgs_")

def print_function(filename, name, data_type):
	filename.write("root \"Start_Analysis.C(\\\\\\\"Start_" + name[0:len(name)-1] + "_Higgs_Analysis\\\\\\\",\\\\\\\"" + data_type + "\\\\\\\", false, true)\" -l -b\n")

loop_counter = 0
for data_type in data_types:

	data_type_run_script = open("xarg_input_files/" + data_type + "_xarg_inputs.sh", "w")

	timing_file = open("/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code/Chain_Names_Higgs.txt","r")

	for line in timing_file:
		print_function(data_type_run_script, line, data_types_no_higgs[loop_counter])

	for line in DATA_ARRAY:
		print_function(data_type_run_script, line[0:len(line)-6], data_types_no_higgs[loop_counter])

	data_type_run_script.close()

	loop_counter += 1

for data_type in data_types:
	run_analyses_v3 = open("Run_" + data_type + "_Analyses_V3.sh", "w")
	run_analyses_v3.write("cat xarg_input_files/" + data_type + "_xarg_inputs.sh | while read i; do printf \"%q\\n\" \"$i\"; done | xargs -I CMD --max-procs=8 bash -c CMD &\n")


run_analyses_v3 = open("Run_All_Analyses_V3_Higgs.sh", "w")

run_analyses_v3.write(". Run_Electron_Higgs_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_ElectronMuon_Higgs_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_ElectronTau_Higgs_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_Muon_Higgs_Analyses_V3.sh & \n")
run_analyses_v3.write(". Run_MuonTau_Higgs_Analyses_V3.sh")

run_analyses_v3.close()
