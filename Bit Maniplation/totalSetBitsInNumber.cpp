#include <iostream>
using namespace std;

// naive solution - complexity: theta(total number of bits)
int totalSetBits(int n)
{
    // using for loop 32 fixed iterations
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((n & (1 << i)) != 0)
        {
            count += 1;
        }
    }
    return count;
}

int countSet(int n)
{
    // using while loop a bit more efficient
    int res = 0;
    int n1 = n;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            res++;
        }
        n = n / 2;
    }
    // using right shift
    int res2 = 0;
    while (n1 > 0)
    {
        if ((n1 & 1) == 1) // or res = res + (n & 1)
            res2 += 1;
        n1 = n1 >> 1;
    }
    return res2;
}

// efficient solution
//  Brain cullingum algorithm - complexity: theta(no. of set bits)
int BCA(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    return res;
}

// Look-up table method (pre computation required)
int table[256];

void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
// all computations at theta(1) after preprocessing
int count(int n)
{
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    return res;
}

// driver code
int main()
{
    int n;
    cin >> n;
    initialize();
    cout << totalSetBits(n) << ' ' << countSet(n) << ' ' << BCA(n) << ' ' << count(n);
}
