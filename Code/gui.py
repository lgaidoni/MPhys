import os
import curses
import subprocess
import time, datetime

def gui(window):

	running = 1

	types = ["Electron", "ElectronMuon", "ElectronTau", "Muon", "MuonTau"]
	processes = ["Zee", "Zee2jets", "Zmumu", "Zmm2jets", "Ztt", "Ztt2jets", "ttb", "Wenu", "Wmunu", "Wtaunu", "ZqqZll", "DATA", "Incomplete Analyses", "No Histograms"]
	DATA_chains = []
	
	for x in range(0,29):
		DATA_chains.append("DATA_" + str(x) + "_")

	mode = "types"
	AnalysisType = ""
	ChainName = ""

	selected = 0

	while running:
		window.erase()

		if mode == "types":

			window.erase()

			window.addstr("Analysis Types:\n\n")

			counter = 0

			for selected_type in types:
				if counter == selected:
					window.addstr(selected_type + "\n", curses.A_STANDOUT)
				else:
					window.addstr(selected_type + "\n")

				counter += 1

			window.refresh()

			c = window.getch()

			if c == curses.KEY_DOWN and selected != len(types) - 1:
				selected += 1
			elif c == curses.KEY_UP and selected != 0:
				selected -= 1
			elif c == curses.KEY_RIGHT:
				counter = 0
				for selected_type in types:
					if counter == selected:
						mode = selected_type
						AnalysisType = selected_type
						selected = 0
					counter += 1
			elif c == curses.KEY_LEFT:
				break

		if mode in types:
			window.erase()

			window.addstr(mode + ":\n\n")

			counter = 0

			for process in processes:
				if counter == selected:
					window.addstr(process + "\n", curses.A_STANDOUT)
				else:
					window.addstr(process + "\n")

				counter += 1

			window.refresh()

			c = window.getch()

			if c == curses.KEY_DOWN and selected != len(processes) - 1:
				selected += 1
			elif c == curses.KEY_UP and selected != 0:
				selected -= 1
			elif c == curses.KEY_RIGHT:
				counter = 0
				for process in processes:
					if counter == selected:
						mode = process
						selected = 0
					counter += 1
			elif c == curses.KEY_LEFT:
				mode = "types"
				selected = 0

		if mode in processes:

			window.erase()

			counter = 0

			chain_names = open("Chain_Names.txt","r")

			if mode == "ZqqZll":
				for line in chain_names:
					if line.find("_" + mode) != -1:
						if counter == selected:
							window.addstr(line, curses.A_STANDOUT)
							ChainName = line
						else:
							window.addstr(line)

					counter += 1

			elif mode == "DATA":
				for line in DATA_chains:
					if counter == selected:
						window.addstr(line[0:len(line) - 1] + "\n", curses.A_STANDOUT)
						ChainName = line
					else:
						window.addstr(line[0:len(line) - 1] + "\n")

					counter += 1

			elif mode == "Incomplete Analyses":
				incomplete_analyses = []
				for root, dirs, files in os.walk("../../Completion_Files/" + AnalysisType):
					for file in files:
						file_name = os.path.join(root, file)
						chain_name = file_name[file_name.find(AnalysisType + "/") + len(AnalysisType) + 1:file_name.find("_completion.txt")]
						open_file = open(file_name, "r")
						for line in open_file:
							if (line.find("Finished") == -1):
								incomplete_analyses.append(chain_name)

				for line in incomplete_analyses:
					if counter == selected:
						window.addstr(line + "\n", curses.A_STANDOUT)
						ChainName = line + "_"
					else:
						window.addstr(line + "\n")

					counter += 1

			elif mode == "No Histograms":
				no_histogram_analyses = []
			
				for root, dirs, files in os.walk("../../Output-Files/" + AnalysisType):
					for dir in dirs:
						dir_name = dir
						file_counter = 0
						for root, dirs, files in os.walk("../../Output-Files/" + AnalysisType + "/" + dir):	
							for file in files:
								file_counter += 1
						if file_counter < 4:
							no_histogram_analyses.append(dir_name)

				for line in no_histogram_analyses:
					if counter == selected:
						window.addstr(line + "\n", curses.A_STANDOUT)
						ChainName = line + "_"
					else:
						window.addstr(line + "\n")

					counter += 1

			else:
				for line in chain_names:
					if line.find("_" + mode + "_") != -1:
						if counter == selected:
							window.addstr(line, curses.A_STANDOUT)
							ChainName = line
						else:
							window.addstr(line)

						counter += 1

			chain_names.close

			window.addstr(mode + ":\n\n")

			window.addstr("\nSelected Chain To Perform Analysis On:\n" + ChainName[0:len(ChainName) - 1] + "\n\n")

			window.addstr("Analysis Type:\n" + AnalysisType + "\n\n")

			try:
				root_file_mod_time = os.path.getmtime("../../Root-Files/" + AnalysisType + "/" + ChainName[0:len(ChainName) - 1] + "_Histograms.root")
				window.addstr("Root File Mod Date:\n" + time.ctime(root_file_mod_time) + "\n\n")
			except:
				window.addstr("No Root File Found\n\n")

			file_counter = 0
			
			for root, dirs, files in os.walk("../../Output-Files/" + AnalysisType + "/" + ChainName[0:len(ChainName) - 1]):
				for file in files:
					file_counter += 1

			window.addstr("Histograms Drawn to PDF: " + str(file_counter) + "\n")

			window.refresh()

			c = window.getch()

			if c == curses.KEY_DOWN and selected != counter -1:
				selected += 1
			elif c == curses.KEY_UP and selected != 0:
				selected -= 1
			elif c == curses.KEY_RIGHT:
				temporary_command_file = open("temporary_command_file.sh", "w")
				temporary_command_file.write("root \"Start_Analysis.C(\\\"Start_" + ChainName[0:len(ChainName) - 1] + "_Analysis\\\",\\\"" + AnalysisType + "\\\")\" -l -b -q")
				temporary_command_file.close()
				subprocess.Popen('gnome-terminal -x "bash" -c ". temporary_command_file.sh"', shell=True)
				time.sleep(10)
				os.remove("temporary_command_file.sh")
			elif c == curses.KEY_LEFT:
				mode = AnalysisType
				ChainName = ""
				selected = 0

		

curses.wrapper(gui)
