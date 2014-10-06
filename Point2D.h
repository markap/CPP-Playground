#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class Point2D
{
private:
    int x;
    int y;

public:
    Point2D()
        : x(0), y(0)
    {
    }

    Point2D(int x, int y)
        : x(x), y(y)
    {
    }

    friend ostream& operator<<(ostream &stream, const Point2D &p)
    {
        return stream << "(" << p.x << "," << p.y << ")" << endl;
    }

    void SetPoint(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};


#endif 
