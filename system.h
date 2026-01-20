#ifndef SYSTEM_H
#define SYSTEM_H
#include "State.h"

class System {
public:
    // Compute the time derivative of the given state
    virtual State derivative(const State& state) const = 0;

    // Always good practice with polymorphism
    virtual ~System() = default;
};
#endif