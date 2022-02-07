set(CMAKE_CXX_STANDARD 99)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PythonInterp REQUIRED)
find_package(PythonLibs ${PYTHON_VERSION_MAJOR}.${PYTHON_VERSION_MINOR} EXACT REQUIRED)

add_executable(hello-embedded-python hello-embedded-python.cc)
target_include_directories(hello-embedded-python
    PRIVATE
    ${PYTHON_INCLUDE_DIRS}
    )

target_link_libraries(hello-embedded-python
    PRIVATE
    ${PYTHON_LIBRARIES}
    )