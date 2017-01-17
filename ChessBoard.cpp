//
// Created by Sanjeev Manocha on 15/01/2017.
//

#include "ChessBoard.hpp"
#include <iostream>

ChessBoard::ChessBoard() {
    ChessBoard.reset();
}

ChessBoard::~ChessBoard() {
    std::cout << "Game finished" << std::endl;
}

/*Places appropriate pieces */
void ChessBoard::reset() {

}
