#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class SHAPESLIBRARY_API Triangle : public Shape
{
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double a, double b, double c, double A, double B, double C);
    virtual void print_info() const override;
};

#endif // TRIANGLE_H
