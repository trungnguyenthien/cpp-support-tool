cmake_minimum_required (VERSION 3.26)
set(CMAKE_CXX_STANDARD 14)
project (MYTOOL)
add_subdirectory (src)
add_executable(MYTOOL src/main.cpp)


#LINK GEOS
add_subdirectory(libs/geos)
target_link_libraries(${PROJECT_NAME} geos)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/libs/geos/include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/geos)
# target_link_libraries(${PROJECT_NAME} geos)




