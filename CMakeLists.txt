cmake_minimum_required(VERSION 3.7)
project(ai)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp mlp.h mlp.cc evolution_main.h evolution_main.cpp Matrix.h Matrix.cpp neural_net.h neural_net.cpp Perceptron.h Perceptron.cpp tools.h tools.cpp TrainingItem.h TrainingItem.cpp)
add_executable(ai ${SOURCE_FILES})