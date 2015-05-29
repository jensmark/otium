cmake_minimum_required(VERSION 3.1)
project(otium)

FIND_PACKAGE(PythonLibs REQUIRED)

include_directories(
    ${INCLUDE_DIR}
    ${PYTHON_INCLUDE_DIR})

# Non-platform specific code
file(GLOB OTIUM_SRC "*.cpp")

# Always use python bindings for now
# Other languages may be implmeneted later
#
# Script binding code
file(GLOB OTIUM_BINDING_SRC "bindings/python/*.cpp")

# If desktop build
if(APPLE OR WIN32 OR UNIX)
    file(GLOB OTIUM_DESKTOP_SRC "desktop/*.cpp")

    if(UNIX) # 64-bit only for now.
        if(NOT APPLE)
            file(GLOB OTIUM_PLATFORM_SRC "desktop/linux_amd64/*.cpp")
        else()
            file(GLOB OTIUM_PLATFORM_SRC "desktop/osx_x86_64/*.cpp")
        endif()

    endif()

    link_libraries(${PYTHON_LIBRARIES})

    # Static libary
    add_library(otium_libary_static STATIC ${OTIUM_SRC} ${OTIUM_PLATFORM_SRC} ${OTIUM_BINDING_SRC})
    set_target_properties(otium_libary_static PROPERTIES OUTPUT_NAME otium)
    set_target_properties(otium_libary_static PROPERTIES DEBUG_POSTFIX "d")

    # Shared Libary
    add_library(otium_libary SHARED ${OTIUM_SRC} ${OTIUM_PLATFORM_SRC} ${OTIUM_BINDING_SRC})
    set_target_properties(otium_libary PROPERTIES OUTPUT_NAME otium)
    set_target_properties(otium_libary PROPERTIES DEBUG_POSTFIX "d")

    # Install on unix systems
    install(TARGETS otium_libary_static otium_libary DESTINATION otium)

# If mobile build
else()
# TODO: mobile builds
endif()


##
#
# TODO: Build project compiler
#
##
