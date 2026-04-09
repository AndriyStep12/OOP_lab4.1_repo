#include "QuadraticEquation.h"

QuadraticEquation::QuadraticEquation(double a, double b, double c) : Equation(a, b), c(c) {}

bool QuadraticEquation::ExistsRoot() const {
    if (a == 0) {
        if (b != 0) return true;
        if (b == 0 && c == 0) return true;
        return false;
    }

    double discriminant = (b * b) - (4 * a * c);
    return discriminant >= 0;
}