#include <iostream>
using namespace std;

int posRightMostDiffBit(int m, int n)
{
    int p = m ^ n, res = 0;
    if (p == 0)
    {
        return -1;
    }
// my solution
    //  p = p & ~(p - 1);
    // while (p > 0)
    // {
    //     p = p >> 1;
    //     res++;
    // }
    
//faster solution

    for (int i = 0; i < 32; i++)
    {
        if ((p & (1 << i)) != 0)
        {
            return i + 1;
        }
    }
    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << posRightMostDiffBit(n, m);
}