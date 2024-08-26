cmake_minimum_required(VERSION 3.10)
project(VoxelEngineApp)

set(CMAKE_CXX_STANDARD 20)

# Specify the path to your VoxelEngineLib
add_subdirectory(../VoxelEngineLib VoxelEngineLib_build)

# Add the Wicked Engine directory (adjust as needed)
include_directories(/path/to/wickedengine/include)
link_directories(/path/to/wickedengine/lib)

# Include directories for your project
include_directories(include)

# Create the executable
add_executable(VoxelEngineApp src/main.cpp)

# Link the static library
target_link_libraries(VoxelEngineApp VoxelEngine WickedEngine)
