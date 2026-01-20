#ifndef RK_H
#define RK_H
#include "State.h"
#include "massSpring.h"
#include "system.h"

class System; 

class RK4 {
    public:
        static State step(const System& system, const State& state, double dt);
};


#endif