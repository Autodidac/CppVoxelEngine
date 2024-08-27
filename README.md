# CppVoxelEngine
A Voxel Engine Library in C++20 for WickedEngine

---

## Building the Projects

### Building with WIN32

#### Build the Dynamic Link Library and Executable Binary Example

1. **Download and Extract:**
   - Download the ZIP file and extract it into a new solution directory. This directory should contain both a DLL project and an EXE project.

2. **Add Source Files:**
   - Copy the source files into the respective project folders within the solution. (Note: A Premake configuration for building the solution is planned and will simplify this step.)

3. **Configure `CppVoxelEngine` Project:**
   - Open the project properties for the `CppVoxelEngine` project.
   - Navigate to `Configuration Properties` > `C/C++` > `Preprocessor`.
   - Add `VOXELENGINE_EXPORTS` to the `Preprocessor Definitions`.

4. **Configure `CppVoxelEngine_Example` Project:**
   - Open the project properties for the `CppVoxelEngine_Example` project.
   - Navigate to `Configuration Properties` > `C/C++` > `General`.
   - Add the path to the VoxelEngine source (include) directory to the `Additional Include Directories`.
   - Navigate to `Configuration Properties` > `Linker` > `Input`.
   - Add `CppVoxelEngine.lib` to the `Additional Dependencies`.
   - Navigate to `Configuration Properties` > `Linker` > `General`.
   - Add the path to the library directory to the `Additional Library Directories`.

5. **Build the Solution:**
   - Build the Solution to compile both the DLL and EXE projects. This will generate the necessary binaries for your project.


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

