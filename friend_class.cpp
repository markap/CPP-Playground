#include <iostream>

using namespace std;


class Storage
{
private:
    int mValue;
    double dValue;

public:
    Storage(int mValue, double dValue)
        : mValue(mValue), dValue(dValue) {}

    friend class Display;
};


class Display
{
private:
    bool mDisplayIntFirst;

public:
    Display(bool mDisplayIntFirst): mDisplayIntFirst(mDisplayIntFirst) {}

    void DisplayItem(Storage &s)
    {
        if (mDisplayIntFirst)
            cout << s.mValue << s.dValue << endl;
        else
            cout << s.dValue << s.mValue << endl;
    }
};

int main()
{
    Storage s(3, 4.4);
    Display display(false);

    display.DisplayItem(s);

    return 0;

}
