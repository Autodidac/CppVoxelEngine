#pragma once

#include <vector>
#include "VoxelEngineAPI.h"
#include "Chunk.h"

VOXELENGINE_API std::vector<Vertex> generateMesh(const Chunk& chunk);
