import os
mc_locations = open("MC_Paths.txt", "w")
data_locations = open("Data_Paths.txt", "w")

prevpath = ""
for root, dirs, files in os.walk("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/mc"):
	for file in files:
		path = os.path.join(root, file)
		if path[70:76] != prevpath[70:76]:
			name_end_position = path.find(".", 89)
			print("##" + path[89:name_end_position])
			print("@@" + path[70:76])
			mc_locations.write("##" + path[89:name_end_position] + "\n")
			mc_locations.write("@@" + path[70:76] + "\n")
		mc_locations.write(path + "\n")
		prevpath = path

prevpath = ""
for root, dirs, files in os.walk("/pc2014-data4/sam/VBF_Ztt/HIGG8D1/v5.0/data"):
	for file in files:
		path = os.path.join(root, file)
		if path[74:82] != prevpath[74:82]:
			print("##" + path[61:82])
			print("@@" + path[74:82])
			data_locations.write("##" + path[61:82] + "\n")
			data_locations.write("@@" + path[74:82] + "\n")
		data_locations.write(path + "\n")
		prevpath = path
