#include <iostream>


using namespace std;


class Cents
{
private:
    int mCents;

public:
    Cents(int mCents): mCents(mCents) {}

    Cents operator-();

    friend ostream& operator<<(ostream &stream, const Cents &c);
};


Cents Cents::operator-()
{
    return Cents(-mCents);
}

ostream& operator<<(ostream &stream, const Cents &c)
{
    return stream << "The value is " << c.mCents << endl;
}


int main()
{
    Cents c(45);
    cout << c << endl;
    cout << -c << endl;

}
