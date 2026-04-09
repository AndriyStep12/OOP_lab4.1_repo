#include "LinearEquation.h"

LinearEquation::LinearEquation(double a, double b) : Equation(a, b) {}

bool LinearEquation::ExistsRoot() const {
    if (a != 0) {
        return true;
    }
    if (a == 0 && b == 0) {
        return true;
    }
    return false;
}