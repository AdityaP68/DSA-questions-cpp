#include <iostream>
#include <climits>
#include "stackdef.h"
using namespace std;

class Stack_LL
{
};

int main()
{
    Stack_Array<int> stack;
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
