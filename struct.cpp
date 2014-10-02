
#include <iostream>

using namespace std;

struct DateStruct
{
    int nMonth;
    int nDay;
    int nYear;
};




void printDate(DateStruct &date) {
    cout << "it is the " << date.nDay << date.nMonth << date.nYear << endl;
}

void setDate(DateStruct &date, int day, int month, int year) {
   date.nDay = day;
   date.nMonth = month;
   date.nYear = year; 
}




int main() {
    DateStruct today;
    today.nDay = 30;
    today.nMonth = 9;
    today.nYear = 2014;
    printDate(today);

    DateStruct someday;
    setDate(someday, 30, 2, 2050);
    printDate(someday);

}
