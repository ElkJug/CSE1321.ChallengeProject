cmake_minimum_required(VERSION 3.0.0)
project(cse1321-solution VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# try out using glob to secure all files under src/
file(GLOB SOURCE_FILES
    "runtest.cpp"
    "src/*.cpp" # Assuming your source files are .cpp
)

add_executable(cse1321-solution ${SOURCE_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)