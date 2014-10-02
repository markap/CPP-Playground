#include <iostream>

using namespace std;


class Base
{
public:
    int nValue;

    Base(int val=0)
        : nValue(val)
    {
        cout << "Base" << endl;
    }
};


class Derived: public Base
{
public:
    double dValue;

    Derived(double val=0.0)
        : dValue(val)
    {
        cout << "Derived" << endl;
    }

    Derived(int val1=0, double val2=0.0) 
        : Base(val1), dValue(val2)
    {
        
    }
};


int main() {
    Base cBase;
    Derived cDerived(2,3.0);

    cout << cDerived.nValue << cDerived.dValue << endl;
    return 0;
}

