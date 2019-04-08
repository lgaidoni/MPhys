cat xarg_input_files/Muon_Higgs_xarg_inputs_DATA.sh | while read i; do printf "%q\n" "$i"; done | xargs -I CMD --max-procs=50 bash -c CMD &
