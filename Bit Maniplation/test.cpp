#include <iostream>
using namespace std;

void checkKthBit(int n, int k)
{
    // Your code here
    // It can be a one liner logic!! Think of it!!
    int val = ((1 << k) & n);
    cout << val << ' ';
    if (0)
    {
        cout << "true";
    }
}

bool isSparse(int n)
{
    // Your code
    int temp = n;
    for (int i = 0; i < 32; i++)
    {
        temp = (n >> (i + 1)) & 3;
        if (temp == 3)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 39, k = 5;
    cout << boolalpha << isSparse(24);
    return 0;
}
