#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Date.h"

using namespace std;



Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

void Date::setDate(int m, int d, int y) {
    this->month = m;
    this->day = d;
    this->year = y;
}

void Date::print() {
    cout << day << "/" << month << "/" << year << endl;
}

class MyString {
    private:
        char * m_pchString;
        int m_nLength;

    public:
        MyString(const char* pchString="") {
            m_nLength = strlen(pchString) + 1; // one more for delimiter

            m_pchString = new char[m_nLength];

            strncpy(m_pchString, pchString, m_nLength);

            m_pchString[m_nLength-1] = '\0';

        }


        ~MyString() {
            delete[] m_pchString;

            m_pchString = 0;
        }


        char* GetString() { return m_pchString; }

        int GetLength() { return m_nLength; }

};


int main() {
    Date d;
    d.setDate(3, 12, 2014);
    d.print();

    Date da(4, 34, 2000);
    da.print();

    MyString myName("Martin");

    cout << "My name is " << myName.GetString() << endl;

    return 0;
}
