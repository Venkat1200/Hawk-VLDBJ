set title 'Execution time curves for Operation LEFT_SEMI_JOIN'
set xtics nomirror
set ytics nomirror
set xlabel 'Data size in number of Elements (int)'
set ylabel 'Execution time in ns'
set key top left Left reverse samplen 1

plot 'CPU_LEFT_SEMI_JOIN_0/measurement_pairs.data' using 1:2 title "CPU_LEFT_SEMI_JOIN_0 measured execution times" with points, \
'CPU_LEFT_SEMI_JOIN_0/measurement_pairs.data' using 1:3 title "CPU_LEFT_SEMI_JOIN_0 estimated execution times" with points, \
'GPU_LEFT_SEMI_JOIN_1/measurement_pairs.data' using 1:2 title "GPU_LEFT_SEMI_JOIN_1 measured execution times" with points, \
'GPU_LEFT_SEMI_JOIN_1/measurement_pairs.data' using 1:3 title "GPU_LEFT_SEMI_JOIN_1 estimated execution times" with points

set output "execution_times.pdf"
set terminal pdfcairo font "Helvetica,9"
replot
