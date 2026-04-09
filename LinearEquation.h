#pragma once
#include "Equation.h"

class LinearEquation : public Equation {
public:
    LinearEquation(double a, double b);

    bool ExistsRoot() const override;
};