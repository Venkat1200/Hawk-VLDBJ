# CMake generated Testfile for 
# Source directory: /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test
# Build directory: /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(code-generation-tests "code-generation-tests")
add_test(dictionary_compressed_column-tests "dictionary_compressed_column-tests")
add_test(string_column_tests "string_column_tests")
add_test(order_preserving_dictionary_compressed_column-tests "order_preserving_dictionary_compressed_column-tests")
subdirs(util)
