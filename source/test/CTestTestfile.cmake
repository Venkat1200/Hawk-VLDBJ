# CMake generated Testfile for 
# Source directory: /home/gurumurt/Hawk-VLDBJ/source/test
# Build directory: /home/gurumurt/Hawk-VLDBJ/source/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(bulk_execution_tpch-tests "bulk_execution_tpch-tests")
add_test(bulk_execution_ssb-tests "bulk_execution_ssb-tests")
add_test(standard_query-tests "standard_query_tests")
add_test(query_compiler_ssb-tests "query_compiler_ssb-tests")
add_test(json_query_compiler_interface-tests "json_query_compiler_interface-tests")
add_test(k_means_test "code_generation_k_means")
add_test(opencl_query_compiler_ssb_aggregation-tests "opencl_query_compiler_ssb_aggregation-tests")
add_test(opencl_query_compiler_ssb_projection-tests "opencl_query_compiler_ssb_projection-tests")
add_test(opencl_query_compiler_ssb_groupagg-tests "opencl_query_compiler_ssb_groupagg-tests")
subdirs(parser)
