#include "pch.h"
#include "NoRenderer.h"
#include <iostream>

NoRenderer::NoRenderer()
{
}

NoRenderer::~NoRenderer()
{
}

void NoRenderer::initialize() {
    std::cout << "Renderer initialized." << std::endl;
}

void NoRenderer::render(const std::vector<Vertex>& vertices) {
    std::cout << "Rendering " << vertices.size() << " vertices." << std::endl;
    // Add rendering code here
}

void NoRenderer::cleanup() {
    std::cout << "Renderer cleaned up." << std::endl;
}
