#ifndef SHAPE_H
#define SHAPE_H

#ifdef SHAPESLIBRARY_EXPORTS
#define SHAPESLIBRARY_API __declspec(dllexport)
#else
#define SHAPESLIBRARY_API __declspec(dllimport)
#endif

class SHAPESLIBRARY_API Shape
{
public:
    virtual void print_info() const = 0;
    virtual ~Shape() {}
};

#endif // SHAPE_H
