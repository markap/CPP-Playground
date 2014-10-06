#include <iostream>

using namespace std;

class Value
{
private:
    int mValue;

public:
    Value(int nValue)
        : mValue(nValue)
    {}

    friend bool IsEqual(const Value &v1, const Value &v2);
};


bool IsEqual(const Value &v1, const Value &v2)
{
    return (v1.mValue == v2.mValue);
}


int main()
{
    Value v1(34);
    Value v2(34);
    Value v3(43);

    cout << IsEqual(v1, v2) << endl;
    cout << IsEqual(v1, v3) << endl;
}
