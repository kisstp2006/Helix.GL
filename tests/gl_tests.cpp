#include <helix/gl/egl.h>
#include <helix/gl/loader.h>
#include <helix/gl/wgl.h>
#include <helix/testing/test.h>

#include <cstdio>

#if defined(_WIN32)
#include <windows.h>
#endif

using namespace helix::gl;

HX_TEST(GLBindings, EnumValues)
{
    HX_CHECK_EQ(GL_TEXTURE_2D, 0x0DE1u);
    HX_CHECK_EQ(GL_COLOR_BUFFER_BIT, 0x4000u);
    HX_CHECK_EQ(GL_RGBA8, 0x8058u);
    HX_CHECK_EQ(GL_TIMEOUT_IGNORED, 0xFFFFFFFFFFFFFFFFull);
    HX_CHECK_EQ(GL_INVALID_INDEX, 0xFFFFFFFFu);
    HX_CHECK_EQ(GL_COMPUTE_SHADER, 0x91B9u);
    HX_CHECK_EQ(GL_COMPRESSED_RGBA_ASTC_4x4_KHR, 0x93B0u);
    HX_CHECK_EQ(GL_COMPRESSED_RGBA_S3TC_DXT5_EXT, 0x83F3u);
    HX_CHECK_EQ(egl::EGL_OPENGL_ES3_BIT, 0x40u);
    HX_CHECK(egl::EGL_NO_CONTEXT == nullptr);
    HX_CHECK_EQ(wgl::WGL_CONTEXT_MAJOR_VERSION_ARB, 0x2091u);
    HX_CHECK_EQ(sizeof(wgl::PIXELFORMATDESCRIPTOR), 40u);
}

HX_TEST(GLBindings, CommandTables)
{
    HX_CHECK(CommandCount() > 700);
    HX_CHECK(egl::CommandCount() > 40);
    HX_CHECK(wgl::CommandCount() > 30);
}

#if defined(_WIN32)
HX_TEST(GLBindings, LoadsThroughWgl)
{
    HX_REQUIRE(LoadWindowSystem() > 0);
    HX_REQUIRE(wgl::api.CreateContext && wgl::api.MakeCurrent && wgl::api.ChoosePixelFormat);
    WNDCLASSW wc{};
    wc.lpfnWndProc = DefWindowProcW;
    wc.hInstance = GetModuleHandleW(nullptr);
    wc.lpszClassName = L"HelixGLTest";
    RegisterClassW(&wc);
    HWND hwnd = CreateWindowExW(0, wc.lpszClassName, L"", WS_OVERLAPPEDWINDOW, 0, 0, 64, 64, nullptr, nullptr, wc.hInstance, nullptr);
    HX_REQUIRE(hwnd != nullptr);
    auto hdc = reinterpret_cast<wgl::HDC>(GetDC(hwnd));
    wgl::PIXELFORMATDESCRIPTOR pfd{};
    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = 0x4 | 0x20 | 0x1;
    pfd.cColorBits = 32;
    pfd.cDepthBits = 24;
    int format = wgl::ChoosePixelFormat(hdc, &pfd);
    HX_REQUIRE(format > 0);
    HX_REQUIRE(wgl::SetPixelFormat(hdc, format, &pfd));
    wgl::HGLRC legacy = wgl::wglCreateContext(hdc);
    HX_REQUIRE(legacy != nullptr);
    HX_REQUIRE(wgl::wglMakeCurrent(hdc, legacy));
    wgl::Load(&GetSystemProcAddress, nullptr);
    if (wgl::api.CreateContextAttribsARB)
    {
        const int attribs[] = {int(wgl::WGL_CONTEXT_MAJOR_VERSION_ARB), 4, int(wgl::WGL_CONTEXT_MINOR_VERSION_ARB), 5,
                               int(wgl::WGL_CONTEXT_PROFILE_MASK_ARB), int(wgl::WGL_CONTEXT_CORE_PROFILE_BIT_ARB), 0};
        wgl::HGLRC core = wgl::wglCreateContextAttribsARB(hdc, nullptr, attribs);
        if (core)
        {
            wgl::wglMakeCurrent(hdc, core);
            wgl::wglDeleteContext(legacy);
            legacy = core;
        }
    }
    int loaded = LoadWithCurrentContext();
    int major, minor;
    bool es;
    GetVersion(major, minor, es);
    std::printf("    %s | %s | %d.%d, %d entry points\n", reinterpret_cast<const char*>(glGetString(GL_RENDERER)),
                reinterpret_cast<const char*>(glGetString(GL_VERSION)), major, minor, loaded);
    HX_CHECK(loaded > 300);
    HX_CHECK(major >= 3);
    glClearColor(0.0f, 0.5f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    HX_CHECK_EQ(glGetError(), GLenum(GL_NO_ERROR));
    if (major > 4 || (major == 4 && minor >= 5))
    {
        GLuint buffer = 0;
        glCreateBuffers(1, &buffer);
        glNamedBufferStorage(buffer, 256, nullptr, GL_DYNAMIC_STORAGE_BIT);
        HX_CHECK(buffer != 0);
        glDeleteBuffers(1, &buffer);
        HX_CHECK_EQ(glGetError(), GLenum(GL_NO_ERROR));
    }
    std::printf("    ARB_bindless_texture: %s\n", HasExtension("GL_ARB_bindless_texture") ? "yes" : "no");
    wgl::wglMakeCurrent(nullptr, nullptr);
    wgl::wglDeleteContext(legacy);
    ReleaseDC(hwnd, reinterpret_cast<HDC>(hdc));
    DestroyWindow(hwnd);
}
#endif

#if defined(__linux__) && !defined(__ANDROID__)
HX_TEST(GLBindings, LoadsThroughEgl)
{
    if (LoadWindowSystem() == 0)
    {
        std::printf("    EGL not available, skipped\n");
        return;
    }
    egl::EGLDisplay display = egl::eglGetDisplay(egl::EGL_DEFAULT_DISPLAY);
    egl::EGLint major = 0, minor = 0;
    if (!display || !egl::eglInitialize(display, &major, &minor))
    {
        std::printf("    no EGL display, skipped\n");
        return;
    }
    const egl::EGLint configAttribs[] = {egl::EGL_SURFACE_TYPE, egl::EGL_PBUFFER_BIT, egl::EGL_RENDERABLE_TYPE, egl::EGL_OPENGL_BIT,
                                         egl::EGL_RED_SIZE, 8, egl::EGL_GREEN_SIZE, 8, egl::EGL_BLUE_SIZE, 8, egl::EGL_NONE};
    egl::EGLConfig config = nullptr;
    egl::EGLint count = 0;
    HX_REQUIRE(egl::eglChooseConfig(display, configAttribs, &config, 1, &count) && count > 0);
    const egl::EGLint surfaceAttribs[] = {egl::EGL_WIDTH, 16, egl::EGL_HEIGHT, 16, egl::EGL_NONE};
    egl::EGLSurface surface = egl::eglCreatePbufferSurface(display, config, surfaceAttribs);
    HX_REQUIRE(egl::eglBindAPI(egl::EGL_OPENGL_API));
    const egl::EGLint contextAttribs[] = {egl::EGL_CONTEXT_MAJOR_VERSION, 3, egl::EGL_CONTEXT_MINOR_VERSION, 3,
                                          egl::EGL_CONTEXT_OPENGL_PROFILE_MASK, egl::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT, egl::EGL_NONE};
    egl::EGLContext context = egl::eglCreateContext(display, config, egl::EGL_NO_CONTEXT, contextAttribs);
    HX_REQUIRE(context != egl::EGL_NO_CONTEXT);
    HX_REQUIRE(egl::eglMakeCurrent(display, surface, surface, context));
    int loaded = LoadWithCurrentContext();
    int glMajor, glMinor;
    bool es;
    GetVersion(glMajor, glMinor, es);
    std::printf("    EGL %d.%d | %s | GL %d.%d, %d entry points\n", major, minor, reinterpret_cast<const char*>(glGetString(GL_RENDERER)),
                glMajor, glMinor, loaded);
    HX_CHECK(glMajor >= 3);
    glClear(GL_COLOR_BUFFER_BIT);
    HX_CHECK_EQ(glGetError(), GLenum(GL_NO_ERROR));
    egl::eglMakeCurrent(display, egl::EGL_NO_SURFACE, egl::EGL_NO_SURFACE, egl::EGL_NO_CONTEXT);
    egl::eglDestroyContext(display, context);
    egl::eglDestroySurface(display, surface);
    egl::eglTerminate(display);
}
#endif
