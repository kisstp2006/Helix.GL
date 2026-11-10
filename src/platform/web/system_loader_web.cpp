#include <helix/gl/loader.h>

#include <emscripten/html5_webgl.h>

namespace helix::gl
{
    bool OpenSystemLibraries() { return true; }
    void CloseSystemLibraries() {}

    void* GetSystemProcAddress(const char* name, void*) { return emscripten_webgl2_get_proc_address(name); }

    int LoadWindowSystem() { return 0; }
}
