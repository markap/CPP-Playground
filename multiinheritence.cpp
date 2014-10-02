#include <iostream>
using namespace std;


class PoweredDevice
{
    public:
        PoweredDevice(int nPower)
        {
            cout << "powered device " << nPower << endl;
        }
};


class Scanner: virtual public PoweredDevice
{
    public:
        Scanner(int nScanner, int nPower)
            : PoweredDevice(nPower)
        {
            cout << "Scanner " << nScanner << endl;
        }
};


class Printer : virtual public PoweredDevice
{
    public:
        Printer(int nPrinter, int nPower) 
            : PoweredDevice(nPower)
        {
            cout << "Printer " << nPrinter << endl;
        }
};


class Copier: public Scanner, public Printer
{
    public:
        Copier(int nScanner, int nPrinter, int nPower)
            : Scanner(nScanner, nPower), Printer(nPrinter, nPower), PoweredDevice(nPower)
        {
            cout << "Copier" << endl;
        }
};


int main() {
    Copier c(1,2,3);
}
