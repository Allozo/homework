cmake_minimum_required(VERSION 3.9)
project(TP)

set(CMAKE_CXX_STANDARD 14)

add_executable(TP /*test_factory_and_building.cpp*/ Unit_Of_Men.h Unit_Of_Elf.h Unit_Of_Dwarve.h Factory_Of_Men.hpp Factory_Of_Elf.hpp Factory_Of_Dwarves.hpp Army_builder.hpp /*test_composite.cpp*/ tools_for_army.hpp composite_unit.hpp test_tools_for_army.cpp)