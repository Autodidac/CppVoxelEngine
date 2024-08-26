#pragma once
#include "Chunk.h"
#include <vector>

struct Vertex {
    float position[3];
    float normal[3];
};

std::vector<Vertex> generateMesh(const Chunk& chunk);
