# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.2.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.2.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jmancero/gitperso/taskmaster/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jmancero/gitperso/taskmaster/test

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.2.2/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.2.2/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	cd /Users/jmancero/gitperso/taskmaster/test && $(CMAKE_COMMAND) -E cmake_progress_start /Users/jmancero/gitperso/taskmaster/test/CMakeFiles /Users/jmancero/gitperso/taskmaster/test/libft/CMakeFiles/progress.marks
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f CMakeFiles/Makefile2 libft/all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/jmancero/gitperso/taskmaster/test/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f CMakeFiles/Makefile2 libft/clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f CMakeFiles/Makefile2 libft/preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f CMakeFiles/Makefile2 libft/preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	cd /Users/jmancero/gitperso/taskmaster/test && $(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

# Convenience name for target.
libft/CMakeFiles/ft.dir/rule:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f CMakeFiles/Makefile2 libft/CMakeFiles/ft.dir/rule
.PHONY : libft/CMakeFiles/ft.dir/rule

# Convenience name for target.
ft: libft/CMakeFiles/ft.dir/rule
.PHONY : ft

# fast build rule for target.
ft/fast:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/build
.PHONY : ft/fast

src/Any/Any.class.o: src/Any/Any.class.cpp.o
.PHONY : src/Any/Any.class.o

# target to build an object file
src/Any/Any.class.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/Any/Any.class.cpp.o
.PHONY : src/Any/Any.class.cpp.o

src/Any/Any.class.i: src/Any/Any.class.cpp.i
.PHONY : src/Any/Any.class.i

# target to preprocess a source file
src/Any/Any.class.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/Any/Any.class.cpp.i
.PHONY : src/Any/Any.class.cpp.i

src/Any/Any.class.s: src/Any/Any.class.cpp.s
.PHONY : src/Any/Any.class.s

# target to generate assembly for a file
src/Any/Any.class.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/Any/Any.class.cpp.s
.PHONY : src/Any/Any.class.cpp.s

src/ReaderInput/ReaderInput.class.o: src/ReaderInput/ReaderInput.class.cpp.o
.PHONY : src/ReaderInput/ReaderInput.class.o

# target to build an object file
src/ReaderInput/ReaderInput.class.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/ReaderInput/ReaderInput.class.cpp.o
.PHONY : src/ReaderInput/ReaderInput.class.cpp.o

src/ReaderInput/ReaderInput.class.i: src/ReaderInput/ReaderInput.class.cpp.i
.PHONY : src/ReaderInput/ReaderInput.class.i

# target to preprocess a source file
src/ReaderInput/ReaderInput.class.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/ReaderInput/ReaderInput.class.cpp.i
.PHONY : src/ReaderInput/ReaderInput.class.cpp.i

src/ReaderInput/ReaderInput.class.s: src/ReaderInput/ReaderInput.class.cpp.s
.PHONY : src/ReaderInput/ReaderInput.class.s

# target to generate assembly for a file
src/ReaderInput/ReaderInput.class.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/ReaderInput/ReaderInput.class.cpp.s
.PHONY : src/ReaderInput/ReaderInput.class.cpp.s

src/dlLoader/dlLoader.class.o: src/dlLoader/dlLoader.class.cpp.o
.PHONY : src/dlLoader/dlLoader.class.o

# target to build an object file
src/dlLoader/dlLoader.class.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/dlLoader/dlLoader.class.cpp.o
.PHONY : src/dlLoader/dlLoader.class.cpp.o

src/dlLoader/dlLoader.class.i: src/dlLoader/dlLoader.class.cpp.i
.PHONY : src/dlLoader/dlLoader.class.i

# target to preprocess a source file
src/dlLoader/dlLoader.class.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/dlLoader/dlLoader.class.cpp.i
.PHONY : src/dlLoader/dlLoader.class.cpp.i

src/dlLoader/dlLoader.class.s: src/dlLoader/dlLoader.class.cpp.s
.PHONY : src/dlLoader/dlLoader.class.s

# target to generate assembly for a file
src/dlLoader/dlLoader.class.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/dlLoader/dlLoader.class.cpp.s
.PHONY : src/dlLoader/dlLoader.class.cpp.s

src/format/format.o: src/format/format.cpp.o
.PHONY : src/format/format.o

# target to build an object file
src/format/format.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/format/format.cpp.o
.PHONY : src/format/format.cpp.o

src/format/format.i: src/format/format.cpp.i
.PHONY : src/format/format.i

# target to preprocess a source file
src/format/format.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/format/format.cpp.i
.PHONY : src/format/format.cpp.i

src/format/format.s: src/format/format.cpp.s
.PHONY : src/format/format.s

# target to generate assembly for a file
src/format/format.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/format/format.cpp.s
.PHONY : src/format/format.cpp.s

src/print/print.o: src/print/print.cpp.o
.PHONY : src/print/print.o

# target to build an object file
src/print/print.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/print/print.cpp.o
.PHONY : src/print/print.cpp.o

src/print/print.i: src/print/print.cpp.i
.PHONY : src/print/print.i

# target to preprocess a source file
src/print/print.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/print/print.cpp.i
.PHONY : src/print/print.cpp.i

src/print/print.s: src/print/print.cpp.s
.PHONY : src/print/print.s

# target to generate assembly for a file
src/print/print.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/print/print.cpp.s
.PHONY : src/print/print.cpp.s

src/string/string.o: src/string/string.cpp.o
.PHONY : src/string/string.o

# target to build an object file
src/string/string.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/string/string.cpp.o
.PHONY : src/string/string.cpp.o

src/string/string.i: src/string/string.cpp.i
.PHONY : src/string/string.i

# target to preprocess a source file
src/string/string.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/string/string.cpp.i
.PHONY : src/string/string.cpp.i

src/string/string.s: src/string/string.cpp.s
.PHONY : src/string/string.s

# target to generate assembly for a file
src/string/string.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/string/string.cpp.s
.PHONY : src/string/string.cpp.s

src/struct/color/color.o: src/struct/color/color.cpp.o
.PHONY : src/struct/color/color.o

# target to build an object file
src/struct/color/color.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/struct/color/color.cpp.o
.PHONY : src/struct/color/color.cpp.o

src/struct/color/color.i: src/struct/color/color.cpp.i
.PHONY : src/struct/color/color.i

# target to preprocess a source file
src/struct/color/color.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/struct/color/color.cpp.i
.PHONY : src/struct/color/color.cpp.i

src/struct/color/color.s: src/struct/color/color.cpp.s
.PHONY : src/struct/color/color.s

# target to generate assembly for a file
src/struct/color/color.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/struct/color/color.cpp.s
.PHONY : src/struct/color/color.cpp.s

src/struct/vector2d/vector2d.o: src/struct/vector2d/vector2d.cpp.o
.PHONY : src/struct/vector2d/vector2d.o

# target to build an object file
src/struct/vector2d/vector2d.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/struct/vector2d/vector2d.cpp.o
.PHONY : src/struct/vector2d/vector2d.cpp.o

src/struct/vector2d/vector2d.i: src/struct/vector2d/vector2d.cpp.i
.PHONY : src/struct/vector2d/vector2d.i

# target to preprocess a source file
src/struct/vector2d/vector2d.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/struct/vector2d/vector2d.cpp.i
.PHONY : src/struct/vector2d/vector2d.cpp.i

src/struct/vector2d/vector2d.s: src/struct/vector2d/vector2d.cpp.s
.PHONY : src/struct/vector2d/vector2d.s

# target to generate assembly for a file
src/struct/vector2d/vector2d.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/struct/vector2d/vector2d.cpp.s
.PHONY : src/struct/vector2d/vector2d.cpp.s

src/test/any_test.o: src/test/any_test.cpp.o
.PHONY : src/test/any_test.o

# target to build an object file
src/test/any_test.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/any_test.cpp.o
.PHONY : src/test/any_test.cpp.o

src/test/any_test.i: src/test/any_test.cpp.i
.PHONY : src/test/any_test.i

# target to preprocess a source file
src/test/any_test.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/any_test.cpp.i
.PHONY : src/test/any_test.cpp.i

src/test/any_test.s: src/test/any_test.cpp.s
.PHONY : src/test/any_test.s

# target to generate assembly for a file
src/test/any_test.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/any_test.cpp.s
.PHONY : src/test/any_test.cpp.s

src/test/format.o: src/test/format.cpp.o
.PHONY : src/test/format.o

# target to build an object file
src/test/format.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/format.cpp.o
.PHONY : src/test/format.cpp.o

src/test/format.i: src/test/format.cpp.i
.PHONY : src/test/format.i

# target to preprocess a source file
src/test/format.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/format.cpp.i
.PHONY : src/test/format.cpp.i

src/test/format.s: src/test/format.cpp.s
.PHONY : src/test/format.s

# target to generate assembly for a file
src/test/format.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/format.cpp.s
.PHONY : src/test/format.cpp.s

src/test/init.o: src/test/init.cpp.o
.PHONY : src/test/init.o

# target to build an object file
src/test/init.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/init.cpp.o
.PHONY : src/test/init.cpp.o

src/test/init.i: src/test/init.cpp.i
.PHONY : src/test/init.i

# target to preprocess a source file
src/test/init.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/init.cpp.i
.PHONY : src/test/init.cpp.i

src/test/init.s: src/test/init.cpp.s
.PHONY : src/test/init.s

# target to generate assembly for a file
src/test/init.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/init.cpp.s
.PHONY : src/test/init.cpp.s

src/test/string_test.o: src/test/string_test.cpp.o
.PHONY : src/test/string_test.o

# target to build an object file
src/test/string_test.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/string_test.cpp.o
.PHONY : src/test/string_test.cpp.o

src/test/string_test.i: src/test/string_test.cpp.i
.PHONY : src/test/string_test.i

# target to preprocess a source file
src/test/string_test.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/string_test.cpp.i
.PHONY : src/test/string_test.cpp.i

src/test/string_test.s: src/test/string_test.cpp.s
.PHONY : src/test/string_test.s

# target to generate assembly for a file
src/test/string_test.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/string_test.cpp.s
.PHONY : src/test/string_test.cpp.s

src/test/vector2d.o: src/test/vector2d.cpp.o
.PHONY : src/test/vector2d.o

# target to build an object file
src/test/vector2d.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/vector2d.cpp.o
.PHONY : src/test/vector2d.cpp.o

src/test/vector2d.i: src/test/vector2d.cpp.i
.PHONY : src/test/vector2d.i

# target to preprocess a source file
src/test/vector2d.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/vector2d.cpp.i
.PHONY : src/test/vector2d.cpp.i

src/test/vector2d.s: src/test/vector2d.cpp.s
.PHONY : src/test/vector2d.s

# target to generate assembly for a file
src/test/vector2d.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test/vector2d.cpp.s
.PHONY : src/test/vector2d.cpp.s

src/test_framwork/unit_test.o: src/test_framwork/unit_test.cpp.o
.PHONY : src/test_framwork/unit_test.o

# target to build an object file
src/test_framwork/unit_test.cpp.o:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test_framwork/unit_test.cpp.o
.PHONY : src/test_framwork/unit_test.cpp.o

src/test_framwork/unit_test.i: src/test_framwork/unit_test.cpp.i
.PHONY : src/test_framwork/unit_test.i

# target to preprocess a source file
src/test_framwork/unit_test.cpp.i:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test_framwork/unit_test.cpp.i
.PHONY : src/test_framwork/unit_test.cpp.i

src/test_framwork/unit_test.s: src/test_framwork/unit_test.cpp.s
.PHONY : src/test_framwork/unit_test.s

# target to generate assembly for a file
src/test_framwork/unit_test.cpp.s:
	cd /Users/jmancero/gitperso/taskmaster/test && $(MAKE) -f libft/CMakeFiles/ft.dir/build.make libft/CMakeFiles/ft.dir/src/test_framwork/unit_test.cpp.s
.PHONY : src/test_framwork/unit_test.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... ft"
	@echo "... src/Any/Any.class.o"
	@echo "... src/Any/Any.class.i"
	@echo "... src/Any/Any.class.s"
	@echo "... src/ReaderInput/ReaderInput.class.o"
	@echo "... src/ReaderInput/ReaderInput.class.i"
	@echo "... src/ReaderInput/ReaderInput.class.s"
	@echo "... src/dlLoader/dlLoader.class.o"
	@echo "... src/dlLoader/dlLoader.class.i"
	@echo "... src/dlLoader/dlLoader.class.s"
	@echo "... src/format/format.o"
	@echo "... src/format/format.i"
	@echo "... src/format/format.s"
	@echo "... src/print/print.o"
	@echo "... src/print/print.i"
	@echo "... src/print/print.s"
	@echo "... src/string/string.o"
	@echo "... src/string/string.i"
	@echo "... src/string/string.s"
	@echo "... src/struct/color/color.o"
	@echo "... src/struct/color/color.i"
	@echo "... src/struct/color/color.s"
	@echo "... src/struct/vector2d/vector2d.o"
	@echo "... src/struct/vector2d/vector2d.i"
	@echo "... src/struct/vector2d/vector2d.s"
	@echo "... src/test/any_test.o"
	@echo "... src/test/any_test.i"
	@echo "... src/test/any_test.s"
	@echo "... src/test/format.o"
	@echo "... src/test/format.i"
	@echo "... src/test/format.s"
	@echo "... src/test/init.o"
	@echo "... src/test/init.i"
	@echo "... src/test/init.s"
	@echo "... src/test/string_test.o"
	@echo "... src/test/string_test.i"
	@echo "... src/test/string_test.s"
	@echo "... src/test/vector2d.o"
	@echo "... src/test/vector2d.i"
	@echo "... src/test/vector2d.s"
	@echo "... src/test_framwork/unit_test.o"
	@echo "... src/test_framwork/unit_test.i"
	@echo "... src/test_framwork/unit_test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	cd /Users/jmancero/gitperso/taskmaster/test && $(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

