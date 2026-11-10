#include <helix/gl/loader.h>
#include <helix/gl/egl.h>

#if !defined(__EMSCRIPTEN__)
#include <dlfcn.h>

namespace helix::gl
{
    namespace
    {
        void* libEGL = nullptr;
        void* libGL = nullptr;
        using EglGetProcAddress = void* (*)(const char*);
        EglGetProcAddress eglGetProc = nullptr;

        void* Open(const char* const* names)
        {
            for (const char* const* n = names; *n; n++)
                if (void* h = dlopen(*n, RTLD_NOW | RTLD_LOCAL))
                    return h;
            return nullptr;
        }
    }

    bool OpenSystemLibraries()
    {
        static const char* const eglNames[] = {"libEGL.so.1", "libEGL.so", nullptr};
#if defined(__ANDROID__)
        static const char* const glNames[] = {"libGLESv3.so", "libGLESv2.so", nullptr};
#else
        static const char* const glNames[] = {"libOpenGL.so.0", "libGL.so.1", "libGLESv2.so.2", nullptr};
#endif
        if (!libEGL)
            libEGL = Open(eglNames);
        if (!libGL)
            libGL = Open(glNames);
        if (libEGL && !eglGetProc)
            eglGetProc = reinterpret_cast<EglGetProcAddress>(dlsym(libEGL, "eglGetProcAddress"));
        return libEGL && eglGetProc;
    }

    void CloseSystemLibraries()
    {
        if (libGL)
            dlclose(libGL);
        if (libEGL)
            dlclose(libEGL);
        libGL = libEGL = nullptr;
        eglGetProc = nullptr;
    }

    void* GetSystemProcAddress(const char* name, void*)
    {
        if (libGL)
            if (void* p = dlsym(libGL, name))
                return p;
        if (libEGL)
            if (void* p = dlsym(libEGL, name))
                return p;
        return eglGetProc ? eglGetProc(name) : nullptr;
    }

    int LoadWindowSystem()
    {
        if (!OpenSystemLibraries())
            return 0;
        return egl::Load(&GetSystemProcAddress, nullptr);
    }
}
#endif
