#include <iostream>

using std::cout;
using std::endl;


class Shape
{
    private:
    public:
        Shape() {}

        virtual int calc_area() { return 1000000; }
};


class Rect : public Shape
{
    private:
        int x;
        int y;
    public:
        Rect(int x, int y): x(x), y(y)
        {}

        /*virtual*/ int calc_area() { return x*y; }
};

class Circle : public Shape
{
    private:
        int r;

    public:
        Circle(int r): r(r) {}

        /*virtual*/ int calc_area() { return 3.1415 * r * r; }
};


int main()
{
    Rect r(10,15);
    Circle c(3);

    cout << "Rect area is " << r.calc_area() << endl;
    cout << "Circle area is " << c.calc_area() << endl;

    // polymorphism
    Shape *sr = &r;
    Shape *sc = &c;

    cout << "Rect area is " << sr->calc_area() << endl;
    cout << "Circle area is " << sc->calc_area() << endl;

    Shape *shapes[] = {sr, sc};

    for (int i=0; i < 2; i++)
    {
        cout << "are of shape " << i+1 << " is " << shapes[i]->calc_area() << endl;
    }
}
