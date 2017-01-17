cmake_minimum_required(VERSION 3.6)
project(Chess_Engine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ChessBoard.cpp ChessBoard.hpp Pieces.cpp Pieces.hpp Pawn.cpp Pawn.hpp King.cpp King.hpp Queen.cpp Queen.hpp Bishop.cpp Bishop.hpp Knight.cpp Knight.hpp Castle.cpp Castle.hpp definitions.hpp)
add_executable(Chess_Engine ${SOURCE_FILES})