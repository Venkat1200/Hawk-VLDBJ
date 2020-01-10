/*
 * Configuration header
 *
 * Include with:
 *
 * #ifdef HAVE_CONFIG_H
 * #include "config.h"
 * #endif
 */

/*
 * Configuration results
 */
/* #undef HAVE_CUDAMEMGETINFO */
#define LIBREADLINE_FOUND
#define BAM_FOUND
/* #undef PERSEUS_FOUND */

/*
 * User-configured options
 */
/* #undef ENABLE_GPU_ACCELERATION */
#define ENABLE_TWO_PHASE_PHYSICAL_OPTIMIZATION
/* #undef ENABLE_SIMD_ACCELERATION */
#define ENABLE_BRANCHING_SCAN
/* #undef ENABLE_CPU_NESTED_LOOP_JOIN */
#define COGADB_VERSION "0.4.2"
#define BISON_VERSION_3_OR_HIGHER
/* #undef COGADB_L1_CACHE_SIZE */
/* #undef COGADB_L1_CACHELINE_SIZE */
/* #undef COGADB_L1_CACHE_ASSOCIATIVITY */
#define PATH_TO_COGADB_EXECUTABLE "/home/gurumurt/Hawk-VLDBJ/source"
#define PATH_TO_DATA_OF_TESTS "/home/gurumurt/Hawk-VLDBJ/source/test/testdata"
#define PATH_TO_COGADB_SOURCE_CODE "/home/gurumurt/Hawk-VLDBJ/source"
#define QUERY_COMPILATION_CC "/usr/lib/llvm-3.6/bin/clang"
#define QUERY_COMPILATION_CLANG_VERSION "3.6.2"
#define QUERY_COMPILATION_CXX "/usr/lib/llvm-3.6/bin/clang++"
