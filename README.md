# Helix.GL

OpenGL, OpenGL ES, WebGL 2, EGL and WGL bindings for C++, released under CC0.

## Contents

| File | Content |
|---|---|
| `include/helix/gl/gl.h` | Types, enums and the entry points of OpenGL 4.6 core and OpenGL ES 3.2 plus selected extensions (bindless texture, buffer storage, multi draw indirect, debug, texture compression, timer queries, clip control, multiview) |
| `include/helix/gl/egl.h` | EGL 1.5 with context, colorspace, platform and presentation time extensions |
| `include/helix/gl/wgl.h` | WGL 1.0 with context creation, pixel format, sRGB, multisample and swap control extensions, without `windows.h` |
| `include/helix/gl/loader.h` | System library loading (`opengl32`/`gdi32`, `libEGL`/`libGL`/`libGLESv2`, WebGL) and helpers |
| `src/generated/` | Entry point tables |
| `tools/generate.py` | The generator |

Everything lives in `helix::gl` (`helix::gl::egl`, `helix::gl::wgl`). Every entry point is a
member of `api` and an inline wrapper with the usual name:

```cpp
#include <helix/gl/loader.h>
using namespace helix::gl;

LoadWindowSystem();          // WGL or EGL, before creating a context
// create a context and make it current
LoadWithCurrentContext();    // every GL entry point
glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
if (HasExtension("GL_ARB_bindless_texture")) { /* ... */ }
```

A missing entry point is a null member of `api`. On the web, link with the flags the
CMake target adds (`-sGL_ENABLE_GET_PROC_ADDRESS=1`, WebGL 2).

## Regenerating

The generator reads the Khronos XML API registries (`gl.xml`, `wgl.xml` from OpenGL-Registry,
`egl.xml` from EGL-Registry). They are not stored here.

```
python tools/generate.py <directory with gl.xml, egl.xml and wgl.xml>
```

Current output was generated from OpenGL-Registry `6af574a14089ccfee87efe230ebcdd8742859813`
and EGL-Registry `8e56e86e65687697ef54114cdb1afabdfac756bf`.

## Build

```
git clone --recursive https://github.com/kisstp2006/Helix.GL
cmake --preset windows-debug
cmake --build --preset windows-debug
ctest --preset windows-debug
```

The tests create a real context: WGL with a hidden window on Windows, an EGL pbuffer on Linux.

## License

CC0 1.0 Universal, see `LICENSE`.
