
add_library(classtbd)

target_link_libraries(classtbd)

target_sources(classtbd PRIVATE
   classtbd.cpp)

target_include_directories(classtbd PUBLIC .)
#SET(CMAKE_SYSTEM_INCLUDE_PATH ${CMAKE_SYSTEM_INCLUDE_PATH}:.)
# include_directories(.)

