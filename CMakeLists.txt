#设置最小cmake版本
cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#设置项目名称
project(Skil)
#添加可执行项
add_executable(Skil skill/main.cpp)

