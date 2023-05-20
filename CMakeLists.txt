cmake_minimum_required (VERSION 3.26)
set(CMAKE_CXX_STANDARD 14)


# Config 
project (MYTOOL) # alias name${PROJECT_NAME}
file(GLOB_RECURSE SOURCES "src/*.cpp" CONFIGURE_DEPEND)
file(GLOB_RECURSE HEADERS "src/*.h" CONFIGURE_DEPEND)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

#LINK GEOS
add_subdirectory(libs/geos)
target_link_libraries(${PROJECT_NAME} geos)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/libs/geos/include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/geos)
# target_link_libraries(${PROJECT_NAME} geos)


target_compile_options(${PROJECT_NAME} PRIVATE -g)


