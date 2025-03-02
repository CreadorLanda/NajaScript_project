find_package(PkgConfig QUIET)
pkg_check_modules(PC_ANTLR4 QUIET antlr4-runtime)

find_path(ANTLR4_INCLUDE_DIR
    NAMES 
        antlr4-runtime.h
        antlr4-runtime/antlr4-runtime.h
    PATHS 
        ${PC_ANTLR4_INCLUDE_DIRS}
        /usr/local/include
        /usr/include
        /usr/local/include/antlr4-runtime
        /usr/include/antlr4-runtime
    PATH_SUFFIXES 
        antlr4-runtime
        include
        include/antlr4-runtime
)

find_library(ANTLR4_LIBRARY
    NAMES 
        antlr4-runtime
        libantlr4-runtime
    PATHS 
        ${PC_ANTLR4_LIBRARY_DIRS}
        /usr/local/lib
        /usr/lib
        /usr/lib/x86_64-linux-gnu
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(ANTLR4 
    DEFAULT_MSG
    ANTLR4_LIBRARY 
    ANTLR4_INCLUDE_DIR
)

if(ANTLR4_FOUND)
    set(ANTLR4_LIBRARIES ${ANTLR4_LIBRARY})
    set(ANTLR4_INCLUDE_DIRS ${ANTLR4_INCLUDE_DIR})
endif()

mark_as_advanced(ANTLR4_INCLUDE_DIR ANTLR4_LIBRARY)