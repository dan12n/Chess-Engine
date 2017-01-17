//
// Created by Divyansh Manocha on 15/01/2017.
//

#ifndef CHESS_ENGINE_CHESSBOARD_HPP
#define CHESS_ENGINE_CHESSBOARD_HPP

class ChessBoard {
public:
    ChessBoard();
    ~ChessBoard();

    void reset();

private:
    int Board[8][8];
};

#endif //CHESS_ENGINE_CHESSBOARD_HPP
