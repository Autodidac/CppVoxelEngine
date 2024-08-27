// IRenderer.h
#pragma once
#include <vector>
#include "GreedyMesher.h"

class IRenderer {
public:
    virtual ~IRenderer() = default;
    virtual void initialize() = 0;
    virtual void render(const std::vector<Vertex>& vertices) = 0;
    virtual void cleanup() = 0;
};
