
#include <iostream>

using namespace std;

int foo() 
{
    return 22;
}

int goo() 
{
    return 33;
}

void printA(int a, int b)
{
    cout << "Print a " << a << b << endl;
}

void printB(int a, int b)
{
    cout << "Print b " << a << b << endl;
}


void print_fn(int (*print)())
{
    cout << (*print)() << endl;
}


int main() 
{

    int (*pFoo)() = foo;
    cout << pFoo() << endl;

    pFoo = goo;
    cout << pFoo() << endl;
    cout << (*pFoo)() << endl;

    print_fn(pFoo);

    void (*pPrint)(int,int) = printA;
    pPrint(3,4);
    (*pPrint)(5,0);

    pPrint = printB;
    pPrint(3,4);
    (*pPrint)(5,0);
    
    return 0;
}

