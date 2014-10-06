#include <iostream>

using namespace std;

template <typename T, int size>
class Buffer
{
private:
    T mBuffer[size];

public:
    T* getBuffer()
    {
        return mBuffer;
    }

    T& operator[](int index)
    {
        return mBuffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const Buffer& me)
    {
        for (int i=0; i<size; ++i)
        {
            stream << me.mBuffer[i] << " ";
        }
        return stream;
    }
};
    


class SimpleClass
{
private:
    int i;


public:
    SimpleClass(int x)
        : i(x) {}

    int get()
    {
        return i;
    }

    friend std::ostream& operator<<(std::ostream& stream, const SimpleClass& me);    
};

std::ostream& operator<<(std::ostream& stream, const SimpleClass& me)
{
    return stream << me.i;
}



int main()
{
    SimpleClass simple(10);
    cout << simple << endl;


    Buffer<int, 10> intBuffer;
    intBuffer.getBuffer()[0] = 100;
    cout << intBuffer << endl;
}
