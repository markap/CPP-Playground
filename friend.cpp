#include <iostream>

using namespace std;


class Incrementor
{
private:
    int mValue;

public:
    Incrementor()
    {
        mValue = 0;
    }


    void Add(int nValue)
    {
        mValue += nValue;
    }

    int Get()
    {
        return mValue;
    }


    int& GetRef()
    {
        return mValue;
    }

    int* GetPointer()
    {
        return &mValue;
    }


    friend void Reset(Incrementor &inc, int nValue);

    friend ostream& operator<<(ostream &stream, Incrementor &inc);
};


void Reset(Incrementor &inc, int nValue)
{
    inc.mValue = nValue;
}

ostream& operator<<(ostream &stream, Incrementor &inc)
{
    return stream << "Incrementor is " << inc.mValue;
}


int main()
{
    Incrementor myInc;
    myInc.Add(43);

    cout << myInc << endl;
    
    // friend function
    Reset(myInc, 3);
    cout << myInc << endl;

    cout << myInc.Get() << endl;

    // reference stuff
    myInc.GetRef() = 5;
    cout << myInc << endl;
    int &ref = myInc.GetRef();
    ref = 55;
    cout << myInc.GetRef() << endl;

    // pointer stuff
    int *ptr = myInc.GetPointer();
    cout << "adr " << ptr << endl;
    cout << *ptr << endl;

    *ptr = 45;
    cout << myInc << endl;

}
