# CppVoxelEngine
A Voxel Engine Library in C++20 for WickedEngine

---

## Building the Projects

### Building with WIN32

#### Build the Dynamic Link Library and Executable Binary Example

1. **Download and Extract:**
   - Download the ZIP file and extract it into a new solution containing both a DLL and an EXE project.

2. **Add Source Files:**
   - Place the source files into their respective project folders. (Note: A Premake configuration for building the solution is planned.)

3. **Configure CppVoxelEngine Project:**
   - Open the project properties for the `CppVoxelEngine` project.
   - Add a macro to the preprocessor definitions.

4. **Configure CppVoxelEngine_Example Project:**
   - Open the project properties for the `CppVoxelEngine_Example` project.
   - Add the include directory to the project's include paths.
   - Add `CppVoxelEngine.lib` to the list of additional dependencies in the linker settings.
   - Add the library directory to the additional library directories in the linker settings.

5. **Build the Solution:**
   - Build the Solution to compile both the DLL and EXE projects.


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

