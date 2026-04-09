#pragma once

class Equation {
protected:
    double a;
    double b;

public:
    Equation(double a, double b) : a(a), b(b) {}

    virtual ~Equation() = default;

    virtual bool ExistsRoot() const = 0;
};