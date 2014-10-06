
#include <iostream>

using std::cout;
using std::endl;

int GenerateId()
{
    static int sId = 0;
    return sId++;
}


class Sth
{
public:
    static int value;

    static int GetSomeInt()
    {
        return 12;
    }
};
int Sth::value = 0;

int main()
{
    cout << GenerateId() << endl;
    cout << GenerateId() << endl;
    cout << GenerateId() << endl;
    cout << GenerateId() << endl;

    Sth cl;
    cl.value = 3;
    cout << cl.value << endl;

    Sth cl2;
    cout << cl2.value << endl;

    Sth::value = 14;
    cout << Sth::value << endl;

    cout << Sth::GetSomeInt() << endl;

    return 0;
}
