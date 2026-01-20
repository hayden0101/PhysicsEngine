#ifndef MASSSPRING_H
#define MASSSPRING_H

#include "System.h"

class MassSpring : public System {
public:
    MassSpring(double mass, double stiffness, double damping);

    // Implements the System interface
    State derivative(const State& state) const override;

private:
    double m;   // mass
    double k;   // spring constant
    double c;   // damping coefficient
};


#endif