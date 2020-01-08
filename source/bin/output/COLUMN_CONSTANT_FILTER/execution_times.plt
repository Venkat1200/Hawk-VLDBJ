set title 'Execution time curves for Operation COLUMN_CONSTANT_FILTER'
set xtics nomirror
set ytics nomirror
set xlabel 'Data size in number of Elements (int)'
set ylabel 'Execution time in ns'
set key top left Left reverse samplen 1

plot 'CPU_COLUMN_CONSTANT_FILTER_0/measurement_pairs.data' using 1:2 title "CPU_COLUMN_CONSTANT_FILTER_0 measured execution times" with points, \
'CPU_COLUMN_CONSTANT_FILTER_0/measurement_pairs.data' using 1:3 title "CPU_COLUMN_CONSTANT_FILTER_0 estimated execution times" with points

set output "execution_times.pdf"
set terminal pdfcairo font "Helvetica,9"
replot