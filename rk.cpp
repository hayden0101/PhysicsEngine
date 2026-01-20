#include "rk.h"
#include "State.h"
#include "newvector.h"
#include "massSpring.h"
#include <iostream>

State RK4::step(const System& system, const State& state, double dt) {
    State k1 = system.derivative(state);
    State k2 = system.derivative(state + k1 * (dt / 2.0));
    State k3 = system.derivative(state + k2 * (dt / 2.0));
    State k4 = system.derivative(state + k3 * dt);

    return state + (k1 + k2 * 2.0 + k3 * 2.0 + k4) * (dt / 6.0);
}