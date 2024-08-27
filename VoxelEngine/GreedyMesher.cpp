#include "pch.h"
#include "GreedyMesher.h"
#include <vector>
#include <iostream>
#include <algorithm>  // Include this for std::copy

const Vertex cubeVertices[24] = { /* Initialize with vertex data */ };

std::vector<Vertex> generateMesh(const Chunk& chunk) {
    std::vector<Vertex> vertices;

    for (int z = 0; z < CHUNK_SIZE; ++z) {
        for (int y = 0; y < CHUNK_SIZE; ++y) {
            for (int x = 0; x < CHUNK_SIZE; ++x) {
                if (chunk.getVoxel(x, y, z).isActive) {
                    std::cout << "Generating mesh for active voxel at (" << x << ", " << y << ", " << z << ")" << std::endl;
                    for (int i = 0; i < 24; ++i) {
                        Vertex v;
                        std::copy(cubeVertices[i].position, cubeVertices[i].position + 3, v.position);
                        std::copy(cubeVertices[i].normal, cubeVertices[i].normal + 3, v.normal);
                        vertices.push_back(v);
                    }
                }
            }
        }
    }

    std::cout << "Generated " << vertices.size() << " vertices." << std::endl;
    return vertices;
}
