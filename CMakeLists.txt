cmake_minimum_required(VERSION 3.10)
project(NajaScriptCompiler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add cmake modules path
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules)

# Find ANTLR4 runtime
find_package(ANTLR4 REQUIRED)

# Add source files
file(GLOB GRAMMAR_SOURCES 
    src/grammar/NajaScript*.cpp
)

add_executable(najascript
    src/NajaScriptCompiler.cpp
    ${GRAMMAR_SOURCES}
)

# Include directories
target_include_directories(najascript PRIVATE
    ${ANTLR4_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/grammar
)

# Link libraries
target_link_libraries(najascript PRIVATE
    ${ANTLR4_LIBRARIES}
)