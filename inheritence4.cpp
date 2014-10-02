#include <iostream>
#include <string>

using namespace std;


class Animal
{
protected:
    std::string m_name;

    Animal(std::string name)
        : m_name(name)
    {
    }

public:
    std::string GetName() { return m_name; }
    virtual const char* Speak() = 0;
};


class Cat: public Animal
{
public:
    Cat(std::string name)
        : Animal(name)
    {
    }

    virtual const char* Speak() { return "Miau"; }
};

class Dog: public Animal
{
public:
    Dog(std::string name)
        : Animal(name)
    {
    }

    virtual const char* Speak() { return "Wuff"; }
};

int main() {
    Cat cat("milki");
    Dog dog("huskey");

    cout << cat.Speak() << endl;
    cout << dog.Speak() << endl;
}


