# Set the project name
set(project_name my_array)

# Add an include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Automatically add subdirectories
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/source SRC_LIST)

# Add an executable
add_executable(${project_name} ${SRC_LIST})