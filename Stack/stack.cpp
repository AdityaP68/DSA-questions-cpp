#include <iostream>
#include <climits>
using namespace std;

class Stack_Array
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    // Stack_Array(int size)
    // {
    //     data = new int[size];
    //     capacity = size;
    //     nextIndex = 0;
    // }
    Stack_Array()
    {
        capacity = 4;
        data = new int[capacity];
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

    // void push(int num)
    // {
    //     if (nextIndex != capacity)
    //     {
    //         data[nextIndex] = num;
    //         nextIndex++;
    //         return;
    //     }
    //     cout << "The Stack is full \n";
    // }

    void push(int num)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = num;
        nextIndex++;
    }

    int pop()
    {
        if (!isEmpty())
        {
            nextIndex--;
            return data[nextIndex];
        }
        cout << "The Stack is Empty \n";
        return INT_MIN;
    }

    void peak()
    {
        cout << data[nextIndex - 1];
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

class Stack_LL
{
};

int main()
{
    Stack_Array stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.push(80);
    stack.push(90);
    stack.push(100);

    stack.print();

    cout << endl;
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    // stack.peak();
    // stack.isEmpty();

    // cout << "\n";
    // stack.size();

    // cout << "\n";
    // int val = stack.pop();
    // cout << val;

    // cout << "\n";
    // stack.peak();

    // cout << "\n";
    // stack.size();

    // cout << "\n";
    // cout << boolalpha << stack.isEmpty();
}
