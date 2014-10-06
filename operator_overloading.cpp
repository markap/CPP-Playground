
#include <iostream>

using namespace std;


class Cents
{
private:
    int mCents;

public:
    Cents(int mCents): mCents(mCents) {}

    friend Cents operator+(const Cents &c1, const Cents &c2);
    friend Cents operator+(const Cents &c1, int c2);
    friend Cents operator+(int &c1, const Cents &c2);

    friend ostream& operator<<(ostream& stream, const Cents &c);
};


Cents operator+(const Cents &c1, const Cents &c2)
{
    return Cents(c1.mCents + c2.mCents);
}


Cents operator+(const Cents &c1, int c2)
{
    return Cents(c1.mCents + c2);
}


Cents operator+(int &c1, const Cents &c2)
{
    return Cents(c1 + c2.mCents);
}


ostream& operator<<(ostream& stream, const Cents &c)
{
    return stream << "Value is " << c.mCents;
}


int main()
{
    Cents c1(34);
    Cents c2(72);
    cout << c1 << endl;

    Cents c3 = c1 + c2;
    cout << c3 << endl;
    cout << 10 + c3 << endl;
    cout << c3 + 20 << endl;
}
