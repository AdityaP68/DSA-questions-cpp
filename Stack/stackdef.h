#include <iostream>
using namespace std;

template <typename T>
class Stack_Array
{
private:
    T *data;
    int nextIndex;
    int capacity;

public:

    Stack_Array()
    {
        capacity = 4;
        data = new T[capacity];
        nextIndex = 0;
    }

    int size()
    {
        cout << "Size of the stack is" << nextIndex;
        return nextIndex;
    }

    bool isEmpty()
    {
        return (nextIndex == 0);
    }

    void push(T val)
    {
        if (nextIndex == capacity)
        {
            T *newData = new T[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = val;
        nextIndex++;
    }

    T pop()
    {
        if (!isEmpty())
        {
            nextIndex--;
            return data[nextIndex];
        }
        cout << "The Stack is Empty \n";
        return INT_MIN;
    }

    //peak()
    T top()
    {
        if(isEmpty()){
            cout << "The stack is empty";
            return INT_MIN;
        }
        cout << data[nextIndex - 1];
        return data[nextIndex -1];
    }

    void print()
    {
        if (nextIndex == 0)
        {
            return;
        }
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " -> ";
        }
    }
};
