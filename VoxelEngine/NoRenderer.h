#pragma once

#include <vector>
#include "VoxelEngineAPI.h"
#include "Chunk.h"  // Include Chunk.h to get the Vertex definition

class VOXELENGINE_API NoRenderer {
public:
    NoRenderer();  // Constructor
    virtual ~NoRenderer();  // Destructor

    virtual void initialize();
    virtual void render(const std::vector<Vertex>& vertices);
    virtual void cleanup();
};
