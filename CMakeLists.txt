cmake_minimum_required(VERSION 3.15)
project(Brasftusal)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Brasftusal
    jogador.cpp
    jogador.h
    main.cpp
    partida.cpp
    partida.h
    pessoa.cpp
    pessoa.h
    tecnico.cpp
    tecnico.h
        times.cpp
        times.h
    Torneio.cpp
    Torneio.h)
