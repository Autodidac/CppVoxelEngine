#include "pch.h"
#include "Chunk.h"
#include <iostream>
#include <random>

// Constructor implementation
Chunk::Chunk() {
    // Initialization code if needed
}

const Voxel& Chunk::getVoxel(int x, int y, int z) const {
    return voxels[x][y][z];  // This should not modify any member variables
}

void Chunk::generateTerrain(int seed) {
    std::mt19937 rng(seed);
    std::uniform_real_distribution<float> noise(0.0f, 1.0f);

    for (int z = 0; z < CHUNK_SIZE; ++z) {
        for (int y = 0; y < CHUNK_SIZE; ++y) {
            for (int x = 0; x < CHUNK_SIZE; ++x) {
                bool isActive = noise(rng) > 0.5f;
                voxels[x][y][z].isActive = isActive;  // Modify the voxels array here

                // Debug output
                if (isActive) {
                    std::cout << "Voxel at (" << x << ", " << y << ", " << z << ") is active." << std::endl;
                }
            }
        }
    }
}
