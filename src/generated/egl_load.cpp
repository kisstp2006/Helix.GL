#include <helix/gl/egl.h>

namespace helix::gl::egl
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
            {"eglBindAPI", offsetof(Api, BindAPI)},
            {"eglBindTexImage", offsetof(Api, BindTexImage)},
            {"eglChooseConfig", offsetof(Api, ChooseConfig)},
            {"eglClientWaitSync", offsetof(Api, ClientWaitSync)},
            {"eglCopyBuffers", offsetof(Api, CopyBuffers)},
            {"eglCreateContext", offsetof(Api, CreateContext)},
            {"eglCreateImage", offsetof(Api, CreateImage)},
            {"eglCreatePbufferFromClientBuffer", offsetof(Api, CreatePbufferFromClientBuffer)},
            {"eglCreatePbufferSurface", offsetof(Api, CreatePbufferSurface)},
            {"eglCreatePixmapSurface", offsetof(Api, CreatePixmapSurface)},
            {"eglCreatePlatformPixmapSurface", offsetof(Api, CreatePlatformPixmapSurface)},
            {"eglCreatePlatformPixmapSurfaceEXT", offsetof(Api, CreatePlatformPixmapSurfaceEXT)},
            {"eglCreatePlatformWindowSurface", offsetof(Api, CreatePlatformWindowSurface)},
            {"eglCreatePlatformWindowSurfaceEXT", offsetof(Api, CreatePlatformWindowSurfaceEXT)},
            {"eglCreateSync", offsetof(Api, CreateSync)},
            {"eglCreateWindowSurface", offsetof(Api, CreateWindowSurface)},
            {"eglDestroyContext", offsetof(Api, DestroyContext)},
            {"eglDestroyImage", offsetof(Api, DestroyImage)},
            {"eglDestroySurface", offsetof(Api, DestroySurface)},
            {"eglDestroySync", offsetof(Api, DestroySync)},
            {"eglGetConfigAttrib", offsetof(Api, GetConfigAttrib)},
            {"eglGetConfigs", offsetof(Api, GetConfigs)},
            {"eglGetCurrentContext", offsetof(Api, GetCurrentContext)},
            {"eglGetCurrentDisplay", offsetof(Api, GetCurrentDisplay)},
            {"eglGetCurrentSurface", offsetof(Api, GetCurrentSurface)},
            {"eglGetDisplay", offsetof(Api, GetDisplay)},
            {"eglGetError", offsetof(Api, GetError)},
            {"eglGetPlatformDisplay", offsetof(Api, GetPlatformDisplay)},
            {"eglGetPlatformDisplayEXT", offsetof(Api, GetPlatformDisplayEXT)},
            {"eglGetProcAddress", offsetof(Api, GetProcAddress)},
            {"eglGetSyncAttrib", offsetof(Api, GetSyncAttrib)},
            {"eglInitialize", offsetof(Api, Initialize)},
            {"eglMakeCurrent", offsetof(Api, MakeCurrent)},
            {"eglPresentationTimeANDROID", offsetof(Api, PresentationTimeANDROID)},
            {"eglQueryAPI", offsetof(Api, QueryAPI)},
            {"eglQueryContext", offsetof(Api, QueryContext)},
            {"eglQueryString", offsetof(Api, QueryString)},
            {"eglQuerySurface", offsetof(Api, QuerySurface)},
            {"eglReleaseTexImage", offsetof(Api, ReleaseTexImage)},
            {"eglReleaseThread", offsetof(Api, ReleaseThread)},
            {"eglSurfaceAttrib", offsetof(Api, SurfaceAttrib)},
            {"eglSwapBuffers", offsetof(Api, SwapBuffers)},
            {"eglSwapInterval", offsetof(Api, SwapInterval)},
            {"eglTerminate", offsetof(Api, Terminate)},
            {"eglWaitClient", offsetof(Api, WaitClient)},
            {"eglWaitGL", offsetof(Api, WaitGL)},
            {"eglWaitNative", offsetof(Api, WaitNative)},
            {"eglWaitSync", offsetof(Api, WaitSync)},
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
