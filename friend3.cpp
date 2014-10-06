
#include <iostream>

using namespace std;


class Humidity;

class Temperature
{
private:
    int mTemp;

public:
    Temperature(int temp): mTemp(temp) {}

    friend void PrintWeather(Temperature &t, Humidity &h);
};

class Humidity
{
private:
    int mHumidity;

public: 
    Humidity(int humidity): mHumidity(humidity) {}

    friend void PrintWeather(Temperature &t, Humidity &h);
};


void PrintWeather(Temperature &t, Humidity &h)
{
    cout << "Temp is " << t.mTemp << " and Humidity is " << h.mHumidity << endl;
}


int main()
{
    Humidity h(2);
    Temperature t(34);

    PrintWeather(t, h);
}
