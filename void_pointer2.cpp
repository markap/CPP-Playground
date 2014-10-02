#include <iostream>
#include <string>


enum Type
{
    INT,
    FLOAT,
    STRING
};


void Print(void *pValue, Type t)
{
    using namespace std;
    switch (t)
    {
        case INT:
            cout << *static_cast<int*>(pValue) << endl;
            break;
        case FLOAT:
            cout << *static_cast<float*>(pValue) << endl;
            break;
        case STRING:
            cout << *static_cast<string*>(pValue) << endl;
            break;
    }
}


int main() 
{
    int nVal = 5;
    float fVal = 3.33;
    std::string cVal = "Martin";

    Print(&nVal, INT);
    Print(&fVal, FLOAT);
    Print(&cVal, STRING);

    return 0;
}
