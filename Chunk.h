#pragma once
#include "Voxel.h"
#include <vector>

constexpr int CHUNK_SIZE = 16;

class Chunk {
public:
    Chunk() : voxels(CHUNK_SIZE * CHUNK_SIZE * CHUNK_SIZE) {}

    Voxel& getVoxel(int x, int y, int z) {
        return voxels[index(x, y, z)];
    }

    const Voxel& getVoxel(int x, int y, int z) const {
        return voxels[index(x, y, z)];
    }

    void generateTerrain(int seed);

private:
    std::vector<Voxel> voxels;

    int index(int x, int y, int z) const {
        return x + y * CHUNK_SIZE + z * CHUNK_SIZE * CHUNK_SIZE;
    }
};
