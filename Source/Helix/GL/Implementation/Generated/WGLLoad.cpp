#include <Helix/GL/WGL.h>

namespace helix::gl::wgl
{
    Api api;

    namespace
    {
        struct Entry
        {
            const char* name;
            std::size_t offset;
        };

        constexpr Entry kEntries[] = {
            {"ChoosePixelFormat", offsetof(Api, ChoosePixelFormat)},
            {"DescribePixelFormat", offsetof(Api, DescribePixelFormat)},
            {"GetEnhMetaFilePixelFormat", offsetof(Api, GetEnhMetaFilePixelFormat)},
            {"GetPixelFormat", offsetof(Api, GetPixelFormat)},
            {"SetPixelFormat", offsetof(Api, SetPixelFormat)},
            {"SwapBuffers", offsetof(Api, SwapBuffers)},
            {"wglChoosePixelFormatARB", offsetof(Api, ChoosePixelFormatARB)},
            {"wglCopyContext", offsetof(Api, CopyContext)},
            {"wglCreateContext", offsetof(Api, CreateContext)},
            {"wglCreateContextAttribsARB", offsetof(Api, CreateContextAttribsARB)},
            {"wglCreateLayerContext", offsetof(Api, CreateLayerContext)},
            {"wglDeleteContext", offsetof(Api, DeleteContext)},
            {"wglDescribeLayerPlane", offsetof(Api, DescribeLayerPlane)},
            {"wglGetCurrentContext", offsetof(Api, GetCurrentContext)},
            {"wglGetCurrentDC", offsetof(Api, GetCurrentDC)},
            {"wglGetExtensionsStringARB", offsetof(Api, GetExtensionsStringARB)},
            {"wglGetExtensionsStringEXT", offsetof(Api, GetExtensionsStringEXT)},
            {"wglGetLayerPaletteEntries", offsetof(Api, GetLayerPaletteEntries)},
            {"wglGetPixelFormatAttribfvARB", offsetof(Api, GetPixelFormatAttribfvARB)},
            {"wglGetPixelFormatAttribivARB", offsetof(Api, GetPixelFormatAttribivARB)},
            {"wglGetProcAddress", offsetof(Api, GetProcAddress)},
            {"wglGetSwapIntervalEXT", offsetof(Api, GetSwapIntervalEXT)},
            {"wglMakeCurrent", offsetof(Api, MakeCurrent)},
            {"wglRealizeLayerPalette", offsetof(Api, RealizeLayerPalette)},
            {"wglSetLayerPaletteEntries", offsetof(Api, SetLayerPaletteEntries)},
            {"wglShareLists", offsetof(Api, ShareLists)},
            {"wglSwapIntervalEXT", offsetof(Api, SwapIntervalEXT)},
            {"wglSwapLayerBuffers", offsetof(Api, SwapLayerBuffers)},
            {"wglUseFontBitmaps", offsetof(Api, UseFontBitmaps)},
            {"wglUseFontBitmapsA", offsetof(Api, UseFontBitmapsA)},
            {"wglUseFontBitmapsW", offsetof(Api, UseFontBitmapsW)},
            {"wglUseFontOutlines", offsetof(Api, UseFontOutlines)},
            {"wglUseFontOutlinesA", offsetof(Api, UseFontOutlinesA)},
            {"wglUseFontOutlinesW", offsetof(Api, UseFontOutlinesW)},
        };
    }

    int CommandCount() { return int(sizeof(kEntries) / sizeof(kEntries[0])); }

    int Load(GetProcAddressFunction getProcAddress, void* user)
    {
        int found = 0;
        for (const Entry& e : kEntries)
        {
            void* p = getProcAddress(e.name, user);
            *reinterpret_cast<void**>(reinterpret_cast<char*>(&api) + e.offset) = p;
            found += p ? 1 : 0;
        }
        return found;
    }
}
