#include <iostream>
#include "newvector.h"
#include "State.h"
#include "massSpring.h"
#include "rk.h"
#include "system.h"



int main(){
    MassSpring spring(1.0, 10.0, 0.1);

    State state(
        newVector(1, 0, 0),
        newVector(0, 0, 0)
    );

    double dt = 0.01;

    for (int i = 0; i < 100; ++i) {
        state = RK4::step(spring, state, dt);
        std::cout << state.position.getX() << std::endl;
    }
}