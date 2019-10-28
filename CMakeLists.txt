cmake_minimum_required(VERSION 2.8)
project(helloworld)

# Add the source in project root directory
aux_source_directory(. DIRSRCS)

# Add header file include directories
include_directories(./ ./src )

# Add block directories
add_subdirectory(src)
set(CMAKE_CXX_FLAGS "-std=c++14" )
# Target
add_executable(helloworld ${DIRSRCS})
target_link_libraries(helloworld src_lib)
