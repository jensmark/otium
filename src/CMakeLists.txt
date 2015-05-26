cmake_minimum_required(VERSION 3.1)
project(otium)

FIND_PACKAGE(PythonLibs REQUIRED)

include_directories(
    ${INCLUDE_DIR}
    ${PYTHON_INCLUDE_DIR})

file(GLOB OTIUM_SRC "*.cpp")

# If desktop build
if(APPLE OR WIN32 OR UNIX)
    file(GLOB OTIUM_DESKTOP_SRC "desktop/*.cpp")

    if(UNIX) # 64-bit asumed for noe
        if(NOT APPLE)
            file(GLOB OTIUM_PLATFORM_SRC "desktop/linux_amd64/*.cpp")
        else()
            file(GLOB OTIUM_PLATFORM_SRC "desktop/osx_x86_64/*.cpp")
        endif()

    endif()

    link_libraries(${PYTHON_LIBRARIES})
    add_executable(otium platforms/desktop/desktop_main.cpp ${OTIUM_SRC} ${OTIUM_PLATFORM_SRC})

elseif(MOBILE)
# TODO: mobile build
endif()