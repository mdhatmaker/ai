# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/michael/CLionProjects/ai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/michael/CLionProjects/ai/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ai.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ai.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ai.dir/flags.make

CMakeFiles/ai.dir/main.cpp.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ai.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/main.cpp.o -c /Users/michael/CLionProjects/ai/main.cpp

CMakeFiles/ai.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/main.cpp > CMakeFiles/ai.dir/main.cpp.i

CMakeFiles/ai.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/main.cpp -o CMakeFiles/ai.dir/main.cpp.s

CMakeFiles/ai.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ai.dir/main.cpp.o.requires

CMakeFiles/ai.dir/main.cpp.o.provides: CMakeFiles/ai.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ai.dir/main.cpp.o.provides

CMakeFiles/ai.dir/main.cpp.o.provides.build: CMakeFiles/ai.dir/main.cpp.o


CMakeFiles/ai.dir/mlp.cc.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/mlp.cc.o: ../mlp.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ai.dir/mlp.cc.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/mlp.cc.o -c /Users/michael/CLionProjects/ai/mlp.cc

CMakeFiles/ai.dir/mlp.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/mlp.cc.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/mlp.cc > CMakeFiles/ai.dir/mlp.cc.i

CMakeFiles/ai.dir/mlp.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/mlp.cc.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/mlp.cc -o CMakeFiles/ai.dir/mlp.cc.s

CMakeFiles/ai.dir/mlp.cc.o.requires:

.PHONY : CMakeFiles/ai.dir/mlp.cc.o.requires

CMakeFiles/ai.dir/mlp.cc.o.provides: CMakeFiles/ai.dir/mlp.cc.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/mlp.cc.o.provides.build
.PHONY : CMakeFiles/ai.dir/mlp.cc.o.provides

CMakeFiles/ai.dir/mlp.cc.o.provides.build: CMakeFiles/ai.dir/mlp.cc.o


CMakeFiles/ai.dir/evolution_main.cpp.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/evolution_main.cpp.o: ../evolution_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ai.dir/evolution_main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/evolution_main.cpp.o -c /Users/michael/CLionProjects/ai/evolution_main.cpp

CMakeFiles/ai.dir/evolution_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/evolution_main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/evolution_main.cpp > CMakeFiles/ai.dir/evolution_main.cpp.i

CMakeFiles/ai.dir/evolution_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/evolution_main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/evolution_main.cpp -o CMakeFiles/ai.dir/evolution_main.cpp.s

CMakeFiles/ai.dir/evolution_main.cpp.o.requires:

.PHONY : CMakeFiles/ai.dir/evolution_main.cpp.o.requires

CMakeFiles/ai.dir/evolution_main.cpp.o.provides: CMakeFiles/ai.dir/evolution_main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/evolution_main.cpp.o.provides.build
.PHONY : CMakeFiles/ai.dir/evolution_main.cpp.o.provides

CMakeFiles/ai.dir/evolution_main.cpp.o.provides.build: CMakeFiles/ai.dir/evolution_main.cpp.o


CMakeFiles/ai.dir/Matrix.cpp.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ai.dir/Matrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/Matrix.cpp.o -c /Users/michael/CLionProjects/ai/Matrix.cpp

CMakeFiles/ai.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/Matrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/Matrix.cpp > CMakeFiles/ai.dir/Matrix.cpp.i

CMakeFiles/ai.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/Matrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/Matrix.cpp -o CMakeFiles/ai.dir/Matrix.cpp.s

CMakeFiles/ai.dir/Matrix.cpp.o.requires:

.PHONY : CMakeFiles/ai.dir/Matrix.cpp.o.requires

CMakeFiles/ai.dir/Matrix.cpp.o.provides: CMakeFiles/ai.dir/Matrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/Matrix.cpp.o.provides.build
.PHONY : CMakeFiles/ai.dir/Matrix.cpp.o.provides

CMakeFiles/ai.dir/Matrix.cpp.o.provides.build: CMakeFiles/ai.dir/Matrix.cpp.o


CMakeFiles/ai.dir/neural_net.cpp.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/neural_net.cpp.o: ../neural_net.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ai.dir/neural_net.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/neural_net.cpp.o -c /Users/michael/CLionProjects/ai/neural_net.cpp

CMakeFiles/ai.dir/neural_net.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/neural_net.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/neural_net.cpp > CMakeFiles/ai.dir/neural_net.cpp.i

CMakeFiles/ai.dir/neural_net.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/neural_net.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/neural_net.cpp -o CMakeFiles/ai.dir/neural_net.cpp.s

CMakeFiles/ai.dir/neural_net.cpp.o.requires:

.PHONY : CMakeFiles/ai.dir/neural_net.cpp.o.requires

CMakeFiles/ai.dir/neural_net.cpp.o.provides: CMakeFiles/ai.dir/neural_net.cpp.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/neural_net.cpp.o.provides.build
.PHONY : CMakeFiles/ai.dir/neural_net.cpp.o.provides

CMakeFiles/ai.dir/neural_net.cpp.o.provides.build: CMakeFiles/ai.dir/neural_net.cpp.o


CMakeFiles/ai.dir/Perceptron.cpp.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/Perceptron.cpp.o: ../Perceptron.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ai.dir/Perceptron.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/Perceptron.cpp.o -c /Users/michael/CLionProjects/ai/Perceptron.cpp

CMakeFiles/ai.dir/Perceptron.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/Perceptron.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/Perceptron.cpp > CMakeFiles/ai.dir/Perceptron.cpp.i

CMakeFiles/ai.dir/Perceptron.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/Perceptron.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/Perceptron.cpp -o CMakeFiles/ai.dir/Perceptron.cpp.s

CMakeFiles/ai.dir/Perceptron.cpp.o.requires:

.PHONY : CMakeFiles/ai.dir/Perceptron.cpp.o.requires

CMakeFiles/ai.dir/Perceptron.cpp.o.provides: CMakeFiles/ai.dir/Perceptron.cpp.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/Perceptron.cpp.o.provides.build
.PHONY : CMakeFiles/ai.dir/Perceptron.cpp.o.provides

CMakeFiles/ai.dir/Perceptron.cpp.o.provides.build: CMakeFiles/ai.dir/Perceptron.cpp.o


CMakeFiles/ai.dir/tools.cpp.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/tools.cpp.o: ../tools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ai.dir/tools.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/tools.cpp.o -c /Users/michael/CLionProjects/ai/tools.cpp

CMakeFiles/ai.dir/tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/tools.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/tools.cpp > CMakeFiles/ai.dir/tools.cpp.i

CMakeFiles/ai.dir/tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/tools.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/tools.cpp -o CMakeFiles/ai.dir/tools.cpp.s

CMakeFiles/ai.dir/tools.cpp.o.requires:

.PHONY : CMakeFiles/ai.dir/tools.cpp.o.requires

CMakeFiles/ai.dir/tools.cpp.o.provides: CMakeFiles/ai.dir/tools.cpp.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/tools.cpp.o.provides.build
.PHONY : CMakeFiles/ai.dir/tools.cpp.o.provides

CMakeFiles/ai.dir/tools.cpp.o.provides.build: CMakeFiles/ai.dir/tools.cpp.o


CMakeFiles/ai.dir/TrainingItem.cpp.o: CMakeFiles/ai.dir/flags.make
CMakeFiles/ai.dir/TrainingItem.cpp.o: ../TrainingItem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ai.dir/TrainingItem.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai.dir/TrainingItem.cpp.o -c /Users/michael/CLionProjects/ai/TrainingItem.cpp

CMakeFiles/ai.dir/TrainingItem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai.dir/TrainingItem.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/CLionProjects/ai/TrainingItem.cpp > CMakeFiles/ai.dir/TrainingItem.cpp.i

CMakeFiles/ai.dir/TrainingItem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai.dir/TrainingItem.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/CLionProjects/ai/TrainingItem.cpp -o CMakeFiles/ai.dir/TrainingItem.cpp.s

CMakeFiles/ai.dir/TrainingItem.cpp.o.requires:

.PHONY : CMakeFiles/ai.dir/TrainingItem.cpp.o.requires

CMakeFiles/ai.dir/TrainingItem.cpp.o.provides: CMakeFiles/ai.dir/TrainingItem.cpp.o.requires
	$(MAKE) -f CMakeFiles/ai.dir/build.make CMakeFiles/ai.dir/TrainingItem.cpp.o.provides.build
.PHONY : CMakeFiles/ai.dir/TrainingItem.cpp.o.provides

CMakeFiles/ai.dir/TrainingItem.cpp.o.provides.build: CMakeFiles/ai.dir/TrainingItem.cpp.o


# Object files for target ai
ai_OBJECTS = \
"CMakeFiles/ai.dir/main.cpp.o" \
"CMakeFiles/ai.dir/mlp.cc.o" \
"CMakeFiles/ai.dir/evolution_main.cpp.o" \
"CMakeFiles/ai.dir/Matrix.cpp.o" \
"CMakeFiles/ai.dir/neural_net.cpp.o" \
"CMakeFiles/ai.dir/Perceptron.cpp.o" \
"CMakeFiles/ai.dir/tools.cpp.o" \
"CMakeFiles/ai.dir/TrainingItem.cpp.o"

# External object files for target ai
ai_EXTERNAL_OBJECTS =

ai: CMakeFiles/ai.dir/main.cpp.o
ai: CMakeFiles/ai.dir/mlp.cc.o
ai: CMakeFiles/ai.dir/evolution_main.cpp.o
ai: CMakeFiles/ai.dir/Matrix.cpp.o
ai: CMakeFiles/ai.dir/neural_net.cpp.o
ai: CMakeFiles/ai.dir/Perceptron.cpp.o
ai: CMakeFiles/ai.dir/tools.cpp.o
ai: CMakeFiles/ai.dir/TrainingItem.cpp.o
ai: CMakeFiles/ai.dir/build.make
ai: CMakeFiles/ai.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ai"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ai.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ai.dir/build: ai

.PHONY : CMakeFiles/ai.dir/build

CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/main.cpp.o.requires
CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/mlp.cc.o.requires
CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/evolution_main.cpp.o.requires
CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/Matrix.cpp.o.requires
CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/neural_net.cpp.o.requires
CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/Perceptron.cpp.o.requires
CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/tools.cpp.o.requires
CMakeFiles/ai.dir/requires: CMakeFiles/ai.dir/TrainingItem.cpp.o.requires

.PHONY : CMakeFiles/ai.dir/requires

CMakeFiles/ai.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ai.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ai.dir/clean

CMakeFiles/ai.dir/depend:
	cd /Users/michael/CLionProjects/ai/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/michael/CLionProjects/ai /Users/michael/CLionProjects/ai /Users/michael/CLionProjects/ai/cmake-build-debug /Users/michael/CLionProjects/ai/cmake-build-debug /Users/michael/CLionProjects/ai/cmake-build-debug/CMakeFiles/ai.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ai.dir/depend
