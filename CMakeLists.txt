cmake_minimum_required(VERSION 3.7)
project(trabalho_angelis)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Itens/Bread/Bread.cpp
        Itens/Bread/Bread.hpp
        Itens/Cheese/Cheese.cpp
        Itens/Cheese/Cheese.hpp
        Itens/CottageCheese/CottageCheese.cpp
        Itens/CottageCheese/CottageCheese.hpp
        Itens/Cracker/Cracker.cpp
        Itens/Cracker/Cracker.hpp
        Itens/FilledWafer/FilledWafer.cpp
        Itens/FilledWafer/FilledWafer.hpp
        Itens/Food/Food.cpp
        Itens/Food/Food.hpp
        Itens/Ham/Ham.cpp
        Itens/Ham/Ham.hpp
        Itens/Mortadella/Mortadella.cpp
        Itens/Mortadella/Mortadella.hpp
        Process/Information/Information.cpp
        Process/Information/Information.hpp
        Process/Menu/Menu.cpp
        Process/Menu/Menu.hpp
        Process/MyBooleanClass/MyBooleanClass.cpp
        Process/MyBooleanClass/MyBooleanClass.hpp
        Process/MyProgram/MyProgram.cpp
        Process/MyProgram/MyProgram.hpp
        a02ex03.sh
        FT_bakery.cpp
        FT_bakery.hpp)

add_executable(trabalho_angelis ${SOURCE_FILES})