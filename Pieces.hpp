//
// Created by Sanjeev Manocha on 15/01/2017.
//

#ifndef CHESS_ENGINE_PIECES_HPP
#define CHESS_ENGINE_PIECES_HPP

#include "definitions.hpp"

class Pieces {
public:

    virtual ~Pieces();
    virtual coordinates valid_moves()=0;

private:
    virtual coordinates current_position;
};

#endif //CHESS_ENGINE_PIECES_HPP
