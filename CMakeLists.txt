cmake_minimum_required (VERSION 3.1)

project(libft)

set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_compile_options("--std=c++11" "-Wall" "-Wextra" "-Werror" "-O3")

file(
	GLOB_RECURSE
	srcFile
	inc/*
	src/*
)

add_library(
	ft
	STATIC
	${srcFile}
)
