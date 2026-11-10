"""Generates the Helix.GL bindings from the Khronos XML registries.

Usage: python tools/generate.py <directory with gl.xml, egl.xml, wgl.xml>
The registries are read as specification data and are not part of this repository.
"""

import hashlib
import sys
import xml.etree.ElementTree as ET
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

GL_EXTENSIONS = [
    "GL_ARB_bindless_texture",
    "GL_ARB_buffer_storage",
    "GL_ARB_multi_draw_indirect",
    "GL_ARB_shader_draw_parameters",
    "GL_ARB_texture_filter_anisotropic",
    "GL_EXT_texture_filter_anisotropic",
    "GL_EXT_texture_compression_s3tc",
    "GL_EXT_texture_compression_bptc",
    "GL_KHR_texture_compression_astc_ldr",
    "GL_KHR_debug",
    "GL_EXT_buffer_storage",
    "GL_EXT_color_buffer_float",
    "GL_EXT_color_buffer_half_float",
    "GL_EXT_disjoint_timer_query",
    "GL_EXT_multi_draw_indirect",
    "GL_EXT_base_instance",
    "GL_EXT_draw_elements_base_vertex",
    "GL_EXT_clip_control",
    "GL_ARB_clip_control",
    "GL_OVR_multiview",
    "GL_OVR_multiview2",
    "GL_EXT_sRGB_write_control",
    "GL_NV_bindless_texture",
]

EGL_EXTENSIONS = [
    "EGL_KHR_create_context",
    "EGL_KHR_gl_colorspace",
    "EGL_EXT_platform_base",
    "EGL_KHR_platform_x11",
    "EGL_EXT_platform_x11",
    "EGL_ANDROID_presentation_time",
    "EGL_KHR_no_config_context",
    "EGL_KHR_surfaceless_context",
    "EGL_EXT_gl_colorspace_scrgb_linear",
]

WGL_EXTENSIONS = [
    "WGL_ARB_extensions_string",
    "WGL_EXT_extensions_string",
    "WGL_ARB_create_context",
    "WGL_ARB_create_context_profile",
    "WGL_ARB_create_context_robustness",
    "WGL_ARB_pixel_format",
    "WGL_ARB_multisample",
    "WGL_ARB_framebuffer_sRGB",
    "WGL_EXT_framebuffer_sRGB",
    "WGL_EXT_swap_control",
    "WGL_EXT_swap_control_tear",
    "WGL_ARB_pixel_format_float",
    "WGL_EXT_create_context_es2_profile",
]

KHR_TYPES = """using khronos_int8_t = std::int8_t;
    using khronos_uint8_t = std::uint8_t;
    using khronos_int16_t = std::int16_t;
    using khronos_uint16_t = std::uint16_t;
    using khronos_int32_t = std::int32_t;
    using khronos_uint32_t = std::uint32_t;
    using khronos_int64_t = std::int64_t;
    using khronos_uint64_t = std::uint64_t;
    using khronos_intptr_t = std::intptr_t;
    using khronos_uintptr_t = std::uintptr_t;
    using khronos_ssize_t = std::ptrdiff_t;
    using khronos_usize_t = std::size_t;
    using khronos_float_t = float;
    using khronos_utime_nanoseconds_t = std::uint64_t;
    using khronos_stime_nanoseconds_t = std::int64_t;"""

EGL_PRELUDE = """using EGLNativeDisplayType = void*;
    using EGLNativePixmapType = void*;
    using EGLNativeWindowType = void*;
    using NativeDisplayType = EGLNativeDisplayType;
    using NativePixmapType = EGLNativePixmapType;
    using NativeWindowType = EGLNativeWindowType;
    using EGLint = std::int32_t;"""

WGL_PRELUDE = """using BOOL = int;
    using BYTE = unsigned char;
    using WORD = unsigned short;
    using DWORD = std::uint32_t;
    using UINT = unsigned int;
    using INT = int;
    using INT32 = std::int32_t;
    using INT64 = std::int64_t;
    using FLOAT = float;
    using USHORT = unsigned short;
    using LONG = std::int32_t;
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
    using PFNWGLDUMMYPROC = void*;"""


def node_text(elem, apientry, skip_name=False):
    out = [elem.text or ""]
    for child in elem:
        if child.tag == "apientry":
            out.append(apientry)
        elif child.tag == "name" and skip_name:
            pass
        else:
            out.append(node_text(child, apientry))
        out.append(child.tail or "")
    return "".join(out)


def version_tuple(v):
    return tuple(int(x) for x in v.split("."))


class Registry:
    def __init__(self, path):
        self.root = ET.parse(path).getroot()
        self.commands = {}
        for c in self.root.find("commands"):
            proto = c.find("proto")
            name = proto.find("name").text
            params = []
            for p in c.findall("param"):
                params.append(" ".join(node_text(p, "", skip_name=True).split()))
            self.commands[name] = (" ".join(node_text(proto, "", skip_name=True).split()), params)
        self.enums = {}
        for group in self.root.findall("enums"):
            for e in group.findall("enum"):
                if e.get("api") not in (None, "gl", "gles2", "egl", "wgl"):
                    continue
                self.enums.setdefault(e.get("name"), (e.get("value"), e.get("type")))

    def select(self, features, extensions):
        commands, enums = {}, {}

        def take(block, api):
            if block.get("api") not in (None, api):
                return
            for e in block:
                if e.tag == "command":
                    commands[e.get("name")] = True
                elif e.tag == "enum":
                    enums[e.get("name")] = True

        for api, maximum, core in features:
            removed_c, removed_e = set(), set()
            for f in self.root.findall("feature"):
                if f.get("api") != api or version_tuple(f.get("number")) > version_tuple(maximum):
                    continue
                for r in f.findall("require"):
                    if r.get("profile") in (None, "core") or not core:
                        take(r, api)
                for r in f.findall("remove"):
                    if core and r.get("profile") in (None, "core"):
                        for e in r:
                            (removed_c if e.tag == "command" else removed_e).add(e.get("name"))
            for n in removed_c:
                commands.pop(n, None)
            for n in removed_e:
                enums.pop(n, None)
        wanted = set(extensions)
        for ext in self.root.find("extensions"):
            if ext.get("name") not in wanted:
                continue
            for r in ext.findall("require"):
                for api in ("gl", "gles2", "egl", "wgl"):
                    if r.get("api") in (None, api) and api in ext.get("supported", "").split("|"):
                        take(r, api)
                        break
        return sorted(commands), sorted(enums)

    def types(self, apientry, skip):
        out = []
        for t in self.root.find("types"):
            if t.get("api") not in (None, "gl"):
                continue
            name = t.get("name") or (t.find("name").text if t.find("name") is not None else "")
            if name in skip:
                continue
            text = node_text(t, apientry).strip()
            if not text or text.startswith("#include"):
                continue
            out.append(text)
        return out


def enum_line(name, value, kind, cast_types):
    if value is None:
        return None
    if "_CAST(" in value:
        inner = value[value.index("(") + 1 : value.rindex(")")]
        t, v = [x.strip() for x in inner.split(",", 1)]
        return f"    inline const {t} {name} = ({t})({v});"
    if value.startswith("(("):
        return f"    inline const auto {name} = {value};"
    if kind == "ull":
        return f"    inline constexpr unsigned long long {name} = {value}ull;"
    if value.startswith("-"):
        return f"    inline constexpr int {name} = {value};"
    if kind == "u" or value.startswith("0x") and len(value) > 9:
        return f"    inline constexpr unsigned int {name} = {value}u;"
    try:
        int(value, 0)
    except ValueError:
        return None
    return f"    inline constexpr unsigned int {name} = {value};"


def generate(registry, prefix, header_name, namespace, prelude, type_skip, features, extensions, out_header, out_source, export_names):
    commands, enums = registry.select(features, extensions)
    member = lambda n: n[len(prefix) :] if n.startswith(prefix) else n
    h = []
    h.append("#pragma once")
    h.append("")
    h.append("#include <cstddef>")
    h.append("#include <cstdint>")
    h.append("")
    h.append("#ifndef HX_GL_APIENTRY")
    h.append("#if defined(_WIN32)")
    h.append("#define HX_GL_APIENTRY __stdcall")
    h.append("#else")
    h.append("#define HX_GL_APIENTRY")
    h.append("#endif")
    h.append("#endif")
    h.append("")
    if header_name != "gl.h":
        h.append("#include <helix/gl/gl.h>")
        h.append("")
    h.append(f"namespace {namespace}")
    h.append("{")
    if prelude:
        h.append("    " + prelude)
        h.append("")
    for t in ([] if type_skip is None else registry.types("HX_GL_APIENTRY", type_skip)):
        if t.startswith("#ifdef __APPLE__"):
            t = t.split("#else", 1)[1].split("#endif", 1)[0]
        h.append("    " + " ".join(t.split()))
    h.append("")
    for e in enums:
        value, kind = registry.enums.get(e, (None, None))
        line = enum_line(e, value, kind, None)
        if line:
            h.append(line)
    h.append("")
    h.append("    struct Api")
    h.append("    {")
    for c in commands:
        ret, params = registry.commands[c]
        h.append(f"        {ret}(HX_GL_APIENTRY* {member(c)})({', '.join(params) if params else 'void'});")
    h.append("    };")
    h.append("")
    h.append("    extern Api api;")
    h.append("")
    h.append("    using GetProcAddressFunction = void* (*)(const char* name, void* user);")
    h.append("")
    h.append(f"    int Load(GetProcAddressFunction getProcAddress, void* user);")
    h.append(f"    int CommandCount();")
    h.append("")
    for c in commands:
        ret, params = registry.commands[c]
        args = ", ".join(f"{p} a{i}" for i, p in enumerate(params))
        call = ", ".join(f"a{i}" for i in range(len(params)))
        ret_kw = "" if ret == "void" else "return "
        h.append(f"    inline {ret} {c}({args}) {{ {ret_kw}api.{member(c)}({call}); }}")
    h.append("}")
    h.append("")
    s = []
    s.append(f"#include <helix/gl/{header_name}>")
    s.append("")
    s.append(f"namespace {namespace}")
    s.append("{")
    s.append("    Api api;")
    s.append("")
    s.append("    namespace")
    s.append("    {")
    s.append("        struct Entry")
    s.append("        {")
    s.append("            const char* name;")
    s.append("            std::size_t offset;")
    s.append("        };")
    s.append("")
    s.append("        constexpr Entry kEntries[] = {")
    for c in commands:
        s.append(f'            {{"{c}", offsetof(Api, {member(c)})}},')
    s.append("        };")
    s.append("    }")
    s.append("")
    s.append("    int CommandCount() { return int(sizeof(kEntries) / sizeof(kEntries[0])); }")
    s.append("")
    s.append("    int Load(GetProcAddressFunction getProcAddress, void* user)")
    s.append("    {")
    s.append("        int found = 0;")
    s.append("        for (const Entry& e : kEntries)")
    s.append("        {")
    s.append("            void* p = getProcAddress(e.name, user);")
    s.append("            *reinterpret_cast<void**>(reinterpret_cast<char*>(&api) + e.offset) = p;")
    s.append("            found += p ? 1 : 0;")
    s.append("        }")
    s.append("        return found;")
    s.append("    }")
    s.append("}")
    s.append("")
    out_header.write_text("\n".join(h), encoding="ascii", newline="\n")
    out_source.write_text("\n".join(s), encoding="ascii", newline="\n")
    print(f"{header_name}: {len(commands)} commands, {len(enums)} enums")


def main():
    src = Path(sys.argv[1])
    for f in ("gl.xml", "egl.xml", "wgl.xml"):
        print(f, hashlib.sha256((src / f).read_bytes()).hexdigest())
    inc = ROOT / "include" / "helix" / "gl"
    gen = ROOT / "src" / "generated"
    inc.mkdir(parents=True, exist_ok=True)
    gen.mkdir(parents=True, exist_ok=True)

    gl = Registry(src / "gl.xml")
    generate(gl, "gl", "gl.h", "helix::gl", KHR_TYPES, {"khrplatform"},
             [("gl", "4.6", True), ("gles2", "3.2", False)], GL_EXTENSIONS,
             inc / "gl.h", gen / "gl_load.cpp", None)

    egl = Registry(src / "egl.xml")
    generate(egl, "egl", "egl.h", "helix::gl::egl", EGL_PRELUDE, {"khrplatform", "eglplatform", "EGLint"},
             [("egl", "1.5", False)], EGL_EXTENSIONS, inc / "egl.h", gen / "egl_load.cpp", None)

    wgl = Registry(src / "wgl.xml")
    generate(wgl, "wgl", "wgl.h", "helix::gl::wgl", WGL_PRELUDE, None,
             [("wgl", "1.0", False)], WGL_EXTENSIONS, inc / "wgl.h", gen / "wgl_load.cpp", None)


if __name__ == "__main__":
    main()
