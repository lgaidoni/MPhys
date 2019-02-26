import os

data_types = ["Electron", "Muon", "ElectronMuon", "ElectronTau", "MuonTau"]

for data_type in data_types:

	all_chain_info = []
	chain_timing_file = open("../../Timing_Files/Timing_Backups/" + data_type + "_timing.txt", "r")

	for line in chain_timing_file:

		commapos = line.find(",")
		chain_name = line[0:commapos]
		time = line[commapos + 1:len(line) - 1]
		time_int = int(time)
		chain_info = [chain_name, time_int]
		all_chain_info.append(chain_info)

	all_chain_info.sort(key=lambda x: x[1])
	sorted_chain_timing_file = open("../../Timing_Files/" + data_type + "_timing_sorted.txt", "w")

	for chain_info in all_chain_info:

		sorted_chain_timing_file.write(chain_info[0] + "," + str(chain_info[1]) + "\n")

	sorted_chain_timing_file.close()
	chain_timing_file.close()


	
