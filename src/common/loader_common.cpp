#include <helix/gl/loader.h>

#include <cstring>

namespace helix::gl
{
    int LoadWithCurrentContext() { return Load(&GetSystemProcAddress, nullptr); }

    bool HasExtension(const char* name)
    {
        if (!api.GetIntegerv || !api.GetStringi)
            return false;
        GLint count = 0;
        glGetIntegerv(GL_NUM_EXTENSIONS, &count);
        for (GLint i = 0; i < count; i++)
        {
            const char* e = reinterpret_cast<const char*>(glGetStringi(GL_EXTENSIONS, GLuint(i)));
            if (e && std::strcmp(e, name) == 0)
                return true;
        }
        return false;
    }

    void GetVersion(int& major, int& minor, bool& es)
    {
        major = minor = 0;
        es = false;
        if (!api.GetString)
            return;
        const char* v = reinterpret_cast<const char*>(glGetString(GL_VERSION));
        if (!v)
            return;
        if (std::strncmp(v, "OpenGL ES ", 10) == 0)
        {
            es = true;
            v += 10;
        }
        while (*v && (*v < '0' || *v > '9'))
            v++;
        while (*v >= '0' && *v <= '9')
            major = major * 10 + (*v++ - '0');
        if (*v == '.')
            v++;
        while (*v >= '0' && *v <= '9')
            minor = minor * 10 + (*v++ - '0');
    }
}
