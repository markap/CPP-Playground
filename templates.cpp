#include <iostream>


template <typename Type>
Type max(Type tX, Type tY)
{
    return (tX > tY) ? tX : tY;
}

template <typename Type>
void print(Type a)
{
    std::cout << a << std::endl;
}


class Cents
{
private:
    int m_Cents;
public:
    Cents(int cents)
        : m_Cents(cents)
    {
    }

    friend bool operator>(Cents &c1, Cents &c2)
    {
        return (c1.m_Cents > c2.m_Cents);
    }

    /**
    friend ostream& operator<< (ostream &out, const Cents &cCents)
    {
        out << cCents.m_Cents << " cents ";
        return out;
    }
    */
};

int main() {
    int nValue = max(3,7);
    double dValue = max(6.23, 18.4);
    char chValue = max('a', '6');

    Cents small(3);
    Cents big(17);
    Cents maxC = max(small, big);


    print(nValue);
    print(dValue);
    print(chValue);

}



