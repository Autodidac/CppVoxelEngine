#include <WickedEngine.h>
#include "Chunk.h"
#include "GreedyMesher.h"

using namespace Wicked;

// Global variables
Engine* engine;
Camera* camera;
Mesh* voxelMesh;
Material* voxelMaterial;

void InitializeVoxelEngine() {
    // Create and initialize the chunk
    Chunk chunk;
    chunk.generateTerrain(12345);  // Example seed

    // Generate the mesh for the chunk
    auto vertices = generateMesh(chunk);

    // Create the Wicked Engine mesh
    voxelMesh = new Mesh();
    voxelMesh->SetVertices(vertices.data(), vertices.size() * sizeof(Vertex));

    // Create and configure the material
    voxelMaterial = new Material();
    voxelMaterial->SetShader("shaders/vertexShader.hlsl", "shaders/fragmentShader.hlsl");
    voxelMaterial->SetTexture("textures/voxelTexture.png");

    // Set up additional material properties as needed
}

void RenderScene() {
    // Set up camera view and projection
    engine->GetRenderer()->SetCamera(camera);

    // Draw the voxel mesh
    engine->GetRenderer()->DrawMesh(voxelMesh, voxelMaterial);
}

int main() {
    // Initialize the engine
    engine = Engine::Create();
    camera = new Camera();
    engine->GetRenderer()->SetCamera(camera);

    // Initialize the voxel engine
    InitializeVoxelEngine();

    // Main loop
    while (engine->IsRunning()) {
        engine->Update();
        RenderScene();
        engine->Render();
    }

    // Clean up
    delete voxelMesh;
    delete voxelMaterial;
    delete camera;
    Engine::Destroy();
    return 0;
}
