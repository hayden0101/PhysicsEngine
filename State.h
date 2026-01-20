#ifndef STATE_H
#define STATE_H
#include "newVector.h"

class State {
    public:
        State();
        State(const newVector& pos, const newVector& vel);

        newVector position;
        newVector velocity;
    };
    State operator+(const State& a, const State& b);
    State operator*(const State& s, double scalar);
    State operator*(double scalar, const State& s);

#endif