#include <iostream>
#include "IntArray.h"

using std::cout;
using std::endl;

int main()
{
    IntArray intArray(10);

    for (unsigned i=0; i<intArray.GetLength(); ++i)
    {
        intArray[i] = i*i;
    }

    intArray.Resize(14);
    intArray[10] = 1;
    intArray[11] = 2;
    intArray[12] = 3;
    intArray[13] = 4;

    for (unsigned i=0; i<intArray.GetLength(); ++i)
    {
        cout << intArray[i] << " ";
    }
    cout << endl;



    return 0;
}
