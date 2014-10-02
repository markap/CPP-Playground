#include <vector>
#include <deque>
#include <iostream>


int main()
{
    using namespace std;

    vector<int> vect;

    for (int i = 0; i < 6; i++)
        vect.push_back(10 - i);

    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }



    for (auto& x: vect)
    {
        cout << "add one " << ++x;
    }
    cout << endl;

    cout << endl;


    deque<int> deq; 
    for (int i = 0; i < 3; i++) 
    {
        deq.push_back(i);
        deq.push_front(10 - i);
    }

    for (int i = 0; i < deq.size(); i++) {
        cout << deq[i] << " ";
    }

    cout << endl;

    vector<int>::const_iterator it;
    it = vect.begin();
    while (it != vect.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}
