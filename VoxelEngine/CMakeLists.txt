cmake_minimum_required(VERSION 3.10)
project(VoxelEngineLib)

set(CMAKE_CXX_STANDARD 20)

# Include directories
include_directories(include)

# Create the static library
add_library(VoxelEngine STATIC
    src/Chunk.cpp
    src/GreedyMesher.cpp
)

target_include_directories(VoxelEngine PUBLIC include)
