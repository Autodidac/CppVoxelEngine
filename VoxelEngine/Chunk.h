#pragma once

#include "Voxel.h"
#include "VoxelEngineAPI.h"

#define CHUNK_SIZE 16

struct Vertex {
    float position[3];
    float normal[3];
};

class VOXELENGINE_API Chunk {
public:
    Chunk();  // Constructor
    void generateTerrain(int seed);
    const Voxel& getVoxel(int x, int y, int z) const;  // Return const reference

private:
    Voxel voxels[CHUNK_SIZE][CHUNK_SIZE][CHUNK_SIZE];
};
