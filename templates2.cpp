#include <iostream>
#include <cstring>


template <typename T, int nSize>
class Buffer
{
private:
    T m_buffer[nSize];

public:
    T* GetBuffer() { return m_buffer; }
    T& operator[](int idx)
    {
        return m_buffer[idx];
    }

};


int main() 
{

    Buffer<int, 12> cIntBuffer;
 
    // Fill it up in order, then print it backwards
    for (int nCount=0; nCount < 12; nCount++)
        cIntBuffer[nCount] = nCount;
 
    for (int nCount=11; nCount >= 0; nCount--)
        std::cout << cIntBuffer[nCount] << " ";
    std::cout << std::endl;
 
    // declare a char buffer with room for 31 chars
    Buffer<char, 31> cCharBuffer;
 
    // strcpy a string into the buffer and print it
    strcpy(cCharBuffer.GetBuffer(), "Hello there!");
    std::cout << cCharBuffer.GetBuffer() << std::endl;
 

}
