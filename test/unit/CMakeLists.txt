SET(NAME testBasecppProject)

add_executable(${NAME})

target_sources(${NAME} PRIVATE
  testclasstbd.cpp)

target_link_libraries(${NAME}
  classtbd
  gtest
  gtest_main
  pthread)

add_test(NAME TEST_BASECPP COMMAND ${NAME})
