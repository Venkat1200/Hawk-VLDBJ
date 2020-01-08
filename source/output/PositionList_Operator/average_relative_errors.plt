set title 'average relative estimation errors for operation PositionList_Operator'
set xtics nomirror
set ytics nomirror
set xlabel 'iterations'
set ylabel 'average absolute relative estmation error'
set logscale y
set key below
set key box

plot 'CPU_PositionList_Operator_0/average_relative_errors.data' using 1:(abs($2)) title "CPU_PositionList_Operator_0 relative error" with points

set output "average_relative_errors.pdf"
set terminal pdfcairo font "Helvetica,9"
replot
