#pragma once

struct Voxel {
    int type;       // Type of voxel, could be expanded
    bool isActive;  // True if the voxel is part of the world
    bool isSolid;   // True if not an air block
};
