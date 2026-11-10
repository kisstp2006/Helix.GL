#pragma once

#include <cstddef>
#include <cstdint>

#ifndef HX_GL_APIENTRY
#if defined(_WIN32)
#define HX_GL_APIENTRY __stdcall
#else
#define HX_GL_APIENTRY
#endif
#endif

#include <helix/gl/gl.h>

namespace helix::gl::egl
{
    using EGLNativeDisplayType = void*;
    using EGLNativePixmapType = void*;
    using EGLNativeWindowType = void*;
    using NativeDisplayType = EGLNativeDisplayType;
    using NativePixmapType = EGLNativePixmapType;
    using NativeWindowType = EGLNativeWindowType;
    using EGLint = std::int32_t;

    struct AHardwareBuffer;
    struct wl_buffer;
    struct wl_display;
    struct wl_resource;
    typedef unsigned int EGLBoolean;
    typedef unsigned int EGLenum;
    typedef intptr_t EGLAttribKHR;
    typedef intptr_t EGLAttrib;
    typedef void *EGLClientBuffer;
    typedef void *EGLConfig;
    typedef void *EGLContext;
    typedef void *EGLDeviceEXT;
    typedef void *EGLDisplay;
    typedef void *EGLImage;
    typedef void *EGLImageKHR;
    typedef void *EGLLabelKHR;
    typedef void *EGLObjectKHR;
    typedef void *EGLOutputLayerEXT;
    typedef void *EGLOutputPortEXT;
    typedef void *EGLStreamKHR;
    typedef void *EGLSurface;
    typedef void *EGLSync;
    typedef void *EGLSyncKHR;
    typedef void *EGLSyncNV;
    typedef void (*__eglMustCastToProperFunctionPointerType)(void);
    typedef khronos_utime_nanoseconds_t EGLTimeKHR;
    typedef khronos_utime_nanoseconds_t EGLTime;
    typedef khronos_utime_nanoseconds_t EGLTimeNV;
    typedef khronos_utime_nanoseconds_t EGLuint64NV;
    typedef khronos_uint64_t EGLuint64KHR;
    typedef khronos_stime_nanoseconds_t EGLnsecsANDROID;
    typedef int EGLNativeFileDescriptorKHR;
    typedef khronos_ssize_t EGLsizeiANDROID;
    typedef void (*EGLSetBlobFuncANDROID) (const void *key, EGLsizeiANDROID keySize, const void *value, EGLsizeiANDROID valueSize);
    typedef EGLsizeiANDROID (*EGLGetBlobFuncANDROID) (const void *key, EGLsizeiANDROID keySize, void *value, EGLsizeiANDROID valueSize);
    struct EGLClientPixmapHI { void *pData; EGLint iWidth; EGLint iHeight; EGLint iStride; };
    typedef void (HX_GL_APIENTRY *EGLDEBUGPROCKHR)(EGLenum error,const char *command,EGLint messageType,EGLLabelKHR threadLabel,EGLLabelKHR objectLabel,const char* message);
    #define PFNEGLBINDWAYLANDDISPLAYWL PFNEGLBINDWAYLANDDISPLAYWLPROC
    #define PFNEGLUNBINDWAYLANDDISPLAYWL PFNEGLUNBINDWAYLANDDISPLAYWLPROC
    #define PFNEGLQUERYWAYLANDBUFFERWL PFNEGLQUERYWAYLANDBUFFERWLPROC
    #define PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWL PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC

    inline constexpr unsigned int EGL_ALPHA_FORMAT = 0x3088;
    inline constexpr unsigned int EGL_ALPHA_FORMAT_NONPRE = 0x308B;
    inline constexpr unsigned int EGL_ALPHA_FORMAT_PRE = 0x308C;
    inline constexpr unsigned int EGL_ALPHA_MASK_SIZE = 0x303E;
    inline constexpr unsigned int EGL_ALPHA_SIZE = 0x3021;
    inline constexpr unsigned int EGL_BACK_BUFFER = 0x3084;
    inline constexpr unsigned int EGL_BAD_ACCESS = 0x3002;
    inline constexpr unsigned int EGL_BAD_ALLOC = 0x3003;
    inline constexpr unsigned int EGL_BAD_ATTRIBUTE = 0x3004;
    inline constexpr unsigned int EGL_BAD_CONFIG = 0x3005;
    inline constexpr unsigned int EGL_BAD_CONTEXT = 0x3006;
    inline constexpr unsigned int EGL_BAD_CURRENT_SURFACE = 0x3007;
    inline constexpr unsigned int EGL_BAD_DISPLAY = 0x3008;
    inline constexpr unsigned int EGL_BAD_MATCH = 0x3009;
    inline constexpr unsigned int EGL_BAD_NATIVE_PIXMAP = 0x300A;
    inline constexpr unsigned int EGL_BAD_NATIVE_WINDOW = 0x300B;
    inline constexpr unsigned int EGL_BAD_PARAMETER = 0x300C;
    inline constexpr unsigned int EGL_BAD_SURFACE = 0x300D;
    inline constexpr unsigned int EGL_BIND_TO_TEXTURE_RGB = 0x3039;
    inline constexpr unsigned int EGL_BIND_TO_TEXTURE_RGBA = 0x303A;
    inline constexpr unsigned int EGL_BLUE_SIZE = 0x3022;
    inline constexpr unsigned int EGL_BUFFER_DESTROYED = 0x3095;
    inline constexpr unsigned int EGL_BUFFER_PRESERVED = 0x3094;
    inline constexpr unsigned int EGL_BUFFER_SIZE = 0x3020;
    inline constexpr unsigned int EGL_CLIENT_APIS = 0x308D;
    inline constexpr unsigned int EGL_CL_EVENT_HANDLE = 0x309C;
    inline constexpr unsigned int EGL_COLORSPACE = 0x3087;
    inline constexpr unsigned int EGL_COLORSPACE_LINEAR = 0x308A;
    inline constexpr unsigned int EGL_COLORSPACE_sRGB = 0x3089;
    inline constexpr unsigned int EGL_COLOR_BUFFER_TYPE = 0x303F;
    inline constexpr unsigned int EGL_CONDITION_SATISFIED = 0x30F6;
    inline constexpr unsigned int EGL_CONFIG_CAVEAT = 0x3027;
    inline constexpr unsigned int EGL_CONFIG_ID = 0x3028;
    inline constexpr unsigned int EGL_CONFORMANT = 0x3042;
    inline constexpr unsigned int EGL_CONTEXT_CLIENT_TYPE = 0x3097;
    inline constexpr unsigned int EGL_CONTEXT_CLIENT_VERSION = 0x3098;
    inline constexpr unsigned int EGL_CONTEXT_FLAGS_KHR = 0x30FC;
    inline constexpr unsigned int EGL_CONTEXT_LOST = 0x300E;
    inline constexpr unsigned int EGL_CONTEXT_MAJOR_VERSION = 0x3098;
    inline constexpr unsigned int EGL_CONTEXT_MAJOR_VERSION_KHR = 0x3098;
    inline constexpr unsigned int EGL_CONTEXT_MINOR_VERSION = 0x30FB;
    inline constexpr unsigned int EGL_CONTEXT_MINOR_VERSION_KHR = 0x30FB;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT = 0x00000002u;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR = 0x00000002u;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT = 0x00000001u;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR = 0x00000001u;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_DEBUG = 0x31B0;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR = 0x00000001u;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE = 0x31B1;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR = 0x00000002u;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_PROFILE_MASK = 0x30FD;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR = 0x30FD;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY = 0x31BD;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR = 0x31BD;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_ROBUST_ACCESS = 0x31B2;
    inline constexpr unsigned int EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR = 0x00000004u;
    inline constexpr unsigned int EGL_CORE_NATIVE_ENGINE = 0x305B;
    inline const EGLNativeDisplayType EGL_DEFAULT_DISPLAY = (EGLNativeDisplayType)(0);
    inline constexpr unsigned int EGL_DEPTH_SIZE = 0x3025;
    inline constexpr unsigned int EGL_DISPLAY_SCALING = 10000;
    inline const EGLint EGL_DONT_CARE = (EGLint)(-1);
    inline constexpr unsigned int EGL_DRAW = 0x3059;
    inline constexpr unsigned int EGL_EXTENSIONS = 0x3055;
    inline constexpr unsigned int EGL_FALSE = 0;
    inline constexpr unsigned long long EGL_FOREVER = 0xFFFFFFFFFFFFFFFFull;
    inline constexpr unsigned int EGL_GL_COLORSPACE = 0x309D;
    inline constexpr unsigned int EGL_GL_COLORSPACE_KHR = 0x309D;
    inline constexpr unsigned int EGL_GL_COLORSPACE_LINEAR = 0x308A;
    inline constexpr unsigned int EGL_GL_COLORSPACE_LINEAR_KHR = 0x308A;
    inline constexpr unsigned int EGL_GL_COLORSPACE_SCRGB_LINEAR_EXT = 0x3350;
    inline constexpr unsigned int EGL_GL_COLORSPACE_SRGB = 0x3089;
    inline constexpr unsigned int EGL_GL_COLORSPACE_SRGB_KHR = 0x3089;
    inline constexpr unsigned int EGL_GL_RENDERBUFFER = 0x30B9;
    inline constexpr unsigned int EGL_GL_TEXTURE_2D = 0x30B1;
    inline constexpr unsigned int EGL_GL_TEXTURE_3D = 0x30B2;
    inline constexpr unsigned int EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x30B4;
    inline constexpr unsigned int EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x30B6;
    inline constexpr unsigned int EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x30B8;
    inline constexpr unsigned int EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x30B3;
    inline constexpr unsigned int EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x30B5;
    inline constexpr unsigned int EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x30B7;
    inline constexpr unsigned int EGL_GL_TEXTURE_LEVEL = 0x30BC;
    inline constexpr unsigned int EGL_GL_TEXTURE_ZOFFSET = 0x30BD;
    inline constexpr unsigned int EGL_GREEN_SIZE = 0x3023;
    inline constexpr unsigned int EGL_HEIGHT = 0x3056;
    inline constexpr unsigned int EGL_HORIZONTAL_RESOLUTION = 0x3090;
    inline constexpr unsigned int EGL_IMAGE_PRESERVED = 0x30D2;
    inline constexpr unsigned int EGL_LARGEST_PBUFFER = 0x3058;
    inline constexpr unsigned int EGL_LEVEL = 0x3029;
    inline constexpr unsigned int EGL_LOSE_CONTEXT_ON_RESET = 0x31BF;
    inline constexpr unsigned int EGL_LOSE_CONTEXT_ON_RESET_KHR = 0x31BF;
    inline constexpr unsigned int EGL_LUMINANCE_BUFFER = 0x308F;
    inline constexpr unsigned int EGL_LUMINANCE_SIZE = 0x303D;
    inline constexpr unsigned int EGL_MATCH_NATIVE_PIXMAP = 0x3041;
    inline constexpr unsigned int EGL_MAX_PBUFFER_HEIGHT = 0x302A;
    inline constexpr unsigned int EGL_MAX_PBUFFER_PIXELS = 0x302B;
    inline constexpr unsigned int EGL_MAX_PBUFFER_WIDTH = 0x302C;
    inline constexpr unsigned int EGL_MAX_SWAP_INTERVAL = 0x303C;
    inline constexpr unsigned int EGL_MIN_SWAP_INTERVAL = 0x303B;
    inline constexpr unsigned int EGL_MIPMAP_LEVEL = 0x3083;
    inline constexpr unsigned int EGL_MIPMAP_TEXTURE = 0x3082;
    inline constexpr unsigned int EGL_MULTISAMPLE_RESOLVE = 0x3099;
    inline constexpr unsigned int EGL_MULTISAMPLE_RESOLVE_BOX = 0x309B;
    inline constexpr unsigned int EGL_MULTISAMPLE_RESOLVE_BOX_BIT = 0x0200;
    inline constexpr unsigned int EGL_MULTISAMPLE_RESOLVE_DEFAULT = 0x309A;
    inline constexpr unsigned int EGL_NATIVE_RENDERABLE = 0x302D;
    inline constexpr unsigned int EGL_NATIVE_VISUAL_ID = 0x302E;
    inline constexpr unsigned int EGL_NATIVE_VISUAL_TYPE = 0x302F;
    inline constexpr unsigned int EGL_NONE = 0x3038;
    inline constexpr unsigned int EGL_NON_CONFORMANT_CONFIG = 0x3051;
    inline constexpr unsigned int EGL_NOT_INITIALIZED = 0x3001;
    inline const EGLConfig EGL_NO_CONFIG_KHR = (EGLConfig)(0);
    inline const EGLContext EGL_NO_CONTEXT = (EGLContext)(0);
    inline const EGLDisplay EGL_NO_DISPLAY = (EGLDisplay)(0);
    inline const EGLImage EGL_NO_IMAGE = (EGLImage)(0);
    inline constexpr unsigned int EGL_NO_RESET_NOTIFICATION = 0x31BE;
    inline constexpr unsigned int EGL_NO_RESET_NOTIFICATION_KHR = 0x31BE;
    inline const EGLSurface EGL_NO_SURFACE = (EGLSurface)(0);
    inline const EGLSync EGL_NO_SYNC = (EGLSync)(0);
    inline constexpr unsigned int EGL_NO_TEXTURE = 0x305C;
    inline constexpr unsigned int EGL_OPENGL_API = 0x30A2;
    inline constexpr unsigned int EGL_OPENGL_BIT = 0x0008;
    inline constexpr unsigned int EGL_OPENGL_ES2_BIT = 0x0004;
    inline constexpr unsigned int EGL_OPENGL_ES3_BIT = 0x00000040u;
    inline constexpr unsigned int EGL_OPENGL_ES3_BIT_KHR = 0x00000040u;
    inline constexpr unsigned int EGL_OPENGL_ES_API = 0x30A0;
    inline constexpr unsigned int EGL_OPENGL_ES_BIT = 0x0001;
    inline constexpr unsigned int EGL_OPENVG_API = 0x30A1;
    inline constexpr unsigned int EGL_OPENVG_BIT = 0x0002;
    inline constexpr unsigned int EGL_OPENVG_IMAGE = 0x3096;
    inline constexpr unsigned int EGL_PBUFFER_BIT = 0x0001;
    inline constexpr unsigned int EGL_PIXEL_ASPECT_RATIO = 0x3092;
    inline constexpr unsigned int EGL_PIXMAP_BIT = 0x0002;
    inline constexpr unsigned int EGL_PLATFORM_X11_EXT = 0x31D5;
    inline constexpr unsigned int EGL_PLATFORM_X11_KHR = 0x31D5;
    inline constexpr unsigned int EGL_PLATFORM_X11_SCREEN_EXT = 0x31D6;
    inline constexpr unsigned int EGL_PLATFORM_X11_SCREEN_KHR = 0x31D6;
    inline constexpr unsigned int EGL_READ = 0x305A;
    inline constexpr unsigned int EGL_RED_SIZE = 0x3024;
    inline constexpr unsigned int EGL_RENDERABLE_TYPE = 0x3040;
    inline constexpr unsigned int EGL_RENDER_BUFFER = 0x3086;
    inline constexpr unsigned int EGL_RGB_BUFFER = 0x308E;
    inline constexpr unsigned int EGL_SAMPLES = 0x3031;
    inline constexpr unsigned int EGL_SAMPLE_BUFFERS = 0x3032;
    inline constexpr unsigned int EGL_SIGNALED = 0x30F2;
    inline constexpr unsigned int EGL_SINGLE_BUFFER = 0x3085;
    inline constexpr unsigned int EGL_SLOW_CONFIG = 0x3050;
    inline constexpr unsigned int EGL_STENCIL_SIZE = 0x3026;
    inline constexpr unsigned int EGL_SUCCESS = 0x3000;
    inline constexpr unsigned int EGL_SURFACE_TYPE = 0x3033;
    inline constexpr unsigned int EGL_SWAP_BEHAVIOR = 0x3093;
    inline constexpr unsigned int EGL_SWAP_BEHAVIOR_PRESERVED_BIT = 0x0400;
    inline constexpr unsigned int EGL_SYNC_CL_EVENT = 0x30FE;
    inline constexpr unsigned int EGL_SYNC_CL_EVENT_COMPLETE = 0x30FF;
    inline constexpr unsigned int EGL_SYNC_CONDITION = 0x30F8;
    inline constexpr unsigned int EGL_SYNC_FENCE = 0x30F9;
    inline constexpr unsigned int EGL_SYNC_FLUSH_COMMANDS_BIT = 0x0001;
    inline constexpr unsigned int EGL_SYNC_PRIOR_COMMANDS_COMPLETE = 0x30F0;
    inline constexpr unsigned int EGL_SYNC_STATUS = 0x30F1;
    inline constexpr unsigned int EGL_SYNC_TYPE = 0x30F7;
    inline constexpr unsigned int EGL_TEXTURE_2D = 0x305F;
    inline constexpr unsigned int EGL_TEXTURE_FORMAT = 0x3080;
    inline constexpr unsigned int EGL_TEXTURE_RGB = 0x305D;
    inline constexpr unsigned int EGL_TEXTURE_RGBA = 0x305E;
    inline constexpr unsigned int EGL_TEXTURE_TARGET = 0x3081;
    inline constexpr unsigned int EGL_TIMEOUT_EXPIRED = 0x30F5;
    inline constexpr unsigned int EGL_TRANSPARENT_BLUE_VALUE = 0x3035;
    inline constexpr unsigned int EGL_TRANSPARENT_GREEN_VALUE = 0x3036;
    inline constexpr unsigned int EGL_TRANSPARENT_RED_VALUE = 0x3037;
    inline constexpr unsigned int EGL_TRANSPARENT_RGB = 0x3052;
    inline constexpr unsigned int EGL_TRANSPARENT_TYPE = 0x3034;
    inline constexpr unsigned int EGL_TRUE = 1;
    inline const EGLint EGL_UNKNOWN = (EGLint)(-1);
    inline constexpr unsigned int EGL_UNSIGNALED = 0x30F3;
    inline constexpr unsigned int EGL_VENDOR = 0x3053;
    inline constexpr unsigned int EGL_VERSION = 0x3054;
    inline constexpr unsigned int EGL_VERTICAL_RESOLUTION = 0x3091;
    inline constexpr unsigned int EGL_VG_ALPHA_FORMAT = 0x3088;
    inline constexpr unsigned int EGL_VG_ALPHA_FORMAT_NONPRE = 0x308B;
    inline constexpr unsigned int EGL_VG_ALPHA_FORMAT_PRE = 0x308C;
    inline constexpr unsigned int EGL_VG_ALPHA_FORMAT_PRE_BIT = 0x0040;
    inline constexpr unsigned int EGL_VG_COLORSPACE = 0x3087;
    inline constexpr unsigned int EGL_VG_COLORSPACE_LINEAR = 0x308A;
    inline constexpr unsigned int EGL_VG_COLORSPACE_LINEAR_BIT = 0x0020;
    inline constexpr unsigned int EGL_VG_COLORSPACE_sRGB = 0x3089;
    inline constexpr unsigned int EGL_WIDTH = 0x3057;
    inline constexpr unsigned int EGL_WINDOW_BIT = 0x0004;

    struct Api
    {
        EGLBoolean(HX_GL_APIENTRY* BindAPI)(EGLenum);
        EGLBoolean(HX_GL_APIENTRY* BindTexImage)(EGLDisplay, EGLSurface, EGLint);
        EGLBoolean(HX_GL_APIENTRY* ChooseConfig)(EGLDisplay, const EGLint *, EGLConfig *, EGLint, EGLint *);
        EGLint(HX_GL_APIENTRY* ClientWaitSync)(EGLDisplay, EGLSync, EGLint, EGLTime);
        EGLBoolean(HX_GL_APIENTRY* CopyBuffers)(EGLDisplay, EGLSurface, EGLNativePixmapType);
        EGLContext(HX_GL_APIENTRY* CreateContext)(EGLDisplay, EGLConfig, EGLContext, const EGLint *);
        EGLImage(HX_GL_APIENTRY* CreateImage)(EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLAttrib *);
        EGLSurface(HX_GL_APIENTRY* CreatePbufferFromClientBuffer)(EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, const EGLint *);
        EGLSurface(HX_GL_APIENTRY* CreatePbufferSurface)(EGLDisplay, EGLConfig, const EGLint *);
        EGLSurface(HX_GL_APIENTRY* CreatePixmapSurface)(EGLDisplay, EGLConfig, EGLNativePixmapType, const EGLint *);
        EGLSurface(HX_GL_APIENTRY* CreatePlatformPixmapSurface)(EGLDisplay, EGLConfig, void *, const EGLAttrib *);
        EGLSurface(HX_GL_APIENTRY* CreatePlatformPixmapSurfaceEXT)(EGLDisplay, EGLConfig, void *, const EGLint *);
        EGLSurface(HX_GL_APIENTRY* CreatePlatformWindowSurface)(EGLDisplay, EGLConfig, void *, const EGLAttrib *);
        EGLSurface(HX_GL_APIENTRY* CreatePlatformWindowSurfaceEXT)(EGLDisplay, EGLConfig, void *, const EGLint *);
        EGLSync(HX_GL_APIENTRY* CreateSync)(EGLDisplay, EGLenum, const EGLAttrib *);
        EGLSurface(HX_GL_APIENTRY* CreateWindowSurface)(EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint *);
        EGLBoolean(HX_GL_APIENTRY* DestroyContext)(EGLDisplay, EGLContext);
        EGLBoolean(HX_GL_APIENTRY* DestroyImage)(EGLDisplay, EGLImage);
        EGLBoolean(HX_GL_APIENTRY* DestroySurface)(EGLDisplay, EGLSurface);
        EGLBoolean(HX_GL_APIENTRY* DestroySync)(EGLDisplay, EGLSync);
        EGLBoolean(HX_GL_APIENTRY* GetConfigAttrib)(EGLDisplay, EGLConfig, EGLint, EGLint *);
        EGLBoolean(HX_GL_APIENTRY* GetConfigs)(EGLDisplay, EGLConfig *, EGLint, EGLint *);
        EGLContext(HX_GL_APIENTRY* GetCurrentContext)(void);
        EGLDisplay(HX_GL_APIENTRY* GetCurrentDisplay)(void);
        EGLSurface(HX_GL_APIENTRY* GetCurrentSurface)(EGLint);
        EGLDisplay(HX_GL_APIENTRY* GetDisplay)(EGLNativeDisplayType);
        EGLint(HX_GL_APIENTRY* GetError)(void);
        EGLDisplay(HX_GL_APIENTRY* GetPlatformDisplay)(EGLenum, void *, const EGLAttrib *);
        EGLDisplay(HX_GL_APIENTRY* GetPlatformDisplayEXT)(EGLenum, void *, const EGLint *);
        __eglMustCastToProperFunctionPointerType(HX_GL_APIENTRY* GetProcAddress)(const char *);
        EGLBoolean(HX_GL_APIENTRY* GetSyncAttrib)(EGLDisplay, EGLSync, EGLint, EGLAttrib *);
        EGLBoolean(HX_GL_APIENTRY* Initialize)(EGLDisplay, EGLint *, EGLint *);
        EGLBoolean(HX_GL_APIENTRY* MakeCurrent)(EGLDisplay, EGLSurface, EGLSurface, EGLContext);
        EGLBoolean(HX_GL_APIENTRY* PresentationTimeANDROID)(EGLDisplay, EGLSurface, EGLnsecsANDROID);
        EGLenum(HX_GL_APIENTRY* QueryAPI)(void);
        EGLBoolean(HX_GL_APIENTRY* QueryContext)(EGLDisplay, EGLContext, EGLint, EGLint *);
        const char *(HX_GL_APIENTRY* QueryString)(EGLDisplay, EGLint);
        EGLBoolean(HX_GL_APIENTRY* QuerySurface)(EGLDisplay, EGLSurface, EGLint, EGLint *);
        EGLBoolean(HX_GL_APIENTRY* ReleaseTexImage)(EGLDisplay, EGLSurface, EGLint);
        EGLBoolean(HX_GL_APIENTRY* ReleaseThread)(void);
        EGLBoolean(HX_GL_APIENTRY* SurfaceAttrib)(EGLDisplay, EGLSurface, EGLint, EGLint);
        EGLBoolean(HX_GL_APIENTRY* SwapBuffers)(EGLDisplay, EGLSurface);
        EGLBoolean(HX_GL_APIENTRY* SwapInterval)(EGLDisplay, EGLint);
        EGLBoolean(HX_GL_APIENTRY* Terminate)(EGLDisplay);
        EGLBoolean(HX_GL_APIENTRY* WaitClient)(void);
        EGLBoolean(HX_GL_APIENTRY* WaitGL)(void);
        EGLBoolean(HX_GL_APIENTRY* WaitNative)(EGLint);
        EGLBoolean(HX_GL_APIENTRY* WaitSync)(EGLDisplay, EGLSync, EGLint);
    };

    extern Api api;

    using GetProcAddressFunction = void* (*)(const char* name, void* user);

    int Load(GetProcAddressFunction getProcAddress, void* user);
    int CommandCount();

    inline EGLBoolean eglBindAPI(EGLenum a0) { return api.BindAPI(a0); }
    inline EGLBoolean eglBindTexImage(EGLDisplay a0, EGLSurface a1, EGLint a2) { return api.BindTexImage(a0, a1, a2); }
    inline EGLBoolean eglChooseConfig(EGLDisplay a0, const EGLint * a1, EGLConfig * a2, EGLint a3, EGLint * a4) { return api.ChooseConfig(a0, a1, a2, a3, a4); }
    inline EGLint eglClientWaitSync(EGLDisplay a0, EGLSync a1, EGLint a2, EGLTime a3) { return api.ClientWaitSync(a0, a1, a2, a3); }
    inline EGLBoolean eglCopyBuffers(EGLDisplay a0, EGLSurface a1, EGLNativePixmapType a2) { return api.CopyBuffers(a0, a1, a2); }
    inline EGLContext eglCreateContext(EGLDisplay a0, EGLConfig a1, EGLContext a2, const EGLint * a3) { return api.CreateContext(a0, a1, a2, a3); }
    inline EGLImage eglCreateImage(EGLDisplay a0, EGLContext a1, EGLenum a2, EGLClientBuffer a3, const EGLAttrib * a4) { return api.CreateImage(a0, a1, a2, a3, a4); }
    inline EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay a0, EGLenum a1, EGLClientBuffer a2, EGLConfig a3, const EGLint * a4) { return api.CreatePbufferFromClientBuffer(a0, a1, a2, a3, a4); }
    inline EGLSurface eglCreatePbufferSurface(EGLDisplay a0, EGLConfig a1, const EGLint * a2) { return api.CreatePbufferSurface(a0, a1, a2); }
    inline EGLSurface eglCreatePixmapSurface(EGLDisplay a0, EGLConfig a1, EGLNativePixmapType a2, const EGLint * a3) { return api.CreatePixmapSurface(a0, a1, a2, a3); }
    inline EGLSurface eglCreatePlatformPixmapSurface(EGLDisplay a0, EGLConfig a1, void * a2, const EGLAttrib * a3) { return api.CreatePlatformPixmapSurface(a0, a1, a2, a3); }
    inline EGLSurface eglCreatePlatformPixmapSurfaceEXT(EGLDisplay a0, EGLConfig a1, void * a2, const EGLint * a3) { return api.CreatePlatformPixmapSurfaceEXT(a0, a1, a2, a3); }
    inline EGLSurface eglCreatePlatformWindowSurface(EGLDisplay a0, EGLConfig a1, void * a2, const EGLAttrib * a3) { return api.CreatePlatformWindowSurface(a0, a1, a2, a3); }
    inline EGLSurface eglCreatePlatformWindowSurfaceEXT(EGLDisplay a0, EGLConfig a1, void * a2, const EGLint * a3) { return api.CreatePlatformWindowSurfaceEXT(a0, a1, a2, a3); }
    inline EGLSync eglCreateSync(EGLDisplay a0, EGLenum a1, const EGLAttrib * a2) { return api.CreateSync(a0, a1, a2); }
    inline EGLSurface eglCreateWindowSurface(EGLDisplay a0, EGLConfig a1, EGLNativeWindowType a2, const EGLint * a3) { return api.CreateWindowSurface(a0, a1, a2, a3); }
    inline EGLBoolean eglDestroyContext(EGLDisplay a0, EGLContext a1) { return api.DestroyContext(a0, a1); }
    inline EGLBoolean eglDestroyImage(EGLDisplay a0, EGLImage a1) { return api.DestroyImage(a0, a1); }
    inline EGLBoolean eglDestroySurface(EGLDisplay a0, EGLSurface a1) { return api.DestroySurface(a0, a1); }
    inline EGLBoolean eglDestroySync(EGLDisplay a0, EGLSync a1) { return api.DestroySync(a0, a1); }
    inline EGLBoolean eglGetConfigAttrib(EGLDisplay a0, EGLConfig a1, EGLint a2, EGLint * a3) { return api.GetConfigAttrib(a0, a1, a2, a3); }
    inline EGLBoolean eglGetConfigs(EGLDisplay a0, EGLConfig * a1, EGLint a2, EGLint * a3) { return api.GetConfigs(a0, a1, a2, a3); }
    inline EGLContext eglGetCurrentContext() { return api.GetCurrentContext(); }
    inline EGLDisplay eglGetCurrentDisplay() { return api.GetCurrentDisplay(); }
    inline EGLSurface eglGetCurrentSurface(EGLint a0) { return api.GetCurrentSurface(a0); }
    inline EGLDisplay eglGetDisplay(EGLNativeDisplayType a0) { return api.GetDisplay(a0); }
    inline EGLint eglGetError() { return api.GetError(); }
    inline EGLDisplay eglGetPlatformDisplay(EGLenum a0, void * a1, const EGLAttrib * a2) { return api.GetPlatformDisplay(a0, a1, a2); }
    inline EGLDisplay eglGetPlatformDisplayEXT(EGLenum a0, void * a1, const EGLint * a2) { return api.GetPlatformDisplayEXT(a0, a1, a2); }
    inline __eglMustCastToProperFunctionPointerType eglGetProcAddress(const char * a0) { return api.GetProcAddress(a0); }
    inline EGLBoolean eglGetSyncAttrib(EGLDisplay a0, EGLSync a1, EGLint a2, EGLAttrib * a3) { return api.GetSyncAttrib(a0, a1, a2, a3); }
    inline EGLBoolean eglInitialize(EGLDisplay a0, EGLint * a1, EGLint * a2) { return api.Initialize(a0, a1, a2); }
    inline EGLBoolean eglMakeCurrent(EGLDisplay a0, EGLSurface a1, EGLSurface a2, EGLContext a3) { return api.MakeCurrent(a0, a1, a2, a3); }
    inline EGLBoolean eglPresentationTimeANDROID(EGLDisplay a0, EGLSurface a1, EGLnsecsANDROID a2) { return api.PresentationTimeANDROID(a0, a1, a2); }
    inline EGLenum eglQueryAPI() { return api.QueryAPI(); }
    inline EGLBoolean eglQueryContext(EGLDisplay a0, EGLContext a1, EGLint a2, EGLint * a3) { return api.QueryContext(a0, a1, a2, a3); }
    inline const char * eglQueryString(EGLDisplay a0, EGLint a1) { return api.QueryString(a0, a1); }
    inline EGLBoolean eglQuerySurface(EGLDisplay a0, EGLSurface a1, EGLint a2, EGLint * a3) { return api.QuerySurface(a0, a1, a2, a3); }
    inline EGLBoolean eglReleaseTexImage(EGLDisplay a0, EGLSurface a1, EGLint a2) { return api.ReleaseTexImage(a0, a1, a2); }
    inline EGLBoolean eglReleaseThread() { return api.ReleaseThread(); }
    inline EGLBoolean eglSurfaceAttrib(EGLDisplay a0, EGLSurface a1, EGLint a2, EGLint a3) { return api.SurfaceAttrib(a0, a1, a2, a3); }
    inline EGLBoolean eglSwapBuffers(EGLDisplay a0, EGLSurface a1) { return api.SwapBuffers(a0, a1); }
    inline EGLBoolean eglSwapInterval(EGLDisplay a0, EGLint a1) { return api.SwapInterval(a0, a1); }
    inline EGLBoolean eglTerminate(EGLDisplay a0) { return api.Terminate(a0); }
    inline EGLBoolean eglWaitClient() { return api.WaitClient(); }
    inline EGLBoolean eglWaitGL() { return api.WaitGL(); }
    inline EGLBoolean eglWaitNative(EGLint a0) { return api.WaitNative(a0); }
    inline EGLBoolean eglWaitSync(EGLDisplay a0, EGLSync a1, EGLint a2) { return api.WaitSync(a0, a1, a2); }
}
