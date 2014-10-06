#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include "Point2D.h"


using std::cout;
using std::endl;
using std::ostream;
using std::string;

class Creature
{
private:
    string name;
    Point2D location;

    Creature() {}

public:
    Creature(string name, Point2D location)
        : name(name), location(location)
    {
    }

    friend ostream& operator<<(ostream& out, const Creature &c)
    {
        return out << c.name << " is at " << c.location;
    }

    void MoveTo(int x, int y)
    {
        location.SetPoint(x,y);
    }
};


#endif
