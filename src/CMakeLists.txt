cmake_minimum_required(VERSION 3.1)
project(otium)

INCLUDE_DIRECTORIES(${INCLUDE_DIR})

FILE(GLOB OTIUM_SRC "*.cpp")

# If desktop build
if(APPLE OR WIN32 OR UNIX)
FILE(GLOB OTIUM_DESKTOP_SRC "desktop/*.cpp")

if(UNIX) # 64-bit
FILE(GLOB OTIUM_UNIX_SRC "desktop/linux_amd64/*.cpp")



endif()

elseif(MOBILE)
# TODO: mobile build
endif()