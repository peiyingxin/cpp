cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

# project(oo2021 LANGUAGES CXX)
project(oo2021 LANGUAGES C)

# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_EXTENSIONS OFF)

# # set(USE_LIBRARY OFF)
# option(USE_LIBRARY "Compile sources into a library " OFF)

# list(APPEND _sources src/message.h src/message.cc)

# if (USE_LIBRARY)
#     add_library(message SHARED ${_sources})
#     add_executable(hello-world src/main.cc)
#     target_link_libraries(hello-world message)

# else()
#     add_executable(hello-world src/main.cc ${_sources})

# endif()


# add_library(message SHARED src/message.h src/message.cc)
# add_executable(hello-world src/main.cc)
# target_link_libraries(hello-world message)

# find_package(OpenMP REQUIRED)
# add_subdirectory(src)

# find_package(GTest CONFIG REQUIRED)
# add_subdirectory(tests)

# add_subdirectory(processor_info)
add_subdirectory(python_interp)