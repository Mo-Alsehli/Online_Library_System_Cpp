# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Embedded-Systems\projects\C++_Projects\Online_Library_System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\build

# Include any dependencies generated for this target.
include CMakeFiles/Online_Library_System.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Online_Library_System.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Online_Library_System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Online_Library_System.dir/flags.make

CMakeFiles/Online_Library_System.dir/codegen:
.PHONY : CMakeFiles/Online_Library_System.dir/codegen

CMakeFiles/Online_Library_System.dir/src/main.cpp.obj: CMakeFiles/Online_Library_System.dir/flags.make
CMakeFiles/Online_Library_System.dir/src/main.cpp.obj: CMakeFiles/Online_Library_System.dir/includes_CXX.rsp
CMakeFiles/Online_Library_System.dir/src/main.cpp.obj: D:/Embedded-Systems/projects/C++_Projects/Online_Library_System/src/main.cpp
CMakeFiles/Online_Library_System.dir/src/main.cpp.obj: CMakeFiles/Online_Library_System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Online_Library_System.dir/src/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Online_Library_System.dir/src/main.cpp.obj -MF CMakeFiles\Online_Library_System.dir\src\main.cpp.obj.d -o CMakeFiles\Online_Library_System.dir\src\main.cpp.obj -c D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\src\main.cpp

CMakeFiles/Online_Library_System.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Online_Library_System.dir/src/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\src\main.cpp > CMakeFiles\Online_Library_System.dir\src\main.cpp.i

CMakeFiles/Online_Library_System.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Online_Library_System.dir/src/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\src\main.cpp -o CMakeFiles\Online_Library_System.dir\src\main.cpp.s

CMakeFiles/Online_Library_System.dir/src/test.cpp.obj: CMakeFiles/Online_Library_System.dir/flags.make
CMakeFiles/Online_Library_System.dir/src/test.cpp.obj: CMakeFiles/Online_Library_System.dir/includes_CXX.rsp
CMakeFiles/Online_Library_System.dir/src/test.cpp.obj: D:/Embedded-Systems/projects/C++_Projects/Online_Library_System/src/test.cpp
CMakeFiles/Online_Library_System.dir/src/test.cpp.obj: CMakeFiles/Online_Library_System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Online_Library_System.dir/src/test.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Online_Library_System.dir/src/test.cpp.obj -MF CMakeFiles\Online_Library_System.dir\src\test.cpp.obj.d -o CMakeFiles\Online_Library_System.dir\src\test.cpp.obj -c D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\src\test.cpp

CMakeFiles/Online_Library_System.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Online_Library_System.dir/src/test.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\src\test.cpp > CMakeFiles\Online_Library_System.dir\src\test.cpp.i

CMakeFiles/Online_Library_System.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Online_Library_System.dir/src/test.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\src\test.cpp -o CMakeFiles\Online_Library_System.dir\src\test.cpp.s

# Object files for target Online_Library_System
Online_Library_System_OBJECTS = \
"CMakeFiles/Online_Library_System.dir/src/main.cpp.obj" \
"CMakeFiles/Online_Library_System.dir/src/test.cpp.obj"

# External object files for target Online_Library_System
Online_Library_System_EXTERNAL_OBJECTS =

Online_Library_System.exe: CMakeFiles/Online_Library_System.dir/src/main.cpp.obj
Online_Library_System.exe: CMakeFiles/Online_Library_System.dir/src/test.cpp.obj
Online_Library_System.exe: CMakeFiles/Online_Library_System.dir/build.make
Online_Library_System.exe: CMakeFiles/Online_Library_System.dir/linkLibs.rsp
Online_Library_System.exe: CMakeFiles/Online_Library_System.dir/objects1.rsp
Online_Library_System.exe: CMakeFiles/Online_Library_System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Online_Library_System.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Online_Library_System.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Online_Library_System.dir/build: Online_Library_System.exe
.PHONY : CMakeFiles/Online_Library_System.dir/build

CMakeFiles/Online_Library_System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Online_Library_System.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Online_Library_System.dir/clean

CMakeFiles/Online_Library_System.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Embedded-Systems\projects\C++_Projects\Online_Library_System D:\Embedded-Systems\projects\C++_Projects\Online_Library_System D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\build D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\build D:\Embedded-Systems\projects\C++_Projects\Online_Library_System\build\CMakeFiles\Online_Library_System.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Online_Library_System.dir/depend

