import os
import subprocess

print("Deleting Electron Files")
subprocess.call('rm -r ../../Output-Files/Electron', shell=True)
print ("Done\nDeleting ElectronMuon Files")
subprocess.call('rm -r ../../Output-Files/ElectronMuon', shell=True)
print ("Done\nDeleting ElectronTau Files")
subprocess.call('rm -r ../../Output-Files/ElectronTau', shell=True)
print ("Done\nDeleting Muon Files")
subprocess.call('rm -r ../../Output-Files/Muon', shell=True)
print ("Done\nDeleting MuonTau Files")
subprocess.call('rm -r ../../Output-Files/MuonTau', shell=True)
print ("Done\n")
