#ifndef NEWVECTOR_H
#define NEWVECTOR_H

class newVector {
    public:
        // Constructor initialized to 0 or coordinates set
        newVector(double x = 0.0, double y = 0.0, double z = 0.0);

        // Vector arithmetic (+, -, *)
        newVector operator+(const newVector& other) const;
        newVector operator-(const newVector& other) const;
        newVector operator*(double scalar) const;

        // Dot product returns scalar
        double dot(const newVector& other) const;

        double getX() const { return x; }
        double getY() const { return y; }
        double getZ() const { return z; }
    private:
        double x, y, z;
};
newVector operator*(double scalar, const newVector& v);

#endif