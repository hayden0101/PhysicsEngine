#include "newvector.h"



    newVector :: newVector(double x, double y, double z)
        : x(x), y(y), z(z){}

    newVector newVector :: operator+(const newVector& other) const {
        return {x + other.x, y + other.y, z + other.z};
    }

    newVector newVector :: operator-(const newVector& other) const {
        return {x - other.x, y - other.y, z - other.z};
    }

    newVector newVector :: operator*(double s) const {
        return {x * s, y * s, z * s};
    }

    double newVector :: dot(const newVector& other) const{
        return x * other.x + y * other.y + z * other.z;
    }


    // Free function: scalar * vector
    newVector operator*(double scalar, const newVector& v) {
        return v * scalar;
    }