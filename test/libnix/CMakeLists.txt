PROJECT(libnix)

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(CMAKE_BUILD_TYPE "Debug")

# Remove -Werror from libnix
REMOVE_DEFINITIONS(-Werror)

INCLUDE_DIRECTORIES(xec-compat xec-compat/lib xec-compat/engine xec-compat/arch nix)
INCLUDE_DIRECTORIES(${PROJECT_BINARY_DIR}/xec-compat nix)

ADD_SUBDIRECTORY(xec-compat)
ADD_SUBDIRECTORY(tools/sc2int)

ADD_SUBDIRECTORY(nix)
ADD_SUBDIRECTORY(obsd41)
