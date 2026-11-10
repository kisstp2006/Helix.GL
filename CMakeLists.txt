cmake_minimum_required(VERSION 3.28)
project(Helix.GL LANGUAGES CXX)

if(NOT COMMAND helix_add_library)
    include("${CMAKE_CURRENT_SOURCE_DIR}/External/Helix.CMake/Helix.cmake")
endif()

helix_add_library(helix_gl ALIAS GL)
if(HELIX_PLATFORM STREQUAL "linux" OR HELIX_PLATFORM STREQUAL "android")
    target_link_libraries(helix_gl PUBLIC ${CMAKE_DL_LIBS})
elseif(HELIX_PLATFORM STREQUAL "web")
    target_link_options(helix_gl INTERFACE -sGL_ENABLE_GET_PROC_ADDRESS=1 -sMIN_WEBGL_VERSION=2 -sMAX_WEBGL_VERSION=2)
endif()

helix_add_test_suite(helix_gl_tests DEPS Helix::GL)
