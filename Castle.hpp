//
// Created by Sanjeev Manocha on 15/01/2017.
//

#ifndef CHESS_ENGINE_BISHOP_HPP
#define CHESS_ENGINE_BISHOP_HPP

#include "Pieces.hpp"

class Castle : public Pieces{
public:
    Castle(coordinates initial_position);
    ~Castle();

    coordinates valid_moves();

private:
    coordinates current_position;
};


#endif //CHESS_ENGINE_BISHOP_HPP
