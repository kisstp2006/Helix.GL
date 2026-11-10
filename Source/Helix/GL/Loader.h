#pragma once

#include <Helix/GL/GL.h>

namespace helix::gl
{
    // Opens the system GL libraries (opengl32 and gdi32, libEGL and libGL or libGLESv2, WebGL on the web).
    bool OpenSystemLibraries();
    void CloseSystemLibraries();

    // Callback for Load: wglGetProcAddress or eglGetProcAddress first, then the library exports.
    void* GetSystemProcAddress(const char* name, void* user);

    // Loads the window system binding (WGL on Windows, EGL on Linux and Android); returns the number of entry points.
    int LoadWindowSystem();

    // Loads every GL entry point with a current context; returns the number of entry points.
    int LoadWithCurrentContext();

    bool HasExtension(const char* name);
    void GetVersion(int& major, int& minor, bool& es);
}
