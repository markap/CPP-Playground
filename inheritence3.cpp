#include <iostream>

using namespace std;


class Base
{

public:
    int m_nValue;
    Base(int nValue)
        : m_nValue(nValue)
    {
    }

    virtual const char* GetName() { return "Base"; }
    int GetValue() { return m_nValue; }

    void print() {
        cout << "name is " << GetName() << " value is " << GetValue() << endl;
    }
};


class Derived: public Base 
{
public:
    Derived(int nValue)
        : Base(nValue)
    {
    }

    virtual const char* GetName() { return "Derived"; }
    int GetValue() { return m_nValue * 2; }

    void print() {
        cout << "name is " << GetName() << " value is " << GetValue() << endl;
    }
};


int main() 
{
    Derived cD(5);
    cD.print();

    // reference
    Derived &rD = cD;    
    rD.print();

    rD.m_nValue = 10;
    cD.print();
    rD.print();

    Derived *pD = &cD;
    pD->print();


    Base &base = cD;
    base.print();

}
