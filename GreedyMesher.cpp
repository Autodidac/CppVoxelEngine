#include "GreedyMesher.h"
#include <algorithm>

constexpr float cubeVertices[] = {
    // Positions        // Normals
    0.0f, 0.0f, 0.0f,  0.0f, 0.0f, -1.0f,  // Face -Z
    1.0f, 0.0f, 0.0f,  0.0f, 0.0f, -1.0f,
    1.0f, 1.0f, 0.0f,  0.0f, 0.0f, -1.0f,
    0.0f, 1.0f, 0.0f,  0.0f, 0.0f, -1.0f,
    // Add more faces here...
};

std::vector<Vertex> generateMesh(const Chunk& chunk) {
    std::vector<Vertex> vertices;

    for (int z = 0; z < CHUNK_SIZE; ++z) {
        for (int y = 0; y < CHUNK_SIZE; ++y) {
            for (int x = 0; x < CHUNK_SIZE; ++x) {
                if (chunk.getVoxel(x, y, z).isActive) {
                    for (int i = 0; i < 24; ++i) {
                        Vertex v;
                        std::copy(&cubeVertices[i * 6], &cubeVertices[(i + 1) * 6], &v.position[0]);
                        std::copy(&cubeVertices[i * 6 + 3], &cubeVertices[(i + 1) * 6 + 3], &v.normal[0]);
                        vertices.push_back(v);
                    }
                }
            }
        }
    }

    return vertices;
}
