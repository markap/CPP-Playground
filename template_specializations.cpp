#include <iostream>

using namespace std;


template <class T>
class Spunky
{
public:
    Spunky (T x)
    {
        cout << x << " is not a char" << endl;
    }
};

template<>
class Spunky<char>
{
public:
    Spunky (char x)
    {
        cout << x << " is indeed a char" << endl;
    }
};


int main()
{
    Spunky<int> obj1(4);
    Spunky<double> obj2(33.3);
    Spunky<char> obj3('a');
    return 0;
}
