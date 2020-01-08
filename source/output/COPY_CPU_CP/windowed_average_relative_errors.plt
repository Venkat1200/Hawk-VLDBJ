set title 'windowed average relative estimation errors for operation COPY_CPU_CP (Window size=100)'
set xtics nomirror
set ytics nomirror
set xlabel 'iterations'
set ylabel 'windowed average absolute relative estmation error'
set logscale y
set key below
set key box

plot 'COPY_CPU_CP_101/windowed_average_relative_errors.data' using 1:(abs($2)) title "COPY_CPU_CP_101 relative error" with points

set output "windowed_average_relative_errors.pdf"
set terminal pdfcairo font "Helvetica,9"
replot
