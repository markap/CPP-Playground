#ifndef INTARRAY_H
#define INTARRAY_H

#include <assert.h>
class IntArray
{
private:
    int mLength;
    int *mData;


public:
    IntArray();

    IntArray(int length);

    ~IntArray();


    void Erase();

    int& operator[](int idx);

    void Reallocate(int newLength);

    void Resize(int newLength);

    int GetLength();

};

#endif
