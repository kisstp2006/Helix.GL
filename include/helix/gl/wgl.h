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

namespace helix::gl::wgl
{
    using BOOL = int;
    using BYTE = unsigned char;
    using WORD = unsigned short;
    using DWORD = unsigned long;
    using UINT = unsigned int;
    using INT = int;
    using INT32 = std::int32_t;
    using INT64 = std::int64_t;
    using FLOAT = float;
    using USHORT = unsigned short;
    using LONG = long;
    using LPVOID = void*;
    using VOID = void;
    using HANDLE = void*;
    using LPCSTR = const char*;
    using PROC = void*;
    using CHAR = char;
    using HENHMETAFILE = void*;
    struct HDC__;
    struct HGLRC__;
    struct HPBUFFERARB__;
    struct HPBUFFEREXT__;
    struct HVIDEOOUTPUTDEVICENV__;
    struct HPVIDEODEV__;
    struct HGPUNV__;
    struct HVIDEOINPUTDEVICENV__;
    using HDC = HDC__*;
    using HGLRC = HGLRC__*;
    using HPBUFFERARB = HPBUFFERARB__*;
    using HPBUFFEREXT = HPBUFFEREXT__*;
    using HPVIDEODEV = HPVIDEODEV__*;
    using HGPUNV = HGPUNV__*;
    using HVIDEOOUTPUTDEVICENV = HVIDEOOUTPUTDEVICENV__*;
    using HVIDEOINPUTDEVICENV = HVIDEOINPUTDEVICENV__*;
    using HPGPUNV = HGPUNV*;
    struct COLORREF_ { DWORD value; };
    using COLORREF = DWORD;
    struct POINTFLOAT { FLOAT x; FLOAT y; };
    struct GLYPHMETRICSFLOAT { FLOAT gmfBlackBoxX; FLOAT gmfBlackBoxY; POINTFLOAT gmfptGlyphOrigin; FLOAT gmfCellIncX; FLOAT gmfCellIncY; };
    using LPGLYPHMETRICSFLOAT = GLYPHMETRICSFLOAT*;
    struct LAYERPLANEDESCRIPTOR { WORD nSize; WORD nVersion; DWORD dwFlags; BYTE iPixelType; BYTE cColorBits; BYTE cRedBits; BYTE cRedShift; BYTE cGreenBits; BYTE cGreenShift; BYTE cBlueBits; BYTE cBlueShift; BYTE cAlphaBits; BYTE cAlphaShift; BYTE cAccumBits; BYTE cAccumRedBits; BYTE cAccumGreenBits; BYTE cAccumBlueBits; BYTE cAccumAlphaBits; BYTE cDepthBits; BYTE cStencilBits; BYTE cAuxBuffers; BYTE iLayerPlane; BYTE bReserved; COLORREF crTransparent; };
    using LPLAYERPLANEDESCRIPTOR = LAYERPLANEDESCRIPTOR*;
    struct PIXELFORMATDESCRIPTOR { WORD nSize; WORD nVersion; DWORD dwFlags; BYTE iPixelType; BYTE cColorBits; BYTE cRedBits; BYTE cRedShift; BYTE cGreenBits; BYTE cGreenShift; BYTE cBlueBits; BYTE cBlueShift; BYTE cAlphaBits; BYTE cAlphaShift; BYTE cAccumBits; BYTE cAccumRedBits; BYTE cAccumGreenBits; BYTE cAccumBlueBits; BYTE cAccumAlphaBits; BYTE cDepthBits; BYTE cStencilBits; BYTE cAuxBuffers; BYTE iLayerType; BYTE bReserved; DWORD dwLayerMask; DWORD dwVisibleMask; DWORD dwDamageMask; };
    using LPPIXELFORMATDESCRIPTOR = PIXELFORMATDESCRIPTOR*;
    struct GPU_DEVICE { DWORD cb; char DeviceName[32]; char DeviceString[128]; DWORD Flags; struct { LONG left, top, right, bottom; } rcVirtualScreen; };
    using PGPU_DEVICE = GPU_DEVICE*;
    using LPRECT = void*;
    using PFNWGLDUMMYPROC = void*;


    inline constexpr unsigned int ERROR_INVALID_PROFILE_ARB = 0x2096;
    inline constexpr unsigned int ERROR_INVALID_VERSION_ARB = 0x2095;
    inline constexpr unsigned int WGL_ACCELERATION_ARB = 0x2003;
    inline constexpr unsigned int WGL_ACCUM_ALPHA_BITS_ARB = 0x2021;
    inline constexpr unsigned int WGL_ACCUM_BITS_ARB = 0x201D;
    inline constexpr unsigned int WGL_ACCUM_BLUE_BITS_ARB = 0x2020;
    inline constexpr unsigned int WGL_ACCUM_GREEN_BITS_ARB = 0x201F;
    inline constexpr unsigned int WGL_ACCUM_RED_BITS_ARB = 0x201E;
    inline constexpr unsigned int WGL_ALPHA_BITS_ARB = 0x201B;
    inline constexpr unsigned int WGL_ALPHA_SHIFT_ARB = 0x201C;
    inline constexpr unsigned int WGL_AUX_BUFFERS_ARB = 0x2024;
    inline constexpr unsigned int WGL_BLUE_BITS_ARB = 0x2019;
    inline constexpr unsigned int WGL_BLUE_SHIFT_ARB = 0x201A;
    inline constexpr unsigned int WGL_COLOR_BITS_ARB = 0x2014;
    inline constexpr unsigned int WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB = 0x00000002u;
    inline constexpr unsigned int WGL_CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001u;
    inline constexpr unsigned int WGL_CONTEXT_DEBUG_BIT_ARB = 0x00000001u;
    inline constexpr unsigned int WGL_CONTEXT_ES2_PROFILE_BIT_EXT = 0x00000004u;
    inline constexpr unsigned int WGL_CONTEXT_FLAGS_ARB = 0x2094;
    inline constexpr unsigned int WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB = 0x00000002u;
    inline constexpr unsigned int WGL_CONTEXT_LAYER_PLANE_ARB = 0x2093;
    inline constexpr unsigned int WGL_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
    inline constexpr unsigned int WGL_CONTEXT_MINOR_VERSION_ARB = 0x2092;
    inline constexpr unsigned int WGL_CONTEXT_PROFILE_MASK_ARB = 0x9126;
    inline constexpr unsigned int WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
    inline constexpr unsigned int WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB = 0x00000004u;
    inline constexpr unsigned int WGL_DEPTH_BITS_ARB = 0x2022;
    inline constexpr unsigned int WGL_DOUBLE_BUFFER_ARB = 0x2011;
    inline constexpr unsigned int WGL_DRAW_TO_BITMAP_ARB = 0x2002;
    inline constexpr unsigned int WGL_DRAW_TO_WINDOW_ARB = 0x2001;
    inline constexpr unsigned int WGL_FONT_LINES = 0;
    inline constexpr unsigned int WGL_FONT_POLYGONS = 1;
    inline constexpr unsigned int WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB = 0x20A9;
    inline constexpr unsigned int WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x20A9;
    inline constexpr unsigned int WGL_FULL_ACCELERATION_ARB = 0x2027;
    inline constexpr unsigned int WGL_GENERIC_ACCELERATION_ARB = 0x2026;
    inline constexpr unsigned int WGL_GREEN_BITS_ARB = 0x2017;
    inline constexpr unsigned int WGL_GREEN_SHIFT_ARB = 0x2018;
    inline constexpr unsigned int WGL_LOSE_CONTEXT_ON_RESET_ARB = 0x8252;
    inline constexpr unsigned int WGL_NEED_PALETTE_ARB = 0x2004;
    inline constexpr unsigned int WGL_NEED_SYSTEM_PALETTE_ARB = 0x2005;
    inline constexpr unsigned int WGL_NO_ACCELERATION_ARB = 0x2025;
    inline constexpr unsigned int WGL_NO_RESET_NOTIFICATION_ARB = 0x8261;
    inline constexpr unsigned int WGL_NUMBER_OVERLAYS_ARB = 0x2008;
    inline constexpr unsigned int WGL_NUMBER_PIXEL_FORMATS_ARB = 0x2000;
    inline constexpr unsigned int WGL_NUMBER_UNDERLAYS_ARB = 0x2009;
    inline constexpr unsigned int WGL_PIXEL_TYPE_ARB = 0x2013;
    inline constexpr unsigned int WGL_RED_BITS_ARB = 0x2015;
    inline constexpr unsigned int WGL_RED_SHIFT_ARB = 0x2016;
    inline constexpr unsigned int WGL_SAMPLES_ARB = 0x2042;
    inline constexpr unsigned int WGL_SAMPLE_BUFFERS_ARB = 0x2041;
    inline constexpr unsigned int WGL_SHARE_ACCUM_ARB = 0x200E;
    inline constexpr unsigned int WGL_SHARE_DEPTH_ARB = 0x200C;
    inline constexpr unsigned int WGL_SHARE_STENCIL_ARB = 0x200D;
    inline constexpr unsigned int WGL_STENCIL_BITS_ARB = 0x2023;
    inline constexpr unsigned int WGL_STEREO_ARB = 0x2012;
    inline constexpr unsigned int WGL_SUPPORT_GDI_ARB = 0x200F;
    inline constexpr unsigned int WGL_SUPPORT_OPENGL_ARB = 0x2010;
    inline constexpr unsigned int WGL_SWAP_COPY_ARB = 0x2029;
    inline constexpr unsigned int WGL_SWAP_EXCHANGE_ARB = 0x2028;
    inline constexpr unsigned int WGL_SWAP_LAYER_BUFFERS_ARB = 0x2006;
    inline constexpr unsigned int WGL_SWAP_MAIN_PLANE = 0x00000001u;
    inline constexpr unsigned int WGL_SWAP_METHOD_ARB = 0x2007;
    inline constexpr unsigned int WGL_SWAP_OVERLAY1 = 0x00000002u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY10 = 0x00000400u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY11 = 0x00000800u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY12 = 0x00001000u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY13 = 0x00002000u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY14 = 0x00004000u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY15 = 0x00008000u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY2 = 0x00000004u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY3 = 0x00000008u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY4 = 0x00000010u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY5 = 0x00000020u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY6 = 0x00000040u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY7 = 0x00000080u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY8 = 0x00000100u;
    inline constexpr unsigned int WGL_SWAP_OVERLAY9 = 0x00000200u;
    inline constexpr unsigned int WGL_SWAP_UNDEFINED_ARB = 0x202A;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY1 = 0x00010000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY10 = 0x02000000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY11 = 0x04000000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY12 = 0x08000000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY13 = 0x10000000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY14 = 0x20000000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY15 = 0x40000000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY2 = 0x00020000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY3 = 0x00040000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY4 = 0x00080000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY5 = 0x00100000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY6 = 0x00200000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY7 = 0x00400000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY8 = 0x00800000u;
    inline constexpr unsigned int WGL_SWAP_UNDERLAY9 = 0x01000000u;
    inline constexpr unsigned int WGL_TRANSPARENT_ALPHA_VALUE_ARB = 0x203A;
    inline constexpr unsigned int WGL_TRANSPARENT_ARB = 0x200A;
    inline constexpr unsigned int WGL_TRANSPARENT_BLUE_VALUE_ARB = 0x2039;
    inline constexpr unsigned int WGL_TRANSPARENT_GREEN_VALUE_ARB = 0x2038;
    inline constexpr unsigned int WGL_TRANSPARENT_INDEX_VALUE_ARB = 0x203B;
    inline constexpr unsigned int WGL_TRANSPARENT_RED_VALUE_ARB = 0x2037;
    inline constexpr unsigned int WGL_TYPE_COLORINDEX_ARB = 0x202C;
    inline constexpr unsigned int WGL_TYPE_RGBA_ARB = 0x202B;
    inline constexpr unsigned int WGL_TYPE_RGBA_FLOAT_ARB = 0x21A0;

    struct Api
    {
        int(HX_GL_APIENTRY* ChoosePixelFormat)(HDC, const PIXELFORMATDESCRIPTOR *);
        int(HX_GL_APIENTRY* DescribePixelFormat)(HDC, int, UINT, PIXELFORMATDESCRIPTOR *);
        UINT(HX_GL_APIENTRY* GetEnhMetaFilePixelFormat)(HENHMETAFILE, UINT, PIXELFORMATDESCRIPTOR *);
        int(HX_GL_APIENTRY* GetPixelFormat)(HDC);
        BOOL(HX_GL_APIENTRY* SetPixelFormat)(HDC, int, const PIXELFORMATDESCRIPTOR *);
        BOOL(HX_GL_APIENTRY* SwapBuffers)(HDC);
        BOOL(HX_GL_APIENTRY* ChoosePixelFormatARB)(HDC, const int *, const FLOAT *, UINT, int *, UINT *);
        BOOL(HX_GL_APIENTRY* CopyContext)(HGLRC, HGLRC, UINT);
        HGLRC(HX_GL_APIENTRY* CreateContext)(HDC);
        HGLRC(HX_GL_APIENTRY* CreateContextAttribsARB)(HDC, HGLRC, const int *);
        HGLRC(HX_GL_APIENTRY* CreateLayerContext)(HDC, int);
        BOOL(HX_GL_APIENTRY* DeleteContext)(HGLRC);
        BOOL(HX_GL_APIENTRY* DescribeLayerPlane)(HDC, int, int, UINT, LAYERPLANEDESCRIPTOR *);
        HGLRC(HX_GL_APIENTRY* GetCurrentContext)(void);
        HDC(HX_GL_APIENTRY* GetCurrentDC)(void);
        const char *(HX_GL_APIENTRY* GetExtensionsStringARB)(HDC);
        const char *(HX_GL_APIENTRY* GetExtensionsStringEXT)(void);
        int(HX_GL_APIENTRY* GetLayerPaletteEntries)(HDC, int, int, int, COLORREF *);
        BOOL(HX_GL_APIENTRY* GetPixelFormatAttribfvARB)(HDC, int, int, UINT, const int *, FLOAT *);
        BOOL(HX_GL_APIENTRY* GetPixelFormatAttribivARB)(HDC, int, int, UINT, const int *, int *);
        PROC(HX_GL_APIENTRY* GetProcAddress)(LPCSTR);
        int(HX_GL_APIENTRY* GetSwapIntervalEXT)(void);
        BOOL(HX_GL_APIENTRY* MakeCurrent)(HDC, HGLRC);
        BOOL(HX_GL_APIENTRY* RealizeLayerPalette)(HDC, int, BOOL);
        int(HX_GL_APIENTRY* SetLayerPaletteEntries)(HDC, int, int, int, const COLORREF *);
        BOOL(HX_GL_APIENTRY* ShareLists)(HGLRC, HGLRC);
        BOOL(HX_GL_APIENTRY* SwapIntervalEXT)(int);
        BOOL(HX_GL_APIENTRY* SwapLayerBuffers)(HDC, UINT);
        BOOL(HX_GL_APIENTRY* UseFontBitmaps)(HDC, DWORD, DWORD, DWORD);
        BOOL(HX_GL_APIENTRY* UseFontBitmapsA)(HDC, DWORD, DWORD, DWORD);
        BOOL(HX_GL_APIENTRY* UseFontBitmapsW)(HDC, DWORD, DWORD, DWORD);
        BOOL(HX_GL_APIENTRY* UseFontOutlines)(HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT);
        BOOL(HX_GL_APIENTRY* UseFontOutlinesA)(HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT);
        BOOL(HX_GL_APIENTRY* UseFontOutlinesW)(HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT);
    };

    extern Api api;

    using GetProcAddressFunction = void* (*)(const char* name, void* user);

    int Load(GetProcAddressFunction getProcAddress, void* user);
    int CommandCount();

    inline int ChoosePixelFormat(HDC a0, const PIXELFORMATDESCRIPTOR * a1) { return api.ChoosePixelFormat(a0, a1); }
    inline int DescribePixelFormat(HDC a0, int a1, UINT a2, PIXELFORMATDESCRIPTOR * a3) { return api.DescribePixelFormat(a0, a1, a2, a3); }
    inline UINT GetEnhMetaFilePixelFormat(HENHMETAFILE a0, UINT a1, PIXELFORMATDESCRIPTOR * a2) { return api.GetEnhMetaFilePixelFormat(a0, a1, a2); }
    inline int GetPixelFormat(HDC a0) { return api.GetPixelFormat(a0); }
    inline BOOL SetPixelFormat(HDC a0, int a1, const PIXELFORMATDESCRIPTOR * a2) { return api.SetPixelFormat(a0, a1, a2); }
    inline BOOL SwapBuffers(HDC a0) { return api.SwapBuffers(a0); }
    inline BOOL wglChoosePixelFormatARB(HDC a0, const int * a1, const FLOAT * a2, UINT a3, int * a4, UINT * a5) { return api.ChoosePixelFormatARB(a0, a1, a2, a3, a4, a5); }
    inline BOOL wglCopyContext(HGLRC a0, HGLRC a1, UINT a2) { return api.CopyContext(a0, a1, a2); }
    inline HGLRC wglCreateContext(HDC a0) { return api.CreateContext(a0); }
    inline HGLRC wglCreateContextAttribsARB(HDC a0, HGLRC a1, const int * a2) { return api.CreateContextAttribsARB(a0, a1, a2); }
    inline HGLRC wglCreateLayerContext(HDC a0, int a1) { return api.CreateLayerContext(a0, a1); }
    inline BOOL wglDeleteContext(HGLRC a0) { return api.DeleteContext(a0); }
    inline BOOL wglDescribeLayerPlane(HDC a0, int a1, int a2, UINT a3, LAYERPLANEDESCRIPTOR * a4) { return api.DescribeLayerPlane(a0, a1, a2, a3, a4); }
    inline HGLRC wglGetCurrentContext() { return api.GetCurrentContext(); }
    inline HDC wglGetCurrentDC() { return api.GetCurrentDC(); }
    inline const char * wglGetExtensionsStringARB(HDC a0) { return api.GetExtensionsStringARB(a0); }
    inline const char * wglGetExtensionsStringEXT() { return api.GetExtensionsStringEXT(); }
    inline int wglGetLayerPaletteEntries(HDC a0, int a1, int a2, int a3, COLORREF * a4) { return api.GetLayerPaletteEntries(a0, a1, a2, a3, a4); }
    inline BOOL wglGetPixelFormatAttribfvARB(HDC a0, int a1, int a2, UINT a3, const int * a4, FLOAT * a5) { return api.GetPixelFormatAttribfvARB(a0, a1, a2, a3, a4, a5); }
    inline BOOL wglGetPixelFormatAttribivARB(HDC a0, int a1, int a2, UINT a3, const int * a4, int * a5) { return api.GetPixelFormatAttribivARB(a0, a1, a2, a3, a4, a5); }
    inline PROC wglGetProcAddress(LPCSTR a0) { return api.GetProcAddress(a0); }
    inline int wglGetSwapIntervalEXT() { return api.GetSwapIntervalEXT(); }
    inline BOOL wglMakeCurrent(HDC a0, HGLRC a1) { return api.MakeCurrent(a0, a1); }
    inline BOOL wglRealizeLayerPalette(HDC a0, int a1, BOOL a2) { return api.RealizeLayerPalette(a0, a1, a2); }
    inline int wglSetLayerPaletteEntries(HDC a0, int a1, int a2, int a3, const COLORREF * a4) { return api.SetLayerPaletteEntries(a0, a1, a2, a3, a4); }
    inline BOOL wglShareLists(HGLRC a0, HGLRC a1) { return api.ShareLists(a0, a1); }
    inline BOOL wglSwapIntervalEXT(int a0) { return api.SwapIntervalEXT(a0); }
    inline BOOL wglSwapLayerBuffers(HDC a0, UINT a1) { return api.SwapLayerBuffers(a0, a1); }
    inline BOOL wglUseFontBitmaps(HDC a0, DWORD a1, DWORD a2, DWORD a3) { return api.UseFontBitmaps(a0, a1, a2, a3); }
    inline BOOL wglUseFontBitmapsA(HDC a0, DWORD a1, DWORD a2, DWORD a3) { return api.UseFontBitmapsA(a0, a1, a2, a3); }
    inline BOOL wglUseFontBitmapsW(HDC a0, DWORD a1, DWORD a2, DWORD a3) { return api.UseFontBitmapsW(a0, a1, a2, a3); }
    inline BOOL wglUseFontOutlines(HDC a0, DWORD a1, DWORD a2, DWORD a3, FLOAT a4, FLOAT a5, int a6, LPGLYPHMETRICSFLOAT a7) { return api.UseFontOutlines(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline BOOL wglUseFontOutlinesA(HDC a0, DWORD a1, DWORD a2, DWORD a3, FLOAT a4, FLOAT a5, int a6, LPGLYPHMETRICSFLOAT a7) { return api.UseFontOutlinesA(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline BOOL wglUseFontOutlinesW(HDC a0, DWORD a1, DWORD a2, DWORD a3, FLOAT a4, FLOAT a5, int a6, LPGLYPHMETRICSFLOAT a7) { return api.UseFontOutlinesW(a0, a1, a2, a3, a4, a5, a6, a7); }
}
