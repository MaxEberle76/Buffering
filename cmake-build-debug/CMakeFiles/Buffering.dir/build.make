# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CLion\Buffering

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CLion\Buffering\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Buffering.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Buffering.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Buffering.dir/flags.make

CMakeFiles/Buffering.dir/main.c.obj: CMakeFiles/Buffering.dir/flags.make
CMakeFiles/Buffering.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLion\Buffering\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Buffering.dir/main.c.obj"
	E:\MinGW-W64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Buffering.dir\main.c.obj   -c E:\CLion\Buffering\main.c

CMakeFiles/Buffering.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Buffering.dir/main.c.i"
	E:\MinGW-W64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLion\Buffering\main.c > CMakeFiles\Buffering.dir\main.c.i

CMakeFiles/Buffering.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Buffering.dir/main.c.s"
	E:\MinGW-W64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLion\Buffering\main.c -o CMakeFiles\Buffering.dir\main.c.s

CMakeFiles/Buffering.dir/io.c.obj: CMakeFiles/Buffering.dir/flags.make
CMakeFiles/Buffering.dir/io.c.obj: ../io.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLion\Buffering\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Buffering.dir/io.c.obj"
	E:\MinGW-W64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Buffering.dir\io.c.obj   -c E:\CLion\Buffering\io.c

CMakeFiles/Buffering.dir/io.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Buffering.dir/io.c.i"
	E:\MinGW-W64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLion\Buffering\io.c > CMakeFiles\Buffering.dir\io.c.i

CMakeFiles/Buffering.dir/io.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Buffering.dir/io.c.s"
	E:\MinGW-W64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLion\Buffering\io.c -o CMakeFiles\Buffering.dir\io.c.s

# Object files for target Buffering
Buffering_OBJECTS = \
"CMakeFiles/Buffering.dir/main.c.obj" \
"CMakeFiles/Buffering.dir/io.c.obj"

# External object files for target Buffering
Buffering_EXTERNAL_OBJECTS =

Buffering.exe: CMakeFiles/Buffering.dir/main.c.obj
Buffering.exe: CMakeFiles/Buffering.dir/io.c.obj
Buffering.exe: CMakeFiles/Buffering.dir/build.make
Buffering.exe: CMakeFiles/Buffering.dir/linklibs.rsp
Buffering.exe: CMakeFiles/Buffering.dir/objects1.rsp
Buffering.exe: CMakeFiles/Buffering.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CLion\Buffering\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Buffering.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Buffering.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Buffering.dir/build: Buffering.exe

.PHONY : CMakeFiles/Buffering.dir/build

CMakeFiles/Buffering.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Buffering.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Buffering.dir/clean

CMakeFiles/Buffering.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CLion\Buffering E:\CLion\Buffering E:\CLion\Buffering\cmake-build-debug E:\CLion\Buffering\cmake-build-debug E:\CLion\Buffering\cmake-build-debug\CMakeFiles\Buffering.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Buffering.dir/depend

