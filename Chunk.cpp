#include "Chunk.h"
#include <random>

void Chunk::generateTerrain(int seed) {
    std::mt19937 rng(seed);
    std::uniform_real_distribution<float> noise(0.0f, 1.0f);

    for (int z = 0; z < CHUNK_SIZE; ++z) {
        for (int y = 0; y < CHUNK_SIZE; ++y) {
            for (int x = 0; x < CHUNK_SIZE; ++x) {
                float value = noise(rng);
                getVoxel(x, y, z).isActive = value > 0.5f;
            }
        }
    }
}
