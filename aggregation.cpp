#include <iostream>
#include <string>

using namespace std;


class Teacher
{
private:
    string name;

public:
    Teacher(string name): name(name)
    {
    }

    string GetName() { return name; }
};


class Department
{
private:
    Teacher *teacher;

public:
    Department(Teacher *teacher=NULL)
        : teacher(teacher)
    {
    }
};


int main()
{
    Teacher *t = new Teacher("Martin");
    {
        Department dep(t);
    }

    cout << t->GetName() << endl;
    delete t;
    // segmentation fault
    cout << t->GetName() << endl;
    Department dep(t);

    return 0;
}
