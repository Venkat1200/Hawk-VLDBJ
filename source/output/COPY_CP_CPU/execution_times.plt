set title 'Execution time curves for Operation COPY_CP_CPU'
set xtics nomirror
set ytics nomirror
set xlabel 'Data size in number of Elements (int)'
set ylabel 'Execution time in ns'
set key top left Left reverse samplen 1

plot 'COPY_CP_CPU_102/measurement_pairs.data' using 1:2 title "COPY_CP_CPU_102 measured execution times" with points, \
'COPY_CP_CPU_102/measurement_pairs.data' using 1:3 title "COPY_CP_CPU_102 estimated execution times" with points

set output "execution_times.pdf"
set terminal pdfcairo font "Helvetica,9"
replot
