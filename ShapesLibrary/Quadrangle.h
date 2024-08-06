#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "Shape.h"

class SHAPESLIBRARY_API Quadrangle : public Shape
{
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    virtual void print_info() const override;
};

#endif // QUADRANGLE_H
