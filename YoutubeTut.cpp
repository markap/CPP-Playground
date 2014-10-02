

#include <iostream>
#include <string>
#include "Person.h"
#include <memory>

using namespace std;

void ProcessPerson(Person *p)
{
    p->Name = "abc";
}


Person* CreatePerson(string name)
{
    Person* p = new Person;
    p->Name = name;
    return p;
}

// use a smart pointer
unique_ptr<Person> CreateMemPerson(string name)
{
    unique_ptr<Person> p = make_unique<Person>();
    p->Name = name;
    return p;
}


int main() {
    // stack variable
    Person p;
    p.Name = "Martin";

    // now its call by reference
    // send the pointer
    ProcessPerson(&p);

    // heap variable
    // this is a pointer
    Person *pp = new Person;
    pp->Name = "Martin";
    // memory leak

    Person *ppointer = CreatePerson("Martin");

    cout << ppointer->Name << endl;

    delete ppointer;

    auto smartPointer = CreateMemPerson("Martin");

    return 0;
}
