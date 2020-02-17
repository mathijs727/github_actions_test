cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

enable_testing()
find_package(GTest CONFIG REQUIRED)

add_executable(HelloWorld "main.cpp")
target_link_libraries(HelloWorld PRIVATE GTest::gtest GTest::gtest_main)