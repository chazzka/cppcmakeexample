include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)


add_executable(
  multiply_test 
  multiply_test.cpp
)

# "multiply" is a add_library name from src/multiply/CMakeLists.txt
target_link_libraries(
  multiply_test
  PRIVATE
  GTest::gtest_main
  multiply
)


add_executable(
  add_test 
  add_test.cpp
)

# "add" is a add_library name from src/add/CMakeLists.txt
target_link_libraries(
  add_test
  PRIVATE
  GTest::gtest_main
  add
)

include(GoogleTest)
gtest_discover_tests(add_test)
gtest_discover_tests(multiply_test)


