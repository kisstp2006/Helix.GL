#include <Helix/GL/Loader.h>
#include <Helix/GL/WGL.h>

#include <windows.h>

namespace helix::gl
{
    namespace
    {
        HMODULE opengl32 = nullptr;
        HMODULE gdi32 = nullptr;
        using WglGetProcAddress = void*(WINAPI*)(const char*);
        WglGetProcAddress wglGetProc = nullptr;
    }

    bool OpenSystemLibraries()
    {
        if (!opengl32)
            opengl32 = LoadLibraryW(L"opengl32.dll");
        if (!gdi32)
            gdi32 = LoadLibraryW(L"gdi32.dll");
        if (opengl32 && !wglGetProc)
            wglGetProc = reinterpret_cast<WglGetProcAddress>(reinterpret_cast<void*>(GetProcAddress(opengl32, "wglGetProcAddress")));
        return opengl32 && gdi32 && wglGetProc;
    }

    void CloseSystemLibraries()
    {
        if (opengl32)
            FreeLibrary(opengl32);
        if (gdi32)
            FreeLibrary(gdi32);
        opengl32 = gdi32 = nullptr;
        wglGetProc = nullptr;
    }

    void* GetSystemProcAddress(const char* name, void*)
    {
        if (wglGetProc)
        {
            void* p = wglGetProc(name);
            uintptr_t v = reinterpret_cast<uintptr_t>(p);
            if (v > 3 && v != uintptr_t(-1))
                return p;
        }
        if (opengl32)
            if (FARPROC p = GetProcAddress(opengl32, name))
                return reinterpret_cast<void*>(p);
        if (gdi32)
            if (FARPROC p = GetProcAddress(gdi32, name))
                return reinterpret_cast<void*>(p);
        return nullptr;
    }

    int LoadWindowSystem()
    {
        if (!OpenSystemLibraries())
            return 0;
        return wgl::Load(&GetSystemProcAddress, nullptr);
    }
}
