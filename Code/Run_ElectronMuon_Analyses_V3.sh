cat xarg_input_files/ElectronMuon_xarg_inputs.sh | while read i; do printf "%q\n" "$i"; done | xargs -I CMD --max-procs=20 bash -c CMD &
