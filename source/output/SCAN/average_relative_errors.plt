set title 'average relative estimation errors for operation SCAN'
set xtics nomirror
set ytics nomirror
set xlabel 'iterations'
set ylabel 'average absolute relative estmation error'
set logscale y
set key below
set key box

plot 'TABLE_SCAN_0/average_relative_errors.data' using 1:(abs($2)) title "TABLE_SCAN_0 relative error" with points

set output "average_relative_errors.pdf"
set terminal pdfcairo font "Helvetica,9"
replot