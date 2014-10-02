#include <iostream>
#include <map>
#include <string>

int main() {
    using namespace std;

    map<int, string> myMap;
    myMap.insert(make_pair(4, "apple"));
    myMap.insert(make_pair(2, "orange"));
    myMap.insert(make_pair(1, "banana"));


    map<int, string>::const_iterator it;
    it = myMap.begin();

    while (it != myMap.end())
    {
        cout << it->first << "=" << it->second << " ";
        it++;
    }

    cout << endl;

}
