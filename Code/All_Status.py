import os
import time
import curses

def status_function(window):
	running = 1
	while running:
		window.erase()
		time.sleep(0.5)
		status_file = open("../../WWW/Master_Status_File.txt", "w")
		for root, dirs, files in os.walk("../../Status_Files"):
			for file in files:
				file_name = os.path.join(root, file)
				open_file = open(file_name, "r")
				for line in open_file:
					status_file.write(line + "\n")
					if (line.find("Completed in") == -1):
						window.addstr(line + "\n")

		status_file.close()
		window.refresh()

curses.wrapper(status_function)


