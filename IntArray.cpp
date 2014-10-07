#include "IntArray.h"


IntArray::IntArray()                                                      
    : mLength(0), mData(0) {}                                              
                                                                         
                                                                         
IntArray::IntArray(int length)
    : mLength(length), mData(new int[length]) {}                                         
                                                                         
                                                                         
IntArray::~IntArray()
{                                                                          
    delete[] mData;                                                        
}                                                                          
                                                                         
                                                                         
void IntArray::Erase()
{                                                                          
                                                                        
    delete[] mData;                                                        
                                                                        
    mData = 0;                                                             
    mLength = 0;                                                           
}                                                                          
                                                                         
                                                                         
void IntArray::Reallocate(int newLength)
{                                                                          
    Erase();                                                               
                                                                        
    if (newLength <= 0)                                                    
        return;                                                            
                                                                         
    mData = new int[newLength];                                            
    mLength = newLength;                                                   
}                                                                          
                                                                         
void IntArray::Resize(int newLength)
{                                                                          
    if (newLength <= 0)                                                    
    {                                                                      
        Erase();                                                           
        return;                                                            
    }                                                                      
                                                                        
    int *newData = new int[newLength];                                     
                                                                         
    // copy old elements                                                   
    if (mLength > 0)                                                       
    {                                                                      
        int elementsToCopy = mLength < newLength ? mLength : newLength;    

        for (int i=0; i<newLength; ++i)
        {
           newData[i] = mData[i];
        }

        delete[] mData;
        mData = newData;
        mLength = newLength;
       
    }
}


int& IntArray::operator[](int idx)
{
    assert(idx >= 0 && idx < mLength);
    return mData[idx];
}


int IntArray::GetLength()
{
    return mLength;
}
