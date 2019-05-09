import os
mc_locations = open("MC_Paths_Higgs.txt", "w")
data_locations = open("Data_Paths_Higgs.txt", "w")
chain_names = open("Chain_Names_Higgs.txt", "w")

prevpath = ""
prevID = ""

for root, dirs, files in os.walk("/higgs-data3/sam/forTomRyunAliceLuca/v03/mc"):
	for file in files:
		path = os.path.join(root, file)

		ID_Location = path.find(".mc.") + 4
		ID = path[ID_Location:ID_Location + 6]

		Name_Location = ID_Location + 7
		Name = path[Name_Location:path.find(".", Name_Location)]

		r_version = ""

		if (path.find("r9364") != -1):
			r_version = "_r9364"

		if (path.find("r10201") != -1):
			r_version = "_r10201"

		if ID != prevID:
			mc_locations.write("##" + Name + r_version + "\n")
			mc_locations.write("@@" + ID + "\n")
			chain_names.write(Name + r_version + "\n")
		mc_locations.write(path + "\n")
		prevpath = path	
		prevID = ID

prevpath = ""
prevID = ""

for root, dirs, files in os.walk("/higgs-data3/sam/forTomRyunAliceLuca/v03/data"):
	for file in files:
		path = os.path.join(root, file)

		ID_Location = len("/higgs-data3/sam/forTomRyunAliceLuca/v03/data/user.sdysch.mphys_v2.") + 13
		ID = path[ID_Location:ID_Location + 8]

		Name_Location = len("/higgs-data3/sam/forTomRyunAliceLuca/v03/data/user.sdysch.mphys_v2.")
		Name = path[Name_Location:ID_Location + 8]

		r_version = ""

		if (path.find("r9364") != -1):
			r_version = "_r9364"

		if (path.find("r10201") != -1):
			r_version = "_r10201"

		if ID != prevID:
			data_locations.write("##" + Name + r_version + "\n")
			data_locations.write("@@" + ID + "\n")
		data_locations.write(path + "\n")
		prevpath = path
		prevID = ID


