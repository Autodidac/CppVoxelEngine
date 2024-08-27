// dllmain.cpp
#include "pch.h"

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // Initialization code here
        break;

    case DLL_THREAD_ATTACH:
        // Code to run when a thread is created
        break;

    case DLL_THREAD_DETACH:
        // Code to run when a thread is destroyed
        break;

    case DLL_PROCESS_DETACH:
        // Cleanup code here
        break;
    }
    return TRUE;
}
