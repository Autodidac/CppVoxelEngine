#pragma once
#include "GreedyMesher.h" // Include this to ensure Vertex is defined

#ifdef VOXELENGINE_EXPORTS
#define VOXELENGINE_API __declspec(dllexport)
#else
#define VOXELENGINE_API __declspec(dllimport)
#endif

extern "C" {
    VOXELENGINE_API void InitializeLibrary();
    VOXELENGINE_API void CleanupLibrary();
    VOXELENGINE_API void generateTerrain(int);
}

// Note: Remove the extern "C" here for generateMesh
//VOXELENGINE_API std::vector<Vertex> generateMesh(const Chunk&);
