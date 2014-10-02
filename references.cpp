#include <iostream>

using namespace std;


int main()
{
    int val = 5;
    int &ref = val;

    ref = 6;

    cout << val << ref << endl;
}

