#pragma once

#ifdef VOXELENGINE_EXPORTS
#define VOXELENGINE_API __declspec(dllexport)
#else
#define VOXELENGINE_API __declspec(dllimport)
#endif
