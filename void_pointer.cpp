
#include <iostream>

using namespace std;

int main()
{

    int nValue = 5;
    float fValue = 3.0;

    struct Something
    {
        int nValue;
        float fValue;
    };

    Something sth;

    void *pVoid;

    pVoid = &nValue;
    pVoid = &fValue;
    pVoid = &sth;

    pVoid = &nValue;

    
    cout << *(static_cast<int*>(pVoid)) << endl;

    int nValueAgain = static_cast<int*>(pVoid);
    
}


