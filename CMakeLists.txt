cmake_minimum_required(VERSION 3.10)
project(Iris)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add ANTLR runtime source
file(GLOB_RECURSE ANTLR_SOURCES
    ${CMAKE_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src/*.cpp
    ${CMAKE_SOURCE_DIR}/cpp/antlr4_grammar/*.cpp
)

file(GLOB_RECURSE DEV_SOURCES
    ${CMAKE_SOURCE_DIR}/cpp/source/*.cpp
)

add_executable(wasm
    ${DEV_SOURCES}
    ${ANTLR_SOURCES}
)

target_link_options(wasm PRIVATE 
    "--bind"
    # "-O3"
    "-fexceptions"
    "-sDISABLE_EXCEPTION_CATCHING=0"
    "-sMODULARIZE=1"
    "-sEXPORT_ES6=1"
    "-sENVIRONMENT=web"
    "-sSINGLE_FILE=1"
)

set_target_properties(wasm PROPERTIES SUFFIX ".js")

target_include_directories(wasm PRIVATE
    ${CMAKE_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src
    cpp/include
    cpp/antlr4_grammar
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/ts")