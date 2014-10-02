#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        std::string name;
        int age;
        bool male;

    public:

        Person(std::string aname="", int aage=0, bool aisMale=false) :
            name(aname), age(aage), male(aisMale)
        {
        }

        std::string GetName() { return name; }
        int getAge() { return age; }
        bool isMale() { return male; }

        void print() {
            std::string gender = male ? "man" : "woman";
            cout << "This is " << name << ", a " << age << " years old " << gender << endl;
        }
};


class BaseballPlayer : public Person
{
    private:
        double battingAverage;
        int homeRuns;  


};


int main() {
    Person p("Martin", 25, true);
    p.print();

    return 0;
}
