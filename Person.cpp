#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person()
{

}


Person::~Person()
{

    using namespace std;
    cout << "destruct" << endl;
}
