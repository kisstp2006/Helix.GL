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

namespace helix::gl
{
    using khronos_int8_t = std::int8_t;
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
    using khronos_stime_nanoseconds_t = std::int64_t;

    typedef unsigned int GLenum;
    typedef unsigned char GLboolean;
    typedef unsigned int GLbitfield;
    typedef void GLvoid;
    typedef khronos_int8_t GLbyte;
    typedef khronos_uint8_t GLubyte;
    typedef khronos_int16_t GLshort;
    typedef khronos_uint16_t GLushort;
    typedef int GLint;
    typedef unsigned int GLuint;
    typedef khronos_int32_t GLclampx;
    typedef int GLsizei;
    typedef khronos_float_t GLfloat;
    typedef khronos_float_t GLclampf;
    typedef double GLdouble;
    typedef double GLclampd;
    typedef void *GLeglClientBufferEXT;
    typedef void *GLeglImageOES;
    typedef char GLchar;
    typedef char GLcharARB;
    typedef unsigned int GLhandleARB;
    typedef khronos_uint16_t GLhalf;
    typedef khronos_uint16_t GLhalfARB;
    typedef khronos_int32_t GLfixed;
    typedef khronos_intptr_t GLintptr;
    typedef khronos_intptr_t GLintptrARB;
    typedef khronos_ssize_t GLsizeiptr;
    typedef khronos_ssize_t GLsizeiptrARB;
    typedef khronos_int64_t GLint64;
    typedef khronos_int64_t GLint64EXT;
    typedef khronos_uint64_t GLuint64;
    typedef khronos_uint64_t GLuint64EXT;
    typedef struct __GLsync *GLsync;
    struct _cl_context;
    struct _cl_event;
    typedef void (HX_GL_APIENTRY *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
    typedef void (HX_GL_APIENTRY *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
    typedef void (HX_GL_APIENTRY *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
    typedef void (HX_GL_APIENTRY *GLDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
    typedef unsigned short GLhalfNV;
    typedef GLintptr GLvdpauSurfaceNV;
    typedef void (HX_GL_APIENTRY *GLVULKANPROCNV)(void);

    inline constexpr unsigned int GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9;
    inline constexpr unsigned int GL_ACTIVE_ATTRIBUTES = 0x8B89;
    inline constexpr unsigned int GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A;
    inline constexpr unsigned int GL_ACTIVE_PROGRAM = 0x8259;
    inline constexpr unsigned int GL_ACTIVE_RESOURCES = 0x92F5;
    inline constexpr unsigned int GL_ACTIVE_SUBROUTINES = 0x8DE5;
    inline constexpr unsigned int GL_ACTIVE_SUBROUTINE_MAX_LENGTH = 0x8E48;
    inline constexpr unsigned int GL_ACTIVE_SUBROUTINE_UNIFORMS = 0x8DE6;
    inline constexpr unsigned int GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = 0x8E47;
    inline constexpr unsigned int GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = 0x8E49;
    inline constexpr unsigned int GL_ACTIVE_TEXTURE = 0x84E0;
    inline constexpr unsigned int GL_ACTIVE_UNIFORMS = 0x8B86;
    inline constexpr unsigned int GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36;
    inline constexpr unsigned int GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35;
    inline constexpr unsigned int GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87;
    inline constexpr unsigned int GL_ACTIVE_VARIABLES = 0x9305;
    inline constexpr unsigned int GL_ALIASED_LINE_WIDTH_RANGE = 0x846E;
    inline constexpr unsigned int GL_ALIASED_POINT_SIZE_RANGE = 0x846D;
    inline constexpr unsigned int GL_ALL_BARRIER_BITS = 0xFFFFFFFFu;
    inline constexpr unsigned int GL_ALL_SHADER_BITS = 0xFFFFFFFFu;
    inline constexpr unsigned int GL_ALPHA = 0x1906;
    inline constexpr unsigned int GL_ALPHA_BITS = 0x0D55;
    inline constexpr unsigned int GL_ALREADY_SIGNALED = 0x911A;
    inline constexpr unsigned int GL_ALWAYS = 0x0207;
    inline constexpr unsigned int GL_AND = 0x1501;
    inline constexpr unsigned int GL_AND_INVERTED = 0x1504;
    inline constexpr unsigned int GL_AND_REVERSE = 0x1502;
    inline constexpr unsigned int GL_ANY_SAMPLES_PASSED = 0x8C2F;
    inline constexpr unsigned int GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A;
    inline constexpr unsigned int GL_ARRAY_BUFFER = 0x8892;
    inline constexpr unsigned int GL_ARRAY_BUFFER_BINDING = 0x8894;
    inline constexpr unsigned int GL_ARRAY_SIZE = 0x92FB;
    inline constexpr unsigned int GL_ARRAY_STRIDE = 0x92FE;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000u;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER = 0x92C0;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = 0x92C5;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = 0x92C6;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE = 0x92C4;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_INDEX = 0x9301;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = 0x90ED;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = 0x92CB;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = 0x92CA;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = 0x92C8;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x92C9;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = 0x92C7;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3;
    inline constexpr unsigned int GL_ATOMIC_COUNTER_BUFFER_START = 0x92C2;
    inline constexpr unsigned int GL_ATTACHED_SHADERS = 0x8B85;
    inline constexpr unsigned int GL_AUTO_GENERATE_MIPMAP = 0x8295;
    inline constexpr unsigned int GL_BACK = 0x0405;
    inline constexpr unsigned int GL_BACK_LEFT = 0x0402;
    inline constexpr unsigned int GL_BACK_RIGHT = 0x0403;
    inline constexpr unsigned int GL_BGR = 0x80E0;
    inline constexpr unsigned int GL_BGRA = 0x80E1;
    inline constexpr unsigned int GL_BGRA_INTEGER = 0x8D9B;
    inline constexpr unsigned int GL_BGR_INTEGER = 0x8D9A;
    inline constexpr unsigned int GL_BLEND = 0x0BE2;
    inline constexpr unsigned int GL_BLEND_COLOR = 0x8005;
    inline constexpr unsigned int GL_BLEND_DST = 0x0BE0;
    inline constexpr unsigned int GL_BLEND_DST_ALPHA = 0x80CA;
    inline constexpr unsigned int GL_BLEND_DST_RGB = 0x80C8;
    inline constexpr unsigned int GL_BLEND_EQUATION = 0x8009;
    inline constexpr unsigned int GL_BLEND_EQUATION_ALPHA = 0x883D;
    inline constexpr unsigned int GL_BLEND_EQUATION_RGB = 0x8009;
    inline constexpr unsigned int GL_BLEND_SRC = 0x0BE1;
    inline constexpr unsigned int GL_BLEND_SRC_ALPHA = 0x80CB;
    inline constexpr unsigned int GL_BLEND_SRC_RGB = 0x80C9;
    inline constexpr unsigned int GL_BLOCK_INDEX = 0x92FD;
    inline constexpr unsigned int GL_BLUE = 0x1905;
    inline constexpr unsigned int GL_BLUE_BITS = 0x0D54;
    inline constexpr unsigned int GL_BLUE_INTEGER = 0x8D96;
    inline constexpr unsigned int GL_BOOL = 0x8B56;
    inline constexpr unsigned int GL_BOOL_VEC2 = 0x8B57;
    inline constexpr unsigned int GL_BOOL_VEC3 = 0x8B58;
    inline constexpr unsigned int GL_BOOL_VEC4 = 0x8B59;
    inline constexpr unsigned int GL_BUFFER = 0x82E0;
    inline constexpr unsigned int GL_BUFFER_ACCESS = 0x88BB;
    inline constexpr unsigned int GL_BUFFER_ACCESS_FLAGS = 0x911F;
    inline constexpr unsigned int GL_BUFFER_BINDING = 0x9302;
    inline constexpr unsigned int GL_BUFFER_DATA_SIZE = 0x9303;
    inline constexpr unsigned int GL_BUFFER_IMMUTABLE_STORAGE = 0x821F;
    inline constexpr unsigned int GL_BUFFER_IMMUTABLE_STORAGE_EXT = 0x821F;
    inline constexpr unsigned int GL_BUFFER_KHR = 0x82E0;
    inline constexpr unsigned int GL_BUFFER_MAPPED = 0x88BC;
    inline constexpr unsigned int GL_BUFFER_MAP_LENGTH = 0x9120;
    inline constexpr unsigned int GL_BUFFER_MAP_OFFSET = 0x9121;
    inline constexpr unsigned int GL_BUFFER_MAP_POINTER = 0x88BD;
    inline constexpr unsigned int GL_BUFFER_SIZE = 0x8764;
    inline constexpr unsigned int GL_BUFFER_STORAGE_FLAGS = 0x8220;
    inline constexpr unsigned int GL_BUFFER_STORAGE_FLAGS_EXT = 0x8220;
    inline constexpr unsigned int GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200u;
    inline constexpr unsigned int GL_BUFFER_USAGE = 0x8765;
    inline constexpr unsigned int GL_BUFFER_VARIABLE = 0x92E5;
    inline constexpr unsigned int GL_BYTE = 0x1400;
    inline constexpr unsigned int GL_CAVEAT_SUPPORT = 0x82B8;
    inline constexpr unsigned int GL_CCW = 0x0901;
    inline constexpr unsigned int GL_CLAMP_READ_COLOR = 0x891C;
    inline constexpr unsigned int GL_CLAMP_TO_BORDER = 0x812D;
    inline constexpr unsigned int GL_CLAMP_TO_EDGE = 0x812F;
    inline constexpr unsigned int GL_CLEAR = 0x1500;
    inline constexpr unsigned int GL_CLEAR_BUFFER = 0x82B4;
    inline constexpr unsigned int GL_CLEAR_TEXTURE = 0x9365;
    inline constexpr unsigned int GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000u;
    inline constexpr unsigned int GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT = 0x00004000u;
    inline constexpr unsigned int GL_CLIENT_STORAGE_BIT = 0x0200;
    inline constexpr unsigned int GL_CLIENT_STORAGE_BIT_EXT = 0x0200;
    inline constexpr unsigned int GL_CLIPPING_INPUT_PRIMITIVES = 0x82F6;
    inline constexpr unsigned int GL_CLIPPING_OUTPUT_PRIMITIVES = 0x82F7;
    inline constexpr unsigned int GL_CLIP_DEPTH_MODE = 0x935D;
    inline constexpr unsigned int GL_CLIP_DEPTH_MODE_EXT = 0x935D;
    inline constexpr unsigned int GL_CLIP_DISTANCE0 = 0x3000;
    inline constexpr unsigned int GL_CLIP_DISTANCE1 = 0x3001;
    inline constexpr unsigned int GL_CLIP_DISTANCE2 = 0x3002;
    inline constexpr unsigned int GL_CLIP_DISTANCE3 = 0x3003;
    inline constexpr unsigned int GL_CLIP_DISTANCE4 = 0x3004;
    inline constexpr unsigned int GL_CLIP_DISTANCE5 = 0x3005;
    inline constexpr unsigned int GL_CLIP_DISTANCE6 = 0x3006;
    inline constexpr unsigned int GL_CLIP_DISTANCE7 = 0x3007;
    inline constexpr unsigned int GL_CLIP_ORIGIN = 0x935C;
    inline constexpr unsigned int GL_CLIP_ORIGIN_EXT = 0x935C;
    inline constexpr unsigned int GL_COLOR = 0x1800;
    inline constexpr unsigned int GL_COLORBURN = 0x929A;
    inline constexpr unsigned int GL_COLORDODGE = 0x9299;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT0 = 0x8CE0;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT1 = 0x8CE1;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT10 = 0x8CEA;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT11 = 0x8CEB;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT12 = 0x8CEC;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT13 = 0x8CED;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT14 = 0x8CEE;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT15 = 0x8CEF;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT16 = 0x8CF0;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT17 = 0x8CF1;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT18 = 0x8CF2;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT19 = 0x8CF3;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT2 = 0x8CE2;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT20 = 0x8CF4;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT21 = 0x8CF5;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT22 = 0x8CF6;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT23 = 0x8CF7;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT24 = 0x8CF8;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT25 = 0x8CF9;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT26 = 0x8CFA;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT27 = 0x8CFB;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT28 = 0x8CFC;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT29 = 0x8CFD;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT3 = 0x8CE3;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT30 = 0x8CFE;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT31 = 0x8CFF;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT4 = 0x8CE4;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT5 = 0x8CE5;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT6 = 0x8CE6;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT7 = 0x8CE7;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT8 = 0x8CE8;
    inline constexpr unsigned int GL_COLOR_ATTACHMENT9 = 0x8CE9;
    inline constexpr unsigned int GL_COLOR_BUFFER_BIT = 0x00004000u;
    inline constexpr unsigned int GL_COLOR_CLEAR_VALUE = 0x0C22;
    inline constexpr unsigned int GL_COLOR_COMPONENTS = 0x8283;
    inline constexpr unsigned int GL_COLOR_ENCODING = 0x8296;
    inline constexpr unsigned int GL_COLOR_LOGIC_OP = 0x0BF2;
    inline constexpr unsigned int GL_COLOR_RENDERABLE = 0x8286;
    inline constexpr unsigned int GL_COLOR_WRITEMASK = 0x0C23;
    inline constexpr unsigned int GL_COMMAND_BARRIER_BIT = 0x00000040u;
    inline constexpr unsigned int GL_COMPARE_REF_TO_TEXTURE = 0x884E;
    inline constexpr unsigned int GL_COMPATIBLE_SUBROUTINES = 0x8E4B;
    inline constexpr unsigned int GL_COMPILE_STATUS = 0x8B81;
    inline constexpr unsigned int GL_COMPRESSED_R11_EAC = 0x9270;
    inline constexpr unsigned int GL_COMPRESSED_RED = 0x8225;
    inline constexpr unsigned int GL_COMPRESSED_RED_RGTC1 = 0x8DBB;
    inline constexpr unsigned int GL_COMPRESSED_RG = 0x8226;
    inline constexpr unsigned int GL_COMPRESSED_RG11_EAC = 0x9272;
    inline constexpr unsigned int GL_COMPRESSED_RGB = 0x84ED;
    inline constexpr unsigned int GL_COMPRESSED_RGB8_ETC2 = 0x9274;
    inline constexpr unsigned int GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276;
    inline constexpr unsigned int GL_COMPRESSED_RGBA = 0x84EE;
    inline constexpr unsigned int GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x10 = 0x93BB;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x10_KHR = 0x93BB;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x5 = 0x93B8;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x5_KHR = 0x93B8;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x6 = 0x93B9;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x6_KHR = 0x93B9;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x8 = 0x93BA;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_10x8_KHR = 0x93BA;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_12x10 = 0x93BC;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_12x10_KHR = 0x93BC;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_12x12 = 0x93BD;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_12x12_KHR = 0x93BD;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_4x4 = 0x93B0;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_4x4_KHR = 0x93B0;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_5x4 = 0x93B1;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_5x4_KHR = 0x93B1;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_5x5 = 0x93B2;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_5x5_KHR = 0x93B2;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_6x5 = 0x93B3;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_6x5_KHR = 0x93B3;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_6x6 = 0x93B4;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_6x6_KHR = 0x93B4;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_8x5 = 0x93B5;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_8x5_KHR = 0x93B5;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_8x6 = 0x93B6;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_8x6_KHR = 0x93B6;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_8x8 = 0x93B7;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_ASTC_8x8_KHR = 0x93B7;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_BPTC_UNORM_EXT = 0x8E8C;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = 0x83F1;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = 0x83F2;
    inline constexpr unsigned int GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = 0x83F3;
    inline constexpr unsigned int GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E;
    inline constexpr unsigned int GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT = 0x8E8E;
    inline constexpr unsigned int GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F;
    inline constexpr unsigned int GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT = 0x8E8F;
    inline constexpr unsigned int GL_COMPRESSED_RGB_S3TC_DXT1_EXT = 0x83F0;
    inline constexpr unsigned int GL_COMPRESSED_RG_RGTC2 = 0x8DBD;
    inline constexpr unsigned int GL_COMPRESSED_SIGNED_R11_EAC = 0x9271;
    inline constexpr unsigned int GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC;
    inline constexpr unsigned int GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273;
    inline constexpr unsigned int GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE;
    inline constexpr unsigned int GL_COMPRESSED_SRGB = 0x8C48;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10 = 0x93DB;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = 0x93DB;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5 = 0x93D8;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = 0x93D8;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6 = 0x93D9;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = 0x93D9;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8 = 0x93DA;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = 0x93DA;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10 = 0x93DC;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = 0x93DC;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12 = 0x93DD;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = 0x93DD;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4 = 0x93D0;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = 0x93D0;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4 = 0x93D1;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = 0x93D1;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5 = 0x93D2;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = 0x93D2;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5 = 0x93D3;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = 0x93D3;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6 = 0x93D4;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = 0x93D4;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5 = 0x93D5;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = 0x93D5;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6 = 0x93D6;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = 0x93D6;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8 = 0x93D7;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = 0x93D7;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_ETC2 = 0x9275;
    inline constexpr unsigned int GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277;
    inline constexpr unsigned int GL_COMPRESSED_SRGB_ALPHA = 0x8C49;
    inline constexpr unsigned int GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D;
    inline constexpr unsigned int GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT = 0x8E8D;
    inline constexpr unsigned int GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3;
    inline constexpr unsigned int GL_COMPUTE_SHADER = 0x91B9;
    inline constexpr unsigned int GL_COMPUTE_SHADER_BIT = 0x00000020u;
    inline constexpr unsigned int GL_COMPUTE_SHADER_INVOCATIONS = 0x82F5;
    inline constexpr unsigned int GL_COMPUTE_SUBROUTINE = 0x92ED;
    inline constexpr unsigned int GL_COMPUTE_SUBROUTINE_UNIFORM = 0x92F3;
    inline constexpr unsigned int GL_COMPUTE_TEXTURE = 0x82A0;
    inline constexpr unsigned int GL_COMPUTE_WORK_GROUP_SIZE = 0x8267;
    inline constexpr unsigned int GL_CONDITION_SATISFIED = 0x911C;
    inline constexpr unsigned int GL_CONSTANT_ALPHA = 0x8003;
    inline constexpr unsigned int GL_CONSTANT_COLOR = 0x8001;
    inline constexpr unsigned int GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002u;
    inline constexpr unsigned int GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001u;
    inline constexpr unsigned int GL_CONTEXT_FLAGS = 0x821E;
    inline constexpr unsigned int GL_CONTEXT_FLAG_DEBUG_BIT = 0x00000002u;
    inline constexpr unsigned int GL_CONTEXT_FLAG_DEBUG_BIT_KHR = 0x00000002u;
    inline constexpr unsigned int GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001u;
    inline constexpr unsigned int GL_CONTEXT_FLAG_NO_ERROR_BIT = 0x00000008u;
    inline constexpr unsigned int GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x00000004u;
    inline constexpr unsigned int GL_CONTEXT_LOST = 0x0507;
    inline constexpr unsigned int GL_CONTEXT_PROFILE_MASK = 0x9126;
    inline constexpr unsigned int GL_CONTEXT_RELEASE_BEHAVIOR = 0x82FB;
    inline constexpr unsigned int GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x82FC;
    inline constexpr unsigned int GL_COPY = 0x1503;
    inline constexpr unsigned int GL_COPY_INVERTED = 0x150C;
    inline constexpr unsigned int GL_COPY_READ_BUFFER = 0x8F36;
    inline constexpr unsigned int GL_COPY_READ_BUFFER_BINDING = 0x8F36;
    inline constexpr unsigned int GL_COPY_WRITE_BUFFER = 0x8F37;
    inline constexpr unsigned int GL_COPY_WRITE_BUFFER_BINDING = 0x8F37;
    inline constexpr unsigned int GL_CULL_FACE = 0x0B44;
    inline constexpr unsigned int GL_CULL_FACE_MODE = 0x0B45;
    inline constexpr unsigned int GL_CURRENT_PROGRAM = 0x8B8D;
    inline constexpr unsigned int GL_CURRENT_QUERY = 0x8865;
    inline constexpr unsigned int GL_CURRENT_QUERY_EXT = 0x8865;
    inline constexpr unsigned int GL_CURRENT_VERTEX_ATTRIB = 0x8626;
    inline constexpr unsigned int GL_CW = 0x0900;
    inline constexpr unsigned int GL_DARKEN = 0x9297;
    inline constexpr unsigned int GL_DEBUG_CALLBACK_FUNCTION = 0x8244;
    inline constexpr unsigned int GL_DEBUG_CALLBACK_FUNCTION_KHR = 0x8244;
    inline constexpr unsigned int GL_DEBUG_CALLBACK_USER_PARAM = 0x8245;
    inline constexpr unsigned int GL_DEBUG_CALLBACK_USER_PARAM_KHR = 0x8245;
    inline constexpr unsigned int GL_DEBUG_GROUP_STACK_DEPTH = 0x826D;
    inline constexpr unsigned int GL_DEBUG_GROUP_STACK_DEPTH_KHR = 0x826D;
    inline constexpr unsigned int GL_DEBUG_LOGGED_MESSAGES = 0x9145;
    inline constexpr unsigned int GL_DEBUG_LOGGED_MESSAGES_KHR = 0x9145;
    inline constexpr unsigned int GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243;
    inline constexpr unsigned int GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR = 0x8243;
    inline constexpr unsigned int GL_DEBUG_OUTPUT = 0x92E0;
    inline constexpr unsigned int GL_DEBUG_OUTPUT_KHR = 0x92E0;
    inline constexpr unsigned int GL_DEBUG_OUTPUT_SYNCHRONOUS = 0x8242;
    inline constexpr unsigned int GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR = 0x8242;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_HIGH = 0x9146;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_HIGH_KHR = 0x9146;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_LOW = 0x9148;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_LOW_KHR = 0x9148;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_MEDIUM = 0x9147;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_MEDIUM_KHR = 0x9147;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_NOTIFICATION = 0x826B;
    inline constexpr unsigned int GL_DEBUG_SEVERITY_NOTIFICATION_KHR = 0x826B;
    inline constexpr unsigned int GL_DEBUG_SOURCE_API = 0x8246;
    inline constexpr unsigned int GL_DEBUG_SOURCE_API_KHR = 0x8246;
    inline constexpr unsigned int GL_DEBUG_SOURCE_APPLICATION = 0x824A;
    inline constexpr unsigned int GL_DEBUG_SOURCE_APPLICATION_KHR = 0x824A;
    inline constexpr unsigned int GL_DEBUG_SOURCE_OTHER = 0x824B;
    inline constexpr unsigned int GL_DEBUG_SOURCE_OTHER_KHR = 0x824B;
    inline constexpr unsigned int GL_DEBUG_SOURCE_SHADER_COMPILER = 0x8248;
    inline constexpr unsigned int GL_DEBUG_SOURCE_SHADER_COMPILER_KHR = 0x8248;
    inline constexpr unsigned int GL_DEBUG_SOURCE_THIRD_PARTY = 0x8249;
    inline constexpr unsigned int GL_DEBUG_SOURCE_THIRD_PARTY_KHR = 0x8249;
    inline constexpr unsigned int GL_DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247;
    inline constexpr unsigned int GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR = 0x8247;
    inline constexpr unsigned int GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D;
    inline constexpr unsigned int GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR = 0x824D;
    inline constexpr unsigned int GL_DEBUG_TYPE_ERROR = 0x824C;
    inline constexpr unsigned int GL_DEBUG_TYPE_ERROR_KHR = 0x824C;
    inline constexpr unsigned int GL_DEBUG_TYPE_MARKER = 0x8268;
    inline constexpr unsigned int GL_DEBUG_TYPE_MARKER_KHR = 0x8268;
    inline constexpr unsigned int GL_DEBUG_TYPE_OTHER = 0x8251;
    inline constexpr unsigned int GL_DEBUG_TYPE_OTHER_KHR = 0x8251;
    inline constexpr unsigned int GL_DEBUG_TYPE_PERFORMANCE = 0x8250;
    inline constexpr unsigned int GL_DEBUG_TYPE_PERFORMANCE_KHR = 0x8250;
    inline constexpr unsigned int GL_DEBUG_TYPE_POP_GROUP = 0x826A;
    inline constexpr unsigned int GL_DEBUG_TYPE_POP_GROUP_KHR = 0x826A;
    inline constexpr unsigned int GL_DEBUG_TYPE_PORTABILITY = 0x824F;
    inline constexpr unsigned int GL_DEBUG_TYPE_PORTABILITY_KHR = 0x824F;
    inline constexpr unsigned int GL_DEBUG_TYPE_PUSH_GROUP = 0x8269;
    inline constexpr unsigned int GL_DEBUG_TYPE_PUSH_GROUP_KHR = 0x8269;
    inline constexpr unsigned int GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E;
    inline constexpr unsigned int GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR = 0x824E;
    inline constexpr unsigned int GL_DECR = 0x1E03;
    inline constexpr unsigned int GL_DECR_WRAP = 0x8508;
    inline constexpr unsigned int GL_DELETE_STATUS = 0x8B80;
    inline constexpr unsigned int GL_DEPTH = 0x1801;
    inline constexpr unsigned int GL_DEPTH24_STENCIL8 = 0x88F0;
    inline constexpr unsigned int GL_DEPTH32F_STENCIL8 = 0x8CAD;
    inline constexpr unsigned int GL_DEPTH_ATTACHMENT = 0x8D00;
    inline constexpr unsigned int GL_DEPTH_BITS = 0x0D56;
    inline constexpr unsigned int GL_DEPTH_BUFFER_BIT = 0x00000100u;
    inline constexpr unsigned int GL_DEPTH_CLAMP = 0x864F;
    inline constexpr unsigned int GL_DEPTH_CLEAR_VALUE = 0x0B73;
    inline constexpr unsigned int GL_DEPTH_COMPONENT = 0x1902;
    inline constexpr unsigned int GL_DEPTH_COMPONENT16 = 0x81A5;
    inline constexpr unsigned int GL_DEPTH_COMPONENT24 = 0x81A6;
    inline constexpr unsigned int GL_DEPTH_COMPONENT32 = 0x81A7;
    inline constexpr unsigned int GL_DEPTH_COMPONENT32F = 0x8CAC;
    inline constexpr unsigned int GL_DEPTH_COMPONENTS = 0x8284;
    inline constexpr unsigned int GL_DEPTH_FUNC = 0x0B74;
    inline constexpr unsigned int GL_DEPTH_RANGE = 0x0B70;
    inline constexpr unsigned int GL_DEPTH_RENDERABLE = 0x8287;
    inline constexpr unsigned int GL_DEPTH_STENCIL = 0x84F9;
    inline constexpr unsigned int GL_DEPTH_STENCIL_ATTACHMENT = 0x821A;
    inline constexpr unsigned int GL_DEPTH_STENCIL_TEXTURE_MODE = 0x90EA;
    inline constexpr unsigned int GL_DEPTH_TEST = 0x0B71;
    inline constexpr unsigned int GL_DEPTH_WRITEMASK = 0x0B72;
    inline constexpr unsigned int GL_DIFFERENCE = 0x929E;
    inline constexpr unsigned int GL_DISPATCH_INDIRECT_BUFFER = 0x90EE;
    inline constexpr unsigned int GL_DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF;
    inline constexpr unsigned int GL_DISPLAY_LIST = 0x82E7;
    inline constexpr unsigned int GL_DITHER = 0x0BD0;
    inline constexpr unsigned int GL_DONT_CARE = 0x1100;
    inline constexpr unsigned int GL_DOUBLE = 0x140A;
    inline constexpr unsigned int GL_DOUBLEBUFFER = 0x0C32;
    inline constexpr unsigned int GL_DOUBLE_MAT2 = 0x8F46;
    inline constexpr unsigned int GL_DOUBLE_MAT2x3 = 0x8F49;
    inline constexpr unsigned int GL_DOUBLE_MAT2x4 = 0x8F4A;
    inline constexpr unsigned int GL_DOUBLE_MAT3 = 0x8F47;
    inline constexpr unsigned int GL_DOUBLE_MAT3x2 = 0x8F4B;
    inline constexpr unsigned int GL_DOUBLE_MAT3x4 = 0x8F4C;
    inline constexpr unsigned int GL_DOUBLE_MAT4 = 0x8F48;
    inline constexpr unsigned int GL_DOUBLE_MAT4x2 = 0x8F4D;
    inline constexpr unsigned int GL_DOUBLE_MAT4x3 = 0x8F4E;
    inline constexpr unsigned int GL_DOUBLE_VEC2 = 0x8FFC;
    inline constexpr unsigned int GL_DOUBLE_VEC3 = 0x8FFD;
    inline constexpr unsigned int GL_DOUBLE_VEC4 = 0x8FFE;
    inline constexpr unsigned int GL_DRAW_BUFFER = 0x0C01;
    inline constexpr unsigned int GL_DRAW_BUFFER0 = 0x8825;
    inline constexpr unsigned int GL_DRAW_BUFFER1 = 0x8826;
    inline constexpr unsigned int GL_DRAW_BUFFER10 = 0x882F;
    inline constexpr unsigned int GL_DRAW_BUFFER11 = 0x8830;
    inline constexpr unsigned int GL_DRAW_BUFFER12 = 0x8831;
    inline constexpr unsigned int GL_DRAW_BUFFER13 = 0x8832;
    inline constexpr unsigned int GL_DRAW_BUFFER14 = 0x8833;
    inline constexpr unsigned int GL_DRAW_BUFFER15 = 0x8834;
    inline constexpr unsigned int GL_DRAW_BUFFER2 = 0x8827;
    inline constexpr unsigned int GL_DRAW_BUFFER3 = 0x8828;
    inline constexpr unsigned int GL_DRAW_BUFFER4 = 0x8829;
    inline constexpr unsigned int GL_DRAW_BUFFER5 = 0x882A;
    inline constexpr unsigned int GL_DRAW_BUFFER6 = 0x882B;
    inline constexpr unsigned int GL_DRAW_BUFFER7 = 0x882C;
    inline constexpr unsigned int GL_DRAW_BUFFER8 = 0x882D;
    inline constexpr unsigned int GL_DRAW_BUFFER9 = 0x882E;
    inline constexpr unsigned int GL_DRAW_FRAMEBUFFER = 0x8CA9;
    inline constexpr unsigned int GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6;
    inline constexpr unsigned int GL_DRAW_INDIRECT_BUFFER = 0x8F3F;
    inline constexpr unsigned int GL_DRAW_INDIRECT_BUFFER_BINDING = 0x8F43;
    inline constexpr unsigned int GL_DST_ALPHA = 0x0304;
    inline constexpr unsigned int GL_DST_COLOR = 0x0306;
    inline constexpr unsigned int GL_DYNAMIC_COPY = 0x88EA;
    inline constexpr unsigned int GL_DYNAMIC_DRAW = 0x88E8;
    inline constexpr unsigned int GL_DYNAMIC_READ = 0x88E9;
    inline constexpr unsigned int GL_DYNAMIC_STORAGE_BIT = 0x0100;
    inline constexpr unsigned int GL_DYNAMIC_STORAGE_BIT_EXT = 0x0100;
    inline constexpr unsigned int GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002u;
    inline constexpr unsigned int GL_ELEMENT_ARRAY_BUFFER = 0x8893;
    inline constexpr unsigned int GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895;
    inline constexpr unsigned int GL_EQUAL = 0x0202;
    inline constexpr unsigned int GL_EQUIV = 0x1509;
    inline constexpr unsigned int GL_EXCLUSION = 0x92A0;
    inline constexpr unsigned int GL_EXTENSIONS = 0x1F03;
    inline constexpr unsigned int GL_FALSE = 0;
    inline constexpr unsigned int GL_FASTEST = 0x1101;
    inline constexpr unsigned int GL_FILL = 0x1B02;
    inline constexpr unsigned int GL_FILTER = 0x829A;
    inline constexpr unsigned int GL_FIRST_VERTEX_CONVENTION = 0x8E4D;
    inline constexpr unsigned int GL_FIXED = 0x140C;
    inline constexpr unsigned int GL_FIXED_ONLY = 0x891D;
    inline constexpr unsigned int GL_FLOAT = 0x1406;
    inline constexpr unsigned int GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD;
    inline constexpr unsigned int GL_FLOAT_MAT2 = 0x8B5A;
    inline constexpr unsigned int GL_FLOAT_MAT2x3 = 0x8B65;
    inline constexpr unsigned int GL_FLOAT_MAT2x4 = 0x8B66;
    inline constexpr unsigned int GL_FLOAT_MAT3 = 0x8B5B;
    inline constexpr unsigned int GL_FLOAT_MAT3x2 = 0x8B67;
    inline constexpr unsigned int GL_FLOAT_MAT3x4 = 0x8B68;
    inline constexpr unsigned int GL_FLOAT_MAT4 = 0x8B5C;
    inline constexpr unsigned int GL_FLOAT_MAT4x2 = 0x8B69;
    inline constexpr unsigned int GL_FLOAT_MAT4x3 = 0x8B6A;
    inline constexpr unsigned int GL_FLOAT_VEC2 = 0x8B50;
    inline constexpr unsigned int GL_FLOAT_VEC3 = 0x8B51;
    inline constexpr unsigned int GL_FLOAT_VEC4 = 0x8B52;
    inline constexpr unsigned int GL_FRACTIONAL_EVEN = 0x8E7C;
    inline constexpr unsigned int GL_FRACTIONAL_ODD = 0x8E7B;
    inline constexpr unsigned int GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D;
    inline constexpr unsigned int GL_FRAGMENT_SHADER = 0x8B30;
    inline constexpr unsigned int GL_FRAGMENT_SHADER_BIT = 0x00000002u;
    inline constexpr unsigned int GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B;
    inline constexpr unsigned int GL_FRAGMENT_SHADER_INVOCATIONS = 0x82F4;
    inline constexpr unsigned int GL_FRAGMENT_SUBROUTINE = 0x92EC;
    inline constexpr unsigned int GL_FRAGMENT_SUBROUTINE_UNIFORM = 0x92F2;
    inline constexpr unsigned int GL_FRAGMENT_TEXTURE = 0x829F;
    inline constexpr unsigned int GL_FRAMEBUFFER = 0x8D40;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT = 0x8211;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR = 0x9632;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2;
    inline constexpr unsigned int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR = 0x9630;
    inline constexpr unsigned int GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400u;
    inline constexpr unsigned int GL_FRAMEBUFFER_BINDING = 0x8CA6;
    inline constexpr unsigned int GL_FRAMEBUFFER_BLEND = 0x828B;
    inline constexpr unsigned int GL_FRAMEBUFFER_COMPLETE = 0x8CD5;
    inline constexpr unsigned int GL_FRAMEBUFFER_DEFAULT = 0x8218;
    inline constexpr unsigned int GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314;
    inline constexpr unsigned int GL_FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311;
    inline constexpr unsigned int GL_FRAMEBUFFER_DEFAULT_LAYERS = 0x9312;
    inline constexpr unsigned int GL_FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313;
    inline constexpr unsigned int GL_FRAMEBUFFER_DEFAULT_WIDTH = 0x9310;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = 0x8CD9;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC;
    inline constexpr unsigned int GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR = 0x9633;
    inline constexpr unsigned int GL_FRAMEBUFFER_RENDERABLE = 0x8289;
    inline constexpr unsigned int GL_FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A;
    inline constexpr unsigned int GL_FRAMEBUFFER_SRGB = 0x8DB9;
    inline constexpr unsigned int GL_FRAMEBUFFER_SRGB_EXT = 0x8DB9;
    inline constexpr unsigned int GL_FRAMEBUFFER_UNDEFINED = 0x8219;
    inline constexpr unsigned int GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD;
    inline constexpr unsigned int GL_FRONT = 0x0404;
    inline constexpr unsigned int GL_FRONT_AND_BACK = 0x0408;
    inline constexpr unsigned int GL_FRONT_FACE = 0x0B46;
    inline constexpr unsigned int GL_FRONT_LEFT = 0x0400;
    inline constexpr unsigned int GL_FRONT_RIGHT = 0x0401;
    inline constexpr unsigned int GL_FULL_SUPPORT = 0x82B7;
    inline constexpr unsigned int GL_FUNC_ADD = 0x8006;
    inline constexpr unsigned int GL_FUNC_REVERSE_SUBTRACT = 0x800B;
    inline constexpr unsigned int GL_FUNC_SUBTRACT = 0x800A;
    inline constexpr unsigned int GL_GENERATE_MIPMAP_HINT = 0x8192;
    inline constexpr unsigned int GL_GEOMETRY_INPUT_TYPE = 0x8917;
    inline constexpr unsigned int GL_GEOMETRY_OUTPUT_TYPE = 0x8918;
    inline constexpr unsigned int GL_GEOMETRY_SHADER = 0x8DD9;
    inline constexpr unsigned int GL_GEOMETRY_SHADER_BIT = 0x00000004u;
    inline constexpr unsigned int GL_GEOMETRY_SHADER_INVOCATIONS = 0x887F;
    inline constexpr unsigned int GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED = 0x82F3;
    inline constexpr unsigned int GL_GEOMETRY_SUBROUTINE = 0x92EB;
    inline constexpr unsigned int GL_GEOMETRY_SUBROUTINE_UNIFORM = 0x92F1;
    inline constexpr unsigned int GL_GEOMETRY_TEXTURE = 0x829E;
    inline constexpr unsigned int GL_GEOMETRY_VERTICES_OUT = 0x8916;
    inline constexpr unsigned int GL_GEQUAL = 0x0206;
    inline constexpr unsigned int GL_GET_TEXTURE_IMAGE_FORMAT = 0x8291;
    inline constexpr unsigned int GL_GET_TEXTURE_IMAGE_TYPE = 0x8292;
    inline constexpr unsigned int GL_GPU_DISJOINT_EXT = 0x8FBB;
    inline constexpr unsigned int GL_GREATER = 0x0204;
    inline constexpr unsigned int GL_GREEN = 0x1904;
    inline constexpr unsigned int GL_GREEN_BITS = 0x0D53;
    inline constexpr unsigned int GL_GREEN_INTEGER = 0x8D95;
    inline constexpr unsigned int GL_GUILTY_CONTEXT_RESET = 0x8253;
    inline constexpr unsigned int GL_HALF_FLOAT = 0x140B;
    inline constexpr unsigned int GL_HARDLIGHT = 0x929B;
    inline constexpr unsigned int GL_HIGH_FLOAT = 0x8DF2;
    inline constexpr unsigned int GL_HIGH_INT = 0x8DF5;
    inline constexpr unsigned int GL_HSL_COLOR = 0x92AF;
    inline constexpr unsigned int GL_HSL_HUE = 0x92AD;
    inline constexpr unsigned int GL_HSL_LUMINOSITY = 0x92B0;
    inline constexpr unsigned int GL_HSL_SATURATION = 0x92AE;
    inline constexpr unsigned int GL_IMAGE_1D = 0x904C;
    inline constexpr unsigned int GL_IMAGE_1D_ARRAY = 0x9052;
    inline constexpr unsigned int GL_IMAGE_2D = 0x904D;
    inline constexpr unsigned int GL_IMAGE_2D_ARRAY = 0x9053;
    inline constexpr unsigned int GL_IMAGE_2D_MULTISAMPLE = 0x9055;
    inline constexpr unsigned int GL_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9056;
    inline constexpr unsigned int GL_IMAGE_2D_RECT = 0x904F;
    inline constexpr unsigned int GL_IMAGE_3D = 0x904E;
    inline constexpr unsigned int GL_IMAGE_BINDING_ACCESS = 0x8F3E;
    inline constexpr unsigned int GL_IMAGE_BINDING_FORMAT = 0x906E;
    inline constexpr unsigned int GL_IMAGE_BINDING_LAYER = 0x8F3D;
    inline constexpr unsigned int GL_IMAGE_BINDING_LAYERED = 0x8F3C;
    inline constexpr unsigned int GL_IMAGE_BINDING_LEVEL = 0x8F3B;
    inline constexpr unsigned int GL_IMAGE_BINDING_NAME = 0x8F3A;
    inline constexpr unsigned int GL_IMAGE_BUFFER = 0x9051;
    inline constexpr unsigned int GL_IMAGE_CLASS_10_10_10_2 = 0x82C3;
    inline constexpr unsigned int GL_IMAGE_CLASS_11_11_10 = 0x82C2;
    inline constexpr unsigned int GL_IMAGE_CLASS_1_X_16 = 0x82BE;
    inline constexpr unsigned int GL_IMAGE_CLASS_1_X_32 = 0x82BB;
    inline constexpr unsigned int GL_IMAGE_CLASS_1_X_8 = 0x82C1;
    inline constexpr unsigned int GL_IMAGE_CLASS_2_X_16 = 0x82BD;
    inline constexpr unsigned int GL_IMAGE_CLASS_2_X_32 = 0x82BA;
    inline constexpr unsigned int GL_IMAGE_CLASS_2_X_8 = 0x82C0;
    inline constexpr unsigned int GL_IMAGE_CLASS_4_X_16 = 0x82BC;
    inline constexpr unsigned int GL_IMAGE_CLASS_4_X_32 = 0x82B9;
    inline constexpr unsigned int GL_IMAGE_CLASS_4_X_8 = 0x82BF;
    inline constexpr unsigned int GL_IMAGE_COMPATIBILITY_CLASS = 0x82A8;
    inline constexpr unsigned int GL_IMAGE_CUBE = 0x9050;
    inline constexpr unsigned int GL_IMAGE_CUBE_MAP_ARRAY = 0x9054;
    inline constexpr unsigned int GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9;
    inline constexpr unsigned int GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8;
    inline constexpr unsigned int GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7;
    inline constexpr unsigned int GL_IMAGE_PIXEL_FORMAT = 0x82A9;
    inline constexpr unsigned int GL_IMAGE_PIXEL_TYPE = 0x82AA;
    inline constexpr unsigned int GL_IMAGE_TEXEL_SIZE = 0x82A7;
    inline constexpr unsigned int GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B;
    inline constexpr unsigned int GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A;
    inline constexpr unsigned int GL_INCR = 0x1E02;
    inline constexpr unsigned int GL_INCR_WRAP = 0x8507;
    inline constexpr unsigned int GL_INFO_LOG_LENGTH = 0x8B84;
    inline constexpr unsigned int GL_INNOCENT_CONTEXT_RESET = 0x8254;
    inline constexpr unsigned int GL_INT = 0x1404;
    inline constexpr unsigned int GL_INTERLEAVED_ATTRIBS = 0x8C8C;
    inline constexpr unsigned int GL_INTERNALFORMAT_ALPHA_SIZE = 0x8274;
    inline constexpr unsigned int GL_INTERNALFORMAT_ALPHA_TYPE = 0x827B;
    inline constexpr unsigned int GL_INTERNALFORMAT_BLUE_SIZE = 0x8273;
    inline constexpr unsigned int GL_INTERNALFORMAT_BLUE_TYPE = 0x827A;
    inline constexpr unsigned int GL_INTERNALFORMAT_DEPTH_SIZE = 0x8275;
    inline constexpr unsigned int GL_INTERNALFORMAT_DEPTH_TYPE = 0x827C;
    inline constexpr unsigned int GL_INTERNALFORMAT_GREEN_SIZE = 0x8272;
    inline constexpr unsigned int GL_INTERNALFORMAT_GREEN_TYPE = 0x8279;
    inline constexpr unsigned int GL_INTERNALFORMAT_PREFERRED = 0x8270;
    inline constexpr unsigned int GL_INTERNALFORMAT_RED_SIZE = 0x8271;
    inline constexpr unsigned int GL_INTERNALFORMAT_RED_TYPE = 0x8278;
    inline constexpr unsigned int GL_INTERNALFORMAT_SHARED_SIZE = 0x8277;
    inline constexpr unsigned int GL_INTERNALFORMAT_STENCIL_SIZE = 0x8276;
    inline constexpr unsigned int GL_INTERNALFORMAT_STENCIL_TYPE = 0x827D;
    inline constexpr unsigned int GL_INTERNALFORMAT_SUPPORTED = 0x826F;
    inline constexpr unsigned int GL_INT_2_10_10_10_REV = 0x8D9F;
    inline constexpr unsigned int GL_INT_IMAGE_1D = 0x9057;
    inline constexpr unsigned int GL_INT_IMAGE_1D_ARRAY = 0x905D;
    inline constexpr unsigned int GL_INT_IMAGE_2D = 0x9058;
    inline constexpr unsigned int GL_INT_IMAGE_2D_ARRAY = 0x905E;
    inline constexpr unsigned int GL_INT_IMAGE_2D_MULTISAMPLE = 0x9060;
    inline constexpr unsigned int GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9061;
    inline constexpr unsigned int GL_INT_IMAGE_2D_RECT = 0x905A;
    inline constexpr unsigned int GL_INT_IMAGE_3D = 0x9059;
    inline constexpr unsigned int GL_INT_IMAGE_BUFFER = 0x905C;
    inline constexpr unsigned int GL_INT_IMAGE_CUBE = 0x905B;
    inline constexpr unsigned int GL_INT_IMAGE_CUBE_MAP_ARRAY = 0x905F;
    inline constexpr unsigned int GL_INT_SAMPLER_1D = 0x8DC9;
    inline constexpr unsigned int GL_INT_SAMPLER_1D_ARRAY = 0x8DCE;
    inline constexpr unsigned int GL_INT_SAMPLER_2D = 0x8DCA;
    inline constexpr unsigned int GL_INT_SAMPLER_2D_ARRAY = 0x8DCF;
    inline constexpr unsigned int GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109;
    inline constexpr unsigned int GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C;
    inline constexpr unsigned int GL_INT_SAMPLER_2D_RECT = 0x8DCD;
    inline constexpr unsigned int GL_INT_SAMPLER_3D = 0x8DCB;
    inline constexpr unsigned int GL_INT_SAMPLER_BUFFER = 0x8DD0;
    inline constexpr unsigned int GL_INT_SAMPLER_CUBE = 0x8DCC;
    inline constexpr unsigned int GL_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E;
    inline constexpr unsigned int GL_INT_VEC2 = 0x8B53;
    inline constexpr unsigned int GL_INT_VEC3 = 0x8B54;
    inline constexpr unsigned int GL_INT_VEC4 = 0x8B55;
    inline constexpr unsigned int GL_INVALID_ENUM = 0x0500;
    inline constexpr unsigned int GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506;
    inline constexpr unsigned int GL_INVALID_INDEX = 0xFFFFFFFFu;
    inline constexpr unsigned int GL_INVALID_OPERATION = 0x0502;
    inline constexpr unsigned int GL_INVALID_VALUE = 0x0501;
    inline constexpr unsigned int GL_INVERT = 0x150A;
    inline constexpr unsigned int GL_ISOLINES = 0x8E7A;
    inline constexpr unsigned int GL_IS_PER_PATCH = 0x92E7;
    inline constexpr unsigned int GL_IS_ROW_MAJOR = 0x9300;
    inline constexpr unsigned int GL_KEEP = 0x1E00;
    inline constexpr unsigned int GL_LAST_VERTEX_CONVENTION = 0x8E4E;
    inline constexpr unsigned int GL_LAYER_PROVOKING_VERTEX = 0x825E;
    inline constexpr unsigned int GL_LEFT = 0x0406;
    inline constexpr unsigned int GL_LEQUAL = 0x0203;
    inline constexpr unsigned int GL_LESS = 0x0201;
    inline constexpr unsigned int GL_LIGHTEN = 0x9298;
    inline constexpr unsigned int GL_LINE = 0x1B01;
    inline constexpr unsigned int GL_LINEAR = 0x2601;
    inline constexpr unsigned int GL_LINEAR_MIPMAP_LINEAR = 0x2703;
    inline constexpr unsigned int GL_LINEAR_MIPMAP_NEAREST = 0x2701;
    inline constexpr unsigned int GL_LINES = 0x0001;
    inline constexpr unsigned int GL_LINES_ADJACENCY = 0x000A;
    inline constexpr unsigned int GL_LINE_LOOP = 0x0002;
    inline constexpr unsigned int GL_LINE_SMOOTH = 0x0B20;
    inline constexpr unsigned int GL_LINE_SMOOTH_HINT = 0x0C52;
    inline constexpr unsigned int GL_LINE_STRIP = 0x0003;
    inline constexpr unsigned int GL_LINE_STRIP_ADJACENCY = 0x000B;
    inline constexpr unsigned int GL_LINE_WIDTH = 0x0B21;
    inline constexpr unsigned int GL_LINE_WIDTH_GRANULARITY = 0x0B23;
    inline constexpr unsigned int GL_LINE_WIDTH_RANGE = 0x0B22;
    inline constexpr unsigned int GL_LINK_STATUS = 0x8B82;
    inline constexpr unsigned int GL_LOCATION = 0x930E;
    inline constexpr unsigned int GL_LOCATION_COMPONENT = 0x934A;
    inline constexpr unsigned int GL_LOCATION_INDEX = 0x930F;
    inline constexpr unsigned int GL_LOGIC_OP_MODE = 0x0BF0;
    inline constexpr unsigned int GL_LOSE_CONTEXT_ON_RESET = 0x8252;
    inline constexpr unsigned int GL_LOWER_LEFT = 0x8CA1;
    inline constexpr unsigned int GL_LOWER_LEFT_EXT = 0x8CA1;
    inline constexpr unsigned int GL_LOW_FLOAT = 0x8DF0;
    inline constexpr unsigned int GL_LOW_INT = 0x8DF3;
    inline constexpr unsigned int GL_LUMINANCE = 0x1909;
    inline constexpr unsigned int GL_LUMINANCE_ALPHA = 0x190A;
    inline constexpr unsigned int GL_MAJOR_VERSION = 0x821B;
    inline constexpr unsigned int GL_MANUAL_GENERATE_MIPMAP = 0x8294;
    inline constexpr unsigned int GL_MAP_COHERENT_BIT = 0x0080;
    inline constexpr unsigned int GL_MAP_COHERENT_BIT_EXT = 0x0080;
    inline constexpr unsigned int GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010;
    inline constexpr unsigned int GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008;
    inline constexpr unsigned int GL_MAP_INVALIDATE_RANGE_BIT = 0x0004;
    inline constexpr unsigned int GL_MAP_PERSISTENT_BIT = 0x0040;
    inline constexpr unsigned int GL_MAP_PERSISTENT_BIT_EXT = 0x0040;
    inline constexpr unsigned int GL_MAP_READ_BIT = 0x0001;
    inline constexpr unsigned int GL_MAP_UNSYNCHRONIZED_BIT = 0x0020;
    inline constexpr unsigned int GL_MAP_WRITE_BIT = 0x0002;
    inline constexpr unsigned int GL_MATRIX_STRIDE = 0x92FF;
    inline constexpr unsigned int GL_MAX = 0x8008;
    inline constexpr unsigned int GL_MAX_3D_TEXTURE_SIZE = 0x8073;
    inline constexpr unsigned int GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF;
    inline constexpr unsigned int GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC;
    inline constexpr unsigned int GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8;
    inline constexpr unsigned int GL_MAX_CLIP_DISTANCES = 0x0D32;
    inline constexpr unsigned int GL_MAX_COLOR_ATTACHMENTS = 0x8CDF;
    inline constexpr unsigned int GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E;
    inline constexpr unsigned int GL_MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7;
    inline constexpr unsigned int GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1;
    inline constexpr unsigned int GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES = 0x82FA;
    inline constexpr unsigned int GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266;
    inline constexpr unsigned int GL_MAX_COMBINED_DIMENSIONS = 0x8282;
    inline constexpr unsigned int GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33;
    inline constexpr unsigned int GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32;
    inline constexpr unsigned int GL_MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF;
    inline constexpr unsigned int GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39;
    inline constexpr unsigned int GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39;
    inline constexpr unsigned int GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC;
    inline constexpr unsigned int GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E;
    inline constexpr unsigned int GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F;
    inline constexpr unsigned int GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D;
    inline constexpr unsigned int GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E;
    inline constexpr unsigned int GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31;
    inline constexpr unsigned int GL_MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265;
    inline constexpr unsigned int GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264;
    inline constexpr unsigned int GL_MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD;
    inline constexpr unsigned int GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB;
    inline constexpr unsigned int GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262;
    inline constexpr unsigned int GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC;
    inline constexpr unsigned int GL_MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB;
    inline constexpr unsigned int GL_MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263;
    inline constexpr unsigned int GL_MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE;
    inline constexpr unsigned int GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB;
    inline constexpr unsigned int GL_MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF;
    inline constexpr unsigned int GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C;
    inline constexpr unsigned int GL_MAX_CULL_DISTANCES = 0x82F9;
    inline constexpr unsigned int GL_MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C;
    inline constexpr unsigned int GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR = 0x826C;
    inline constexpr unsigned int GL_MAX_DEBUG_LOGGED_MESSAGES = 0x9144;
    inline constexpr unsigned int GL_MAX_DEBUG_LOGGED_MESSAGES_KHR = 0x9144;
    inline constexpr unsigned int GL_MAX_DEBUG_MESSAGE_LENGTH = 0x9143;
    inline constexpr unsigned int GL_MAX_DEBUG_MESSAGE_LENGTH_KHR = 0x9143;
    inline constexpr unsigned int GL_MAX_DEPTH = 0x8280;
    inline constexpr unsigned int GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F;
    inline constexpr unsigned int GL_MAX_DRAW_BUFFERS = 0x8824;
    inline constexpr unsigned int GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC;
    inline constexpr unsigned int GL_MAX_ELEMENTS_INDICES = 0x80E9;
    inline constexpr unsigned int GL_MAX_ELEMENTS_VERTICES = 0x80E8;
    inline constexpr unsigned int GL_MAX_ELEMENT_INDEX = 0x8D6B;
    inline constexpr unsigned int GL_MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6;
    inline constexpr unsigned int GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0;
    inline constexpr unsigned int GL_MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE;
    inline constexpr unsigned int GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125;
    inline constexpr unsigned int GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C;
    inline constexpr unsigned int GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA;
    inline constexpr unsigned int GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D;
    inline constexpr unsigned int GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49;
    inline constexpr unsigned int GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD;
    inline constexpr unsigned int GL_MAX_FRAMEBUFFER_HEIGHT = 0x9316;
    inline constexpr unsigned int GL_MAX_FRAMEBUFFER_LAYERS = 0x9317;
    inline constexpr unsigned int GL_MAX_FRAMEBUFFER_SAMPLES = 0x9318;
    inline constexpr unsigned int GL_MAX_FRAMEBUFFER_WIDTH = 0x9315;
    inline constexpr unsigned int GL_MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5;
    inline constexpr unsigned int GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF;
    inline constexpr unsigned int GL_MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD;
    inline constexpr unsigned int GL_MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123;
    inline constexpr unsigned int GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124;
    inline constexpr unsigned int GL_MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0;
    inline constexpr unsigned int GL_MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A;
    inline constexpr unsigned int GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7;
    inline constexpr unsigned int GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29;
    inline constexpr unsigned int GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1;
    inline constexpr unsigned int GL_MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C;
    inline constexpr unsigned int GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF;
    inline constexpr unsigned int GL_MAX_HEIGHT = 0x827F;
    inline constexpr unsigned int GL_MAX_IMAGE_SAMPLES = 0x906D;
    inline constexpr unsigned int GL_MAX_IMAGE_UNITS = 0x8F38;
    inline constexpr unsigned int GL_MAX_INTEGER_SAMPLES = 0x9110;
    inline constexpr unsigned int GL_MAX_LABEL_LENGTH = 0x82E8;
    inline constexpr unsigned int GL_MAX_LABEL_LENGTH_KHR = 0x82E8;
    inline constexpr unsigned int GL_MAX_LAYERS = 0x8281;
    inline constexpr unsigned int GL_MAX_NAME_LENGTH = 0x92F6;
    inline constexpr unsigned int GL_MAX_NUM_ACTIVE_VARIABLES = 0x92F7;
    inline constexpr unsigned int GL_MAX_NUM_COMPATIBLE_SUBROUTINES = 0x92F8;
    inline constexpr unsigned int GL_MAX_PATCH_VERTICES = 0x8E7D;
    inline constexpr unsigned int GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905;
    inline constexpr unsigned int GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F;
    inline constexpr unsigned int GL_MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8;
    inline constexpr unsigned int GL_MAX_RENDERBUFFER_SIZE = 0x84E8;
    inline constexpr unsigned int GL_MAX_SAMPLES = 0x8D57;
    inline constexpr unsigned int GL_MAX_SAMPLE_MASK_WORDS = 0x8E59;
    inline constexpr unsigned int GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111;
    inline constexpr unsigned int GL_MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE;
    inline constexpr unsigned int GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD;
    inline constexpr unsigned int GL_MAX_SUBROUTINES = 0x8DE7;
    inline constexpr unsigned int GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS = 0x8DE8;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89;
    inline constexpr unsigned int GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A;
    inline constexpr unsigned int GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80;
    inline constexpr unsigned int GL_MAX_TESS_GEN_LEVEL = 0x8E7E;
    inline constexpr unsigned int GL_MAX_TESS_PATCH_COMPONENTS = 0x8E84;
    inline constexpr unsigned int GL_MAX_TEXTURE_BUFFER_SIZE = 0x8C2B;
    inline constexpr unsigned int GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872;
    inline constexpr unsigned int GL_MAX_TEXTURE_LOD_BIAS = 0x84FD;
    inline constexpr unsigned int GL_MAX_TEXTURE_MAX_ANISOTROPY = 0x84FF;
    inline constexpr unsigned int GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT = 0x84FF;
    inline constexpr unsigned int GL_MAX_TEXTURE_SIZE = 0x0D33;
    inline constexpr unsigned int GL_MAX_TRANSFORM_FEEDBACK_BUFFERS = 0x8E70;
    inline constexpr unsigned int GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A;
    inline constexpr unsigned int GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B;
    inline constexpr unsigned int GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80;
    inline constexpr unsigned int GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30;
    inline constexpr unsigned int GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F;
    inline constexpr unsigned int GL_MAX_UNIFORM_LOCATIONS = 0x826E;
    inline constexpr unsigned int GL_MAX_VARYING_COMPONENTS = 0x8B4B;
    inline constexpr unsigned int GL_MAX_VARYING_FLOATS = 0x8B4B;
    inline constexpr unsigned int GL_MAX_VARYING_VECTORS = 0x8DFC;
    inline constexpr unsigned int GL_MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2;
    inline constexpr unsigned int GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC;
    inline constexpr unsigned int GL_MAX_VERTEX_ATTRIBS = 0x8869;
    inline constexpr unsigned int GL_MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA;
    inline constexpr unsigned int GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9;
    inline constexpr unsigned int GL_MAX_VERTEX_ATTRIB_STRIDE = 0x82E5;
    inline constexpr unsigned int GL_MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA;
    inline constexpr unsigned int GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122;
    inline constexpr unsigned int GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6;
    inline constexpr unsigned int GL_MAX_VERTEX_STREAMS = 0x8E71;
    inline constexpr unsigned int GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C;
    inline constexpr unsigned int GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B;
    inline constexpr unsigned int GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A;
    inline constexpr unsigned int GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB;
    inline constexpr unsigned int GL_MAX_VIEWPORTS = 0x825B;
    inline constexpr unsigned int GL_MAX_VIEWPORT_DIMS = 0x0D3A;
    inline constexpr unsigned int GL_MAX_VIEWS_OVR = 0x9631;
    inline constexpr unsigned int GL_MAX_WIDTH = 0x827E;
    inline constexpr unsigned int GL_MEDIUM_FLOAT = 0x8DF1;
    inline constexpr unsigned int GL_MEDIUM_INT = 0x8DF4;
    inline constexpr unsigned int GL_MIN = 0x8007;
    inline constexpr unsigned int GL_MINOR_VERSION = 0x821C;
    inline constexpr unsigned int GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B;
    inline constexpr unsigned int GL_MIN_MAP_BUFFER_ALIGNMENT = 0x90BC;
    inline constexpr unsigned int GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904;
    inline constexpr unsigned int GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E;
    inline constexpr unsigned int GL_MIN_SAMPLE_SHADING_VALUE = 0x8C37;
    inline constexpr unsigned int GL_MIPMAP = 0x8293;
    inline constexpr unsigned int GL_MIRRORED_REPEAT = 0x8370;
    inline constexpr unsigned int GL_MIRROR_CLAMP_TO_EDGE = 0x8743;
    inline constexpr unsigned int GL_MULTIPLY = 0x9294;
    inline constexpr unsigned int GL_MULTISAMPLE = 0x809D;
    inline constexpr unsigned int GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY = 0x9382;
    inline constexpr unsigned int GL_MULTISAMPLE_LINE_WIDTH_RANGE = 0x9381;
    inline constexpr unsigned int GL_NAME_LENGTH = 0x92F9;
    inline constexpr unsigned int GL_NAND = 0x150E;
    inline constexpr unsigned int GL_NEAREST = 0x2600;
    inline constexpr unsigned int GL_NEAREST_MIPMAP_LINEAR = 0x2702;
    inline constexpr unsigned int GL_NEAREST_MIPMAP_NEAREST = 0x2700;
    inline constexpr unsigned int GL_NEGATIVE_ONE_TO_ONE = 0x935E;
    inline constexpr unsigned int GL_NEGATIVE_ONE_TO_ONE_EXT = 0x935E;
    inline constexpr unsigned int GL_NEVER = 0x0200;
    inline constexpr unsigned int GL_NICEST = 0x1102;
    inline constexpr unsigned int GL_NONE = 0;
    inline constexpr unsigned int GL_NOOP = 0x1505;
    inline constexpr unsigned int GL_NOR = 0x1508;
    inline constexpr unsigned int GL_NOTEQUAL = 0x0205;
    inline constexpr unsigned int GL_NO_ERROR = 0;
    inline constexpr unsigned int GL_NO_RESET_NOTIFICATION = 0x8261;
    inline constexpr unsigned int GL_NUM_ACTIVE_VARIABLES = 0x9304;
    inline constexpr unsigned int GL_NUM_COMPATIBLE_SUBROUTINES = 0x8E4A;
    inline constexpr unsigned int GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2;
    inline constexpr unsigned int GL_NUM_EXTENSIONS = 0x821D;
    inline constexpr unsigned int GL_NUM_PROGRAM_BINARY_FORMATS = 0x87FE;
    inline constexpr unsigned int GL_NUM_SAMPLE_COUNTS = 0x9380;
    inline constexpr unsigned int GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9;
    inline constexpr unsigned int GL_NUM_SHADING_LANGUAGE_VERSIONS = 0x82E9;
    inline constexpr unsigned int GL_NUM_SPIR_V_EXTENSIONS = 0x9554;
    inline constexpr unsigned int GL_OBJECT_TYPE = 0x9112;
    inline constexpr unsigned int GL_OFFSET = 0x92FC;
    inline constexpr unsigned int GL_ONE = 1;
    inline constexpr unsigned int GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004;
    inline constexpr unsigned int GL_ONE_MINUS_CONSTANT_COLOR = 0x8002;
    inline constexpr unsigned int GL_ONE_MINUS_DST_ALPHA = 0x0305;
    inline constexpr unsigned int GL_ONE_MINUS_DST_COLOR = 0x0307;
    inline constexpr unsigned int GL_ONE_MINUS_SRC1_ALPHA = 0x88FB;
    inline constexpr unsigned int GL_ONE_MINUS_SRC1_COLOR = 0x88FA;
    inline constexpr unsigned int GL_ONE_MINUS_SRC_ALPHA = 0x0303;
    inline constexpr unsigned int GL_ONE_MINUS_SRC_COLOR = 0x0301;
    inline constexpr unsigned int GL_OR = 0x1507;
    inline constexpr unsigned int GL_OR_INVERTED = 0x150D;
    inline constexpr unsigned int GL_OR_REVERSE = 0x150B;
    inline constexpr unsigned int GL_OUT_OF_MEMORY = 0x0505;
    inline constexpr unsigned int GL_OVERLAY = 0x9296;
    inline constexpr unsigned int GL_PACK_ALIGNMENT = 0x0D05;
    inline constexpr unsigned int GL_PACK_COMPRESSED_BLOCK_DEPTH = 0x912D;
    inline constexpr unsigned int GL_PACK_COMPRESSED_BLOCK_HEIGHT = 0x912C;
    inline constexpr unsigned int GL_PACK_COMPRESSED_BLOCK_SIZE = 0x912E;
    inline constexpr unsigned int GL_PACK_COMPRESSED_BLOCK_WIDTH = 0x912B;
    inline constexpr unsigned int GL_PACK_IMAGE_HEIGHT = 0x806C;
    inline constexpr unsigned int GL_PACK_LSB_FIRST = 0x0D01;
    inline constexpr unsigned int GL_PACK_ROW_LENGTH = 0x0D02;
    inline constexpr unsigned int GL_PACK_SKIP_IMAGES = 0x806B;
    inline constexpr unsigned int GL_PACK_SKIP_PIXELS = 0x0D04;
    inline constexpr unsigned int GL_PACK_SKIP_ROWS = 0x0D03;
    inline constexpr unsigned int GL_PACK_SWAP_BYTES = 0x0D00;
    inline constexpr unsigned int GL_PARAMETER_BUFFER = 0x80EE;
    inline constexpr unsigned int GL_PARAMETER_BUFFER_BINDING = 0x80EF;
    inline constexpr unsigned int GL_PATCHES = 0x000E;
    inline constexpr unsigned int GL_PATCH_DEFAULT_INNER_LEVEL = 0x8E73;
    inline constexpr unsigned int GL_PATCH_DEFAULT_OUTER_LEVEL = 0x8E74;
    inline constexpr unsigned int GL_PATCH_VERTICES = 0x8E72;
    inline constexpr unsigned int GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080u;
    inline constexpr unsigned int GL_PIXEL_PACK_BUFFER = 0x88EB;
    inline constexpr unsigned int GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED;
    inline constexpr unsigned int GL_PIXEL_UNPACK_BUFFER = 0x88EC;
    inline constexpr unsigned int GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF;
    inline constexpr unsigned int GL_POINT = 0x1B00;
    inline constexpr unsigned int GL_POINTS = 0x0000;
    inline constexpr unsigned int GL_POINT_FADE_THRESHOLD_SIZE = 0x8128;
    inline constexpr unsigned int GL_POINT_SIZE = 0x0B11;
    inline constexpr unsigned int GL_POINT_SIZE_GRANULARITY = 0x0B13;
    inline constexpr unsigned int GL_POINT_SIZE_RANGE = 0x0B12;
    inline constexpr unsigned int GL_POINT_SPRITE_COORD_ORIGIN = 0x8CA0;
    inline constexpr unsigned int GL_POLYGON_MODE = 0x0B40;
    inline constexpr unsigned int GL_POLYGON_OFFSET_CLAMP = 0x8E1B;
    inline constexpr unsigned int GL_POLYGON_OFFSET_FACTOR = 0x8038;
    inline constexpr unsigned int GL_POLYGON_OFFSET_FILL = 0x8037;
    inline constexpr unsigned int GL_POLYGON_OFFSET_LINE = 0x2A02;
    inline constexpr unsigned int GL_POLYGON_OFFSET_POINT = 0x2A01;
    inline constexpr unsigned int GL_POLYGON_OFFSET_UNITS = 0x2A00;
    inline constexpr unsigned int GL_POLYGON_SMOOTH = 0x0B41;
    inline constexpr unsigned int GL_POLYGON_SMOOTH_HINT = 0x0C53;
    inline constexpr unsigned int GL_PRIMITIVES_GENERATED = 0x8C87;
    inline constexpr unsigned int GL_PRIMITIVES_SUBMITTED = 0x82EF;
    inline constexpr unsigned int GL_PRIMITIVE_BOUNDING_BOX = 0x92BE;
    inline constexpr unsigned int GL_PRIMITIVE_RESTART = 0x8F9D;
    inline constexpr unsigned int GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69;
    inline constexpr unsigned int GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221;
    inline constexpr unsigned int GL_PRIMITIVE_RESTART_INDEX = 0x8F9E;
    inline constexpr unsigned int GL_PROGRAM = 0x82E2;
    inline constexpr unsigned int GL_PROGRAM_BINARY_FORMATS = 0x87FF;
    inline constexpr unsigned int GL_PROGRAM_BINARY_LENGTH = 0x8741;
    inline constexpr unsigned int GL_PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257;
    inline constexpr unsigned int GL_PROGRAM_INPUT = 0x92E3;
    inline constexpr unsigned int GL_PROGRAM_KHR = 0x82E2;
    inline constexpr unsigned int GL_PROGRAM_OUTPUT = 0x92E4;
    inline constexpr unsigned int GL_PROGRAM_PIPELINE = 0x82E4;
    inline constexpr unsigned int GL_PROGRAM_PIPELINE_BINDING = 0x825A;
    inline constexpr unsigned int GL_PROGRAM_PIPELINE_KHR = 0x82E4;
    inline constexpr unsigned int GL_PROGRAM_POINT_SIZE = 0x8642;
    inline constexpr unsigned int GL_PROGRAM_SEPARABLE = 0x8258;
    inline constexpr unsigned int GL_PROVOKING_VERTEX = 0x8E4F;
    inline constexpr unsigned int GL_PROXY_TEXTURE_1D = 0x8063;
    inline constexpr unsigned int GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19;
    inline constexpr unsigned int GL_PROXY_TEXTURE_2D = 0x8064;
    inline constexpr unsigned int GL_PROXY_TEXTURE_2D_ARRAY = 0x8C1B;
    inline constexpr unsigned int GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101;
    inline constexpr unsigned int GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103;
    inline constexpr unsigned int GL_PROXY_TEXTURE_3D = 0x8070;
    inline constexpr unsigned int GL_PROXY_TEXTURE_CUBE_MAP = 0x851B;
    inline constexpr unsigned int GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B;
    inline constexpr unsigned int GL_PROXY_TEXTURE_RECTANGLE = 0x84F7;
    inline constexpr unsigned int GL_QUADS = 0x0007;
    inline constexpr unsigned int GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C;
    inline constexpr unsigned int GL_QUERY = 0x82E3;
    inline constexpr unsigned int GL_QUERY_BUFFER = 0x9192;
    inline constexpr unsigned int GL_QUERY_BUFFER_BARRIER_BIT = 0x00008000u;
    inline constexpr unsigned int GL_QUERY_BUFFER_BINDING = 0x9193;
    inline constexpr unsigned int GL_QUERY_BY_REGION_NO_WAIT = 0x8E16;
    inline constexpr unsigned int GL_QUERY_BY_REGION_NO_WAIT_INVERTED = 0x8E1A;
    inline constexpr unsigned int GL_QUERY_BY_REGION_WAIT = 0x8E15;
    inline constexpr unsigned int GL_QUERY_BY_REGION_WAIT_INVERTED = 0x8E19;
    inline constexpr unsigned int GL_QUERY_COUNTER_BITS = 0x8864;
    inline constexpr unsigned int GL_QUERY_COUNTER_BITS_EXT = 0x8864;
    inline constexpr unsigned int GL_QUERY_KHR = 0x82E3;
    inline constexpr unsigned int GL_QUERY_NO_WAIT = 0x8E14;
    inline constexpr unsigned int GL_QUERY_NO_WAIT_INVERTED = 0x8E18;
    inline constexpr unsigned int GL_QUERY_RESULT = 0x8866;
    inline constexpr unsigned int GL_QUERY_RESULT_AVAILABLE = 0x8867;
    inline constexpr unsigned int GL_QUERY_RESULT_AVAILABLE_EXT = 0x8867;
    inline constexpr unsigned int GL_QUERY_RESULT_EXT = 0x8866;
    inline constexpr unsigned int GL_QUERY_RESULT_NO_WAIT = 0x9194;
    inline constexpr unsigned int GL_QUERY_TARGET = 0x82EA;
    inline constexpr unsigned int GL_QUERY_WAIT = 0x8E13;
    inline constexpr unsigned int GL_QUERY_WAIT_INVERTED = 0x8E17;
    inline constexpr unsigned int GL_R11F_G11F_B10F = 0x8C3A;
    inline constexpr unsigned int GL_R16 = 0x822A;
    inline constexpr unsigned int GL_R16F = 0x822D;
    inline constexpr unsigned int GL_R16F_EXT = 0x822D;
    inline constexpr unsigned int GL_R16I = 0x8233;
    inline constexpr unsigned int GL_R16UI = 0x8234;
    inline constexpr unsigned int GL_R16_SNORM = 0x8F98;
    inline constexpr unsigned int GL_R32F = 0x822E;
    inline constexpr unsigned int GL_R32I = 0x8235;
    inline constexpr unsigned int GL_R32UI = 0x8236;
    inline constexpr unsigned int GL_R3_G3_B2 = 0x2A10;
    inline constexpr unsigned int GL_R8 = 0x8229;
    inline constexpr unsigned int GL_R8I = 0x8231;
    inline constexpr unsigned int GL_R8UI = 0x8232;
    inline constexpr unsigned int GL_R8_SNORM = 0x8F94;
    inline constexpr unsigned int GL_RASTERIZER_DISCARD = 0x8C89;
    inline constexpr unsigned int GL_READ_BUFFER = 0x0C02;
    inline constexpr unsigned int GL_READ_FRAMEBUFFER = 0x8CA8;
    inline constexpr unsigned int GL_READ_FRAMEBUFFER_BINDING = 0x8CAA;
    inline constexpr unsigned int GL_READ_ONLY = 0x88B8;
    inline constexpr unsigned int GL_READ_PIXELS = 0x828C;
    inline constexpr unsigned int GL_READ_PIXELS_FORMAT = 0x828D;
    inline constexpr unsigned int GL_READ_PIXELS_TYPE = 0x828E;
    inline constexpr unsigned int GL_READ_WRITE = 0x88BA;
    inline constexpr unsigned int GL_RED = 0x1903;
    inline constexpr unsigned int GL_RED_BITS = 0x0D52;
    inline constexpr unsigned int GL_RED_INTEGER = 0x8D94;
    inline constexpr unsigned int GL_REFERENCED_BY_COMPUTE_SHADER = 0x930B;
    inline constexpr unsigned int GL_REFERENCED_BY_FRAGMENT_SHADER = 0x930A;
    inline constexpr unsigned int GL_REFERENCED_BY_GEOMETRY_SHADER = 0x9309;
    inline constexpr unsigned int GL_REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307;
    inline constexpr unsigned int GL_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308;
    inline constexpr unsigned int GL_REFERENCED_BY_VERTEX_SHADER = 0x9306;
    inline constexpr unsigned int GL_RENDERBUFFER = 0x8D41;
    inline constexpr unsigned int GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53;
    inline constexpr unsigned int GL_RENDERBUFFER_BINDING = 0x8CA7;
    inline constexpr unsigned int GL_RENDERBUFFER_BLUE_SIZE = 0x8D52;
    inline constexpr unsigned int GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54;
    inline constexpr unsigned int GL_RENDERBUFFER_GREEN_SIZE = 0x8D51;
    inline constexpr unsigned int GL_RENDERBUFFER_HEIGHT = 0x8D43;
    inline constexpr unsigned int GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44;
    inline constexpr unsigned int GL_RENDERBUFFER_RED_SIZE = 0x8D50;
    inline constexpr unsigned int GL_RENDERBUFFER_SAMPLES = 0x8CAB;
    inline constexpr unsigned int GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55;
    inline constexpr unsigned int GL_RENDERBUFFER_WIDTH = 0x8D42;
    inline constexpr unsigned int GL_RENDERER = 0x1F01;
    inline constexpr unsigned int GL_REPEAT = 0x2901;
    inline constexpr unsigned int GL_REPLACE = 0x1E01;
    inline constexpr unsigned int GL_RESET_NOTIFICATION_STRATEGY = 0x8256;
    inline constexpr unsigned int GL_RG = 0x8227;
    inline constexpr unsigned int GL_RG16 = 0x822C;
    inline constexpr unsigned int GL_RG16F = 0x822F;
    inline constexpr unsigned int GL_RG16F_EXT = 0x822F;
    inline constexpr unsigned int GL_RG16I = 0x8239;
    inline constexpr unsigned int GL_RG16UI = 0x823A;
    inline constexpr unsigned int GL_RG16_SNORM = 0x8F99;
    inline constexpr unsigned int GL_RG32F = 0x8230;
    inline constexpr unsigned int GL_RG32I = 0x823B;
    inline constexpr unsigned int GL_RG32UI = 0x823C;
    inline constexpr unsigned int GL_RG8 = 0x822B;
    inline constexpr unsigned int GL_RG8I = 0x8237;
    inline constexpr unsigned int GL_RG8UI = 0x8238;
    inline constexpr unsigned int GL_RG8_SNORM = 0x8F95;
    inline constexpr unsigned int GL_RGB = 0x1907;
    inline constexpr unsigned int GL_RGB10 = 0x8052;
    inline constexpr unsigned int GL_RGB10_A2 = 0x8059;
    inline constexpr unsigned int GL_RGB10_A2UI = 0x906F;
    inline constexpr unsigned int GL_RGB12 = 0x8053;
    inline constexpr unsigned int GL_RGB16 = 0x8054;
    inline constexpr unsigned int GL_RGB16F = 0x881B;
    inline constexpr unsigned int GL_RGB16F_EXT = 0x881B;
    inline constexpr unsigned int GL_RGB16I = 0x8D89;
    inline constexpr unsigned int GL_RGB16UI = 0x8D77;
    inline constexpr unsigned int GL_RGB16_SNORM = 0x8F9A;
    inline constexpr unsigned int GL_RGB32F = 0x8815;
    inline constexpr unsigned int GL_RGB32I = 0x8D83;
    inline constexpr unsigned int GL_RGB32UI = 0x8D71;
    inline constexpr unsigned int GL_RGB4 = 0x804F;
    inline constexpr unsigned int GL_RGB5 = 0x8050;
    inline constexpr unsigned int GL_RGB565 = 0x8D62;
    inline constexpr unsigned int GL_RGB5_A1 = 0x8057;
    inline constexpr unsigned int GL_RGB8 = 0x8051;
    inline constexpr unsigned int GL_RGB8I = 0x8D8F;
    inline constexpr unsigned int GL_RGB8UI = 0x8D7D;
    inline constexpr unsigned int GL_RGB8_SNORM = 0x8F96;
    inline constexpr unsigned int GL_RGB9_E5 = 0x8C3D;
    inline constexpr unsigned int GL_RGBA = 0x1908;
    inline constexpr unsigned int GL_RGBA12 = 0x805A;
    inline constexpr unsigned int GL_RGBA16 = 0x805B;
    inline constexpr unsigned int GL_RGBA16F = 0x881A;
    inline constexpr unsigned int GL_RGBA16F_EXT = 0x881A;
    inline constexpr unsigned int GL_RGBA16I = 0x8D88;
    inline constexpr unsigned int GL_RGBA16UI = 0x8D76;
    inline constexpr unsigned int GL_RGBA16_SNORM = 0x8F9B;
    inline constexpr unsigned int GL_RGBA2 = 0x8055;
    inline constexpr unsigned int GL_RGBA32F = 0x8814;
    inline constexpr unsigned int GL_RGBA32I = 0x8D82;
    inline constexpr unsigned int GL_RGBA32UI = 0x8D70;
    inline constexpr unsigned int GL_RGBA4 = 0x8056;
    inline constexpr unsigned int GL_RGBA8 = 0x8058;
    inline constexpr unsigned int GL_RGBA8I = 0x8D8E;
    inline constexpr unsigned int GL_RGBA8UI = 0x8D7C;
    inline constexpr unsigned int GL_RGBA8_SNORM = 0x8F97;
    inline constexpr unsigned int GL_RGBA_INTEGER = 0x8D99;
    inline constexpr unsigned int GL_RGB_INTEGER = 0x8D98;
    inline constexpr unsigned int GL_RG_INTEGER = 0x8228;
    inline constexpr unsigned int GL_RIGHT = 0x0407;
    inline constexpr unsigned int GL_SAMPLER = 0x82E6;
    inline constexpr unsigned int GL_SAMPLER_1D = 0x8B5D;
    inline constexpr unsigned int GL_SAMPLER_1D_ARRAY = 0x8DC0;
    inline constexpr unsigned int GL_SAMPLER_1D_ARRAY_SHADOW = 0x8DC3;
    inline constexpr unsigned int GL_SAMPLER_1D_SHADOW = 0x8B61;
    inline constexpr unsigned int GL_SAMPLER_2D = 0x8B5E;
    inline constexpr unsigned int GL_SAMPLER_2D_ARRAY = 0x8DC1;
    inline constexpr unsigned int GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4;
    inline constexpr unsigned int GL_SAMPLER_2D_MULTISAMPLE = 0x9108;
    inline constexpr unsigned int GL_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B;
    inline constexpr unsigned int GL_SAMPLER_2D_RECT = 0x8B63;
    inline constexpr unsigned int GL_SAMPLER_2D_RECT_SHADOW = 0x8B64;
    inline constexpr unsigned int GL_SAMPLER_2D_SHADOW = 0x8B62;
    inline constexpr unsigned int GL_SAMPLER_3D = 0x8B5F;
    inline constexpr unsigned int GL_SAMPLER_BINDING = 0x8919;
    inline constexpr unsigned int GL_SAMPLER_BUFFER = 0x8DC2;
    inline constexpr unsigned int GL_SAMPLER_CUBE = 0x8B60;
    inline constexpr unsigned int GL_SAMPLER_CUBE_MAP_ARRAY = 0x900C;
    inline constexpr unsigned int GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D;
    inline constexpr unsigned int GL_SAMPLER_CUBE_SHADOW = 0x8DC5;
    inline constexpr unsigned int GL_SAMPLER_KHR = 0x82E6;
    inline constexpr unsigned int GL_SAMPLES = 0x80A9;
    inline constexpr unsigned int GL_SAMPLES_PASSED = 0x8914;
    inline constexpr unsigned int GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E;
    inline constexpr unsigned int GL_SAMPLE_ALPHA_TO_ONE = 0x809F;
    inline constexpr unsigned int GL_SAMPLE_BUFFERS = 0x80A8;
    inline constexpr unsigned int GL_SAMPLE_COVERAGE = 0x80A0;
    inline constexpr unsigned int GL_SAMPLE_COVERAGE_INVERT = 0x80AB;
    inline constexpr unsigned int GL_SAMPLE_COVERAGE_VALUE = 0x80AA;
    inline constexpr unsigned int GL_SAMPLE_MASK = 0x8E51;
    inline constexpr unsigned int GL_SAMPLE_MASK_VALUE = 0x8E52;
    inline constexpr unsigned int GL_SAMPLE_POSITION = 0x8E50;
    inline constexpr unsigned int GL_SAMPLE_SHADING = 0x8C36;
    inline constexpr unsigned int GL_SCISSOR_BOX = 0x0C10;
    inline constexpr unsigned int GL_SCISSOR_TEST = 0x0C11;
    inline constexpr unsigned int GL_SCREEN = 0x9295;
    inline constexpr unsigned int GL_SEPARATE_ATTRIBS = 0x8C8D;
    inline constexpr unsigned int GL_SET = 0x150F;
    inline constexpr unsigned int GL_SHADER = 0x82E1;
    inline constexpr unsigned int GL_SHADER_BINARY_FORMATS = 0x8DF8;
    inline constexpr unsigned int GL_SHADER_BINARY_FORMAT_SPIR_V = 0x9551;
    inline constexpr unsigned int GL_SHADER_COMPILER = 0x8DFA;
    inline constexpr unsigned int GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020u;
    inline constexpr unsigned int GL_SHADER_IMAGE_ATOMIC = 0x82A6;
    inline constexpr unsigned int GL_SHADER_IMAGE_LOAD = 0x82A4;
    inline constexpr unsigned int GL_SHADER_IMAGE_STORE = 0x82A5;
    inline constexpr unsigned int GL_SHADER_KHR = 0x82E1;
    inline constexpr unsigned int GL_SHADER_SOURCE_LENGTH = 0x8B88;
    inline constexpr unsigned int GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000u;
    inline constexpr unsigned int GL_SHADER_STORAGE_BLOCK = 0x92E6;
    inline constexpr unsigned int GL_SHADER_STORAGE_BUFFER = 0x90D2;
    inline constexpr unsigned int GL_SHADER_STORAGE_BUFFER_BINDING = 0x90D3;
    inline constexpr unsigned int GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF;
    inline constexpr unsigned int GL_SHADER_STORAGE_BUFFER_SIZE = 0x90D5;
    inline constexpr unsigned int GL_SHADER_STORAGE_BUFFER_START = 0x90D4;
    inline constexpr unsigned int GL_SHADER_TYPE = 0x8B4F;
    inline constexpr unsigned int GL_SHADING_LANGUAGE_VERSION = 0x8B8C;
    inline constexpr unsigned int GL_SHORT = 0x1402;
    inline constexpr unsigned int GL_SIGNALED = 0x9119;
    inline constexpr unsigned int GL_SIGNED_NORMALIZED = 0x8F9C;
    inline constexpr unsigned int GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC;
    inline constexpr unsigned int GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE;
    inline constexpr unsigned int GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD;
    inline constexpr unsigned int GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF;
    inline constexpr unsigned int GL_SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23;
    inline constexpr unsigned int GL_SMOOTH_LINE_WIDTH_RANGE = 0x0B22;
    inline constexpr unsigned int GL_SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13;
    inline constexpr unsigned int GL_SMOOTH_POINT_SIZE_RANGE = 0x0B12;
    inline constexpr unsigned int GL_SOFTLIGHT = 0x929C;
    inline constexpr unsigned int GL_SPIR_V_BINARY = 0x9552;
    inline constexpr unsigned int GL_SPIR_V_EXTENSIONS = 0x9553;
    inline constexpr unsigned int GL_SRC1_ALPHA = 0x8589;
    inline constexpr unsigned int GL_SRC1_COLOR = 0x88F9;
    inline constexpr unsigned int GL_SRC_ALPHA = 0x0302;
    inline constexpr unsigned int GL_SRC_ALPHA_SATURATE = 0x0308;
    inline constexpr unsigned int GL_SRC_COLOR = 0x0300;
    inline constexpr unsigned int GL_SRGB = 0x8C40;
    inline constexpr unsigned int GL_SRGB8 = 0x8C41;
    inline constexpr unsigned int GL_SRGB8_ALPHA8 = 0x8C43;
    inline constexpr unsigned int GL_SRGB_ALPHA = 0x8C42;
    inline constexpr unsigned int GL_SRGB_READ = 0x8297;
    inline constexpr unsigned int GL_SRGB_WRITE = 0x8298;
    inline constexpr unsigned int GL_STACK_OVERFLOW = 0x0503;
    inline constexpr unsigned int GL_STACK_OVERFLOW_KHR = 0x0503;
    inline constexpr unsigned int GL_STACK_UNDERFLOW = 0x0504;
    inline constexpr unsigned int GL_STACK_UNDERFLOW_KHR = 0x0504;
    inline constexpr unsigned int GL_STATIC_COPY = 0x88E6;
    inline constexpr unsigned int GL_STATIC_DRAW = 0x88E4;
    inline constexpr unsigned int GL_STATIC_READ = 0x88E5;
    inline constexpr unsigned int GL_STENCIL = 0x1802;
    inline constexpr unsigned int GL_STENCIL_ATTACHMENT = 0x8D20;
    inline constexpr unsigned int GL_STENCIL_BACK_FAIL = 0x8801;
    inline constexpr unsigned int GL_STENCIL_BACK_FUNC = 0x8800;
    inline constexpr unsigned int GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802;
    inline constexpr unsigned int GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803;
    inline constexpr unsigned int GL_STENCIL_BACK_REF = 0x8CA3;
    inline constexpr unsigned int GL_STENCIL_BACK_VALUE_MASK = 0x8CA4;
    inline constexpr unsigned int GL_STENCIL_BACK_WRITEMASK = 0x8CA5;
    inline constexpr unsigned int GL_STENCIL_BITS = 0x0D57;
    inline constexpr unsigned int GL_STENCIL_BUFFER_BIT = 0x00000400u;
    inline constexpr unsigned int GL_STENCIL_CLEAR_VALUE = 0x0B91;
    inline constexpr unsigned int GL_STENCIL_COMPONENTS = 0x8285;
    inline constexpr unsigned int GL_STENCIL_FAIL = 0x0B94;
    inline constexpr unsigned int GL_STENCIL_FUNC = 0x0B92;
    inline constexpr unsigned int GL_STENCIL_INDEX = 0x1901;
    inline constexpr unsigned int GL_STENCIL_INDEX1 = 0x8D46;
    inline constexpr unsigned int GL_STENCIL_INDEX16 = 0x8D49;
    inline constexpr unsigned int GL_STENCIL_INDEX4 = 0x8D47;
    inline constexpr unsigned int GL_STENCIL_INDEX8 = 0x8D48;
    inline constexpr unsigned int GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95;
    inline constexpr unsigned int GL_STENCIL_PASS_DEPTH_PASS = 0x0B96;
    inline constexpr unsigned int GL_STENCIL_REF = 0x0B97;
    inline constexpr unsigned int GL_STENCIL_RENDERABLE = 0x8288;
    inline constexpr unsigned int GL_STENCIL_TEST = 0x0B90;
    inline constexpr unsigned int GL_STENCIL_VALUE_MASK = 0x0B93;
    inline constexpr unsigned int GL_STENCIL_WRITEMASK = 0x0B98;
    inline constexpr unsigned int GL_STEREO = 0x0C33;
    inline constexpr unsigned int GL_STREAM_COPY = 0x88E2;
    inline constexpr unsigned int GL_STREAM_DRAW = 0x88E0;
    inline constexpr unsigned int GL_STREAM_READ = 0x88E1;
    inline constexpr unsigned int GL_SUBPIXEL_BITS = 0x0D50;
    inline constexpr unsigned int GL_SYNC_CONDITION = 0x9113;
    inline constexpr unsigned int GL_SYNC_FENCE = 0x9116;
    inline constexpr unsigned int GL_SYNC_FLAGS = 0x9115;
    inline constexpr unsigned int GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001u;
    inline constexpr unsigned int GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117;
    inline constexpr unsigned int GL_SYNC_STATUS = 0x9114;
    inline constexpr unsigned int GL_TESS_CONTROL_OUTPUT_VERTICES = 0x8E75;
    inline constexpr unsigned int GL_TESS_CONTROL_SHADER = 0x8E88;
    inline constexpr unsigned int GL_TESS_CONTROL_SHADER_BIT = 0x00000008u;
    inline constexpr unsigned int GL_TESS_CONTROL_SHADER_PATCHES = 0x82F1;
    inline constexpr unsigned int GL_TESS_CONTROL_SUBROUTINE = 0x92E9;
    inline constexpr unsigned int GL_TESS_CONTROL_SUBROUTINE_UNIFORM = 0x92EF;
    inline constexpr unsigned int GL_TESS_CONTROL_TEXTURE = 0x829C;
    inline constexpr unsigned int GL_TESS_EVALUATION_SHADER = 0x8E87;
    inline constexpr unsigned int GL_TESS_EVALUATION_SHADER_BIT = 0x00000010u;
    inline constexpr unsigned int GL_TESS_EVALUATION_SHADER_INVOCATIONS = 0x82F2;
    inline constexpr unsigned int GL_TESS_EVALUATION_SUBROUTINE = 0x92EA;
    inline constexpr unsigned int GL_TESS_EVALUATION_SUBROUTINE_UNIFORM = 0x92F0;
    inline constexpr unsigned int GL_TESS_EVALUATION_TEXTURE = 0x829D;
    inline constexpr unsigned int GL_TESS_GEN_MODE = 0x8E76;
    inline constexpr unsigned int GL_TESS_GEN_POINT_MODE = 0x8E79;
    inline constexpr unsigned int GL_TESS_GEN_SPACING = 0x8E77;
    inline constexpr unsigned int GL_TESS_GEN_VERTEX_ORDER = 0x8E78;
    inline constexpr unsigned int GL_TEXTURE = 0x1702;
    inline constexpr unsigned int GL_TEXTURE0 = 0x84C0;
    inline constexpr unsigned int GL_TEXTURE1 = 0x84C1;
    inline constexpr unsigned int GL_TEXTURE10 = 0x84CA;
    inline constexpr unsigned int GL_TEXTURE11 = 0x84CB;
    inline constexpr unsigned int GL_TEXTURE12 = 0x84CC;
    inline constexpr unsigned int GL_TEXTURE13 = 0x84CD;
    inline constexpr unsigned int GL_TEXTURE14 = 0x84CE;
    inline constexpr unsigned int GL_TEXTURE15 = 0x84CF;
    inline constexpr unsigned int GL_TEXTURE16 = 0x84D0;
    inline constexpr unsigned int GL_TEXTURE17 = 0x84D1;
    inline constexpr unsigned int GL_TEXTURE18 = 0x84D2;
    inline constexpr unsigned int GL_TEXTURE19 = 0x84D3;
    inline constexpr unsigned int GL_TEXTURE2 = 0x84C2;
    inline constexpr unsigned int GL_TEXTURE20 = 0x84D4;
    inline constexpr unsigned int GL_TEXTURE21 = 0x84D5;
    inline constexpr unsigned int GL_TEXTURE22 = 0x84D6;
    inline constexpr unsigned int GL_TEXTURE23 = 0x84D7;
    inline constexpr unsigned int GL_TEXTURE24 = 0x84D8;
    inline constexpr unsigned int GL_TEXTURE25 = 0x84D9;
    inline constexpr unsigned int GL_TEXTURE26 = 0x84DA;
    inline constexpr unsigned int GL_TEXTURE27 = 0x84DB;
    inline constexpr unsigned int GL_TEXTURE28 = 0x84DC;
    inline constexpr unsigned int GL_TEXTURE29 = 0x84DD;
    inline constexpr unsigned int GL_TEXTURE3 = 0x84C3;
    inline constexpr unsigned int GL_TEXTURE30 = 0x84DE;
    inline constexpr unsigned int GL_TEXTURE31 = 0x84DF;
    inline constexpr unsigned int GL_TEXTURE4 = 0x84C4;
    inline constexpr unsigned int GL_TEXTURE5 = 0x84C5;
    inline constexpr unsigned int GL_TEXTURE6 = 0x84C6;
    inline constexpr unsigned int GL_TEXTURE7 = 0x84C7;
    inline constexpr unsigned int GL_TEXTURE8 = 0x84C8;
    inline constexpr unsigned int GL_TEXTURE9 = 0x84C9;
    inline constexpr unsigned int GL_TEXTURE_1D = 0x0DE0;
    inline constexpr unsigned int GL_TEXTURE_1D_ARRAY = 0x8C18;
    inline constexpr unsigned int GL_TEXTURE_2D = 0x0DE1;
    inline constexpr unsigned int GL_TEXTURE_2D_ARRAY = 0x8C1A;
    inline constexpr unsigned int GL_TEXTURE_2D_MULTISAMPLE = 0x9100;
    inline constexpr unsigned int GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102;
    inline constexpr unsigned int GL_TEXTURE_3D = 0x806F;
    inline constexpr unsigned int GL_TEXTURE_ALPHA_SIZE = 0x805F;
    inline constexpr unsigned int GL_TEXTURE_ALPHA_TYPE = 0x8C13;
    inline constexpr unsigned int GL_TEXTURE_BASE_LEVEL = 0x813C;
    inline constexpr unsigned int GL_TEXTURE_BINDING_1D = 0x8068;
    inline constexpr unsigned int GL_TEXTURE_BINDING_1D_ARRAY = 0x8C1C;
    inline constexpr unsigned int GL_TEXTURE_BINDING_2D = 0x8069;
    inline constexpr unsigned int GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D;
    inline constexpr unsigned int GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104;
    inline constexpr unsigned int GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105;
    inline constexpr unsigned int GL_TEXTURE_BINDING_3D = 0x806A;
    inline constexpr unsigned int GL_TEXTURE_BINDING_BUFFER = 0x8C2C;
    inline constexpr unsigned int GL_TEXTURE_BINDING_CUBE_MAP = 0x8514;
    inline constexpr unsigned int GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A;
    inline constexpr unsigned int GL_TEXTURE_BINDING_RECTANGLE = 0x84F6;
    inline constexpr unsigned int GL_TEXTURE_BLUE_SIZE = 0x805E;
    inline constexpr unsigned int GL_TEXTURE_BLUE_TYPE = 0x8C12;
    inline constexpr unsigned int GL_TEXTURE_BORDER_COLOR = 0x1004;
    inline constexpr unsigned int GL_TEXTURE_BUFFER = 0x8C2A;
    inline constexpr unsigned int GL_TEXTURE_BUFFER_BINDING = 0x8C2A;
    inline constexpr unsigned int GL_TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D;
    inline constexpr unsigned int GL_TEXTURE_BUFFER_OFFSET = 0x919D;
    inline constexpr unsigned int GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F;
    inline constexpr unsigned int GL_TEXTURE_BUFFER_SIZE = 0x919E;
    inline constexpr unsigned int GL_TEXTURE_COMPARE_FUNC = 0x884D;
    inline constexpr unsigned int GL_TEXTURE_COMPARE_MODE = 0x884C;
    inline constexpr unsigned int GL_TEXTURE_COMPRESSED = 0x86A1;
    inline constexpr unsigned int GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2;
    inline constexpr unsigned int GL_TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3;
    inline constexpr unsigned int GL_TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1;
    inline constexpr unsigned int GL_TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0;
    inline constexpr unsigned int GL_TEXTURE_COMPRESSION_HINT = 0x84EF;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP = 0x8513;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519;
    inline constexpr unsigned int GL_TEXTURE_CUBE_MAP_SEAMLESS = 0x884F;
    inline constexpr unsigned int GL_TEXTURE_DEPTH = 0x8071;
    inline constexpr unsigned int GL_TEXTURE_DEPTH_SIZE = 0x884A;
    inline constexpr unsigned int GL_TEXTURE_DEPTH_TYPE = 0x8C16;
    inline constexpr unsigned int GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008u;
    inline constexpr unsigned int GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107;
    inline constexpr unsigned int GL_TEXTURE_GATHER = 0x82A2;
    inline constexpr unsigned int GL_TEXTURE_GATHER_SHADOW = 0x82A3;
    inline constexpr unsigned int GL_TEXTURE_GREEN_SIZE = 0x805D;
    inline constexpr unsigned int GL_TEXTURE_GREEN_TYPE = 0x8C11;
    inline constexpr unsigned int GL_TEXTURE_HEIGHT = 0x1001;
    inline constexpr unsigned int GL_TEXTURE_IMAGE_FORMAT = 0x828F;
    inline constexpr unsigned int GL_TEXTURE_IMAGE_TYPE = 0x8290;
    inline constexpr unsigned int GL_TEXTURE_IMMUTABLE_FORMAT = 0x912F;
    inline constexpr unsigned int GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF;
    inline constexpr unsigned int GL_TEXTURE_INTERNAL_FORMAT = 0x1003;
    inline constexpr unsigned int GL_TEXTURE_LOD_BIAS = 0x8501;
    inline constexpr unsigned int GL_TEXTURE_MAG_FILTER = 0x2800;
    inline constexpr unsigned int GL_TEXTURE_MAX_ANISOTROPY = 0x84FE;
    inline constexpr unsigned int GL_TEXTURE_MAX_ANISOTROPY_EXT = 0x84FE;
    inline constexpr unsigned int GL_TEXTURE_MAX_LEVEL = 0x813D;
    inline constexpr unsigned int GL_TEXTURE_MAX_LOD = 0x813B;
    inline constexpr unsigned int GL_TEXTURE_MIN_FILTER = 0x2801;
    inline constexpr unsigned int GL_TEXTURE_MIN_LOD = 0x813A;
    inline constexpr unsigned int GL_TEXTURE_RECTANGLE = 0x84F5;
    inline constexpr unsigned int GL_TEXTURE_RED_SIZE = 0x805C;
    inline constexpr unsigned int GL_TEXTURE_RED_TYPE = 0x8C10;
    inline constexpr unsigned int GL_TEXTURE_SAMPLES = 0x9106;
    inline constexpr unsigned int GL_TEXTURE_SHADOW = 0x82A1;
    inline constexpr unsigned int GL_TEXTURE_SHARED_SIZE = 0x8C3F;
    inline constexpr unsigned int GL_TEXTURE_STENCIL_SIZE = 0x88F1;
    inline constexpr unsigned int GL_TEXTURE_SWIZZLE_A = 0x8E45;
    inline constexpr unsigned int GL_TEXTURE_SWIZZLE_B = 0x8E44;
    inline constexpr unsigned int GL_TEXTURE_SWIZZLE_G = 0x8E43;
    inline constexpr unsigned int GL_TEXTURE_SWIZZLE_R = 0x8E42;
    inline constexpr unsigned int GL_TEXTURE_SWIZZLE_RGBA = 0x8E46;
    inline constexpr unsigned int GL_TEXTURE_TARGET = 0x1006;
    inline constexpr unsigned int GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100u;
    inline constexpr unsigned int GL_TEXTURE_VIEW = 0x82B5;
    inline constexpr unsigned int GL_TEXTURE_VIEW_MIN_LAYER = 0x82DD;
    inline constexpr unsigned int GL_TEXTURE_VIEW_MIN_LEVEL = 0x82DB;
    inline constexpr unsigned int GL_TEXTURE_VIEW_NUM_LAYERS = 0x82DE;
    inline constexpr unsigned int GL_TEXTURE_VIEW_NUM_LEVELS = 0x82DC;
    inline constexpr unsigned int GL_TEXTURE_WIDTH = 0x1000;
    inline constexpr unsigned int GL_TEXTURE_WRAP_R = 0x8072;
    inline constexpr unsigned int GL_TEXTURE_WRAP_S = 0x2802;
    inline constexpr unsigned int GL_TEXTURE_WRAP_T = 0x2803;
    inline constexpr unsigned int GL_TIMEOUT_EXPIRED = 0x911B;
    inline constexpr unsigned long long GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFFull;
    inline constexpr unsigned int GL_TIMESTAMP = 0x8E28;
    inline constexpr unsigned int GL_TIMESTAMP_EXT = 0x8E28;
    inline constexpr unsigned int GL_TIME_ELAPSED = 0x88BF;
    inline constexpr unsigned int GL_TIME_ELAPSED_EXT = 0x88BF;
    inline constexpr unsigned int GL_TOP_LEVEL_ARRAY_SIZE = 0x930C;
    inline constexpr unsigned int GL_TOP_LEVEL_ARRAY_STRIDE = 0x930D;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK = 0x8E22;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_ACTIVE = 0x8E24;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800u;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BINDING = 0x8E25;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE = 0x8E24;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_INDEX = 0x934B;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED = 0x8E23;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE = 0x934C;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_OVERFLOW = 0x82EC;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_PAUSED = 0x8E23;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW = 0x82ED;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_VARYING = 0x92F4;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83;
    inline constexpr unsigned int GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76;
    inline constexpr unsigned int GL_TRIANGLES = 0x0004;
    inline constexpr unsigned int GL_TRIANGLES_ADJACENCY = 0x000C;
    inline constexpr unsigned int GL_TRIANGLE_FAN = 0x0006;
    inline constexpr unsigned int GL_TRIANGLE_STRIP = 0x0005;
    inline constexpr unsigned int GL_TRIANGLE_STRIP_ADJACENCY = 0x000D;
    inline constexpr unsigned int GL_TRUE = 1;
    inline constexpr unsigned int GL_TYPE = 0x92FA;
    inline constexpr unsigned int GL_UNDEFINED_VERTEX = 0x8260;
    inline constexpr unsigned int GL_UNIFORM = 0x92E1;
    inline constexpr unsigned int GL_UNIFORM_ARRAY_STRIDE = 0x8A3C;
    inline constexpr unsigned int GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = 0x92DA;
    inline constexpr unsigned int GL_UNIFORM_BARRIER_BIT = 0x00000004u;
    inline constexpr unsigned int GL_UNIFORM_BLOCK = 0x92E2;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_BINDING = 0x8A3F;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_INDEX = 0x8A3A;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = 0x90EC;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1;
    inline constexpr unsigned int GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44;
    inline constexpr unsigned int GL_UNIFORM_BUFFER = 0x8A11;
    inline constexpr unsigned int GL_UNIFORM_BUFFER_BINDING = 0x8A28;
    inline constexpr unsigned int GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34;
    inline constexpr unsigned int GL_UNIFORM_BUFFER_SIZE = 0x8A2A;
    inline constexpr unsigned int GL_UNIFORM_BUFFER_START = 0x8A29;
    inline constexpr unsigned int GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E;
    inline constexpr unsigned int GL_UNIFORM_MATRIX_STRIDE = 0x8A3D;
    inline constexpr unsigned int GL_UNIFORM_NAME_LENGTH = 0x8A39;
    inline constexpr unsigned int GL_UNIFORM_OFFSET = 0x8A3B;
    inline constexpr unsigned int GL_UNIFORM_SIZE = 0x8A38;
    inline constexpr unsigned int GL_UNIFORM_TYPE = 0x8A37;
    inline constexpr unsigned int GL_UNKNOWN_CONTEXT_RESET = 0x8255;
    inline constexpr unsigned int GL_UNPACK_ALIGNMENT = 0x0CF5;
    inline constexpr unsigned int GL_UNPACK_COMPRESSED_BLOCK_DEPTH = 0x9129;
    inline constexpr unsigned int GL_UNPACK_COMPRESSED_BLOCK_HEIGHT = 0x9128;
    inline constexpr unsigned int GL_UNPACK_COMPRESSED_BLOCK_SIZE = 0x912A;
    inline constexpr unsigned int GL_UNPACK_COMPRESSED_BLOCK_WIDTH = 0x9127;
    inline constexpr unsigned int GL_UNPACK_IMAGE_HEIGHT = 0x806E;
    inline constexpr unsigned int GL_UNPACK_LSB_FIRST = 0x0CF1;
    inline constexpr unsigned int GL_UNPACK_ROW_LENGTH = 0x0CF2;
    inline constexpr unsigned int GL_UNPACK_SKIP_IMAGES = 0x806D;
    inline constexpr unsigned int GL_UNPACK_SKIP_PIXELS = 0x0CF4;
    inline constexpr unsigned int GL_UNPACK_SKIP_ROWS = 0x0CF3;
    inline constexpr unsigned int GL_UNPACK_SWAP_BYTES = 0x0CF0;
    inline constexpr unsigned int GL_UNSIGNALED = 0x9118;
    inline constexpr unsigned int GL_UNSIGNED_BYTE = 0x1401;
    inline constexpr unsigned int GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362;
    inline constexpr unsigned int GL_UNSIGNED_BYTE_3_3_2 = 0x8032;
    inline constexpr unsigned int GL_UNSIGNED_INT = 0x1405;
    inline constexpr unsigned int GL_UNSIGNED_INT64_ARB = 0x140F;
    inline constexpr unsigned int GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B;
    inline constexpr unsigned int GL_UNSIGNED_INT_10_10_10_2 = 0x8036;
    inline constexpr unsigned int GL_UNSIGNED_INT_24_8 = 0x84FA;
    inline constexpr unsigned int GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368;
    inline constexpr unsigned int GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E;
    inline constexpr unsigned int GL_UNSIGNED_INT_8_8_8_8 = 0x8035;
    inline constexpr unsigned int GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367;
    inline constexpr unsigned int GL_UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_1D = 0x9062;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_1D_ARRAY = 0x9068;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_2D = 0x9063;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = 0x906B;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x906C;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_2D_RECT = 0x9065;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_3D = 0x9064;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_BUFFER = 0x9067;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_CUBE = 0x9066;
    inline constexpr unsigned int GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_1D = 0x8DD1;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4;
    inline constexpr unsigned int GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F;
    inline constexpr unsigned int GL_UNSIGNED_INT_VEC2 = 0x8DC6;
    inline constexpr unsigned int GL_UNSIGNED_INT_VEC3 = 0x8DC7;
    inline constexpr unsigned int GL_UNSIGNED_INT_VEC4 = 0x8DC8;
    inline constexpr unsigned int GL_UNSIGNED_NORMALIZED = 0x8C17;
    inline constexpr unsigned int GL_UNSIGNED_NORMALIZED_EXT = 0x8C17;
    inline constexpr unsigned int GL_UNSIGNED_SHORT = 0x1403;
    inline constexpr unsigned int GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366;
    inline constexpr unsigned int GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033;
    inline constexpr unsigned int GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365;
    inline constexpr unsigned int GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034;
    inline constexpr unsigned int GL_UNSIGNED_SHORT_5_6_5 = 0x8363;
    inline constexpr unsigned int GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364;
    inline constexpr unsigned int GL_UPPER_LEFT = 0x8CA2;
    inline constexpr unsigned int GL_UPPER_LEFT_EXT = 0x8CA2;
    inline constexpr unsigned int GL_VALIDATE_STATUS = 0x8B83;
    inline constexpr unsigned int GL_VENDOR = 0x1F00;
    inline constexpr unsigned int GL_VERSION = 0x1F02;
    inline constexpr unsigned int GL_VERTEX_ARRAY = 0x8074;
    inline constexpr unsigned int GL_VERTEX_ARRAY_BINDING = 0x85B5;
    inline constexpr unsigned int GL_VERTEX_ARRAY_KHR = 0x8074;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001u;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_LONG = 0x874E;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_BINDING = 0x82D4;
    inline constexpr unsigned int GL_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5;
    inline constexpr unsigned int GL_VERTEX_BINDING_BUFFER = 0x8F4F;
    inline constexpr unsigned int GL_VERTEX_BINDING_DIVISOR = 0x82D6;
    inline constexpr unsigned int GL_VERTEX_BINDING_OFFSET = 0x82D7;
    inline constexpr unsigned int GL_VERTEX_BINDING_STRIDE = 0x82D8;
    inline constexpr unsigned int GL_VERTEX_PROGRAM_POINT_SIZE = 0x8642;
    inline constexpr unsigned int GL_VERTEX_SHADER = 0x8B31;
    inline constexpr unsigned int GL_VERTEX_SHADER_BIT = 0x00000001u;
    inline constexpr unsigned int GL_VERTEX_SHADER_INVOCATIONS = 0x82F0;
    inline constexpr unsigned int GL_VERTEX_SUBROUTINE = 0x92E8;
    inline constexpr unsigned int GL_VERTEX_SUBROUTINE_UNIFORM = 0x92EE;
    inline constexpr unsigned int GL_VERTEX_TEXTURE = 0x829B;
    inline constexpr unsigned int GL_VERTICES_SUBMITTED = 0x82EE;
    inline constexpr unsigned int GL_VIEWPORT = 0x0BA2;
    inline constexpr unsigned int GL_VIEWPORT_BOUNDS_RANGE = 0x825D;
    inline constexpr unsigned int GL_VIEWPORT_INDEX_PROVOKING_VERTEX = 0x825F;
    inline constexpr unsigned int GL_VIEWPORT_SUBPIXEL_BITS = 0x825C;
    inline constexpr unsigned int GL_VIEW_CLASS_128_BITS = 0x82C4;
    inline constexpr unsigned int GL_VIEW_CLASS_16_BITS = 0x82CA;
    inline constexpr unsigned int GL_VIEW_CLASS_24_BITS = 0x82C9;
    inline constexpr unsigned int GL_VIEW_CLASS_32_BITS = 0x82C8;
    inline constexpr unsigned int GL_VIEW_CLASS_48_BITS = 0x82C7;
    inline constexpr unsigned int GL_VIEW_CLASS_64_BITS = 0x82C6;
    inline constexpr unsigned int GL_VIEW_CLASS_8_BITS = 0x82CB;
    inline constexpr unsigned int GL_VIEW_CLASS_96_BITS = 0x82C5;
    inline constexpr unsigned int GL_VIEW_CLASS_BPTC_FLOAT = 0x82D3;
    inline constexpr unsigned int GL_VIEW_CLASS_BPTC_UNORM = 0x82D2;
    inline constexpr unsigned int GL_VIEW_CLASS_RGTC1_RED = 0x82D0;
    inline constexpr unsigned int GL_VIEW_CLASS_RGTC2_RG = 0x82D1;
    inline constexpr unsigned int GL_VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC;
    inline constexpr unsigned int GL_VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD;
    inline constexpr unsigned int GL_VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE;
    inline constexpr unsigned int GL_VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF;
    inline constexpr unsigned int GL_VIEW_COMPATIBILITY_CLASS = 0x82B6;
    inline constexpr unsigned int GL_WAIT_FAILED = 0x911D;
    inline constexpr unsigned int GL_WRITE_ONLY = 0x88B9;
    inline constexpr unsigned int GL_XOR = 0x1506;
    inline constexpr unsigned int GL_ZERO = 0;
    inline constexpr unsigned int GL_ZERO_TO_ONE = 0x935F;
    inline constexpr unsigned int GL_ZERO_TO_ONE_EXT = 0x935F;

    struct Api
    {
        void(HX_GL_APIENTRY* ActiveShaderProgram)(GLuint, GLuint);
        void(HX_GL_APIENTRY* ActiveTexture)(GLenum);
        void(HX_GL_APIENTRY* AttachShader)(GLuint, GLuint);
        void(HX_GL_APIENTRY* BeginConditionalRender)(GLuint, GLenum);
        void(HX_GL_APIENTRY* BeginQuery)(GLenum, GLuint);
        void(HX_GL_APIENTRY* BeginQueryEXT)(GLenum, GLuint);
        void(HX_GL_APIENTRY* BeginQueryIndexed)(GLenum, GLuint, GLuint);
        void(HX_GL_APIENTRY* BeginTransformFeedback)(GLenum);
        void(HX_GL_APIENTRY* BindAttribLocation)(GLuint, GLuint, const GLchar *);
        void(HX_GL_APIENTRY* BindBuffer)(GLenum, GLuint);
        void(HX_GL_APIENTRY* BindBufferBase)(GLenum, GLuint, GLuint);
        void(HX_GL_APIENTRY* BindBufferRange)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* BindBuffersBase)(GLenum, GLuint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* BindBuffersRange)(GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *);
        void(HX_GL_APIENTRY* BindFragDataLocation)(GLuint, GLuint, const GLchar *);
        void(HX_GL_APIENTRY* BindFragDataLocationIndexed)(GLuint, GLuint, GLuint, const GLchar *);
        void(HX_GL_APIENTRY* BindFramebuffer)(GLenum, GLuint);
        void(HX_GL_APIENTRY* BindImageTexture)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum);
        void(HX_GL_APIENTRY* BindImageTextures)(GLuint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* BindProgramPipeline)(GLuint);
        void(HX_GL_APIENTRY* BindRenderbuffer)(GLenum, GLuint);
        void(HX_GL_APIENTRY* BindSampler)(GLuint, GLuint);
        void(HX_GL_APIENTRY* BindSamplers)(GLuint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* BindTexture)(GLenum, GLuint);
        void(HX_GL_APIENTRY* BindTextureUnit)(GLuint, GLuint);
        void(HX_GL_APIENTRY* BindTextures)(GLuint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* BindTransformFeedback)(GLenum, GLuint);
        void(HX_GL_APIENTRY* BindVertexArray)(GLuint);
        void(HX_GL_APIENTRY* BindVertexBuffer)(GLuint, GLuint, GLintptr, GLsizei);
        void(HX_GL_APIENTRY* BindVertexBuffers)(GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *);
        void(HX_GL_APIENTRY* BlendBarrier)(void);
        void(HX_GL_APIENTRY* BlendColor)(GLfloat, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* BlendEquation)(GLenum);
        void(HX_GL_APIENTRY* BlendEquationSeparate)(GLenum, GLenum);
        void(HX_GL_APIENTRY* BlendEquationSeparatei)(GLuint, GLenum, GLenum);
        void(HX_GL_APIENTRY* BlendEquationi)(GLuint, GLenum);
        void(HX_GL_APIENTRY* BlendFunc)(GLenum, GLenum);
        void(HX_GL_APIENTRY* BlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum);
        void(HX_GL_APIENTRY* BlendFuncSeparatei)(GLuint, GLenum, GLenum, GLenum, GLenum);
        void(HX_GL_APIENTRY* BlendFunci)(GLuint, GLenum, GLenum);
        void(HX_GL_APIENTRY* BlitFramebuffer)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
        void(HX_GL_APIENTRY* BlitNamedFramebuffer)(GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
        void(HX_GL_APIENTRY* BufferData)(GLenum, GLsizeiptr, const void *, GLenum);
        void(HX_GL_APIENTRY* BufferStorage)(GLenum, GLsizeiptr, const void *, GLbitfield);
        void(HX_GL_APIENTRY* BufferStorageEXT)(GLenum, GLsizeiptr, const void *, GLbitfield);
        void(HX_GL_APIENTRY* BufferSubData)(GLenum, GLintptr, GLsizeiptr, const void *);
        GLenum(HX_GL_APIENTRY* CheckFramebufferStatus)(GLenum);
        GLenum(HX_GL_APIENTRY* CheckNamedFramebufferStatus)(GLuint, GLenum);
        void(HX_GL_APIENTRY* ClampColor)(GLenum, GLenum);
        void(HX_GL_APIENTRY* Clear)(GLbitfield);
        void(HX_GL_APIENTRY* ClearBufferData)(GLenum, GLenum, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* ClearBufferSubData)(GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* ClearBufferfi)(GLenum, GLint, GLfloat, GLint);
        void(HX_GL_APIENTRY* ClearBufferfv)(GLenum, GLint, const GLfloat *);
        void(HX_GL_APIENTRY* ClearBufferiv)(GLenum, GLint, const GLint *);
        void(HX_GL_APIENTRY* ClearBufferuiv)(GLenum, GLint, const GLuint *);
        void(HX_GL_APIENTRY* ClearColor)(GLfloat, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* ClearDepth)(GLdouble);
        void(HX_GL_APIENTRY* ClearDepthf)(GLfloat);
        void(HX_GL_APIENTRY* ClearNamedBufferData)(GLuint, GLenum, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* ClearNamedBufferSubData)(GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* ClearNamedFramebufferfi)(GLuint, GLenum, GLint, GLfloat, GLint);
        void(HX_GL_APIENTRY* ClearNamedFramebufferfv)(GLuint, GLenum, GLint, const GLfloat *);
        void(HX_GL_APIENTRY* ClearNamedFramebufferiv)(GLuint, GLenum, GLint, const GLint *);
        void(HX_GL_APIENTRY* ClearNamedFramebufferuiv)(GLuint, GLenum, GLint, const GLuint *);
        void(HX_GL_APIENTRY* ClearStencil)(GLint);
        void(HX_GL_APIENTRY* ClearTexImage)(GLuint, GLint, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* ClearTexSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
        GLenum(HX_GL_APIENTRY* ClientWaitSync)(GLsync, GLbitfield, GLuint64);
        void(HX_GL_APIENTRY* ClipControl)(GLenum, GLenum);
        void(HX_GL_APIENTRY* ClipControlEXT)(GLenum, GLenum);
        void(HX_GL_APIENTRY* ColorMask)(GLboolean, GLboolean, GLboolean, GLboolean);
        void(HX_GL_APIENTRY* ColorMaski)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
        void(HX_GL_APIENTRY* CompileShader)(GLuint);
        void(HX_GL_APIENTRY* CompressedTexImage1D)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTexImage3D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTextureSubImage1D)(GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTextureSubImage2D)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* CompressedTextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* CopyBufferSubData)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* CopyImageSubData)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* CopyNamedBufferSubData)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* CopyTexImage1D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
        void(HX_GL_APIENTRY* CopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
        void(HX_GL_APIENTRY* CopyTexSubImage1D)(GLenum, GLint, GLint, GLint, GLint, GLsizei);
        void(HX_GL_APIENTRY* CopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* CopyTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* CopyTextureSubImage1D)(GLuint, GLint, GLint, GLint, GLint, GLsizei);
        void(HX_GL_APIENTRY* CopyTextureSubImage2D)(GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* CopyTextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* CreateBuffers)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* CreateFramebuffers)(GLsizei, GLuint *);
        GLuint(HX_GL_APIENTRY* CreateProgram)(void);
        void(HX_GL_APIENTRY* CreateProgramPipelines)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* CreateQueries)(GLenum, GLsizei, GLuint *);
        void(HX_GL_APIENTRY* CreateRenderbuffers)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* CreateSamplers)(GLsizei, GLuint *);
        GLuint(HX_GL_APIENTRY* CreateShader)(GLenum);
        GLuint(HX_GL_APIENTRY* CreateShaderProgramv)(GLenum, GLsizei, const GLchar *const*);
        void(HX_GL_APIENTRY* CreateTextures)(GLenum, GLsizei, GLuint *);
        void(HX_GL_APIENTRY* CreateTransformFeedbacks)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* CreateVertexArrays)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* CullFace)(GLenum);
        void(HX_GL_APIENTRY* DebugMessageCallback)(GLDEBUGPROC, const void *);
        void(HX_GL_APIENTRY* DebugMessageCallbackKHR)(GLDEBUGPROCKHR, const void *);
        void(HX_GL_APIENTRY* DebugMessageControl)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean);
        void(HX_GL_APIENTRY* DebugMessageControlKHR)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean);
        void(HX_GL_APIENTRY* DebugMessageInsert)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* DebugMessageInsertKHR)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* DeleteBuffers)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteFramebuffers)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteProgram)(GLuint);
        void(HX_GL_APIENTRY* DeleteProgramPipelines)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteQueries)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteQueriesEXT)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteRenderbuffers)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteSamplers)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteShader)(GLuint);
        void(HX_GL_APIENTRY* DeleteSync)(GLsync);
        void(HX_GL_APIENTRY* DeleteTextures)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteTransformFeedbacks)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DeleteVertexArrays)(GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* DepthFunc)(GLenum);
        void(HX_GL_APIENTRY* DepthMask)(GLboolean);
        void(HX_GL_APIENTRY* DepthRange)(GLdouble, GLdouble);
        void(HX_GL_APIENTRY* DepthRangeArrayv)(GLuint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* DepthRangeIndexed)(GLuint, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* DepthRangef)(GLfloat, GLfloat);
        void(HX_GL_APIENTRY* DetachShader)(GLuint, GLuint);
        void(HX_GL_APIENTRY* Disable)(GLenum);
        void(HX_GL_APIENTRY* DisableVertexArrayAttrib)(GLuint, GLuint);
        void(HX_GL_APIENTRY* DisableVertexAttribArray)(GLuint);
        void(HX_GL_APIENTRY* Disablei)(GLenum, GLuint);
        void(HX_GL_APIENTRY* DispatchCompute)(GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* DispatchComputeIndirect)(GLintptr);
        void(HX_GL_APIENTRY* DrawArrays)(GLenum, GLint, GLsizei);
        void(HX_GL_APIENTRY* DrawArraysIndirect)(GLenum, const void *);
        void(HX_GL_APIENTRY* DrawArraysInstanced)(GLenum, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* DrawArraysInstancedBaseInstance)(GLenum, GLint, GLsizei, GLsizei, GLuint);
        void(HX_GL_APIENTRY* DrawArraysInstancedBaseInstanceEXT)(GLenum, GLint, GLsizei, GLsizei, GLuint);
        void(HX_GL_APIENTRY* DrawBuffer)(GLenum);
        void(HX_GL_APIENTRY* DrawBuffers)(GLsizei, const GLenum *);
        void(HX_GL_APIENTRY* DrawElements)(GLenum, GLsizei, GLenum, const void *);
        void(HX_GL_APIENTRY* DrawElementsBaseVertex)(GLenum, GLsizei, GLenum, const void *, GLint);
        void(HX_GL_APIENTRY* DrawElementsBaseVertexEXT)(GLenum, GLsizei, GLenum, const void *, GLint);
        void(HX_GL_APIENTRY* DrawElementsIndirect)(GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* DrawElementsInstanced)(GLenum, GLsizei, GLenum, const void *, GLsizei);
        void(HX_GL_APIENTRY* DrawElementsInstancedBaseInstance)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint);
        void(HX_GL_APIENTRY* DrawElementsInstancedBaseInstanceEXT)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint);
        void(HX_GL_APIENTRY* DrawElementsInstancedBaseVertex)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint);
        void(HX_GL_APIENTRY* DrawElementsInstancedBaseVertexBaseInstance)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint);
        void(HX_GL_APIENTRY* DrawElementsInstancedBaseVertexBaseInstanceEXT)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint);
        void(HX_GL_APIENTRY* DrawElementsInstancedBaseVertexEXT)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint);
        void(HX_GL_APIENTRY* DrawRangeElements)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *);
        void(HX_GL_APIENTRY* DrawRangeElementsBaseVertex)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint);
        void(HX_GL_APIENTRY* DrawRangeElementsBaseVertexEXT)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint);
        void(HX_GL_APIENTRY* DrawTransformFeedback)(GLenum, GLuint);
        void(HX_GL_APIENTRY* DrawTransformFeedbackInstanced)(GLenum, GLuint, GLsizei);
        void(HX_GL_APIENTRY* DrawTransformFeedbackStream)(GLenum, GLuint, GLuint);
        void(HX_GL_APIENTRY* DrawTransformFeedbackStreamInstanced)(GLenum, GLuint, GLuint, GLsizei);
        void(HX_GL_APIENTRY* Enable)(GLenum);
        void(HX_GL_APIENTRY* EnableVertexArrayAttrib)(GLuint, GLuint);
        void(HX_GL_APIENTRY* EnableVertexAttribArray)(GLuint);
        void(HX_GL_APIENTRY* Enablei)(GLenum, GLuint);
        void(HX_GL_APIENTRY* EndConditionalRender)(void);
        void(HX_GL_APIENTRY* EndQuery)(GLenum);
        void(HX_GL_APIENTRY* EndQueryEXT)(GLenum);
        void(HX_GL_APIENTRY* EndQueryIndexed)(GLenum, GLuint);
        void(HX_GL_APIENTRY* EndTransformFeedback)(void);
        GLsync(HX_GL_APIENTRY* FenceSync)(GLenum, GLbitfield);
        void(HX_GL_APIENTRY* Finish)(void);
        void(HX_GL_APIENTRY* Flush)(void);
        void(HX_GL_APIENTRY* FlushMappedBufferRange)(GLenum, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* FlushMappedNamedBufferRange)(GLuint, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* FramebufferParameteri)(GLenum, GLenum, GLint);
        void(HX_GL_APIENTRY* FramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint);
        void(HX_GL_APIENTRY* FramebufferTexture)(GLenum, GLenum, GLuint, GLint);
        void(HX_GL_APIENTRY* FramebufferTexture1D)(GLenum, GLenum, GLenum, GLuint, GLint);
        void(HX_GL_APIENTRY* FramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
        void(HX_GL_APIENTRY* FramebufferTexture3D)(GLenum, GLenum, GLenum, GLuint, GLint, GLint);
        void(HX_GL_APIENTRY* FramebufferTextureLayer)(GLenum, GLenum, GLuint, GLint, GLint);
        void(HX_GL_APIENTRY* FramebufferTextureMultiviewOVR)(GLenum, GLenum, GLuint, GLint, GLint, GLsizei);
        void(HX_GL_APIENTRY* FrontFace)(GLenum);
        void(HX_GL_APIENTRY* GenBuffers)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenFramebuffers)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenProgramPipelines)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenQueries)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenQueriesEXT)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenRenderbuffers)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenSamplers)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenTextures)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenTransformFeedbacks)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenVertexArrays)(GLsizei, GLuint *);
        void(HX_GL_APIENTRY* GenerateMipmap)(GLenum);
        void(HX_GL_APIENTRY* GenerateTextureMipmap)(GLuint);
        void(HX_GL_APIENTRY* GetActiveAtomicCounterBufferiv)(GLuint, GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetActiveAttrib)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
        void(HX_GL_APIENTRY* GetActiveSubroutineName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetActiveSubroutineUniformName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetActiveSubroutineUniformiv)(GLuint, GLenum, GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
        void(HX_GL_APIENTRY* GetActiveUniformBlockName)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetActiveUniformBlockiv)(GLuint, GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetActiveUniformName)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetActiveUniformsiv)(GLuint, GLsizei, const GLuint *, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetAttachedShaders)(GLuint, GLsizei, GLsizei *, GLuint *);
        GLint(HX_GL_APIENTRY* GetAttribLocation)(GLuint, const GLchar *);
        void(HX_GL_APIENTRY* GetBooleani_v)(GLenum, GLuint, GLboolean *);
        void(HX_GL_APIENTRY* GetBooleanv)(GLenum, GLboolean *);
        void(HX_GL_APIENTRY* GetBufferParameteri64v)(GLenum, GLenum, GLint64 *);
        void(HX_GL_APIENTRY* GetBufferParameteriv)(GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetBufferPointerv)(GLenum, GLenum, void **);
        void(HX_GL_APIENTRY* GetBufferSubData)(GLenum, GLintptr, GLsizeiptr, void *);
        void(HX_GL_APIENTRY* GetCompressedTexImage)(GLenum, GLint, void *);
        void(HX_GL_APIENTRY* GetCompressedTextureImage)(GLuint, GLint, GLsizei, void *);
        void(HX_GL_APIENTRY* GetCompressedTextureSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, void *);
        GLuint(HX_GL_APIENTRY* GetDebugMessageLog)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *);
        GLuint(HX_GL_APIENTRY* GetDebugMessageLogKHR)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetDoublei_v)(GLenum, GLuint, GLdouble *);
        void(HX_GL_APIENTRY* GetDoublev)(GLenum, GLdouble *);
        GLenum(HX_GL_APIENTRY* GetError)(void);
        void(HX_GL_APIENTRY* GetFloati_v)(GLenum, GLuint, GLfloat *);
        void(HX_GL_APIENTRY* GetFloatv)(GLenum, GLfloat *);
        GLint(HX_GL_APIENTRY* GetFragDataIndex)(GLuint, const GLchar *);
        GLint(HX_GL_APIENTRY* GetFragDataLocation)(GLuint, const GLchar *);
        void(HX_GL_APIENTRY* GetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetFramebufferParameteriv)(GLenum, GLenum, GLint *);
        GLenum(HX_GL_APIENTRY* GetGraphicsResetStatus)(void);
        GLuint64(HX_GL_APIENTRY* GetImageHandleARB)(GLuint, GLint, GLboolean, GLint, GLenum);
        GLuint64(HX_GL_APIENTRY* GetImageHandleNV)(GLuint, GLint, GLboolean, GLint, GLenum);
        void(HX_GL_APIENTRY* GetInteger64i_v)(GLenum, GLuint, GLint64 *);
        void(HX_GL_APIENTRY* GetInteger64v)(GLenum, GLint64 *);
        void(HX_GL_APIENTRY* GetInteger64vEXT)(GLenum, GLint64 *);
        void(HX_GL_APIENTRY* GetIntegeri_v)(GLenum, GLuint, GLint *);
        void(HX_GL_APIENTRY* GetIntegerv)(GLenum, GLint *);
        void(HX_GL_APIENTRY* GetInternalformati64v)(GLenum, GLenum, GLenum, GLsizei, GLint64 *);
        void(HX_GL_APIENTRY* GetInternalformativ)(GLenum, GLenum, GLenum, GLsizei, GLint *);
        void(HX_GL_APIENTRY* GetMultisamplefv)(GLenum, GLuint, GLfloat *);
        void(HX_GL_APIENTRY* GetNamedBufferParameteri64v)(GLuint, GLenum, GLint64 *);
        void(HX_GL_APIENTRY* GetNamedBufferParameteriv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetNamedBufferPointerv)(GLuint, GLenum, void **);
        void(HX_GL_APIENTRY* GetNamedBufferSubData)(GLuint, GLintptr, GLsizeiptr, void *);
        void(HX_GL_APIENTRY* GetNamedFramebufferAttachmentParameteriv)(GLuint, GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetNamedFramebufferParameteriv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetNamedRenderbufferParameteriv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetObjectLabel)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetObjectLabelKHR)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetObjectPtrLabel)(const void *, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetObjectPtrLabelKHR)(const void *, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetPointerv)(GLenum, void **);
        void(HX_GL_APIENTRY* GetPointervKHR)(GLenum, void **);
        void(HX_GL_APIENTRY* GetProgramBinary)(GLuint, GLsizei, GLsizei *, GLenum *, void *);
        void(HX_GL_APIENTRY* GetProgramInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetProgramInterfaceiv)(GLuint, GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetProgramPipelineInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetProgramPipelineiv)(GLuint, GLenum, GLint *);
        GLuint(HX_GL_APIENTRY* GetProgramResourceIndex)(GLuint, GLenum, const GLchar *);
        GLint(HX_GL_APIENTRY* GetProgramResourceLocation)(GLuint, GLenum, const GLchar *);
        GLint(HX_GL_APIENTRY* GetProgramResourceLocationIndex)(GLuint, GLenum, const GLchar *);
        void(HX_GL_APIENTRY* GetProgramResourceName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetProgramResourceiv)(GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *);
        void(HX_GL_APIENTRY* GetProgramStageiv)(GLuint, GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetProgramiv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetQueryBufferObjecti64v)(GLuint, GLuint, GLenum, GLintptr);
        void(HX_GL_APIENTRY* GetQueryBufferObjectiv)(GLuint, GLuint, GLenum, GLintptr);
        void(HX_GL_APIENTRY* GetQueryBufferObjectui64v)(GLuint, GLuint, GLenum, GLintptr);
        void(HX_GL_APIENTRY* GetQueryBufferObjectuiv)(GLuint, GLuint, GLenum, GLintptr);
        void(HX_GL_APIENTRY* GetQueryIndexediv)(GLenum, GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetQueryObjecti64v)(GLuint, GLenum, GLint64 *);
        void(HX_GL_APIENTRY* GetQueryObjecti64vEXT)(GLuint, GLenum, GLint64 *);
        void(HX_GL_APIENTRY* GetQueryObjectiv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetQueryObjectivEXT)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetQueryObjectui64v)(GLuint, GLenum, GLuint64 *);
        void(HX_GL_APIENTRY* GetQueryObjectui64vEXT)(GLuint, GLenum, GLuint64 *);
        void(HX_GL_APIENTRY* GetQueryObjectuiv)(GLuint, GLenum, GLuint *);
        void(HX_GL_APIENTRY* GetQueryObjectuivEXT)(GLuint, GLenum, GLuint *);
        void(HX_GL_APIENTRY* GetQueryiv)(GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetQueryivEXT)(GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetRenderbufferParameteriv)(GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetSamplerParameterIiv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetSamplerParameterIuiv)(GLuint, GLenum, GLuint *);
        void(HX_GL_APIENTRY* GetSamplerParameterfv)(GLuint, GLenum, GLfloat *);
        void(HX_GL_APIENTRY* GetSamplerParameteriv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetShaderInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetShaderPrecisionFormat)(GLenum, GLenum, GLint *, GLint *);
        void(HX_GL_APIENTRY* GetShaderSource)(GLuint, GLsizei, GLsizei *, GLchar *);
        void(HX_GL_APIENTRY* GetShaderiv)(GLuint, GLenum, GLint *);
        const GLubyte *(HX_GL_APIENTRY* GetString)(GLenum);
        const GLubyte *(HX_GL_APIENTRY* GetStringi)(GLenum, GLuint);
        GLuint(HX_GL_APIENTRY* GetSubroutineIndex)(GLuint, GLenum, const GLchar *);
        GLint(HX_GL_APIENTRY* GetSubroutineUniformLocation)(GLuint, GLenum, const GLchar *);
        void(HX_GL_APIENTRY* GetSynciv)(GLsync, GLenum, GLsizei, GLsizei *, GLint *);
        void(HX_GL_APIENTRY* GetTexImage)(GLenum, GLint, GLenum, GLenum, void *);
        void(HX_GL_APIENTRY* GetTexLevelParameterfv)(GLenum, GLint, GLenum, GLfloat *);
        void(HX_GL_APIENTRY* GetTexLevelParameteriv)(GLenum, GLint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetTexParameterIiv)(GLenum, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetTexParameterIuiv)(GLenum, GLenum, GLuint *);
        void(HX_GL_APIENTRY* GetTexParameterfv)(GLenum, GLenum, GLfloat *);
        void(HX_GL_APIENTRY* GetTexParameteriv)(GLenum, GLenum, GLint *);
        GLuint64(HX_GL_APIENTRY* GetTextureHandleARB)(GLuint);
        GLuint64(HX_GL_APIENTRY* GetTextureHandleNV)(GLuint);
        void(HX_GL_APIENTRY* GetTextureImage)(GLuint, GLint, GLenum, GLenum, GLsizei, void *);
        void(HX_GL_APIENTRY* GetTextureLevelParameterfv)(GLuint, GLint, GLenum, GLfloat *);
        void(HX_GL_APIENTRY* GetTextureLevelParameteriv)(GLuint, GLint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetTextureParameterIiv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetTextureParameterIuiv)(GLuint, GLenum, GLuint *);
        void(HX_GL_APIENTRY* GetTextureParameterfv)(GLuint, GLenum, GLfloat *);
        void(HX_GL_APIENTRY* GetTextureParameteriv)(GLuint, GLenum, GLint *);
        GLuint64(HX_GL_APIENTRY* GetTextureSamplerHandleARB)(GLuint, GLuint);
        GLuint64(HX_GL_APIENTRY* GetTextureSamplerHandleNV)(GLuint, GLuint);
        void(HX_GL_APIENTRY* GetTextureSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *);
        void(HX_GL_APIENTRY* GetTransformFeedbackVarying)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *);
        void(HX_GL_APIENTRY* GetTransformFeedbacki64_v)(GLuint, GLenum, GLuint, GLint64 *);
        void(HX_GL_APIENTRY* GetTransformFeedbacki_v)(GLuint, GLenum, GLuint, GLint *);
        void(HX_GL_APIENTRY* GetTransformFeedbackiv)(GLuint, GLenum, GLint *);
        GLuint(HX_GL_APIENTRY* GetUniformBlockIndex)(GLuint, const GLchar *);
        void(HX_GL_APIENTRY* GetUniformIndices)(GLuint, GLsizei, const GLchar *const*, GLuint *);
        GLint(HX_GL_APIENTRY* GetUniformLocation)(GLuint, const GLchar *);
        void(HX_GL_APIENTRY* GetUniformSubroutineuiv)(GLenum, GLint, GLuint *);
        void(HX_GL_APIENTRY* GetUniformdv)(GLuint, GLint, GLdouble *);
        void(HX_GL_APIENTRY* GetUniformfv)(GLuint, GLint, GLfloat *);
        void(HX_GL_APIENTRY* GetUniformiv)(GLuint, GLint, GLint *);
        void(HX_GL_APIENTRY* GetUniformuiv)(GLuint, GLint, GLuint *);
        void(HX_GL_APIENTRY* GetVertexArrayIndexed64iv)(GLuint, GLuint, GLenum, GLint64 *);
        void(HX_GL_APIENTRY* GetVertexArrayIndexediv)(GLuint, GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetVertexArrayiv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetVertexAttribIiv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetVertexAttribIuiv)(GLuint, GLenum, GLuint *);
        void(HX_GL_APIENTRY* GetVertexAttribLdv)(GLuint, GLenum, GLdouble *);
        void(HX_GL_APIENTRY* GetVertexAttribLui64vARB)(GLuint, GLenum, GLuint64EXT *);
        void(HX_GL_APIENTRY* GetVertexAttribPointerv)(GLuint, GLenum, void **);
        void(HX_GL_APIENTRY* GetVertexAttribdv)(GLuint, GLenum, GLdouble *);
        void(HX_GL_APIENTRY* GetVertexAttribfv)(GLuint, GLenum, GLfloat *);
        void(HX_GL_APIENTRY* GetVertexAttribiv)(GLuint, GLenum, GLint *);
        void(HX_GL_APIENTRY* GetnCompressedTexImage)(GLenum, GLint, GLsizei, void *);
        void(HX_GL_APIENTRY* GetnTexImage)(GLenum, GLint, GLenum, GLenum, GLsizei, void *);
        void(HX_GL_APIENTRY* GetnUniformdv)(GLuint, GLint, GLsizei, GLdouble *);
        void(HX_GL_APIENTRY* GetnUniformfv)(GLuint, GLint, GLsizei, GLfloat *);
        void(HX_GL_APIENTRY* GetnUniformiv)(GLuint, GLint, GLsizei, GLint *);
        void(HX_GL_APIENTRY* GetnUniformuiv)(GLuint, GLint, GLsizei, GLuint *);
        void(HX_GL_APIENTRY* Hint)(GLenum, GLenum);
        void(HX_GL_APIENTRY* InvalidateBufferData)(GLuint);
        void(HX_GL_APIENTRY* InvalidateBufferSubData)(GLuint, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* InvalidateFramebuffer)(GLenum, GLsizei, const GLenum *);
        void(HX_GL_APIENTRY* InvalidateNamedFramebufferData)(GLuint, GLsizei, const GLenum *);
        void(HX_GL_APIENTRY* InvalidateNamedFramebufferSubData)(GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* InvalidateSubFramebuffer)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* InvalidateTexImage)(GLuint, GLint);
        void(HX_GL_APIENTRY* InvalidateTexSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
        GLboolean(HX_GL_APIENTRY* IsBuffer)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsEnabled)(GLenum);
        GLboolean(HX_GL_APIENTRY* IsEnabledi)(GLenum, GLuint);
        GLboolean(HX_GL_APIENTRY* IsFramebuffer)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsImageHandleResidentARB)(GLuint64);
        GLboolean(HX_GL_APIENTRY* IsImageHandleResidentNV)(GLuint64);
        GLboolean(HX_GL_APIENTRY* IsProgram)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsProgramPipeline)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsQuery)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsQueryEXT)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsRenderbuffer)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsSampler)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsShader)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsSync)(GLsync);
        GLboolean(HX_GL_APIENTRY* IsTexture)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsTextureHandleResidentARB)(GLuint64);
        GLboolean(HX_GL_APIENTRY* IsTextureHandleResidentNV)(GLuint64);
        GLboolean(HX_GL_APIENTRY* IsTransformFeedback)(GLuint);
        GLboolean(HX_GL_APIENTRY* IsVertexArray)(GLuint);
        void(HX_GL_APIENTRY* LineWidth)(GLfloat);
        void(HX_GL_APIENTRY* LinkProgram)(GLuint);
        void(HX_GL_APIENTRY* LogicOp)(GLenum);
        void(HX_GL_APIENTRY* MakeImageHandleNonResidentARB)(GLuint64);
        void(HX_GL_APIENTRY* MakeImageHandleNonResidentNV)(GLuint64);
        void(HX_GL_APIENTRY* MakeImageHandleResidentARB)(GLuint64, GLenum);
        void(HX_GL_APIENTRY* MakeImageHandleResidentNV)(GLuint64, GLenum);
        void(HX_GL_APIENTRY* MakeTextureHandleNonResidentARB)(GLuint64);
        void(HX_GL_APIENTRY* MakeTextureHandleNonResidentNV)(GLuint64);
        void(HX_GL_APIENTRY* MakeTextureHandleResidentARB)(GLuint64);
        void(HX_GL_APIENTRY* MakeTextureHandleResidentNV)(GLuint64);
        void *(HX_GL_APIENTRY* MapBuffer)(GLenum, GLenum);
        void *(HX_GL_APIENTRY* MapBufferRange)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
        void *(HX_GL_APIENTRY* MapNamedBuffer)(GLuint, GLenum);
        void *(HX_GL_APIENTRY* MapNamedBufferRange)(GLuint, GLintptr, GLsizeiptr, GLbitfield);
        void(HX_GL_APIENTRY* MemoryBarrier)(GLbitfield);
        void(HX_GL_APIENTRY* MemoryBarrierByRegion)(GLbitfield);
        void(HX_GL_APIENTRY* MinSampleShading)(GLfloat);
        void(HX_GL_APIENTRY* MultiDrawArrays)(GLenum, const GLint *, const GLsizei *, GLsizei);
        void(HX_GL_APIENTRY* MultiDrawArraysIndirect)(GLenum, const void *, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* MultiDrawArraysIndirectCount)(GLenum, const void *, GLintptr, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* MultiDrawArraysIndirectEXT)(GLenum, const void *, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* MultiDrawElements)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei);
        void(HX_GL_APIENTRY* MultiDrawElementsBaseVertex)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* MultiDrawElementsBaseVertexEXT)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* MultiDrawElementsIndirect)(GLenum, GLenum, const void *, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* MultiDrawElementsIndirectCount)(GLenum, GLenum, const void *, GLintptr, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* MultiDrawElementsIndirectEXT)(GLenum, GLenum, const void *, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* NamedBufferData)(GLuint, GLsizeiptr, const void *, GLenum);
        void(HX_GL_APIENTRY* NamedBufferStorage)(GLuint, GLsizeiptr, const void *, GLbitfield);
        void(HX_GL_APIENTRY* NamedBufferSubData)(GLuint, GLintptr, GLsizeiptr, const void *);
        void(HX_GL_APIENTRY* NamedFramebufferDrawBuffer)(GLuint, GLenum);
        void(HX_GL_APIENTRY* NamedFramebufferDrawBuffers)(GLuint, GLsizei, const GLenum *);
        void(HX_GL_APIENTRY* NamedFramebufferParameteri)(GLuint, GLenum, GLint);
        void(HX_GL_APIENTRY* NamedFramebufferReadBuffer)(GLuint, GLenum);
        void(HX_GL_APIENTRY* NamedFramebufferRenderbuffer)(GLuint, GLenum, GLenum, GLuint);
        void(HX_GL_APIENTRY* NamedFramebufferTexture)(GLuint, GLenum, GLuint, GLint);
        void(HX_GL_APIENTRY* NamedFramebufferTextureLayer)(GLuint, GLenum, GLuint, GLint, GLint);
        void(HX_GL_APIENTRY* NamedFramebufferTextureMultiviewOVR)(GLuint, GLenum, GLuint, GLint, GLint, GLsizei);
        void(HX_GL_APIENTRY* NamedRenderbufferStorage)(GLuint, GLenum, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* NamedRenderbufferStorageMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* ObjectLabel)(GLenum, GLuint, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* ObjectLabelKHR)(GLenum, GLuint, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* ObjectPtrLabel)(const void *, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* ObjectPtrLabelKHR)(const void *, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* PatchParameterfv)(GLenum, const GLfloat *);
        void(HX_GL_APIENTRY* PatchParameteri)(GLenum, GLint);
        void(HX_GL_APIENTRY* PauseTransformFeedback)(void);
        void(HX_GL_APIENTRY* PixelStoref)(GLenum, GLfloat);
        void(HX_GL_APIENTRY* PixelStorei)(GLenum, GLint);
        void(HX_GL_APIENTRY* PointParameterf)(GLenum, GLfloat);
        void(HX_GL_APIENTRY* PointParameterfv)(GLenum, const GLfloat *);
        void(HX_GL_APIENTRY* PointParameteri)(GLenum, GLint);
        void(HX_GL_APIENTRY* PointParameteriv)(GLenum, const GLint *);
        void(HX_GL_APIENTRY* PointSize)(GLfloat);
        void(HX_GL_APIENTRY* PolygonMode)(GLenum, GLenum);
        void(HX_GL_APIENTRY* PolygonOffset)(GLfloat, GLfloat);
        void(HX_GL_APIENTRY* PolygonOffsetClamp)(GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* PopDebugGroup)(void);
        void(HX_GL_APIENTRY* PopDebugGroupKHR)(void);
        void(HX_GL_APIENTRY* PrimitiveBoundingBox)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* PrimitiveRestartIndex)(GLuint);
        void(HX_GL_APIENTRY* ProgramBinary)(GLuint, GLenum, const void *, GLsizei);
        void(HX_GL_APIENTRY* ProgramParameteri)(GLuint, GLenum, GLint);
        void(HX_GL_APIENTRY* ProgramUniform1d)(GLuint, GLint, GLdouble);
        void(HX_GL_APIENTRY* ProgramUniform1dv)(GLuint, GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniform1f)(GLuint, GLint, GLfloat);
        void(HX_GL_APIENTRY* ProgramUniform1fv)(GLuint, GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniform1i)(GLuint, GLint, GLint);
        void(HX_GL_APIENTRY* ProgramUniform1iv)(GLuint, GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* ProgramUniform1ui)(GLuint, GLint, GLuint);
        void(HX_GL_APIENTRY* ProgramUniform1uiv)(GLuint, GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* ProgramUniform2d)(GLuint, GLint, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* ProgramUniform2dv)(GLuint, GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniform2f)(GLuint, GLint, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* ProgramUniform2fv)(GLuint, GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniform2i)(GLuint, GLint, GLint, GLint);
        void(HX_GL_APIENTRY* ProgramUniform2iv)(GLuint, GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* ProgramUniform2ui)(GLuint, GLint, GLuint, GLuint);
        void(HX_GL_APIENTRY* ProgramUniform2uiv)(GLuint, GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* ProgramUniform3d)(GLuint, GLint, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* ProgramUniform3dv)(GLuint, GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniform3f)(GLuint, GLint, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* ProgramUniform3fv)(GLuint, GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniform3i)(GLuint, GLint, GLint, GLint, GLint);
        void(HX_GL_APIENTRY* ProgramUniform3iv)(GLuint, GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* ProgramUniform3ui)(GLuint, GLint, GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* ProgramUniform3uiv)(GLuint, GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* ProgramUniform4d)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* ProgramUniform4dv)(GLuint, GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniform4f)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* ProgramUniform4fv)(GLuint, GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniform4i)(GLuint, GLint, GLint, GLint, GLint, GLint);
        void(HX_GL_APIENTRY* ProgramUniform4iv)(GLuint, GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* ProgramUniform4ui)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* ProgramUniform4uiv)(GLuint, GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* ProgramUniformHandleui64ARB)(GLuint, GLint, GLuint64);
        void(HX_GL_APIENTRY* ProgramUniformHandleui64NV)(GLuint, GLint, GLuint64);
        void(HX_GL_APIENTRY* ProgramUniformHandleui64vARB)(GLuint, GLint, GLsizei, const GLuint64 *);
        void(HX_GL_APIENTRY* ProgramUniformHandleui64vNV)(GLuint, GLint, GLsizei, const GLuint64 *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix2x3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix2x3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix2x4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix2x4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix3x2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix3x2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix3x4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix3x4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix4x2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix4x2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix4x3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* ProgramUniformMatrix4x3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* ProvokingVertex)(GLenum);
        void(HX_GL_APIENTRY* PushDebugGroup)(GLenum, GLuint, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* PushDebugGroupKHR)(GLenum, GLuint, GLsizei, const GLchar *);
        void(HX_GL_APIENTRY* QueryCounter)(GLuint, GLenum);
        void(HX_GL_APIENTRY* QueryCounterEXT)(GLuint, GLenum);
        void(HX_GL_APIENTRY* ReadBuffer)(GLenum);
        void(HX_GL_APIENTRY* ReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
        void(HX_GL_APIENTRY* ReadnPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *);
        void(HX_GL_APIENTRY* ReleaseShaderCompiler)(void);
        void(HX_GL_APIENTRY* RenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* RenderbufferStorageMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* ResumeTransformFeedback)(void);
        void(HX_GL_APIENTRY* SampleCoverage)(GLfloat, GLboolean);
        void(HX_GL_APIENTRY* SampleMaski)(GLuint, GLbitfield);
        void(HX_GL_APIENTRY* SamplerParameterIiv)(GLuint, GLenum, const GLint *);
        void(HX_GL_APIENTRY* SamplerParameterIuiv)(GLuint, GLenum, const GLuint *);
        void(HX_GL_APIENTRY* SamplerParameterf)(GLuint, GLenum, GLfloat);
        void(HX_GL_APIENTRY* SamplerParameterfv)(GLuint, GLenum, const GLfloat *);
        void(HX_GL_APIENTRY* SamplerParameteri)(GLuint, GLenum, GLint);
        void(HX_GL_APIENTRY* SamplerParameteriv)(GLuint, GLenum, const GLint *);
        void(HX_GL_APIENTRY* Scissor)(GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* ScissorArrayv)(GLuint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* ScissorIndexed)(GLuint, GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* ScissorIndexedv)(GLuint, const GLint *);
        void(HX_GL_APIENTRY* ShaderBinary)(GLsizei, const GLuint *, GLenum, const void *, GLsizei);
        void(HX_GL_APIENTRY* ShaderSource)(GLuint, GLsizei, const GLchar *const*, const GLint *);
        void(HX_GL_APIENTRY* ShaderStorageBlockBinding)(GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* SpecializeShader)(GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *);
        void(HX_GL_APIENTRY* StencilFunc)(GLenum, GLint, GLuint);
        void(HX_GL_APIENTRY* StencilFuncSeparate)(GLenum, GLenum, GLint, GLuint);
        void(HX_GL_APIENTRY* StencilMask)(GLuint);
        void(HX_GL_APIENTRY* StencilMaskSeparate)(GLenum, GLuint);
        void(HX_GL_APIENTRY* StencilOp)(GLenum, GLenum, GLenum);
        void(HX_GL_APIENTRY* StencilOpSeparate)(GLenum, GLenum, GLenum, GLenum);
        void(HX_GL_APIENTRY* TexBuffer)(GLenum, GLenum, GLuint);
        void(HX_GL_APIENTRY* TexBufferRange)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* TexImage1D)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TexImage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
        void(HX_GL_APIENTRY* TexImage3D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TexImage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
        void(HX_GL_APIENTRY* TexParameterIiv)(GLenum, GLenum, const GLint *);
        void(HX_GL_APIENTRY* TexParameterIuiv)(GLenum, GLenum, const GLuint *);
        void(HX_GL_APIENTRY* TexParameterf)(GLenum, GLenum, GLfloat);
        void(HX_GL_APIENTRY* TexParameterfv)(GLenum, GLenum, const GLfloat *);
        void(HX_GL_APIENTRY* TexParameteri)(GLenum, GLenum, GLint);
        void(HX_GL_APIENTRY* TexParameteriv)(GLenum, GLenum, const GLint *);
        void(HX_GL_APIENTRY* TexStorage1D)(GLenum, GLsizei, GLenum, GLsizei);
        void(HX_GL_APIENTRY* TexStorage2D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* TexStorage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
        void(HX_GL_APIENTRY* TexStorage3D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* TexStorage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
        void(HX_GL_APIENTRY* TexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TextureBarrier)(void);
        void(HX_GL_APIENTRY* TextureBuffer)(GLuint, GLenum, GLuint);
        void(HX_GL_APIENTRY* TextureBufferRange)(GLuint, GLenum, GLuint, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* TextureParameterIiv)(GLuint, GLenum, const GLint *);
        void(HX_GL_APIENTRY* TextureParameterIuiv)(GLuint, GLenum, const GLuint *);
        void(HX_GL_APIENTRY* TextureParameterf)(GLuint, GLenum, GLfloat);
        void(HX_GL_APIENTRY* TextureParameterfv)(GLuint, GLenum, const GLfloat *);
        void(HX_GL_APIENTRY* TextureParameteri)(GLuint, GLenum, GLint);
        void(HX_GL_APIENTRY* TextureParameteriv)(GLuint, GLenum, const GLint *);
        void(HX_GL_APIENTRY* TextureStorage1D)(GLuint, GLsizei, GLenum, GLsizei);
        void(HX_GL_APIENTRY* TextureStorage2D)(GLuint, GLsizei, GLenum, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* TextureStorage2DMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
        void(HX_GL_APIENTRY* TextureStorage3D)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* TextureStorage3DMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
        void(HX_GL_APIENTRY* TextureSubImage1D)(GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TextureSubImage2D)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
        void(HX_GL_APIENTRY* TextureView)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* TransformFeedbackBufferBase)(GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* TransformFeedbackBufferRange)(GLuint, GLuint, GLuint, GLintptr, GLsizeiptr);
        void(HX_GL_APIENTRY* TransformFeedbackVaryings)(GLuint, GLsizei, const GLchar *const*, GLenum);
        void(HX_GL_APIENTRY* Uniform1d)(GLint, GLdouble);
        void(HX_GL_APIENTRY* Uniform1dv)(GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* Uniform1f)(GLint, GLfloat);
        void(HX_GL_APIENTRY* Uniform1fv)(GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* Uniform1i)(GLint, GLint);
        void(HX_GL_APIENTRY* Uniform1iv)(GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* Uniform1ui)(GLint, GLuint);
        void(HX_GL_APIENTRY* Uniform1uiv)(GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* Uniform2d)(GLint, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* Uniform2dv)(GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* Uniform2f)(GLint, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* Uniform2fv)(GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* Uniform2i)(GLint, GLint, GLint);
        void(HX_GL_APIENTRY* Uniform2iv)(GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* Uniform2ui)(GLint, GLuint, GLuint);
        void(HX_GL_APIENTRY* Uniform2uiv)(GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* Uniform3d)(GLint, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* Uniform3dv)(GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* Uniform3f)(GLint, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* Uniform3fv)(GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* Uniform3i)(GLint, GLint, GLint, GLint);
        void(HX_GL_APIENTRY* Uniform3iv)(GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* Uniform3ui)(GLint, GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* Uniform3uiv)(GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* Uniform4d)(GLint, GLdouble, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* Uniform4dv)(GLint, GLsizei, const GLdouble *);
        void(HX_GL_APIENTRY* Uniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* Uniform4fv)(GLint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* Uniform4i)(GLint, GLint, GLint, GLint, GLint);
        void(HX_GL_APIENTRY* Uniform4iv)(GLint, GLsizei, const GLint *);
        void(HX_GL_APIENTRY* Uniform4ui)(GLint, GLuint, GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* Uniform4uiv)(GLint, GLsizei, const GLuint *);
        void(HX_GL_APIENTRY* UniformBlockBinding)(GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* UniformHandleui64ARB)(GLint, GLuint64);
        void(HX_GL_APIENTRY* UniformHandleui64NV)(GLint, GLuint64);
        void(HX_GL_APIENTRY* UniformHandleui64vARB)(GLint, GLsizei, const GLuint64 *);
        void(HX_GL_APIENTRY* UniformHandleui64vNV)(GLint, GLsizei, const GLuint64 *);
        void(HX_GL_APIENTRY* UniformMatrix2dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix2x3dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix2x3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix2x4dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix2x4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix3dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix3x2dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix3x2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix3x4dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix3x4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix4dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix4x2dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix4x2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformMatrix4x3dv)(GLint, GLsizei, GLboolean, const GLdouble *);
        void(HX_GL_APIENTRY* UniformMatrix4x3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
        void(HX_GL_APIENTRY* UniformSubroutinesuiv)(GLenum, GLsizei, const GLuint *);
        GLboolean(HX_GL_APIENTRY* UnmapBuffer)(GLenum);
        GLboolean(HX_GL_APIENTRY* UnmapNamedBuffer)(GLuint);
        void(HX_GL_APIENTRY* UseProgram)(GLuint);
        void(HX_GL_APIENTRY* UseProgramStages)(GLuint, GLbitfield, GLuint);
        void(HX_GL_APIENTRY* ValidateProgram)(GLuint);
        void(HX_GL_APIENTRY* ValidateProgramPipeline)(GLuint);
        void(HX_GL_APIENTRY* VertexArrayAttribBinding)(GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexArrayAttribFormat)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint);
        void(HX_GL_APIENTRY* VertexArrayAttribIFormat)(GLuint, GLuint, GLint, GLenum, GLuint);
        void(HX_GL_APIENTRY* VertexArrayAttribLFormat)(GLuint, GLuint, GLint, GLenum, GLuint);
        void(HX_GL_APIENTRY* VertexArrayBindingDivisor)(GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexArrayElementBuffer)(GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexArrayVertexBuffer)(GLuint, GLuint, GLuint, GLintptr, GLsizei);
        void(HX_GL_APIENTRY* VertexArrayVertexBuffers)(GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *);
        void(HX_GL_APIENTRY* VertexAttrib1d)(GLuint, GLdouble);
        void(HX_GL_APIENTRY* VertexAttrib1dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttrib1f)(GLuint, GLfloat);
        void(HX_GL_APIENTRY* VertexAttrib1fv)(GLuint, const GLfloat *);
        void(HX_GL_APIENTRY* VertexAttrib1s)(GLuint, GLshort);
        void(HX_GL_APIENTRY* VertexAttrib1sv)(GLuint, const GLshort *);
        void(HX_GL_APIENTRY* VertexAttrib2d)(GLuint, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* VertexAttrib2dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttrib2f)(GLuint, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* VertexAttrib2fv)(GLuint, const GLfloat *);
        void(HX_GL_APIENTRY* VertexAttrib2s)(GLuint, GLshort, GLshort);
        void(HX_GL_APIENTRY* VertexAttrib2sv)(GLuint, const GLshort *);
        void(HX_GL_APIENTRY* VertexAttrib3d)(GLuint, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* VertexAttrib3dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttrib3f)(GLuint, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* VertexAttrib3fv)(GLuint, const GLfloat *);
        void(HX_GL_APIENTRY* VertexAttrib3s)(GLuint, GLshort, GLshort, GLshort);
        void(HX_GL_APIENTRY* VertexAttrib3sv)(GLuint, const GLshort *);
        void(HX_GL_APIENTRY* VertexAttrib4Nbv)(GLuint, const GLbyte *);
        void(HX_GL_APIENTRY* VertexAttrib4Niv)(GLuint, const GLint *);
        void(HX_GL_APIENTRY* VertexAttrib4Nsv)(GLuint, const GLshort *);
        void(HX_GL_APIENTRY* VertexAttrib4Nub)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte);
        void(HX_GL_APIENTRY* VertexAttrib4Nubv)(GLuint, const GLubyte *);
        void(HX_GL_APIENTRY* VertexAttrib4Nuiv)(GLuint, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttrib4Nusv)(GLuint, const GLushort *);
        void(HX_GL_APIENTRY* VertexAttrib4bv)(GLuint, const GLbyte *);
        void(HX_GL_APIENTRY* VertexAttrib4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* VertexAttrib4dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* VertexAttrib4fv)(GLuint, const GLfloat *);
        void(HX_GL_APIENTRY* VertexAttrib4iv)(GLuint, const GLint *);
        void(HX_GL_APIENTRY* VertexAttrib4s)(GLuint, GLshort, GLshort, GLshort, GLshort);
        void(HX_GL_APIENTRY* VertexAttrib4sv)(GLuint, const GLshort *);
        void(HX_GL_APIENTRY* VertexAttrib4ubv)(GLuint, const GLubyte *);
        void(HX_GL_APIENTRY* VertexAttrib4uiv)(GLuint, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttrib4usv)(GLuint, const GLushort *);
        void(HX_GL_APIENTRY* VertexAttribBinding)(GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexAttribDivisor)(GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexAttribFormat)(GLuint, GLint, GLenum, GLboolean, GLuint);
        void(HX_GL_APIENTRY* VertexAttribI1i)(GLuint, GLint);
        void(HX_GL_APIENTRY* VertexAttribI1iv)(GLuint, const GLint *);
        void(HX_GL_APIENTRY* VertexAttribI1ui)(GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexAttribI1uiv)(GLuint, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribI2i)(GLuint, GLint, GLint);
        void(HX_GL_APIENTRY* VertexAttribI2iv)(GLuint, const GLint *);
        void(HX_GL_APIENTRY* VertexAttribI2ui)(GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexAttribI2uiv)(GLuint, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribI3i)(GLuint, GLint, GLint, GLint);
        void(HX_GL_APIENTRY* VertexAttribI3iv)(GLuint, const GLint *);
        void(HX_GL_APIENTRY* VertexAttribI3ui)(GLuint, GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexAttribI3uiv)(GLuint, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribI4bv)(GLuint, const GLbyte *);
        void(HX_GL_APIENTRY* VertexAttribI4i)(GLuint, GLint, GLint, GLint, GLint);
        void(HX_GL_APIENTRY* VertexAttribI4iv)(GLuint, const GLint *);
        void(HX_GL_APIENTRY* VertexAttribI4sv)(GLuint, const GLshort *);
        void(HX_GL_APIENTRY* VertexAttribI4ubv)(GLuint, const GLubyte *);
        void(HX_GL_APIENTRY* VertexAttribI4ui)(GLuint, GLuint, GLuint, GLuint, GLuint);
        void(HX_GL_APIENTRY* VertexAttribI4uiv)(GLuint, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribI4usv)(GLuint, const GLushort *);
        void(HX_GL_APIENTRY* VertexAttribIFormat)(GLuint, GLint, GLenum, GLuint);
        void(HX_GL_APIENTRY* VertexAttribIPointer)(GLuint, GLint, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* VertexAttribL1d)(GLuint, GLdouble);
        void(HX_GL_APIENTRY* VertexAttribL1dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttribL1ui64ARB)(GLuint, GLuint64EXT);
        void(HX_GL_APIENTRY* VertexAttribL1ui64vARB)(GLuint, const GLuint64EXT *);
        void(HX_GL_APIENTRY* VertexAttribL2d)(GLuint, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* VertexAttribL2dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttribL3d)(GLuint, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* VertexAttribL3dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttribL4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
        void(HX_GL_APIENTRY* VertexAttribL4dv)(GLuint, const GLdouble *);
        void(HX_GL_APIENTRY* VertexAttribLFormat)(GLuint, GLint, GLenum, GLuint);
        void(HX_GL_APIENTRY* VertexAttribLPointer)(GLuint, GLint, GLenum, GLsizei, const void *);
        void(HX_GL_APIENTRY* VertexAttribP1ui)(GLuint, GLenum, GLboolean, GLuint);
        void(HX_GL_APIENTRY* VertexAttribP1uiv)(GLuint, GLenum, GLboolean, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribP2ui)(GLuint, GLenum, GLboolean, GLuint);
        void(HX_GL_APIENTRY* VertexAttribP2uiv)(GLuint, GLenum, GLboolean, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribP3ui)(GLuint, GLenum, GLboolean, GLuint);
        void(HX_GL_APIENTRY* VertexAttribP3uiv)(GLuint, GLenum, GLboolean, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribP4ui)(GLuint, GLenum, GLboolean, GLuint);
        void(HX_GL_APIENTRY* VertexAttribP4uiv)(GLuint, GLenum, GLboolean, const GLuint *);
        void(HX_GL_APIENTRY* VertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *);
        void(HX_GL_APIENTRY* VertexBindingDivisor)(GLuint, GLuint);
        void(HX_GL_APIENTRY* Viewport)(GLint, GLint, GLsizei, GLsizei);
        void(HX_GL_APIENTRY* ViewportArrayv)(GLuint, GLsizei, const GLfloat *);
        void(HX_GL_APIENTRY* ViewportIndexedf)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
        void(HX_GL_APIENTRY* ViewportIndexedfv)(GLuint, const GLfloat *);
        void(HX_GL_APIENTRY* WaitSync)(GLsync, GLbitfield, GLuint64);
    };

    extern Api api;

    using GetProcAddressFunction = void* (*)(const char* name, void* user);

    int Load(GetProcAddressFunction getProcAddress, void* user);
    int CommandCount();

    inline void glActiveShaderProgram(GLuint a0, GLuint a1) { api.ActiveShaderProgram(a0, a1); }
    inline void glActiveTexture(GLenum a0) { api.ActiveTexture(a0); }
    inline void glAttachShader(GLuint a0, GLuint a1) { api.AttachShader(a0, a1); }
    inline void glBeginConditionalRender(GLuint a0, GLenum a1) { api.BeginConditionalRender(a0, a1); }
    inline void glBeginQuery(GLenum a0, GLuint a1) { api.BeginQuery(a0, a1); }
    inline void glBeginQueryEXT(GLenum a0, GLuint a1) { api.BeginQueryEXT(a0, a1); }
    inline void glBeginQueryIndexed(GLenum a0, GLuint a1, GLuint a2) { api.BeginQueryIndexed(a0, a1, a2); }
    inline void glBeginTransformFeedback(GLenum a0) { api.BeginTransformFeedback(a0); }
    inline void glBindAttribLocation(GLuint a0, GLuint a1, const GLchar * a2) { api.BindAttribLocation(a0, a1, a2); }
    inline void glBindBuffer(GLenum a0, GLuint a1) { api.BindBuffer(a0, a1); }
    inline void glBindBufferBase(GLenum a0, GLuint a1, GLuint a2) { api.BindBufferBase(a0, a1, a2); }
    inline void glBindBufferRange(GLenum a0, GLuint a1, GLuint a2, GLintptr a3, GLsizeiptr a4) { api.BindBufferRange(a0, a1, a2, a3, a4); }
    inline void glBindBuffersBase(GLenum a0, GLuint a1, GLsizei a2, const GLuint * a3) { api.BindBuffersBase(a0, a1, a2, a3); }
    inline void glBindBuffersRange(GLenum a0, GLuint a1, GLsizei a2, const GLuint * a3, const GLintptr * a4, const GLsizeiptr * a5) { api.BindBuffersRange(a0, a1, a2, a3, a4, a5); }
    inline void glBindFragDataLocation(GLuint a0, GLuint a1, const GLchar * a2) { api.BindFragDataLocation(a0, a1, a2); }
    inline void glBindFragDataLocationIndexed(GLuint a0, GLuint a1, GLuint a2, const GLchar * a3) { api.BindFragDataLocationIndexed(a0, a1, a2, a3); }
    inline void glBindFramebuffer(GLenum a0, GLuint a1) { api.BindFramebuffer(a0, a1); }
    inline void glBindImageTexture(GLuint a0, GLuint a1, GLint a2, GLboolean a3, GLint a4, GLenum a5, GLenum a6) { api.BindImageTexture(a0, a1, a2, a3, a4, a5, a6); }
    inline void glBindImageTextures(GLuint a0, GLsizei a1, const GLuint * a2) { api.BindImageTextures(a0, a1, a2); }
    inline void glBindProgramPipeline(GLuint a0) { api.BindProgramPipeline(a0); }
    inline void glBindRenderbuffer(GLenum a0, GLuint a1) { api.BindRenderbuffer(a0, a1); }
    inline void glBindSampler(GLuint a0, GLuint a1) { api.BindSampler(a0, a1); }
    inline void glBindSamplers(GLuint a0, GLsizei a1, const GLuint * a2) { api.BindSamplers(a0, a1, a2); }
    inline void glBindTexture(GLenum a0, GLuint a1) { api.BindTexture(a0, a1); }
    inline void glBindTextureUnit(GLuint a0, GLuint a1) { api.BindTextureUnit(a0, a1); }
    inline void glBindTextures(GLuint a0, GLsizei a1, const GLuint * a2) { api.BindTextures(a0, a1, a2); }
    inline void glBindTransformFeedback(GLenum a0, GLuint a1) { api.BindTransformFeedback(a0, a1); }
    inline void glBindVertexArray(GLuint a0) { api.BindVertexArray(a0); }
    inline void glBindVertexBuffer(GLuint a0, GLuint a1, GLintptr a2, GLsizei a3) { api.BindVertexBuffer(a0, a1, a2, a3); }
    inline void glBindVertexBuffers(GLuint a0, GLsizei a1, const GLuint * a2, const GLintptr * a3, const GLsizei * a4) { api.BindVertexBuffers(a0, a1, a2, a3, a4); }
    inline void glBlendBarrier() { api.BlendBarrier(); }
    inline void glBlendColor(GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3) { api.BlendColor(a0, a1, a2, a3); }
    inline void glBlendEquation(GLenum a0) { api.BlendEquation(a0); }
    inline void glBlendEquationSeparate(GLenum a0, GLenum a1) { api.BlendEquationSeparate(a0, a1); }
    inline void glBlendEquationSeparatei(GLuint a0, GLenum a1, GLenum a2) { api.BlendEquationSeparatei(a0, a1, a2); }
    inline void glBlendEquationi(GLuint a0, GLenum a1) { api.BlendEquationi(a0, a1); }
    inline void glBlendFunc(GLenum a0, GLenum a1) { api.BlendFunc(a0, a1); }
    inline void glBlendFuncSeparate(GLenum a0, GLenum a1, GLenum a2, GLenum a3) { api.BlendFuncSeparate(a0, a1, a2, a3); }
    inline void glBlendFuncSeparatei(GLuint a0, GLenum a1, GLenum a2, GLenum a3, GLenum a4) { api.BlendFuncSeparatei(a0, a1, a2, a3, a4); }
    inline void glBlendFunci(GLuint a0, GLenum a1, GLenum a2) { api.BlendFunci(a0, a1, a2); }
    inline void glBlitFramebuffer(GLint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLint a6, GLint a7, GLbitfield a8, GLenum a9) { api.BlitFramebuffer(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
    inline void glBlitNamedFramebuffer(GLuint a0, GLuint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLint a6, GLint a7, GLint a8, GLint a9, GLbitfield a10, GLenum a11) { api.BlitNamedFramebuffer(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
    inline void glBufferData(GLenum a0, GLsizeiptr a1, const void * a2, GLenum a3) { api.BufferData(a0, a1, a2, a3); }
    inline void glBufferStorage(GLenum a0, GLsizeiptr a1, const void * a2, GLbitfield a3) { api.BufferStorage(a0, a1, a2, a3); }
    inline void glBufferStorageEXT(GLenum a0, GLsizeiptr a1, const void * a2, GLbitfield a3) { api.BufferStorageEXT(a0, a1, a2, a3); }
    inline void glBufferSubData(GLenum a0, GLintptr a1, GLsizeiptr a2, const void * a3) { api.BufferSubData(a0, a1, a2, a3); }
    inline GLenum glCheckFramebufferStatus(GLenum a0) { return api.CheckFramebufferStatus(a0); }
    inline GLenum glCheckNamedFramebufferStatus(GLuint a0, GLenum a1) { return api.CheckNamedFramebufferStatus(a0, a1); }
    inline void glClampColor(GLenum a0, GLenum a1) { api.ClampColor(a0, a1); }
    inline void glClear(GLbitfield a0) { api.Clear(a0); }
    inline void glClearBufferData(GLenum a0, GLenum a1, GLenum a2, GLenum a3, const void * a4) { api.ClearBufferData(a0, a1, a2, a3, a4); }
    inline void glClearBufferSubData(GLenum a0, GLenum a1, GLintptr a2, GLsizeiptr a3, GLenum a4, GLenum a5, const void * a6) { api.ClearBufferSubData(a0, a1, a2, a3, a4, a5, a6); }
    inline void glClearBufferfi(GLenum a0, GLint a1, GLfloat a2, GLint a3) { api.ClearBufferfi(a0, a1, a2, a3); }
    inline void glClearBufferfv(GLenum a0, GLint a1, const GLfloat * a2) { api.ClearBufferfv(a0, a1, a2); }
    inline void glClearBufferiv(GLenum a0, GLint a1, const GLint * a2) { api.ClearBufferiv(a0, a1, a2); }
    inline void glClearBufferuiv(GLenum a0, GLint a1, const GLuint * a2) { api.ClearBufferuiv(a0, a1, a2); }
    inline void glClearColor(GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3) { api.ClearColor(a0, a1, a2, a3); }
    inline void glClearDepth(GLdouble a0) { api.ClearDepth(a0); }
    inline void glClearDepthf(GLfloat a0) { api.ClearDepthf(a0); }
    inline void glClearNamedBufferData(GLuint a0, GLenum a1, GLenum a2, GLenum a3, const void * a4) { api.ClearNamedBufferData(a0, a1, a2, a3, a4); }
    inline void glClearNamedBufferSubData(GLuint a0, GLenum a1, GLintptr a2, GLsizeiptr a3, GLenum a4, GLenum a5, const void * a6) { api.ClearNamedBufferSubData(a0, a1, a2, a3, a4, a5, a6); }
    inline void glClearNamedFramebufferfi(GLuint a0, GLenum a1, GLint a2, GLfloat a3, GLint a4) { api.ClearNamedFramebufferfi(a0, a1, a2, a3, a4); }
    inline void glClearNamedFramebufferfv(GLuint a0, GLenum a1, GLint a2, const GLfloat * a3) { api.ClearNamedFramebufferfv(a0, a1, a2, a3); }
    inline void glClearNamedFramebufferiv(GLuint a0, GLenum a1, GLint a2, const GLint * a3) { api.ClearNamedFramebufferiv(a0, a1, a2, a3); }
    inline void glClearNamedFramebufferuiv(GLuint a0, GLenum a1, GLint a2, const GLuint * a3) { api.ClearNamedFramebufferuiv(a0, a1, a2, a3); }
    inline void glClearStencil(GLint a0) { api.ClearStencil(a0); }
    inline void glClearTexImage(GLuint a0, GLint a1, GLenum a2, GLenum a3, const void * a4) { api.ClearTexImage(a0, a1, a2, a3, a4); }
    inline void glClearTexSubImage(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLenum a9, const void * a10) { api.ClearTexSubImage(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
    inline GLenum glClientWaitSync(GLsync a0, GLbitfield a1, GLuint64 a2) { return api.ClientWaitSync(a0, a1, a2); }
    inline void glClipControl(GLenum a0, GLenum a1) { api.ClipControl(a0, a1); }
    inline void glClipControlEXT(GLenum a0, GLenum a1) { api.ClipControlEXT(a0, a1); }
    inline void glColorMask(GLboolean a0, GLboolean a1, GLboolean a2, GLboolean a3) { api.ColorMask(a0, a1, a2, a3); }
    inline void glColorMaski(GLuint a0, GLboolean a1, GLboolean a2, GLboolean a3, GLboolean a4) { api.ColorMaski(a0, a1, a2, a3, a4); }
    inline void glCompileShader(GLuint a0) { api.CompileShader(a0); }
    inline void glCompressedTexImage1D(GLenum a0, GLint a1, GLenum a2, GLsizei a3, GLint a4, GLsizei a5, const void * a6) { api.CompressedTexImage1D(a0, a1, a2, a3, a4, a5, a6); }
    inline void glCompressedTexImage2D(GLenum a0, GLint a1, GLenum a2, GLsizei a3, GLsizei a4, GLint a5, GLsizei a6, const void * a7) { api.CompressedTexImage2D(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glCompressedTexImage3D(GLenum a0, GLint a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5, GLint a6, GLsizei a7, const void * a8) { api.CompressedTexImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glCompressedTexSubImage1D(GLenum a0, GLint a1, GLint a2, GLsizei a3, GLenum a4, GLsizei a5, const void * a6) { api.CompressedTexSubImage1D(a0, a1, a2, a3, a4, a5, a6); }
    inline void glCompressedTexSubImage2D(GLenum a0, GLint a1, GLint a2, GLint a3, GLsizei a4, GLsizei a5, GLenum a6, GLsizei a7, const void * a8) { api.CompressedTexSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glCompressedTexSubImage3D(GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLsizei a9, const void * a10) { api.CompressedTexSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
    inline void glCompressedTextureSubImage1D(GLuint a0, GLint a1, GLint a2, GLsizei a3, GLenum a4, GLsizei a5, const void * a6) { api.CompressedTextureSubImage1D(a0, a1, a2, a3, a4, a5, a6); }
    inline void glCompressedTextureSubImage2D(GLuint a0, GLint a1, GLint a2, GLint a3, GLsizei a4, GLsizei a5, GLenum a6, GLsizei a7, const void * a8) { api.CompressedTextureSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glCompressedTextureSubImage3D(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLsizei a9, const void * a10) { api.CompressedTextureSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
    inline void glCopyBufferSubData(GLenum a0, GLenum a1, GLintptr a2, GLintptr a3, GLsizeiptr a4) { api.CopyBufferSubData(a0, a1, a2, a3, a4); }
    inline void glCopyImageSubData(GLuint a0, GLenum a1, GLint a2, GLint a3, GLint a4, GLint a5, GLuint a6, GLenum a7, GLint a8, GLint a9, GLint a10, GLint a11, GLsizei a12, GLsizei a13, GLsizei a14) { api.CopyImageSubData(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14); }
    inline void glCopyNamedBufferSubData(GLuint a0, GLuint a1, GLintptr a2, GLintptr a3, GLsizeiptr a4) { api.CopyNamedBufferSubData(a0, a1, a2, a3, a4); }
    inline void glCopyTexImage1D(GLenum a0, GLint a1, GLenum a2, GLint a3, GLint a4, GLsizei a5, GLint a6) { api.CopyTexImage1D(a0, a1, a2, a3, a4, a5, a6); }
    inline void glCopyTexImage2D(GLenum a0, GLint a1, GLenum a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLint a7) { api.CopyTexImage2D(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glCopyTexSubImage1D(GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5) { api.CopyTexSubImage1D(a0, a1, a2, a3, a4, a5); }
    inline void glCopyTexSubImage2D(GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLsizei a6, GLsizei a7) { api.CopyTexSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glCopyTexSubImage3D(GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLint a6, GLsizei a7, GLsizei a8) { api.CopyTexSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glCopyTextureSubImage1D(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5) { api.CopyTextureSubImage1D(a0, a1, a2, a3, a4, a5); }
    inline void glCopyTextureSubImage2D(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLsizei a6, GLsizei a7) { api.CopyTextureSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glCopyTextureSubImage3D(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLint a6, GLsizei a7, GLsizei a8) { api.CopyTextureSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glCreateBuffers(GLsizei a0, GLuint * a1) { api.CreateBuffers(a0, a1); }
    inline void glCreateFramebuffers(GLsizei a0, GLuint * a1) { api.CreateFramebuffers(a0, a1); }
    inline GLuint glCreateProgram() { return api.CreateProgram(); }
    inline void glCreateProgramPipelines(GLsizei a0, GLuint * a1) { api.CreateProgramPipelines(a0, a1); }
    inline void glCreateQueries(GLenum a0, GLsizei a1, GLuint * a2) { api.CreateQueries(a0, a1, a2); }
    inline void glCreateRenderbuffers(GLsizei a0, GLuint * a1) { api.CreateRenderbuffers(a0, a1); }
    inline void glCreateSamplers(GLsizei a0, GLuint * a1) { api.CreateSamplers(a0, a1); }
    inline GLuint glCreateShader(GLenum a0) { return api.CreateShader(a0); }
    inline GLuint glCreateShaderProgramv(GLenum a0, GLsizei a1, const GLchar *const* a2) { return api.CreateShaderProgramv(a0, a1, a2); }
    inline void glCreateTextures(GLenum a0, GLsizei a1, GLuint * a2) { api.CreateTextures(a0, a1, a2); }
    inline void glCreateTransformFeedbacks(GLsizei a0, GLuint * a1) { api.CreateTransformFeedbacks(a0, a1); }
    inline void glCreateVertexArrays(GLsizei a0, GLuint * a1) { api.CreateVertexArrays(a0, a1); }
    inline void glCullFace(GLenum a0) { api.CullFace(a0); }
    inline void glDebugMessageCallback(GLDEBUGPROC a0, const void * a1) { api.DebugMessageCallback(a0, a1); }
    inline void glDebugMessageCallbackKHR(GLDEBUGPROCKHR a0, const void * a1) { api.DebugMessageCallbackKHR(a0, a1); }
    inline void glDebugMessageControl(GLenum a0, GLenum a1, GLenum a2, GLsizei a3, const GLuint * a4, GLboolean a5) { api.DebugMessageControl(a0, a1, a2, a3, a4, a5); }
    inline void glDebugMessageControlKHR(GLenum a0, GLenum a1, GLenum a2, GLsizei a3, const GLuint * a4, GLboolean a5) { api.DebugMessageControlKHR(a0, a1, a2, a3, a4, a5); }
    inline void glDebugMessageInsert(GLenum a0, GLenum a1, GLuint a2, GLenum a3, GLsizei a4, const GLchar * a5) { api.DebugMessageInsert(a0, a1, a2, a3, a4, a5); }
    inline void glDebugMessageInsertKHR(GLenum a0, GLenum a1, GLuint a2, GLenum a3, GLsizei a4, const GLchar * a5) { api.DebugMessageInsertKHR(a0, a1, a2, a3, a4, a5); }
    inline void glDeleteBuffers(GLsizei a0, const GLuint * a1) { api.DeleteBuffers(a0, a1); }
    inline void glDeleteFramebuffers(GLsizei a0, const GLuint * a1) { api.DeleteFramebuffers(a0, a1); }
    inline void glDeleteProgram(GLuint a0) { api.DeleteProgram(a0); }
    inline void glDeleteProgramPipelines(GLsizei a0, const GLuint * a1) { api.DeleteProgramPipelines(a0, a1); }
    inline void glDeleteQueries(GLsizei a0, const GLuint * a1) { api.DeleteQueries(a0, a1); }
    inline void glDeleteQueriesEXT(GLsizei a0, const GLuint * a1) { api.DeleteQueriesEXT(a0, a1); }
    inline void glDeleteRenderbuffers(GLsizei a0, const GLuint * a1) { api.DeleteRenderbuffers(a0, a1); }
    inline void glDeleteSamplers(GLsizei a0, const GLuint * a1) { api.DeleteSamplers(a0, a1); }
    inline void glDeleteShader(GLuint a0) { api.DeleteShader(a0); }
    inline void glDeleteSync(GLsync a0) { api.DeleteSync(a0); }
    inline void glDeleteTextures(GLsizei a0, const GLuint * a1) { api.DeleteTextures(a0, a1); }
    inline void glDeleteTransformFeedbacks(GLsizei a0, const GLuint * a1) { api.DeleteTransformFeedbacks(a0, a1); }
    inline void glDeleteVertexArrays(GLsizei a0, const GLuint * a1) { api.DeleteVertexArrays(a0, a1); }
    inline void glDepthFunc(GLenum a0) { api.DepthFunc(a0); }
    inline void glDepthMask(GLboolean a0) { api.DepthMask(a0); }
    inline void glDepthRange(GLdouble a0, GLdouble a1) { api.DepthRange(a0, a1); }
    inline void glDepthRangeArrayv(GLuint a0, GLsizei a1, const GLdouble * a2) { api.DepthRangeArrayv(a0, a1, a2); }
    inline void glDepthRangeIndexed(GLuint a0, GLdouble a1, GLdouble a2) { api.DepthRangeIndexed(a0, a1, a2); }
    inline void glDepthRangef(GLfloat a0, GLfloat a1) { api.DepthRangef(a0, a1); }
    inline void glDetachShader(GLuint a0, GLuint a1) { api.DetachShader(a0, a1); }
    inline void glDisable(GLenum a0) { api.Disable(a0); }
    inline void glDisableVertexArrayAttrib(GLuint a0, GLuint a1) { api.DisableVertexArrayAttrib(a0, a1); }
    inline void glDisableVertexAttribArray(GLuint a0) { api.DisableVertexAttribArray(a0); }
    inline void glDisablei(GLenum a0, GLuint a1) { api.Disablei(a0, a1); }
    inline void glDispatchCompute(GLuint a0, GLuint a1, GLuint a2) { api.DispatchCompute(a0, a1, a2); }
    inline void glDispatchComputeIndirect(GLintptr a0) { api.DispatchComputeIndirect(a0); }
    inline void glDrawArrays(GLenum a0, GLint a1, GLsizei a2) { api.DrawArrays(a0, a1, a2); }
    inline void glDrawArraysIndirect(GLenum a0, const void * a1) { api.DrawArraysIndirect(a0, a1); }
    inline void glDrawArraysInstanced(GLenum a0, GLint a1, GLsizei a2, GLsizei a3) { api.DrawArraysInstanced(a0, a1, a2, a3); }
    inline void glDrawArraysInstancedBaseInstance(GLenum a0, GLint a1, GLsizei a2, GLsizei a3, GLuint a4) { api.DrawArraysInstancedBaseInstance(a0, a1, a2, a3, a4); }
    inline void glDrawArraysInstancedBaseInstanceEXT(GLenum a0, GLint a1, GLsizei a2, GLsizei a3, GLuint a4) { api.DrawArraysInstancedBaseInstanceEXT(a0, a1, a2, a3, a4); }
    inline void glDrawBuffer(GLenum a0) { api.DrawBuffer(a0); }
    inline void glDrawBuffers(GLsizei a0, const GLenum * a1) { api.DrawBuffers(a0, a1); }
    inline void glDrawElements(GLenum a0, GLsizei a1, GLenum a2, const void * a3) { api.DrawElements(a0, a1, a2, a3); }
    inline void glDrawElementsBaseVertex(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLint a4) { api.DrawElementsBaseVertex(a0, a1, a2, a3, a4); }
    inline void glDrawElementsBaseVertexEXT(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLint a4) { api.DrawElementsBaseVertexEXT(a0, a1, a2, a3, a4); }
    inline void glDrawElementsIndirect(GLenum a0, GLenum a1, const void * a2) { api.DrawElementsIndirect(a0, a1, a2); }
    inline void glDrawElementsInstanced(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4) { api.DrawElementsInstanced(a0, a1, a2, a3, a4); }
    inline void glDrawElementsInstancedBaseInstance(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4, GLuint a5) { api.DrawElementsInstancedBaseInstance(a0, a1, a2, a3, a4, a5); }
    inline void glDrawElementsInstancedBaseInstanceEXT(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4, GLuint a5) { api.DrawElementsInstancedBaseInstanceEXT(a0, a1, a2, a3, a4, a5); }
    inline void glDrawElementsInstancedBaseVertex(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4, GLint a5) { api.DrawElementsInstancedBaseVertex(a0, a1, a2, a3, a4, a5); }
    inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4, GLint a5, GLuint a6) { api.DrawElementsInstancedBaseVertexBaseInstance(a0, a1, a2, a3, a4, a5, a6); }
    inline void glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4, GLint a5, GLuint a6) { api.DrawElementsInstancedBaseVertexBaseInstanceEXT(a0, a1, a2, a3, a4, a5, a6); }
    inline void glDrawElementsInstancedBaseVertexEXT(GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4, GLint a5) { api.DrawElementsInstancedBaseVertexEXT(a0, a1, a2, a3, a4, a5); }
    inline void glDrawRangeElements(GLenum a0, GLuint a1, GLuint a2, GLsizei a3, GLenum a4, const void * a5) { api.DrawRangeElements(a0, a1, a2, a3, a4, a5); }
    inline void glDrawRangeElementsBaseVertex(GLenum a0, GLuint a1, GLuint a2, GLsizei a3, GLenum a4, const void * a5, GLint a6) { api.DrawRangeElementsBaseVertex(a0, a1, a2, a3, a4, a5, a6); }
    inline void glDrawRangeElementsBaseVertexEXT(GLenum a0, GLuint a1, GLuint a2, GLsizei a3, GLenum a4, const void * a5, GLint a6) { api.DrawRangeElementsBaseVertexEXT(a0, a1, a2, a3, a4, a5, a6); }
    inline void glDrawTransformFeedback(GLenum a0, GLuint a1) { api.DrawTransformFeedback(a0, a1); }
    inline void glDrawTransformFeedbackInstanced(GLenum a0, GLuint a1, GLsizei a2) { api.DrawTransformFeedbackInstanced(a0, a1, a2); }
    inline void glDrawTransformFeedbackStream(GLenum a0, GLuint a1, GLuint a2) { api.DrawTransformFeedbackStream(a0, a1, a2); }
    inline void glDrawTransformFeedbackStreamInstanced(GLenum a0, GLuint a1, GLuint a2, GLsizei a3) { api.DrawTransformFeedbackStreamInstanced(a0, a1, a2, a3); }
    inline void glEnable(GLenum a0) { api.Enable(a0); }
    inline void glEnableVertexArrayAttrib(GLuint a0, GLuint a1) { api.EnableVertexArrayAttrib(a0, a1); }
    inline void glEnableVertexAttribArray(GLuint a0) { api.EnableVertexAttribArray(a0); }
    inline void glEnablei(GLenum a0, GLuint a1) { api.Enablei(a0, a1); }
    inline void glEndConditionalRender() { api.EndConditionalRender(); }
    inline void glEndQuery(GLenum a0) { api.EndQuery(a0); }
    inline void glEndQueryEXT(GLenum a0) { api.EndQueryEXT(a0); }
    inline void glEndQueryIndexed(GLenum a0, GLuint a1) { api.EndQueryIndexed(a0, a1); }
    inline void glEndTransformFeedback() { api.EndTransformFeedback(); }
    inline GLsync glFenceSync(GLenum a0, GLbitfield a1) { return api.FenceSync(a0, a1); }
    inline void glFinish() { api.Finish(); }
    inline void glFlush() { api.Flush(); }
    inline void glFlushMappedBufferRange(GLenum a0, GLintptr a1, GLsizeiptr a2) { api.FlushMappedBufferRange(a0, a1, a2); }
    inline void glFlushMappedNamedBufferRange(GLuint a0, GLintptr a1, GLsizeiptr a2) { api.FlushMappedNamedBufferRange(a0, a1, a2); }
    inline void glFramebufferParameteri(GLenum a0, GLenum a1, GLint a2) { api.FramebufferParameteri(a0, a1, a2); }
    inline void glFramebufferRenderbuffer(GLenum a0, GLenum a1, GLenum a2, GLuint a3) { api.FramebufferRenderbuffer(a0, a1, a2, a3); }
    inline void glFramebufferTexture(GLenum a0, GLenum a1, GLuint a2, GLint a3) { api.FramebufferTexture(a0, a1, a2, a3); }
    inline void glFramebufferTexture1D(GLenum a0, GLenum a1, GLenum a2, GLuint a3, GLint a4) { api.FramebufferTexture1D(a0, a1, a2, a3, a4); }
    inline void glFramebufferTexture2D(GLenum a0, GLenum a1, GLenum a2, GLuint a3, GLint a4) { api.FramebufferTexture2D(a0, a1, a2, a3, a4); }
    inline void glFramebufferTexture3D(GLenum a0, GLenum a1, GLenum a2, GLuint a3, GLint a4, GLint a5) { api.FramebufferTexture3D(a0, a1, a2, a3, a4, a5); }
    inline void glFramebufferTextureLayer(GLenum a0, GLenum a1, GLuint a2, GLint a3, GLint a4) { api.FramebufferTextureLayer(a0, a1, a2, a3, a4); }
    inline void glFramebufferTextureMultiviewOVR(GLenum a0, GLenum a1, GLuint a2, GLint a3, GLint a4, GLsizei a5) { api.FramebufferTextureMultiviewOVR(a0, a1, a2, a3, a4, a5); }
    inline void glFrontFace(GLenum a0) { api.FrontFace(a0); }
    inline void glGenBuffers(GLsizei a0, GLuint * a1) { api.GenBuffers(a0, a1); }
    inline void glGenFramebuffers(GLsizei a0, GLuint * a1) { api.GenFramebuffers(a0, a1); }
    inline void glGenProgramPipelines(GLsizei a0, GLuint * a1) { api.GenProgramPipelines(a0, a1); }
    inline void glGenQueries(GLsizei a0, GLuint * a1) { api.GenQueries(a0, a1); }
    inline void glGenQueriesEXT(GLsizei a0, GLuint * a1) { api.GenQueriesEXT(a0, a1); }
    inline void glGenRenderbuffers(GLsizei a0, GLuint * a1) { api.GenRenderbuffers(a0, a1); }
    inline void glGenSamplers(GLsizei a0, GLuint * a1) { api.GenSamplers(a0, a1); }
    inline void glGenTextures(GLsizei a0, GLuint * a1) { api.GenTextures(a0, a1); }
    inline void glGenTransformFeedbacks(GLsizei a0, GLuint * a1) { api.GenTransformFeedbacks(a0, a1); }
    inline void glGenVertexArrays(GLsizei a0, GLuint * a1) { api.GenVertexArrays(a0, a1); }
    inline void glGenerateMipmap(GLenum a0) { api.GenerateMipmap(a0); }
    inline void glGenerateTextureMipmap(GLuint a0) { api.GenerateTextureMipmap(a0); }
    inline void glGetActiveAtomicCounterBufferiv(GLuint a0, GLuint a1, GLenum a2, GLint * a3) { api.GetActiveAtomicCounterBufferiv(a0, a1, a2, a3); }
    inline void glGetActiveAttrib(GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLint * a4, GLenum * a5, GLchar * a6) { api.GetActiveAttrib(a0, a1, a2, a3, a4, a5, a6); }
    inline void glGetActiveSubroutineName(GLuint a0, GLenum a1, GLuint a2, GLsizei a3, GLsizei * a4, GLchar * a5) { api.GetActiveSubroutineName(a0, a1, a2, a3, a4, a5); }
    inline void glGetActiveSubroutineUniformName(GLuint a0, GLenum a1, GLuint a2, GLsizei a3, GLsizei * a4, GLchar * a5) { api.GetActiveSubroutineUniformName(a0, a1, a2, a3, a4, a5); }
    inline void glGetActiveSubroutineUniformiv(GLuint a0, GLenum a1, GLuint a2, GLenum a3, GLint * a4) { api.GetActiveSubroutineUniformiv(a0, a1, a2, a3, a4); }
    inline void glGetActiveUniform(GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLint * a4, GLenum * a5, GLchar * a6) { api.GetActiveUniform(a0, a1, a2, a3, a4, a5, a6); }
    inline void glGetActiveUniformBlockName(GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLchar * a4) { api.GetActiveUniformBlockName(a0, a1, a2, a3, a4); }
    inline void glGetActiveUniformBlockiv(GLuint a0, GLuint a1, GLenum a2, GLint * a3) { api.GetActiveUniformBlockiv(a0, a1, a2, a3); }
    inline void glGetActiveUniformName(GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLchar * a4) { api.GetActiveUniformName(a0, a1, a2, a3, a4); }
    inline void glGetActiveUniformsiv(GLuint a0, GLsizei a1, const GLuint * a2, GLenum a3, GLint * a4) { api.GetActiveUniformsiv(a0, a1, a2, a3, a4); }
    inline void glGetAttachedShaders(GLuint a0, GLsizei a1, GLsizei * a2, GLuint * a3) { api.GetAttachedShaders(a0, a1, a2, a3); }
    inline GLint glGetAttribLocation(GLuint a0, const GLchar * a1) { return api.GetAttribLocation(a0, a1); }
    inline void glGetBooleani_v(GLenum a0, GLuint a1, GLboolean * a2) { api.GetBooleani_v(a0, a1, a2); }
    inline void glGetBooleanv(GLenum a0, GLboolean * a1) { api.GetBooleanv(a0, a1); }
    inline void glGetBufferParameteri64v(GLenum a0, GLenum a1, GLint64 * a2) { api.GetBufferParameteri64v(a0, a1, a2); }
    inline void glGetBufferParameteriv(GLenum a0, GLenum a1, GLint * a2) { api.GetBufferParameteriv(a0, a1, a2); }
    inline void glGetBufferPointerv(GLenum a0, GLenum a1, void ** a2) { api.GetBufferPointerv(a0, a1, a2); }
    inline void glGetBufferSubData(GLenum a0, GLintptr a1, GLsizeiptr a2, void * a3) { api.GetBufferSubData(a0, a1, a2, a3); }
    inline void glGetCompressedTexImage(GLenum a0, GLint a1, void * a2) { api.GetCompressedTexImage(a0, a1, a2); }
    inline void glGetCompressedTextureImage(GLuint a0, GLint a1, GLsizei a2, void * a3) { api.GetCompressedTextureImage(a0, a1, a2, a3); }
    inline void glGetCompressedTextureSubImage(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLsizei a8, void * a9) { api.GetCompressedTextureSubImage(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
    inline GLuint glGetDebugMessageLog(GLuint a0, GLsizei a1, GLenum * a2, GLenum * a3, GLuint * a4, GLenum * a5, GLsizei * a6, GLchar * a7) { return api.GetDebugMessageLog(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline GLuint glGetDebugMessageLogKHR(GLuint a0, GLsizei a1, GLenum * a2, GLenum * a3, GLuint * a4, GLenum * a5, GLsizei * a6, GLchar * a7) { return api.GetDebugMessageLogKHR(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glGetDoublei_v(GLenum a0, GLuint a1, GLdouble * a2) { api.GetDoublei_v(a0, a1, a2); }
    inline void glGetDoublev(GLenum a0, GLdouble * a1) { api.GetDoublev(a0, a1); }
    inline GLenum glGetError() { return api.GetError(); }
    inline void glGetFloati_v(GLenum a0, GLuint a1, GLfloat * a2) { api.GetFloati_v(a0, a1, a2); }
    inline void glGetFloatv(GLenum a0, GLfloat * a1) { api.GetFloatv(a0, a1); }
    inline GLint glGetFragDataIndex(GLuint a0, const GLchar * a1) { return api.GetFragDataIndex(a0, a1); }
    inline GLint glGetFragDataLocation(GLuint a0, const GLchar * a1) { return api.GetFragDataLocation(a0, a1); }
    inline void glGetFramebufferAttachmentParameteriv(GLenum a0, GLenum a1, GLenum a2, GLint * a3) { api.GetFramebufferAttachmentParameteriv(a0, a1, a2, a3); }
    inline void glGetFramebufferParameteriv(GLenum a0, GLenum a1, GLint * a2) { api.GetFramebufferParameteriv(a0, a1, a2); }
    inline GLenum glGetGraphicsResetStatus() { return api.GetGraphicsResetStatus(); }
    inline GLuint64 glGetImageHandleARB(GLuint a0, GLint a1, GLboolean a2, GLint a3, GLenum a4) { return api.GetImageHandleARB(a0, a1, a2, a3, a4); }
    inline GLuint64 glGetImageHandleNV(GLuint a0, GLint a1, GLboolean a2, GLint a3, GLenum a4) { return api.GetImageHandleNV(a0, a1, a2, a3, a4); }
    inline void glGetInteger64i_v(GLenum a0, GLuint a1, GLint64 * a2) { api.GetInteger64i_v(a0, a1, a2); }
    inline void glGetInteger64v(GLenum a0, GLint64 * a1) { api.GetInteger64v(a0, a1); }
    inline void glGetInteger64vEXT(GLenum a0, GLint64 * a1) { api.GetInteger64vEXT(a0, a1); }
    inline void glGetIntegeri_v(GLenum a0, GLuint a1, GLint * a2) { api.GetIntegeri_v(a0, a1, a2); }
    inline void glGetIntegerv(GLenum a0, GLint * a1) { api.GetIntegerv(a0, a1); }
    inline void glGetInternalformati64v(GLenum a0, GLenum a1, GLenum a2, GLsizei a3, GLint64 * a4) { api.GetInternalformati64v(a0, a1, a2, a3, a4); }
    inline void glGetInternalformativ(GLenum a0, GLenum a1, GLenum a2, GLsizei a3, GLint * a4) { api.GetInternalformativ(a0, a1, a2, a3, a4); }
    inline void glGetMultisamplefv(GLenum a0, GLuint a1, GLfloat * a2) { api.GetMultisamplefv(a0, a1, a2); }
    inline void glGetNamedBufferParameteri64v(GLuint a0, GLenum a1, GLint64 * a2) { api.GetNamedBufferParameteri64v(a0, a1, a2); }
    inline void glGetNamedBufferParameteriv(GLuint a0, GLenum a1, GLint * a2) { api.GetNamedBufferParameteriv(a0, a1, a2); }
    inline void glGetNamedBufferPointerv(GLuint a0, GLenum a1, void ** a2) { api.GetNamedBufferPointerv(a0, a1, a2); }
    inline void glGetNamedBufferSubData(GLuint a0, GLintptr a1, GLsizeiptr a2, void * a3) { api.GetNamedBufferSubData(a0, a1, a2, a3); }
    inline void glGetNamedFramebufferAttachmentParameteriv(GLuint a0, GLenum a1, GLenum a2, GLint * a3) { api.GetNamedFramebufferAttachmentParameteriv(a0, a1, a2, a3); }
    inline void glGetNamedFramebufferParameteriv(GLuint a0, GLenum a1, GLint * a2) { api.GetNamedFramebufferParameteriv(a0, a1, a2); }
    inline void glGetNamedRenderbufferParameteriv(GLuint a0, GLenum a1, GLint * a2) { api.GetNamedRenderbufferParameteriv(a0, a1, a2); }
    inline void glGetObjectLabel(GLenum a0, GLuint a1, GLsizei a2, GLsizei * a3, GLchar * a4) { api.GetObjectLabel(a0, a1, a2, a3, a4); }
    inline void glGetObjectLabelKHR(GLenum a0, GLuint a1, GLsizei a2, GLsizei * a3, GLchar * a4) { api.GetObjectLabelKHR(a0, a1, a2, a3, a4); }
    inline void glGetObjectPtrLabel(const void * a0, GLsizei a1, GLsizei * a2, GLchar * a3) { api.GetObjectPtrLabel(a0, a1, a2, a3); }
    inline void glGetObjectPtrLabelKHR(const void * a0, GLsizei a1, GLsizei * a2, GLchar * a3) { api.GetObjectPtrLabelKHR(a0, a1, a2, a3); }
    inline void glGetPointerv(GLenum a0, void ** a1) { api.GetPointerv(a0, a1); }
    inline void glGetPointervKHR(GLenum a0, void ** a1) { api.GetPointervKHR(a0, a1); }
    inline void glGetProgramBinary(GLuint a0, GLsizei a1, GLsizei * a2, GLenum * a3, void * a4) { api.GetProgramBinary(a0, a1, a2, a3, a4); }
    inline void glGetProgramInfoLog(GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3) { api.GetProgramInfoLog(a0, a1, a2, a3); }
    inline void glGetProgramInterfaceiv(GLuint a0, GLenum a1, GLenum a2, GLint * a3) { api.GetProgramInterfaceiv(a0, a1, a2, a3); }
    inline void glGetProgramPipelineInfoLog(GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3) { api.GetProgramPipelineInfoLog(a0, a1, a2, a3); }
    inline void glGetProgramPipelineiv(GLuint a0, GLenum a1, GLint * a2) { api.GetProgramPipelineiv(a0, a1, a2); }
    inline GLuint glGetProgramResourceIndex(GLuint a0, GLenum a1, const GLchar * a2) { return api.GetProgramResourceIndex(a0, a1, a2); }
    inline GLint glGetProgramResourceLocation(GLuint a0, GLenum a1, const GLchar * a2) { return api.GetProgramResourceLocation(a0, a1, a2); }
    inline GLint glGetProgramResourceLocationIndex(GLuint a0, GLenum a1, const GLchar * a2) { return api.GetProgramResourceLocationIndex(a0, a1, a2); }
    inline void glGetProgramResourceName(GLuint a0, GLenum a1, GLuint a2, GLsizei a3, GLsizei * a4, GLchar * a5) { api.GetProgramResourceName(a0, a1, a2, a3, a4, a5); }
    inline void glGetProgramResourceiv(GLuint a0, GLenum a1, GLuint a2, GLsizei a3, const GLenum * a4, GLsizei a5, GLsizei * a6, GLint * a7) { api.GetProgramResourceiv(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glGetProgramStageiv(GLuint a0, GLenum a1, GLenum a2, GLint * a3) { api.GetProgramStageiv(a0, a1, a2, a3); }
    inline void glGetProgramiv(GLuint a0, GLenum a1, GLint * a2) { api.GetProgramiv(a0, a1, a2); }
    inline void glGetQueryBufferObjecti64v(GLuint a0, GLuint a1, GLenum a2, GLintptr a3) { api.GetQueryBufferObjecti64v(a0, a1, a2, a3); }
    inline void glGetQueryBufferObjectiv(GLuint a0, GLuint a1, GLenum a2, GLintptr a3) { api.GetQueryBufferObjectiv(a0, a1, a2, a3); }
    inline void glGetQueryBufferObjectui64v(GLuint a0, GLuint a1, GLenum a2, GLintptr a3) { api.GetQueryBufferObjectui64v(a0, a1, a2, a3); }
    inline void glGetQueryBufferObjectuiv(GLuint a0, GLuint a1, GLenum a2, GLintptr a3) { api.GetQueryBufferObjectuiv(a0, a1, a2, a3); }
    inline void glGetQueryIndexediv(GLenum a0, GLuint a1, GLenum a2, GLint * a3) { api.GetQueryIndexediv(a0, a1, a2, a3); }
    inline void glGetQueryObjecti64v(GLuint a0, GLenum a1, GLint64 * a2) { api.GetQueryObjecti64v(a0, a1, a2); }
    inline void glGetQueryObjecti64vEXT(GLuint a0, GLenum a1, GLint64 * a2) { api.GetQueryObjecti64vEXT(a0, a1, a2); }
    inline void glGetQueryObjectiv(GLuint a0, GLenum a1, GLint * a2) { api.GetQueryObjectiv(a0, a1, a2); }
    inline void glGetQueryObjectivEXT(GLuint a0, GLenum a1, GLint * a2) { api.GetQueryObjectivEXT(a0, a1, a2); }
    inline void glGetQueryObjectui64v(GLuint a0, GLenum a1, GLuint64 * a2) { api.GetQueryObjectui64v(a0, a1, a2); }
    inline void glGetQueryObjectui64vEXT(GLuint a0, GLenum a1, GLuint64 * a2) { api.GetQueryObjectui64vEXT(a0, a1, a2); }
    inline void glGetQueryObjectuiv(GLuint a0, GLenum a1, GLuint * a2) { api.GetQueryObjectuiv(a0, a1, a2); }
    inline void glGetQueryObjectuivEXT(GLuint a0, GLenum a1, GLuint * a2) { api.GetQueryObjectuivEXT(a0, a1, a2); }
    inline void glGetQueryiv(GLenum a0, GLenum a1, GLint * a2) { api.GetQueryiv(a0, a1, a2); }
    inline void glGetQueryivEXT(GLenum a0, GLenum a1, GLint * a2) { api.GetQueryivEXT(a0, a1, a2); }
    inline void glGetRenderbufferParameteriv(GLenum a0, GLenum a1, GLint * a2) { api.GetRenderbufferParameteriv(a0, a1, a2); }
    inline void glGetSamplerParameterIiv(GLuint a0, GLenum a1, GLint * a2) { api.GetSamplerParameterIiv(a0, a1, a2); }
    inline void glGetSamplerParameterIuiv(GLuint a0, GLenum a1, GLuint * a2) { api.GetSamplerParameterIuiv(a0, a1, a2); }
    inline void glGetSamplerParameterfv(GLuint a0, GLenum a1, GLfloat * a2) { api.GetSamplerParameterfv(a0, a1, a2); }
    inline void glGetSamplerParameteriv(GLuint a0, GLenum a1, GLint * a2) { api.GetSamplerParameteriv(a0, a1, a2); }
    inline void glGetShaderInfoLog(GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3) { api.GetShaderInfoLog(a0, a1, a2, a3); }
    inline void glGetShaderPrecisionFormat(GLenum a0, GLenum a1, GLint * a2, GLint * a3) { api.GetShaderPrecisionFormat(a0, a1, a2, a3); }
    inline void glGetShaderSource(GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3) { api.GetShaderSource(a0, a1, a2, a3); }
    inline void glGetShaderiv(GLuint a0, GLenum a1, GLint * a2) { api.GetShaderiv(a0, a1, a2); }
    inline const GLubyte * glGetString(GLenum a0) { return api.GetString(a0); }
    inline const GLubyte * glGetStringi(GLenum a0, GLuint a1) { return api.GetStringi(a0, a1); }
    inline GLuint glGetSubroutineIndex(GLuint a0, GLenum a1, const GLchar * a2) { return api.GetSubroutineIndex(a0, a1, a2); }
    inline GLint glGetSubroutineUniformLocation(GLuint a0, GLenum a1, const GLchar * a2) { return api.GetSubroutineUniformLocation(a0, a1, a2); }
    inline void glGetSynciv(GLsync a0, GLenum a1, GLsizei a2, GLsizei * a3, GLint * a4) { api.GetSynciv(a0, a1, a2, a3, a4); }
    inline void glGetTexImage(GLenum a0, GLint a1, GLenum a2, GLenum a3, void * a4) { api.GetTexImage(a0, a1, a2, a3, a4); }
    inline void glGetTexLevelParameterfv(GLenum a0, GLint a1, GLenum a2, GLfloat * a3) { api.GetTexLevelParameterfv(a0, a1, a2, a3); }
    inline void glGetTexLevelParameteriv(GLenum a0, GLint a1, GLenum a2, GLint * a3) { api.GetTexLevelParameteriv(a0, a1, a2, a3); }
    inline void glGetTexParameterIiv(GLenum a0, GLenum a1, GLint * a2) { api.GetTexParameterIiv(a0, a1, a2); }
    inline void glGetTexParameterIuiv(GLenum a0, GLenum a1, GLuint * a2) { api.GetTexParameterIuiv(a0, a1, a2); }
    inline void glGetTexParameterfv(GLenum a0, GLenum a1, GLfloat * a2) { api.GetTexParameterfv(a0, a1, a2); }
    inline void glGetTexParameteriv(GLenum a0, GLenum a1, GLint * a2) { api.GetTexParameteriv(a0, a1, a2); }
    inline GLuint64 glGetTextureHandleARB(GLuint a0) { return api.GetTextureHandleARB(a0); }
    inline GLuint64 glGetTextureHandleNV(GLuint a0) { return api.GetTextureHandleNV(a0); }
    inline void glGetTextureImage(GLuint a0, GLint a1, GLenum a2, GLenum a3, GLsizei a4, void * a5) { api.GetTextureImage(a0, a1, a2, a3, a4, a5); }
    inline void glGetTextureLevelParameterfv(GLuint a0, GLint a1, GLenum a2, GLfloat * a3) { api.GetTextureLevelParameterfv(a0, a1, a2, a3); }
    inline void glGetTextureLevelParameteriv(GLuint a0, GLint a1, GLenum a2, GLint * a3) { api.GetTextureLevelParameteriv(a0, a1, a2, a3); }
    inline void glGetTextureParameterIiv(GLuint a0, GLenum a1, GLint * a2) { api.GetTextureParameterIiv(a0, a1, a2); }
    inline void glGetTextureParameterIuiv(GLuint a0, GLenum a1, GLuint * a2) { api.GetTextureParameterIuiv(a0, a1, a2); }
    inline void glGetTextureParameterfv(GLuint a0, GLenum a1, GLfloat * a2) { api.GetTextureParameterfv(a0, a1, a2); }
    inline void glGetTextureParameteriv(GLuint a0, GLenum a1, GLint * a2) { api.GetTextureParameteriv(a0, a1, a2); }
    inline GLuint64 glGetTextureSamplerHandleARB(GLuint a0, GLuint a1) { return api.GetTextureSamplerHandleARB(a0, a1); }
    inline GLuint64 glGetTextureSamplerHandleNV(GLuint a0, GLuint a1) { return api.GetTextureSamplerHandleNV(a0, a1); }
    inline void glGetTextureSubImage(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLenum a9, GLsizei a10, void * a11) { api.GetTextureSubImage(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
    inline void glGetTransformFeedbackVarying(GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLsizei * a4, GLenum * a5, GLchar * a6) { api.GetTransformFeedbackVarying(a0, a1, a2, a3, a4, a5, a6); }
    inline void glGetTransformFeedbacki64_v(GLuint a0, GLenum a1, GLuint a2, GLint64 * a3) { api.GetTransformFeedbacki64_v(a0, a1, a2, a3); }
    inline void glGetTransformFeedbacki_v(GLuint a0, GLenum a1, GLuint a2, GLint * a3) { api.GetTransformFeedbacki_v(a0, a1, a2, a3); }
    inline void glGetTransformFeedbackiv(GLuint a0, GLenum a1, GLint * a2) { api.GetTransformFeedbackiv(a0, a1, a2); }
    inline GLuint glGetUniformBlockIndex(GLuint a0, const GLchar * a1) { return api.GetUniformBlockIndex(a0, a1); }
    inline void glGetUniformIndices(GLuint a0, GLsizei a1, const GLchar *const* a2, GLuint * a3) { api.GetUniformIndices(a0, a1, a2, a3); }
    inline GLint glGetUniformLocation(GLuint a0, const GLchar * a1) { return api.GetUniformLocation(a0, a1); }
    inline void glGetUniformSubroutineuiv(GLenum a0, GLint a1, GLuint * a2) { api.GetUniformSubroutineuiv(a0, a1, a2); }
    inline void glGetUniformdv(GLuint a0, GLint a1, GLdouble * a2) { api.GetUniformdv(a0, a1, a2); }
    inline void glGetUniformfv(GLuint a0, GLint a1, GLfloat * a2) { api.GetUniformfv(a0, a1, a2); }
    inline void glGetUniformiv(GLuint a0, GLint a1, GLint * a2) { api.GetUniformiv(a0, a1, a2); }
    inline void glGetUniformuiv(GLuint a0, GLint a1, GLuint * a2) { api.GetUniformuiv(a0, a1, a2); }
    inline void glGetVertexArrayIndexed64iv(GLuint a0, GLuint a1, GLenum a2, GLint64 * a3) { api.GetVertexArrayIndexed64iv(a0, a1, a2, a3); }
    inline void glGetVertexArrayIndexediv(GLuint a0, GLuint a1, GLenum a2, GLint * a3) { api.GetVertexArrayIndexediv(a0, a1, a2, a3); }
    inline void glGetVertexArrayiv(GLuint a0, GLenum a1, GLint * a2) { api.GetVertexArrayiv(a0, a1, a2); }
    inline void glGetVertexAttribIiv(GLuint a0, GLenum a1, GLint * a2) { api.GetVertexAttribIiv(a0, a1, a2); }
    inline void glGetVertexAttribIuiv(GLuint a0, GLenum a1, GLuint * a2) { api.GetVertexAttribIuiv(a0, a1, a2); }
    inline void glGetVertexAttribLdv(GLuint a0, GLenum a1, GLdouble * a2) { api.GetVertexAttribLdv(a0, a1, a2); }
    inline void glGetVertexAttribLui64vARB(GLuint a0, GLenum a1, GLuint64EXT * a2) { api.GetVertexAttribLui64vARB(a0, a1, a2); }
    inline void glGetVertexAttribPointerv(GLuint a0, GLenum a1, void ** a2) { api.GetVertexAttribPointerv(a0, a1, a2); }
    inline void glGetVertexAttribdv(GLuint a0, GLenum a1, GLdouble * a2) { api.GetVertexAttribdv(a0, a1, a2); }
    inline void glGetVertexAttribfv(GLuint a0, GLenum a1, GLfloat * a2) { api.GetVertexAttribfv(a0, a1, a2); }
    inline void glGetVertexAttribiv(GLuint a0, GLenum a1, GLint * a2) { api.GetVertexAttribiv(a0, a1, a2); }
    inline void glGetnCompressedTexImage(GLenum a0, GLint a1, GLsizei a2, void * a3) { api.GetnCompressedTexImage(a0, a1, a2, a3); }
    inline void glGetnTexImage(GLenum a0, GLint a1, GLenum a2, GLenum a3, GLsizei a4, void * a5) { api.GetnTexImage(a0, a1, a2, a3, a4, a5); }
    inline void glGetnUniformdv(GLuint a0, GLint a1, GLsizei a2, GLdouble * a3) { api.GetnUniformdv(a0, a1, a2, a3); }
    inline void glGetnUniformfv(GLuint a0, GLint a1, GLsizei a2, GLfloat * a3) { api.GetnUniformfv(a0, a1, a2, a3); }
    inline void glGetnUniformiv(GLuint a0, GLint a1, GLsizei a2, GLint * a3) { api.GetnUniformiv(a0, a1, a2, a3); }
    inline void glGetnUniformuiv(GLuint a0, GLint a1, GLsizei a2, GLuint * a3) { api.GetnUniformuiv(a0, a1, a2, a3); }
    inline void glHint(GLenum a0, GLenum a1) { api.Hint(a0, a1); }
    inline void glInvalidateBufferData(GLuint a0) { api.InvalidateBufferData(a0); }
    inline void glInvalidateBufferSubData(GLuint a0, GLintptr a1, GLsizeiptr a2) { api.InvalidateBufferSubData(a0, a1, a2); }
    inline void glInvalidateFramebuffer(GLenum a0, GLsizei a1, const GLenum * a2) { api.InvalidateFramebuffer(a0, a1, a2); }
    inline void glInvalidateNamedFramebufferData(GLuint a0, GLsizei a1, const GLenum * a2) { api.InvalidateNamedFramebufferData(a0, a1, a2); }
    inline void glInvalidateNamedFramebufferSubData(GLuint a0, GLsizei a1, const GLenum * a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6) { api.InvalidateNamedFramebufferSubData(a0, a1, a2, a3, a4, a5, a6); }
    inline void glInvalidateSubFramebuffer(GLenum a0, GLsizei a1, const GLenum * a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6) { api.InvalidateSubFramebuffer(a0, a1, a2, a3, a4, a5, a6); }
    inline void glInvalidateTexImage(GLuint a0, GLint a1) { api.InvalidateTexImage(a0, a1); }
    inline void glInvalidateTexSubImage(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7) { api.InvalidateTexSubImage(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline GLboolean glIsBuffer(GLuint a0) { return api.IsBuffer(a0); }
    inline GLboolean glIsEnabled(GLenum a0) { return api.IsEnabled(a0); }
    inline GLboolean glIsEnabledi(GLenum a0, GLuint a1) { return api.IsEnabledi(a0, a1); }
    inline GLboolean glIsFramebuffer(GLuint a0) { return api.IsFramebuffer(a0); }
    inline GLboolean glIsImageHandleResidentARB(GLuint64 a0) { return api.IsImageHandleResidentARB(a0); }
    inline GLboolean glIsImageHandleResidentNV(GLuint64 a0) { return api.IsImageHandleResidentNV(a0); }
    inline GLboolean glIsProgram(GLuint a0) { return api.IsProgram(a0); }
    inline GLboolean glIsProgramPipeline(GLuint a0) { return api.IsProgramPipeline(a0); }
    inline GLboolean glIsQuery(GLuint a0) { return api.IsQuery(a0); }
    inline GLboolean glIsQueryEXT(GLuint a0) { return api.IsQueryEXT(a0); }
    inline GLboolean glIsRenderbuffer(GLuint a0) { return api.IsRenderbuffer(a0); }
    inline GLboolean glIsSampler(GLuint a0) { return api.IsSampler(a0); }
    inline GLboolean glIsShader(GLuint a0) { return api.IsShader(a0); }
    inline GLboolean glIsSync(GLsync a0) { return api.IsSync(a0); }
    inline GLboolean glIsTexture(GLuint a0) { return api.IsTexture(a0); }
    inline GLboolean glIsTextureHandleResidentARB(GLuint64 a0) { return api.IsTextureHandleResidentARB(a0); }
    inline GLboolean glIsTextureHandleResidentNV(GLuint64 a0) { return api.IsTextureHandleResidentNV(a0); }
    inline GLboolean glIsTransformFeedback(GLuint a0) { return api.IsTransformFeedback(a0); }
    inline GLboolean glIsVertexArray(GLuint a0) { return api.IsVertexArray(a0); }
    inline void glLineWidth(GLfloat a0) { api.LineWidth(a0); }
    inline void glLinkProgram(GLuint a0) { api.LinkProgram(a0); }
    inline void glLogicOp(GLenum a0) { api.LogicOp(a0); }
    inline void glMakeImageHandleNonResidentARB(GLuint64 a0) { api.MakeImageHandleNonResidentARB(a0); }
    inline void glMakeImageHandleNonResidentNV(GLuint64 a0) { api.MakeImageHandleNonResidentNV(a0); }
    inline void glMakeImageHandleResidentARB(GLuint64 a0, GLenum a1) { api.MakeImageHandleResidentARB(a0, a1); }
    inline void glMakeImageHandleResidentNV(GLuint64 a0, GLenum a1) { api.MakeImageHandleResidentNV(a0, a1); }
    inline void glMakeTextureHandleNonResidentARB(GLuint64 a0) { api.MakeTextureHandleNonResidentARB(a0); }
    inline void glMakeTextureHandleNonResidentNV(GLuint64 a0) { api.MakeTextureHandleNonResidentNV(a0); }
    inline void glMakeTextureHandleResidentARB(GLuint64 a0) { api.MakeTextureHandleResidentARB(a0); }
    inline void glMakeTextureHandleResidentNV(GLuint64 a0) { api.MakeTextureHandleResidentNV(a0); }
    inline void * glMapBuffer(GLenum a0, GLenum a1) { return api.MapBuffer(a0, a1); }
    inline void * glMapBufferRange(GLenum a0, GLintptr a1, GLsizeiptr a2, GLbitfield a3) { return api.MapBufferRange(a0, a1, a2, a3); }
    inline void * glMapNamedBuffer(GLuint a0, GLenum a1) { return api.MapNamedBuffer(a0, a1); }
    inline void * glMapNamedBufferRange(GLuint a0, GLintptr a1, GLsizeiptr a2, GLbitfield a3) { return api.MapNamedBufferRange(a0, a1, a2, a3); }
    inline void glMemoryBarrier(GLbitfield a0) { api.MemoryBarrier(a0); }
    inline void glMemoryBarrierByRegion(GLbitfield a0) { api.MemoryBarrierByRegion(a0); }
    inline void glMinSampleShading(GLfloat a0) { api.MinSampleShading(a0); }
    inline void glMultiDrawArrays(GLenum a0, const GLint * a1, const GLsizei * a2, GLsizei a3) { api.MultiDrawArrays(a0, a1, a2, a3); }
    inline void glMultiDrawArraysIndirect(GLenum a0, const void * a1, GLsizei a2, GLsizei a3) { api.MultiDrawArraysIndirect(a0, a1, a2, a3); }
    inline void glMultiDrawArraysIndirectCount(GLenum a0, const void * a1, GLintptr a2, GLsizei a3, GLsizei a4) { api.MultiDrawArraysIndirectCount(a0, a1, a2, a3, a4); }
    inline void glMultiDrawArraysIndirectEXT(GLenum a0, const void * a1, GLsizei a2, GLsizei a3) { api.MultiDrawArraysIndirectEXT(a0, a1, a2, a3); }
    inline void glMultiDrawElements(GLenum a0, const GLsizei * a1, GLenum a2, const void *const* a3, GLsizei a4) { api.MultiDrawElements(a0, a1, a2, a3, a4); }
    inline void glMultiDrawElementsBaseVertex(GLenum a0, const GLsizei * a1, GLenum a2, const void *const* a3, GLsizei a4, const GLint * a5) { api.MultiDrawElementsBaseVertex(a0, a1, a2, a3, a4, a5); }
    inline void glMultiDrawElementsBaseVertexEXT(GLenum a0, const GLsizei * a1, GLenum a2, const void *const* a3, GLsizei a4, const GLint * a5) { api.MultiDrawElementsBaseVertexEXT(a0, a1, a2, a3, a4, a5); }
    inline void glMultiDrawElementsIndirect(GLenum a0, GLenum a1, const void * a2, GLsizei a3, GLsizei a4) { api.MultiDrawElementsIndirect(a0, a1, a2, a3, a4); }
    inline void glMultiDrawElementsIndirectCount(GLenum a0, GLenum a1, const void * a2, GLintptr a3, GLsizei a4, GLsizei a5) { api.MultiDrawElementsIndirectCount(a0, a1, a2, a3, a4, a5); }
    inline void glMultiDrawElementsIndirectEXT(GLenum a0, GLenum a1, const void * a2, GLsizei a3, GLsizei a4) { api.MultiDrawElementsIndirectEXT(a0, a1, a2, a3, a4); }
    inline void glNamedBufferData(GLuint a0, GLsizeiptr a1, const void * a2, GLenum a3) { api.NamedBufferData(a0, a1, a2, a3); }
    inline void glNamedBufferStorage(GLuint a0, GLsizeiptr a1, const void * a2, GLbitfield a3) { api.NamedBufferStorage(a0, a1, a2, a3); }
    inline void glNamedBufferSubData(GLuint a0, GLintptr a1, GLsizeiptr a2, const void * a3) { api.NamedBufferSubData(a0, a1, a2, a3); }
    inline void glNamedFramebufferDrawBuffer(GLuint a0, GLenum a1) { api.NamedFramebufferDrawBuffer(a0, a1); }
    inline void glNamedFramebufferDrawBuffers(GLuint a0, GLsizei a1, const GLenum * a2) { api.NamedFramebufferDrawBuffers(a0, a1, a2); }
    inline void glNamedFramebufferParameteri(GLuint a0, GLenum a1, GLint a2) { api.NamedFramebufferParameteri(a0, a1, a2); }
    inline void glNamedFramebufferReadBuffer(GLuint a0, GLenum a1) { api.NamedFramebufferReadBuffer(a0, a1); }
    inline void glNamedFramebufferRenderbuffer(GLuint a0, GLenum a1, GLenum a2, GLuint a3) { api.NamedFramebufferRenderbuffer(a0, a1, a2, a3); }
    inline void glNamedFramebufferTexture(GLuint a0, GLenum a1, GLuint a2, GLint a3) { api.NamedFramebufferTexture(a0, a1, a2, a3); }
    inline void glNamedFramebufferTextureLayer(GLuint a0, GLenum a1, GLuint a2, GLint a3, GLint a4) { api.NamedFramebufferTextureLayer(a0, a1, a2, a3, a4); }
    inline void glNamedFramebufferTextureMultiviewOVR(GLuint a0, GLenum a1, GLuint a2, GLint a3, GLint a4, GLsizei a5) { api.NamedFramebufferTextureMultiviewOVR(a0, a1, a2, a3, a4, a5); }
    inline void glNamedRenderbufferStorage(GLuint a0, GLenum a1, GLsizei a2, GLsizei a3) { api.NamedRenderbufferStorage(a0, a1, a2, a3); }
    inline void glNamedRenderbufferStorageMultisample(GLuint a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4) { api.NamedRenderbufferStorageMultisample(a0, a1, a2, a3, a4); }
    inline void glObjectLabel(GLenum a0, GLuint a1, GLsizei a2, const GLchar * a3) { api.ObjectLabel(a0, a1, a2, a3); }
    inline void glObjectLabelKHR(GLenum a0, GLuint a1, GLsizei a2, const GLchar * a3) { api.ObjectLabelKHR(a0, a1, a2, a3); }
    inline void glObjectPtrLabel(const void * a0, GLsizei a1, const GLchar * a2) { api.ObjectPtrLabel(a0, a1, a2); }
    inline void glObjectPtrLabelKHR(const void * a0, GLsizei a1, const GLchar * a2) { api.ObjectPtrLabelKHR(a0, a1, a2); }
    inline void glPatchParameterfv(GLenum a0, const GLfloat * a1) { api.PatchParameterfv(a0, a1); }
    inline void glPatchParameteri(GLenum a0, GLint a1) { api.PatchParameteri(a0, a1); }
    inline void glPauseTransformFeedback() { api.PauseTransformFeedback(); }
    inline void glPixelStoref(GLenum a0, GLfloat a1) { api.PixelStoref(a0, a1); }
    inline void glPixelStorei(GLenum a0, GLint a1) { api.PixelStorei(a0, a1); }
    inline void glPointParameterf(GLenum a0, GLfloat a1) { api.PointParameterf(a0, a1); }
    inline void glPointParameterfv(GLenum a0, const GLfloat * a1) { api.PointParameterfv(a0, a1); }
    inline void glPointParameteri(GLenum a0, GLint a1) { api.PointParameteri(a0, a1); }
    inline void glPointParameteriv(GLenum a0, const GLint * a1) { api.PointParameteriv(a0, a1); }
    inline void glPointSize(GLfloat a0) { api.PointSize(a0); }
    inline void glPolygonMode(GLenum a0, GLenum a1) { api.PolygonMode(a0, a1); }
    inline void glPolygonOffset(GLfloat a0, GLfloat a1) { api.PolygonOffset(a0, a1); }
    inline void glPolygonOffsetClamp(GLfloat a0, GLfloat a1, GLfloat a2) { api.PolygonOffsetClamp(a0, a1, a2); }
    inline void glPopDebugGroup() { api.PopDebugGroup(); }
    inline void glPopDebugGroupKHR() { api.PopDebugGroupKHR(); }
    inline void glPrimitiveBoundingBox(GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4, GLfloat a5, GLfloat a6, GLfloat a7) { api.PrimitiveBoundingBox(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glPrimitiveRestartIndex(GLuint a0) { api.PrimitiveRestartIndex(a0); }
    inline void glProgramBinary(GLuint a0, GLenum a1, const void * a2, GLsizei a3) { api.ProgramBinary(a0, a1, a2, a3); }
    inline void glProgramParameteri(GLuint a0, GLenum a1, GLint a2) { api.ProgramParameteri(a0, a1, a2); }
    inline void glProgramUniform1d(GLuint a0, GLint a1, GLdouble a2) { api.ProgramUniform1d(a0, a1, a2); }
    inline void glProgramUniform1dv(GLuint a0, GLint a1, GLsizei a2, const GLdouble * a3) { api.ProgramUniform1dv(a0, a1, a2, a3); }
    inline void glProgramUniform1f(GLuint a0, GLint a1, GLfloat a2) { api.ProgramUniform1f(a0, a1, a2); }
    inline void glProgramUniform1fv(GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3) { api.ProgramUniform1fv(a0, a1, a2, a3); }
    inline void glProgramUniform1i(GLuint a0, GLint a1, GLint a2) { api.ProgramUniform1i(a0, a1, a2); }
    inline void glProgramUniform1iv(GLuint a0, GLint a1, GLsizei a2, const GLint * a3) { api.ProgramUniform1iv(a0, a1, a2, a3); }
    inline void glProgramUniform1ui(GLuint a0, GLint a1, GLuint a2) { api.ProgramUniform1ui(a0, a1, a2); }
    inline void glProgramUniform1uiv(GLuint a0, GLint a1, GLsizei a2, const GLuint * a3) { api.ProgramUniform1uiv(a0, a1, a2, a3); }
    inline void glProgramUniform2d(GLuint a0, GLint a1, GLdouble a2, GLdouble a3) { api.ProgramUniform2d(a0, a1, a2, a3); }
    inline void glProgramUniform2dv(GLuint a0, GLint a1, GLsizei a2, const GLdouble * a3) { api.ProgramUniform2dv(a0, a1, a2, a3); }
    inline void glProgramUniform2f(GLuint a0, GLint a1, GLfloat a2, GLfloat a3) { api.ProgramUniform2f(a0, a1, a2, a3); }
    inline void glProgramUniform2fv(GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3) { api.ProgramUniform2fv(a0, a1, a2, a3); }
    inline void glProgramUniform2i(GLuint a0, GLint a1, GLint a2, GLint a3) { api.ProgramUniform2i(a0, a1, a2, a3); }
    inline void glProgramUniform2iv(GLuint a0, GLint a1, GLsizei a2, const GLint * a3) { api.ProgramUniform2iv(a0, a1, a2, a3); }
    inline void glProgramUniform2ui(GLuint a0, GLint a1, GLuint a2, GLuint a3) { api.ProgramUniform2ui(a0, a1, a2, a3); }
    inline void glProgramUniform2uiv(GLuint a0, GLint a1, GLsizei a2, const GLuint * a3) { api.ProgramUniform2uiv(a0, a1, a2, a3); }
    inline void glProgramUniform3d(GLuint a0, GLint a1, GLdouble a2, GLdouble a3, GLdouble a4) { api.ProgramUniform3d(a0, a1, a2, a3, a4); }
    inline void glProgramUniform3dv(GLuint a0, GLint a1, GLsizei a2, const GLdouble * a3) { api.ProgramUniform3dv(a0, a1, a2, a3); }
    inline void glProgramUniform3f(GLuint a0, GLint a1, GLfloat a2, GLfloat a3, GLfloat a4) { api.ProgramUniform3f(a0, a1, a2, a3, a4); }
    inline void glProgramUniform3fv(GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3) { api.ProgramUniform3fv(a0, a1, a2, a3); }
    inline void glProgramUniform3i(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4) { api.ProgramUniform3i(a0, a1, a2, a3, a4); }
    inline void glProgramUniform3iv(GLuint a0, GLint a1, GLsizei a2, const GLint * a3) { api.ProgramUniform3iv(a0, a1, a2, a3); }
    inline void glProgramUniform3ui(GLuint a0, GLint a1, GLuint a2, GLuint a3, GLuint a4) { api.ProgramUniform3ui(a0, a1, a2, a3, a4); }
    inline void glProgramUniform3uiv(GLuint a0, GLint a1, GLsizei a2, const GLuint * a3) { api.ProgramUniform3uiv(a0, a1, a2, a3); }
    inline void glProgramUniform4d(GLuint a0, GLint a1, GLdouble a2, GLdouble a3, GLdouble a4, GLdouble a5) { api.ProgramUniform4d(a0, a1, a2, a3, a4, a5); }
    inline void glProgramUniform4dv(GLuint a0, GLint a1, GLsizei a2, const GLdouble * a3) { api.ProgramUniform4dv(a0, a1, a2, a3); }
    inline void glProgramUniform4f(GLuint a0, GLint a1, GLfloat a2, GLfloat a3, GLfloat a4, GLfloat a5) { api.ProgramUniform4f(a0, a1, a2, a3, a4, a5); }
    inline void glProgramUniform4fv(GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3) { api.ProgramUniform4fv(a0, a1, a2, a3); }
    inline void glProgramUniform4i(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5) { api.ProgramUniform4i(a0, a1, a2, a3, a4, a5); }
    inline void glProgramUniform4iv(GLuint a0, GLint a1, GLsizei a2, const GLint * a3) { api.ProgramUniform4iv(a0, a1, a2, a3); }
    inline void glProgramUniform4ui(GLuint a0, GLint a1, GLuint a2, GLuint a3, GLuint a4, GLuint a5) { api.ProgramUniform4ui(a0, a1, a2, a3, a4, a5); }
    inline void glProgramUniform4uiv(GLuint a0, GLint a1, GLsizei a2, const GLuint * a3) { api.ProgramUniform4uiv(a0, a1, a2, a3); }
    inline void glProgramUniformHandleui64ARB(GLuint a0, GLint a1, GLuint64 a2) { api.ProgramUniformHandleui64ARB(a0, a1, a2); }
    inline void glProgramUniformHandleui64NV(GLuint a0, GLint a1, GLuint64 a2) { api.ProgramUniformHandleui64NV(a0, a1, a2); }
    inline void glProgramUniformHandleui64vARB(GLuint a0, GLint a1, GLsizei a2, const GLuint64 * a3) { api.ProgramUniformHandleui64vARB(a0, a1, a2, a3); }
    inline void glProgramUniformHandleui64vNV(GLuint a0, GLint a1, GLsizei a2, const GLuint64 * a3) { api.ProgramUniformHandleui64vNV(a0, a1, a2, a3); }
    inline void glProgramUniformMatrix2dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix2dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix2fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix2fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix2x3dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix2x3dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix2x3fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix2x3fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix2x4dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix2x4dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix2x4fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix2x4fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix3dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix3dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix3fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix3fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix3x2dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix3x2dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix3x2fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix3x2fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix3x4dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix3x4dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix3x4fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix3x4fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix4dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix4dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix4fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix4fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix4x2dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix4x2dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix4x2fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix4x2fv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix4x3dv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLdouble * a4) { api.ProgramUniformMatrix4x3dv(a0, a1, a2, a3, a4); }
    inline void glProgramUniformMatrix4x3fv(GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4) { api.ProgramUniformMatrix4x3fv(a0, a1, a2, a3, a4); }
    inline void glProvokingVertex(GLenum a0) { api.ProvokingVertex(a0); }
    inline void glPushDebugGroup(GLenum a0, GLuint a1, GLsizei a2, const GLchar * a3) { api.PushDebugGroup(a0, a1, a2, a3); }
    inline void glPushDebugGroupKHR(GLenum a0, GLuint a1, GLsizei a2, const GLchar * a3) { api.PushDebugGroupKHR(a0, a1, a2, a3); }
    inline void glQueryCounter(GLuint a0, GLenum a1) { api.QueryCounter(a0, a1); }
    inline void glQueryCounterEXT(GLuint a0, GLenum a1) { api.QueryCounterEXT(a0, a1); }
    inline void glReadBuffer(GLenum a0) { api.ReadBuffer(a0); }
    inline void glReadPixels(GLint a0, GLint a1, GLsizei a2, GLsizei a3, GLenum a4, GLenum a5, void * a6) { api.ReadPixels(a0, a1, a2, a3, a4, a5, a6); }
    inline void glReadnPixels(GLint a0, GLint a1, GLsizei a2, GLsizei a3, GLenum a4, GLenum a5, GLsizei a6, void * a7) { api.ReadnPixels(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glReleaseShaderCompiler() { api.ReleaseShaderCompiler(); }
    inline void glRenderbufferStorage(GLenum a0, GLenum a1, GLsizei a2, GLsizei a3) { api.RenderbufferStorage(a0, a1, a2, a3); }
    inline void glRenderbufferStorageMultisample(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4) { api.RenderbufferStorageMultisample(a0, a1, a2, a3, a4); }
    inline void glResumeTransformFeedback() { api.ResumeTransformFeedback(); }
    inline void glSampleCoverage(GLfloat a0, GLboolean a1) { api.SampleCoverage(a0, a1); }
    inline void glSampleMaski(GLuint a0, GLbitfield a1) { api.SampleMaski(a0, a1); }
    inline void glSamplerParameterIiv(GLuint a0, GLenum a1, const GLint * a2) { api.SamplerParameterIiv(a0, a1, a2); }
    inline void glSamplerParameterIuiv(GLuint a0, GLenum a1, const GLuint * a2) { api.SamplerParameterIuiv(a0, a1, a2); }
    inline void glSamplerParameterf(GLuint a0, GLenum a1, GLfloat a2) { api.SamplerParameterf(a0, a1, a2); }
    inline void glSamplerParameterfv(GLuint a0, GLenum a1, const GLfloat * a2) { api.SamplerParameterfv(a0, a1, a2); }
    inline void glSamplerParameteri(GLuint a0, GLenum a1, GLint a2) { api.SamplerParameteri(a0, a1, a2); }
    inline void glSamplerParameteriv(GLuint a0, GLenum a1, const GLint * a2) { api.SamplerParameteriv(a0, a1, a2); }
    inline void glScissor(GLint a0, GLint a1, GLsizei a2, GLsizei a3) { api.Scissor(a0, a1, a2, a3); }
    inline void glScissorArrayv(GLuint a0, GLsizei a1, const GLint * a2) { api.ScissorArrayv(a0, a1, a2); }
    inline void glScissorIndexed(GLuint a0, GLint a1, GLint a2, GLsizei a3, GLsizei a4) { api.ScissorIndexed(a0, a1, a2, a3, a4); }
    inline void glScissorIndexedv(GLuint a0, const GLint * a1) { api.ScissorIndexedv(a0, a1); }
    inline void glShaderBinary(GLsizei a0, const GLuint * a1, GLenum a2, const void * a3, GLsizei a4) { api.ShaderBinary(a0, a1, a2, a3, a4); }
    inline void glShaderSource(GLuint a0, GLsizei a1, const GLchar *const* a2, const GLint * a3) { api.ShaderSource(a0, a1, a2, a3); }
    inline void glShaderStorageBlockBinding(GLuint a0, GLuint a1, GLuint a2) { api.ShaderStorageBlockBinding(a0, a1, a2); }
    inline void glSpecializeShader(GLuint a0, const GLchar * a1, GLuint a2, const GLuint * a3, const GLuint * a4) { api.SpecializeShader(a0, a1, a2, a3, a4); }
    inline void glStencilFunc(GLenum a0, GLint a1, GLuint a2) { api.StencilFunc(a0, a1, a2); }
    inline void glStencilFuncSeparate(GLenum a0, GLenum a1, GLint a2, GLuint a3) { api.StencilFuncSeparate(a0, a1, a2, a3); }
    inline void glStencilMask(GLuint a0) { api.StencilMask(a0); }
    inline void glStencilMaskSeparate(GLenum a0, GLuint a1) { api.StencilMaskSeparate(a0, a1); }
    inline void glStencilOp(GLenum a0, GLenum a1, GLenum a2) { api.StencilOp(a0, a1, a2); }
    inline void glStencilOpSeparate(GLenum a0, GLenum a1, GLenum a2, GLenum a3) { api.StencilOpSeparate(a0, a1, a2, a3); }
    inline void glTexBuffer(GLenum a0, GLenum a1, GLuint a2) { api.TexBuffer(a0, a1, a2); }
    inline void glTexBufferRange(GLenum a0, GLenum a1, GLuint a2, GLintptr a3, GLsizeiptr a4) { api.TexBufferRange(a0, a1, a2, a3, a4); }
    inline void glTexImage1D(GLenum a0, GLint a1, GLint a2, GLsizei a3, GLint a4, GLenum a5, GLenum a6, const void * a7) { api.TexImage1D(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glTexImage2D(GLenum a0, GLint a1, GLint a2, GLsizei a3, GLsizei a4, GLint a5, GLenum a6, GLenum a7, const void * a8) { api.TexImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glTexImage2DMultisample(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLboolean a5) { api.TexImage2DMultisample(a0, a1, a2, a3, a4, a5); }
    inline void glTexImage3D(GLenum a0, GLint a1, GLint a2, GLsizei a3, GLsizei a4, GLsizei a5, GLint a6, GLenum a7, GLenum a8, const void * a9) { api.TexImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
    inline void glTexImage3DMultisample(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5, GLboolean a6) { api.TexImage3DMultisample(a0, a1, a2, a3, a4, a5, a6); }
    inline void glTexParameterIiv(GLenum a0, GLenum a1, const GLint * a2) { api.TexParameterIiv(a0, a1, a2); }
    inline void glTexParameterIuiv(GLenum a0, GLenum a1, const GLuint * a2) { api.TexParameterIuiv(a0, a1, a2); }
    inline void glTexParameterf(GLenum a0, GLenum a1, GLfloat a2) { api.TexParameterf(a0, a1, a2); }
    inline void glTexParameterfv(GLenum a0, GLenum a1, const GLfloat * a2) { api.TexParameterfv(a0, a1, a2); }
    inline void glTexParameteri(GLenum a0, GLenum a1, GLint a2) { api.TexParameteri(a0, a1, a2); }
    inline void glTexParameteriv(GLenum a0, GLenum a1, const GLint * a2) { api.TexParameteriv(a0, a1, a2); }
    inline void glTexStorage1D(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3) { api.TexStorage1D(a0, a1, a2, a3); }
    inline void glTexStorage2D(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4) { api.TexStorage2D(a0, a1, a2, a3, a4); }
    inline void glTexStorage2DMultisample(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLboolean a5) { api.TexStorage2DMultisample(a0, a1, a2, a3, a4, a5); }
    inline void glTexStorage3D(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5) { api.TexStorage3D(a0, a1, a2, a3, a4, a5); }
    inline void glTexStorage3DMultisample(GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5, GLboolean a6) { api.TexStorage3DMultisample(a0, a1, a2, a3, a4, a5, a6); }
    inline void glTexSubImage1D(GLenum a0, GLint a1, GLint a2, GLsizei a3, GLenum a4, GLenum a5, const void * a6) { api.TexSubImage1D(a0, a1, a2, a3, a4, a5, a6); }
    inline void glTexSubImage2D(GLenum a0, GLint a1, GLint a2, GLint a3, GLsizei a4, GLsizei a5, GLenum a6, GLenum a7, const void * a8) { api.TexSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glTexSubImage3D(GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLenum a9, const void * a10) { api.TexSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
    inline void glTextureBarrier() { api.TextureBarrier(); }
    inline void glTextureBuffer(GLuint a0, GLenum a1, GLuint a2) { api.TextureBuffer(a0, a1, a2); }
    inline void glTextureBufferRange(GLuint a0, GLenum a1, GLuint a2, GLintptr a3, GLsizeiptr a4) { api.TextureBufferRange(a0, a1, a2, a3, a4); }
    inline void glTextureParameterIiv(GLuint a0, GLenum a1, const GLint * a2) { api.TextureParameterIiv(a0, a1, a2); }
    inline void glTextureParameterIuiv(GLuint a0, GLenum a1, const GLuint * a2) { api.TextureParameterIuiv(a0, a1, a2); }
    inline void glTextureParameterf(GLuint a0, GLenum a1, GLfloat a2) { api.TextureParameterf(a0, a1, a2); }
    inline void glTextureParameterfv(GLuint a0, GLenum a1, const GLfloat * a2) { api.TextureParameterfv(a0, a1, a2); }
    inline void glTextureParameteri(GLuint a0, GLenum a1, GLint a2) { api.TextureParameteri(a0, a1, a2); }
    inline void glTextureParameteriv(GLuint a0, GLenum a1, const GLint * a2) { api.TextureParameteriv(a0, a1, a2); }
    inline void glTextureStorage1D(GLuint a0, GLsizei a1, GLenum a2, GLsizei a3) { api.TextureStorage1D(a0, a1, a2, a3); }
    inline void glTextureStorage2D(GLuint a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4) { api.TextureStorage2D(a0, a1, a2, a3, a4); }
    inline void glTextureStorage2DMultisample(GLuint a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLboolean a5) { api.TextureStorage2DMultisample(a0, a1, a2, a3, a4, a5); }
    inline void glTextureStorage3D(GLuint a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5) { api.TextureStorage3D(a0, a1, a2, a3, a4, a5); }
    inline void glTextureStorage3DMultisample(GLuint a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5, GLboolean a6) { api.TextureStorage3DMultisample(a0, a1, a2, a3, a4, a5, a6); }
    inline void glTextureSubImage1D(GLuint a0, GLint a1, GLint a2, GLsizei a3, GLenum a4, GLenum a5, const void * a6) { api.TextureSubImage1D(a0, a1, a2, a3, a4, a5, a6); }
    inline void glTextureSubImage2D(GLuint a0, GLint a1, GLint a2, GLint a3, GLsizei a4, GLsizei a5, GLenum a6, GLenum a7, const void * a8) { api.TextureSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
    inline void glTextureSubImage3D(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLenum a9, const void * a10) { api.TextureSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
    inline void glTextureView(GLuint a0, GLenum a1, GLuint a2, GLenum a3, GLuint a4, GLuint a5, GLuint a6, GLuint a7) { api.TextureView(a0, a1, a2, a3, a4, a5, a6, a7); }
    inline void glTransformFeedbackBufferBase(GLuint a0, GLuint a1, GLuint a2) { api.TransformFeedbackBufferBase(a0, a1, a2); }
    inline void glTransformFeedbackBufferRange(GLuint a0, GLuint a1, GLuint a2, GLintptr a3, GLsizeiptr a4) { api.TransformFeedbackBufferRange(a0, a1, a2, a3, a4); }
    inline void glTransformFeedbackVaryings(GLuint a0, GLsizei a1, const GLchar *const* a2, GLenum a3) { api.TransformFeedbackVaryings(a0, a1, a2, a3); }
    inline void glUniform1d(GLint a0, GLdouble a1) { api.Uniform1d(a0, a1); }
    inline void glUniform1dv(GLint a0, GLsizei a1, const GLdouble * a2) { api.Uniform1dv(a0, a1, a2); }
    inline void glUniform1f(GLint a0, GLfloat a1) { api.Uniform1f(a0, a1); }
    inline void glUniform1fv(GLint a0, GLsizei a1, const GLfloat * a2) { api.Uniform1fv(a0, a1, a2); }
    inline void glUniform1i(GLint a0, GLint a1) { api.Uniform1i(a0, a1); }
    inline void glUniform1iv(GLint a0, GLsizei a1, const GLint * a2) { api.Uniform1iv(a0, a1, a2); }
    inline void glUniform1ui(GLint a0, GLuint a1) { api.Uniform1ui(a0, a1); }
    inline void glUniform1uiv(GLint a0, GLsizei a1, const GLuint * a2) { api.Uniform1uiv(a0, a1, a2); }
    inline void glUniform2d(GLint a0, GLdouble a1, GLdouble a2) { api.Uniform2d(a0, a1, a2); }
    inline void glUniform2dv(GLint a0, GLsizei a1, const GLdouble * a2) { api.Uniform2dv(a0, a1, a2); }
    inline void glUniform2f(GLint a0, GLfloat a1, GLfloat a2) { api.Uniform2f(a0, a1, a2); }
    inline void glUniform2fv(GLint a0, GLsizei a1, const GLfloat * a2) { api.Uniform2fv(a0, a1, a2); }
    inline void glUniform2i(GLint a0, GLint a1, GLint a2) { api.Uniform2i(a0, a1, a2); }
    inline void glUniform2iv(GLint a0, GLsizei a1, const GLint * a2) { api.Uniform2iv(a0, a1, a2); }
    inline void glUniform2ui(GLint a0, GLuint a1, GLuint a2) { api.Uniform2ui(a0, a1, a2); }
    inline void glUniform2uiv(GLint a0, GLsizei a1, const GLuint * a2) { api.Uniform2uiv(a0, a1, a2); }
    inline void glUniform3d(GLint a0, GLdouble a1, GLdouble a2, GLdouble a3) { api.Uniform3d(a0, a1, a2, a3); }
    inline void glUniform3dv(GLint a0, GLsizei a1, const GLdouble * a2) { api.Uniform3dv(a0, a1, a2); }
    inline void glUniform3f(GLint a0, GLfloat a1, GLfloat a2, GLfloat a3) { api.Uniform3f(a0, a1, a2, a3); }
    inline void glUniform3fv(GLint a0, GLsizei a1, const GLfloat * a2) { api.Uniform3fv(a0, a1, a2); }
    inline void glUniform3i(GLint a0, GLint a1, GLint a2, GLint a3) { api.Uniform3i(a0, a1, a2, a3); }
    inline void glUniform3iv(GLint a0, GLsizei a1, const GLint * a2) { api.Uniform3iv(a0, a1, a2); }
    inline void glUniform3ui(GLint a0, GLuint a1, GLuint a2, GLuint a3) { api.Uniform3ui(a0, a1, a2, a3); }
    inline void glUniform3uiv(GLint a0, GLsizei a1, const GLuint * a2) { api.Uniform3uiv(a0, a1, a2); }
    inline void glUniform4d(GLint a0, GLdouble a1, GLdouble a2, GLdouble a3, GLdouble a4) { api.Uniform4d(a0, a1, a2, a3, a4); }
    inline void glUniform4dv(GLint a0, GLsizei a1, const GLdouble * a2) { api.Uniform4dv(a0, a1, a2); }
    inline void glUniform4f(GLint a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4) { api.Uniform4f(a0, a1, a2, a3, a4); }
    inline void glUniform4fv(GLint a0, GLsizei a1, const GLfloat * a2) { api.Uniform4fv(a0, a1, a2); }
    inline void glUniform4i(GLint a0, GLint a1, GLint a2, GLint a3, GLint a4) { api.Uniform4i(a0, a1, a2, a3, a4); }
    inline void glUniform4iv(GLint a0, GLsizei a1, const GLint * a2) { api.Uniform4iv(a0, a1, a2); }
    inline void glUniform4ui(GLint a0, GLuint a1, GLuint a2, GLuint a3, GLuint a4) { api.Uniform4ui(a0, a1, a2, a3, a4); }
    inline void glUniform4uiv(GLint a0, GLsizei a1, const GLuint * a2) { api.Uniform4uiv(a0, a1, a2); }
    inline void glUniformBlockBinding(GLuint a0, GLuint a1, GLuint a2) { api.UniformBlockBinding(a0, a1, a2); }
    inline void glUniformHandleui64ARB(GLint a0, GLuint64 a1) { api.UniformHandleui64ARB(a0, a1); }
    inline void glUniformHandleui64NV(GLint a0, GLuint64 a1) { api.UniformHandleui64NV(a0, a1); }
    inline void glUniformHandleui64vARB(GLint a0, GLsizei a1, const GLuint64 * a2) { api.UniformHandleui64vARB(a0, a1, a2); }
    inline void glUniformHandleui64vNV(GLint a0, GLsizei a1, const GLuint64 * a2) { api.UniformHandleui64vNV(a0, a1, a2); }
    inline void glUniformMatrix2dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix2dv(a0, a1, a2, a3); }
    inline void glUniformMatrix2fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix2fv(a0, a1, a2, a3); }
    inline void glUniformMatrix2x3dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix2x3dv(a0, a1, a2, a3); }
    inline void glUniformMatrix2x3fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix2x3fv(a0, a1, a2, a3); }
    inline void glUniformMatrix2x4dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix2x4dv(a0, a1, a2, a3); }
    inline void glUniformMatrix2x4fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix2x4fv(a0, a1, a2, a3); }
    inline void glUniformMatrix3dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix3dv(a0, a1, a2, a3); }
    inline void glUniformMatrix3fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix3fv(a0, a1, a2, a3); }
    inline void glUniformMatrix3x2dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix3x2dv(a0, a1, a2, a3); }
    inline void glUniformMatrix3x2fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix3x2fv(a0, a1, a2, a3); }
    inline void glUniformMatrix3x4dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix3x4dv(a0, a1, a2, a3); }
    inline void glUniformMatrix3x4fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix3x4fv(a0, a1, a2, a3); }
    inline void glUniformMatrix4dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix4dv(a0, a1, a2, a3); }
    inline void glUniformMatrix4fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix4fv(a0, a1, a2, a3); }
    inline void glUniformMatrix4x2dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix4x2dv(a0, a1, a2, a3); }
    inline void glUniformMatrix4x2fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix4x2fv(a0, a1, a2, a3); }
    inline void glUniformMatrix4x3dv(GLint a0, GLsizei a1, GLboolean a2, const GLdouble * a3) { api.UniformMatrix4x3dv(a0, a1, a2, a3); }
    inline void glUniformMatrix4x3fv(GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3) { api.UniformMatrix4x3fv(a0, a1, a2, a3); }
    inline void glUniformSubroutinesuiv(GLenum a0, GLsizei a1, const GLuint * a2) { api.UniformSubroutinesuiv(a0, a1, a2); }
    inline GLboolean glUnmapBuffer(GLenum a0) { return api.UnmapBuffer(a0); }
    inline GLboolean glUnmapNamedBuffer(GLuint a0) { return api.UnmapNamedBuffer(a0); }
    inline void glUseProgram(GLuint a0) { api.UseProgram(a0); }
    inline void glUseProgramStages(GLuint a0, GLbitfield a1, GLuint a2) { api.UseProgramStages(a0, a1, a2); }
    inline void glValidateProgram(GLuint a0) { api.ValidateProgram(a0); }
    inline void glValidateProgramPipeline(GLuint a0) { api.ValidateProgramPipeline(a0); }
    inline void glVertexArrayAttribBinding(GLuint a0, GLuint a1, GLuint a2) { api.VertexArrayAttribBinding(a0, a1, a2); }
    inline void glVertexArrayAttribFormat(GLuint a0, GLuint a1, GLint a2, GLenum a3, GLboolean a4, GLuint a5) { api.VertexArrayAttribFormat(a0, a1, a2, a3, a4, a5); }
    inline void glVertexArrayAttribIFormat(GLuint a0, GLuint a1, GLint a2, GLenum a3, GLuint a4) { api.VertexArrayAttribIFormat(a0, a1, a2, a3, a4); }
    inline void glVertexArrayAttribLFormat(GLuint a0, GLuint a1, GLint a2, GLenum a3, GLuint a4) { api.VertexArrayAttribLFormat(a0, a1, a2, a3, a4); }
    inline void glVertexArrayBindingDivisor(GLuint a0, GLuint a1, GLuint a2) { api.VertexArrayBindingDivisor(a0, a1, a2); }
    inline void glVertexArrayElementBuffer(GLuint a0, GLuint a1) { api.VertexArrayElementBuffer(a0, a1); }
    inline void glVertexArrayVertexBuffer(GLuint a0, GLuint a1, GLuint a2, GLintptr a3, GLsizei a4) { api.VertexArrayVertexBuffer(a0, a1, a2, a3, a4); }
    inline void glVertexArrayVertexBuffers(GLuint a0, GLuint a1, GLsizei a2, const GLuint * a3, const GLintptr * a4, const GLsizei * a5) { api.VertexArrayVertexBuffers(a0, a1, a2, a3, a4, a5); }
    inline void glVertexAttrib1d(GLuint a0, GLdouble a1) { api.VertexAttrib1d(a0, a1); }
    inline void glVertexAttrib1dv(GLuint a0, const GLdouble * a1) { api.VertexAttrib1dv(a0, a1); }
    inline void glVertexAttrib1f(GLuint a0, GLfloat a1) { api.VertexAttrib1f(a0, a1); }
    inline void glVertexAttrib1fv(GLuint a0, const GLfloat * a1) { api.VertexAttrib1fv(a0, a1); }
    inline void glVertexAttrib1s(GLuint a0, GLshort a1) { api.VertexAttrib1s(a0, a1); }
    inline void glVertexAttrib1sv(GLuint a0, const GLshort * a1) { api.VertexAttrib1sv(a0, a1); }
    inline void glVertexAttrib2d(GLuint a0, GLdouble a1, GLdouble a2) { api.VertexAttrib2d(a0, a1, a2); }
    inline void glVertexAttrib2dv(GLuint a0, const GLdouble * a1) { api.VertexAttrib2dv(a0, a1); }
    inline void glVertexAttrib2f(GLuint a0, GLfloat a1, GLfloat a2) { api.VertexAttrib2f(a0, a1, a2); }
    inline void glVertexAttrib2fv(GLuint a0, const GLfloat * a1) { api.VertexAttrib2fv(a0, a1); }
    inline void glVertexAttrib2s(GLuint a0, GLshort a1, GLshort a2) { api.VertexAttrib2s(a0, a1, a2); }
    inline void glVertexAttrib2sv(GLuint a0, const GLshort * a1) { api.VertexAttrib2sv(a0, a1); }
    inline void glVertexAttrib3d(GLuint a0, GLdouble a1, GLdouble a2, GLdouble a3) { api.VertexAttrib3d(a0, a1, a2, a3); }
    inline void glVertexAttrib3dv(GLuint a0, const GLdouble * a1) { api.VertexAttrib3dv(a0, a1); }
    inline void glVertexAttrib3f(GLuint a0, GLfloat a1, GLfloat a2, GLfloat a3) { api.VertexAttrib3f(a0, a1, a2, a3); }
    inline void glVertexAttrib3fv(GLuint a0, const GLfloat * a1) { api.VertexAttrib3fv(a0, a1); }
    inline void glVertexAttrib3s(GLuint a0, GLshort a1, GLshort a2, GLshort a3) { api.VertexAttrib3s(a0, a1, a2, a3); }
    inline void glVertexAttrib3sv(GLuint a0, const GLshort * a1) { api.VertexAttrib3sv(a0, a1); }
    inline void glVertexAttrib4Nbv(GLuint a0, const GLbyte * a1) { api.VertexAttrib4Nbv(a0, a1); }
    inline void glVertexAttrib4Niv(GLuint a0, const GLint * a1) { api.VertexAttrib4Niv(a0, a1); }
    inline void glVertexAttrib4Nsv(GLuint a0, const GLshort * a1) { api.VertexAttrib4Nsv(a0, a1); }
    inline void glVertexAttrib4Nub(GLuint a0, GLubyte a1, GLubyte a2, GLubyte a3, GLubyte a4) { api.VertexAttrib4Nub(a0, a1, a2, a3, a4); }
    inline void glVertexAttrib4Nubv(GLuint a0, const GLubyte * a1) { api.VertexAttrib4Nubv(a0, a1); }
    inline void glVertexAttrib4Nuiv(GLuint a0, const GLuint * a1) { api.VertexAttrib4Nuiv(a0, a1); }
    inline void glVertexAttrib4Nusv(GLuint a0, const GLushort * a1) { api.VertexAttrib4Nusv(a0, a1); }
    inline void glVertexAttrib4bv(GLuint a0, const GLbyte * a1) { api.VertexAttrib4bv(a0, a1); }
    inline void glVertexAttrib4d(GLuint a0, GLdouble a1, GLdouble a2, GLdouble a3, GLdouble a4) { api.VertexAttrib4d(a0, a1, a2, a3, a4); }
    inline void glVertexAttrib4dv(GLuint a0, const GLdouble * a1) { api.VertexAttrib4dv(a0, a1); }
    inline void glVertexAttrib4f(GLuint a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4) { api.VertexAttrib4f(a0, a1, a2, a3, a4); }
    inline void glVertexAttrib4fv(GLuint a0, const GLfloat * a1) { api.VertexAttrib4fv(a0, a1); }
    inline void glVertexAttrib4iv(GLuint a0, const GLint * a1) { api.VertexAttrib4iv(a0, a1); }
    inline void glVertexAttrib4s(GLuint a0, GLshort a1, GLshort a2, GLshort a3, GLshort a4) { api.VertexAttrib4s(a0, a1, a2, a3, a4); }
    inline void glVertexAttrib4sv(GLuint a0, const GLshort * a1) { api.VertexAttrib4sv(a0, a1); }
    inline void glVertexAttrib4ubv(GLuint a0, const GLubyte * a1) { api.VertexAttrib4ubv(a0, a1); }
    inline void glVertexAttrib4uiv(GLuint a0, const GLuint * a1) { api.VertexAttrib4uiv(a0, a1); }
    inline void glVertexAttrib4usv(GLuint a0, const GLushort * a1) { api.VertexAttrib4usv(a0, a1); }
    inline void glVertexAttribBinding(GLuint a0, GLuint a1) { api.VertexAttribBinding(a0, a1); }
    inline void glVertexAttribDivisor(GLuint a0, GLuint a1) { api.VertexAttribDivisor(a0, a1); }
    inline void glVertexAttribFormat(GLuint a0, GLint a1, GLenum a2, GLboolean a3, GLuint a4) { api.VertexAttribFormat(a0, a1, a2, a3, a4); }
    inline void glVertexAttribI1i(GLuint a0, GLint a1) { api.VertexAttribI1i(a0, a1); }
    inline void glVertexAttribI1iv(GLuint a0, const GLint * a1) { api.VertexAttribI1iv(a0, a1); }
    inline void glVertexAttribI1ui(GLuint a0, GLuint a1) { api.VertexAttribI1ui(a0, a1); }
    inline void glVertexAttribI1uiv(GLuint a0, const GLuint * a1) { api.VertexAttribI1uiv(a0, a1); }
    inline void glVertexAttribI2i(GLuint a0, GLint a1, GLint a2) { api.VertexAttribI2i(a0, a1, a2); }
    inline void glVertexAttribI2iv(GLuint a0, const GLint * a1) { api.VertexAttribI2iv(a0, a1); }
    inline void glVertexAttribI2ui(GLuint a0, GLuint a1, GLuint a2) { api.VertexAttribI2ui(a0, a1, a2); }
    inline void glVertexAttribI2uiv(GLuint a0, const GLuint * a1) { api.VertexAttribI2uiv(a0, a1); }
    inline void glVertexAttribI3i(GLuint a0, GLint a1, GLint a2, GLint a3) { api.VertexAttribI3i(a0, a1, a2, a3); }
    inline void glVertexAttribI3iv(GLuint a0, const GLint * a1) { api.VertexAttribI3iv(a0, a1); }
    inline void glVertexAttribI3ui(GLuint a0, GLuint a1, GLuint a2, GLuint a3) { api.VertexAttribI3ui(a0, a1, a2, a3); }
    inline void glVertexAttribI3uiv(GLuint a0, const GLuint * a1) { api.VertexAttribI3uiv(a0, a1); }
    inline void glVertexAttribI4bv(GLuint a0, const GLbyte * a1) { api.VertexAttribI4bv(a0, a1); }
    inline void glVertexAttribI4i(GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4) { api.VertexAttribI4i(a0, a1, a2, a3, a4); }
    inline void glVertexAttribI4iv(GLuint a0, const GLint * a1) { api.VertexAttribI4iv(a0, a1); }
    inline void glVertexAttribI4sv(GLuint a0, const GLshort * a1) { api.VertexAttribI4sv(a0, a1); }
    inline void glVertexAttribI4ubv(GLuint a0, const GLubyte * a1) { api.VertexAttribI4ubv(a0, a1); }
    inline void glVertexAttribI4ui(GLuint a0, GLuint a1, GLuint a2, GLuint a3, GLuint a4) { api.VertexAttribI4ui(a0, a1, a2, a3, a4); }
    inline void glVertexAttribI4uiv(GLuint a0, const GLuint * a1) { api.VertexAttribI4uiv(a0, a1); }
    inline void glVertexAttribI4usv(GLuint a0, const GLushort * a1) { api.VertexAttribI4usv(a0, a1); }
    inline void glVertexAttribIFormat(GLuint a0, GLint a1, GLenum a2, GLuint a3) { api.VertexAttribIFormat(a0, a1, a2, a3); }
    inline void glVertexAttribIPointer(GLuint a0, GLint a1, GLenum a2, GLsizei a3, const void * a4) { api.VertexAttribIPointer(a0, a1, a2, a3, a4); }
    inline void glVertexAttribL1d(GLuint a0, GLdouble a1) { api.VertexAttribL1d(a0, a1); }
    inline void glVertexAttribL1dv(GLuint a0, const GLdouble * a1) { api.VertexAttribL1dv(a0, a1); }
    inline void glVertexAttribL1ui64ARB(GLuint a0, GLuint64EXT a1) { api.VertexAttribL1ui64ARB(a0, a1); }
    inline void glVertexAttribL1ui64vARB(GLuint a0, const GLuint64EXT * a1) { api.VertexAttribL1ui64vARB(a0, a1); }
    inline void glVertexAttribL2d(GLuint a0, GLdouble a1, GLdouble a2) { api.VertexAttribL2d(a0, a1, a2); }
    inline void glVertexAttribL2dv(GLuint a0, const GLdouble * a1) { api.VertexAttribL2dv(a0, a1); }
    inline void glVertexAttribL3d(GLuint a0, GLdouble a1, GLdouble a2, GLdouble a3) { api.VertexAttribL3d(a0, a1, a2, a3); }
    inline void glVertexAttribL3dv(GLuint a0, const GLdouble * a1) { api.VertexAttribL3dv(a0, a1); }
    inline void glVertexAttribL4d(GLuint a0, GLdouble a1, GLdouble a2, GLdouble a3, GLdouble a4) { api.VertexAttribL4d(a0, a1, a2, a3, a4); }
    inline void glVertexAttribL4dv(GLuint a0, const GLdouble * a1) { api.VertexAttribL4dv(a0, a1); }
    inline void glVertexAttribLFormat(GLuint a0, GLint a1, GLenum a2, GLuint a3) { api.VertexAttribLFormat(a0, a1, a2, a3); }
    inline void glVertexAttribLPointer(GLuint a0, GLint a1, GLenum a2, GLsizei a3, const void * a4) { api.VertexAttribLPointer(a0, a1, a2, a3, a4); }
    inline void glVertexAttribP1ui(GLuint a0, GLenum a1, GLboolean a2, GLuint a3) { api.VertexAttribP1ui(a0, a1, a2, a3); }
    inline void glVertexAttribP1uiv(GLuint a0, GLenum a1, GLboolean a2, const GLuint * a3) { api.VertexAttribP1uiv(a0, a1, a2, a3); }
    inline void glVertexAttribP2ui(GLuint a0, GLenum a1, GLboolean a2, GLuint a3) { api.VertexAttribP2ui(a0, a1, a2, a3); }
    inline void glVertexAttribP2uiv(GLuint a0, GLenum a1, GLboolean a2, const GLuint * a3) { api.VertexAttribP2uiv(a0, a1, a2, a3); }
    inline void glVertexAttribP3ui(GLuint a0, GLenum a1, GLboolean a2, GLuint a3) { api.VertexAttribP3ui(a0, a1, a2, a3); }
    inline void glVertexAttribP3uiv(GLuint a0, GLenum a1, GLboolean a2, const GLuint * a3) { api.VertexAttribP3uiv(a0, a1, a2, a3); }
    inline void glVertexAttribP4ui(GLuint a0, GLenum a1, GLboolean a2, GLuint a3) { api.VertexAttribP4ui(a0, a1, a2, a3); }
    inline void glVertexAttribP4uiv(GLuint a0, GLenum a1, GLboolean a2, const GLuint * a3) { api.VertexAttribP4uiv(a0, a1, a2, a3); }
    inline void glVertexAttribPointer(GLuint a0, GLint a1, GLenum a2, GLboolean a3, GLsizei a4, const void * a5) { api.VertexAttribPointer(a0, a1, a2, a3, a4, a5); }
    inline void glVertexBindingDivisor(GLuint a0, GLuint a1) { api.VertexBindingDivisor(a0, a1); }
    inline void glViewport(GLint a0, GLint a1, GLsizei a2, GLsizei a3) { api.Viewport(a0, a1, a2, a3); }
    inline void glViewportArrayv(GLuint a0, GLsizei a1, const GLfloat * a2) { api.ViewportArrayv(a0, a1, a2); }
    inline void glViewportIndexedf(GLuint a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4) { api.ViewportIndexedf(a0, a1, a2, a3, a4); }
    inline void glViewportIndexedfv(GLuint a0, const GLfloat * a1) { api.ViewportIndexedfv(a0, a1); }
    inline void glWaitSync(GLsync a0, GLbitfield a1, GLuint64 a2) { api.WaitSync(a0, a1, a2); }
}
