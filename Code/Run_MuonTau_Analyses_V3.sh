cat xarg_input_files/MuonTau_xarg_inputs.sh | while read i; do printf "%q\n" "$i"; done | xargs -I CMD --max-procs=10 bash -c CMD &
