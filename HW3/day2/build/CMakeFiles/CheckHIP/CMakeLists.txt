cmake_minimum_required(VERSION 3.29.5)
project(CheckHIP HIP)
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/result.cmake"
  "set(CMAKE_HIP_COMPILER \"${CMAKE_HIP_COMPILER}\")\n"
  "set(CMAKE_HIP_HOST_COMPILER \"${CMAKE_HIP_HOST_COMPILER}\")\n"
  "set(CMAKE_HIP_PLATFORM \"${CMAKE_HIP_PLATFORM}\")\n"
  )