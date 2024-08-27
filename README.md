# CppVoxelEngine
A Voxel Engine Library in C++20 for WickedEngine

---

## Building the Projects

### Building with WIN32

#### Build the Dynamic Link Library and Executable Binary Example

1. Download the zip file and extract it into a new solution containing a DLL and EXE projects (one each).

2. Drop the source files into the appropriate folders. (Note: A Premake version for building solutions is planned.)

3. **In Project Properties (CppVoxelEngine project):**
   - Add a macro to the preprocessor in the engine project properties.

4. **In Project Properties (CppVoxelEngine_Example project):**
   - Add the include directory to the EXE project.
   - Add `CppVoxelEngine.lib` to the linker in the EXE project.
   - Add the library directory to the linker in the EXE project.

5. Build the Solution (DLL and EXE).

---

### Building with CMake

*Note: This is a work in progress. The CMake configuration may not be fully functional yet.*

#### Build the Static Library

1. Navigate to the `CppVoxelEngine` directory and create a build directory:

   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .

2. Navigate to the `CppVoxelEngine_Example` directory and create a build directory:

   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .

