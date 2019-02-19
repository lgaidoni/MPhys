echo "Performing Analysis for $1"
gnome-terminal --working-directory=/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code -e 'root Start_Analysis.C(\"Start_Sh221_PDF30_Ztt_MV1000_E_CMS_Analysis\",\"$1\") -l -b' &
gnome-terminal --working-directory=/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code -e 'root Start_Analysis.C(\"Start_Sh221_PDF30_ZqqZll_Analysis\",\"$1\") -l -b' &
gnome-terminal --working-directory=/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code -e 'root Start_Analysis.C(\"Start_Sh221_PDF30_Wtaunu_MV140_280_CFilBVet_Analysis\",\"$1\") -l -b' &
gnome-terminal --working-directory=/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code -e 'root Start_Analysis.C(\"Start_Sh221_PDF30_Ztt_MV0_70_CFilBVet_Analysis\",\"$1\") -l -b' &
gnome-terminal --working-directory=/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code -e 'root Start_Analysis.C(\"Start_Sh221_PDF30_Wenu_MV140_280_CVetBVet_Analysis\",\"$1\") -l -b' &
gnome-terminal --working-directory=/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code -e 'root Start_Analysis.C(\"Start_Sh221_PDF30_Wmunu_MV1000_E_CMS_Analysis\",\"$1\") -l -b' &
gnome-terminal --working-directory=/afs/hep.man.ac.uk/u/lgaidoni/MPhys/Code -e 'root Start_Analysis.C(\"Start_Sh221_PDF30_Zmumu_MV70_140_CVetBVet_Analysis\",\"$1\") -l -b' &
