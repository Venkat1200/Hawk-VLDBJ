set title 'relative estimation errors for operation CPU_COLUMN_SCAN'
set xtics nomirror
set ytics nomirror
set xlabel 'iterations'
set ylabel 'absolute relative estmation error'
set logscale y
set key below
set key box

plot 'CPU_COLUMN_SCAN_0/relative_errors.data' using 1:(abs($2)) title "CPU_COLUMN_SCAN_0 relative error" with points

set output "relative_errors.pdf"
set terminal pdfcairo font "Helvetica,9"
replot