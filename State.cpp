#include <iostream>
#include "State.h"


State::State()
    : position(0, 0, 0), velocity(0, 0, 0) {}

State::State(const newVector& p, const newVector& v)
    : position(p), velocity(v) {}

State operator+(const State& a, const State& b) {
    return State(
        a.position + b.position,
        a.velocity + b.velocity
    );
}

//State * double
State operator*(const State& s, double scalar) {
    return State(
        s.position * scalar,
        s.velocity * scalar
    );
}

// double * State
State operator*(double scalar, const State& s) {
    return s * scalar;
}