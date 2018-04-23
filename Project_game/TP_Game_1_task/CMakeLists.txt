cmake_minimum_required(VERSION 3.9)
project(TP_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(TP_game test.cpp Unit_Of_Men.h Factory_Of_Men.h Unit_Of_Dwarve.h Factory_Of_Dwarves.h Army_builder.h Unit_Of_Elf.h Factory_Of_Elf.h)