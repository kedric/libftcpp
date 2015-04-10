cmake_minimum_required (VERSION 3.1)

project(libft)

set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})

include_directories(inc)
include_directories(src)
add_compile_options("--std=c++11" "-Wall" "-Wextra" "-Werror")

add_custom_target(fclean
	COMMENT "Supression All File"
	COMMAND rm -rf CMakeFiles CMakeCache.txt cmake_install.cmake
	COMMAND rm -rf lib
)

add_custom_target(re
	COMMENT "rebuild All File"
	COMMAND make clean 
	COMMAND make all
)

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