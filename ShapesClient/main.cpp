#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_shape_info(const Shape& shape) {
    shape.print_info();
}

int main() {
    setlocale(LC_ALL, "Russian");

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    EquilateralTriangle equilateral_triangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_shape_info(triangle);
    print_shape_info(right_triangle);
    print_shape_info(isosceles_triangle);
    print_shape_info(equilateral_triangle);
    print_shape_info(quadrangle);
    print_shape_info(rectangle);
    print_shape_info(square);
    print_shape_info(parallelogram);
    print_shape_info(rhombus);

    return 0;
}
