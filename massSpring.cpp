#include "massSpring.h"
#include <iostream>
#include "MassSpring.h"

MassSpring::MassSpring(double mass, double stiffness, double damping)
    : m(mass), k(stiffness), c(damping) {}

State MassSpring::derivative(const State& state) const {
    State ds;

    // dx/dt = velocity
    ds.position = state.velocity;

    // dv/dt = acceleration = F / m
    // Spring force: -k x
    // Damping force: -c v
    ds.velocity = (-k * state.position - c * state.velocity) * (1.0 / m);

    return ds;
}