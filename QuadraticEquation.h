#pragma once
#include "Equation.h"

class QuadraticEquation : public Equation {
private:
    double c;
public:
    QuadraticEquation(double a, double b, double c);

    bool ExistsRoot() const override;
};