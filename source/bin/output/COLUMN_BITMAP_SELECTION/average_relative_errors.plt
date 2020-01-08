set title 'average relative estimation errors for operation COLUMN_BITMAP_SELECTION'
set xtics nomirror
set ytics nomirror
set xlabel 'iterations'
set ylabel 'average absolute relative estmation error'
set logscale y
set key below
set key box

plot 'CPU_COLUMN_BITMAP_SELECTION_0/average_relative_errors.data' using 1:(abs($2)) title "CPU_COLUMN_BITMAP_SELECTION_0 relative error" with points

set output "average_relative_errors.pdf"
set terminal pdfcairo font "Helvetica,9"
replot