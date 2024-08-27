# CppVoxelEngine
A Voxel Engine Library in C++20 for WickedEngine

---


I have to be honest I'm just getting started with CMake so I doubt this works yet, but someday.



Building the Projects

---

Building the Projects (with WIN32)

Build the Dynamic Link Library and Executable Binary Example
---

Download the zip and extract it, into a new solution containing a DLL and EXE projects (one each)
Drop the source in the appropriate folders (a premake version to build vs solutions is planned)

in project properties (CppVoxelEngine project)
add macro to preprocessor in engine project properties 

in project properties (CppVoxelEngine_Example project)
Add the include directory to exe project
Add the CppVoxelEngine.lib to the linker in exe project
Add the Lib directory to the linker in exe project 

Build the Solution (DLL and EXE)

---

Building the Projects (with CMAKE)

Build the Static Library
---
Navigate to the VoxelEngineLib directory and create a build directory:

<code>mkdir build
cd build
cmake ..
cmake --build .
</code>


Build the Example Application
---
Navigate to the VoxelEngineApp directory and create a build directory:

<code>mkdir build
cd build
cmake ..
cmake --build .
</code>

---
