# Set the project name
set(project_name my_array)

# Add an include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add an executable
add_executable(${project_name} ${CMAKE_CURRENT_SOURCE_DIR}/source/main.cpp)