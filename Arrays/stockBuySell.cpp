#include <iostream>
using namespace std;

// my solution (working soo far)
void maxProfit(int arr[], int n)
{
    int i = 0, val = 0;
    bool flag = true; // true => buy, false => sell
    while (i < n)
    {
        if (flag)
        {
            if ((arr[i] < arr[i + 1]) && (i != n - 1))
            {
                cout << "buy " << arr[i] << ' ';
                val -= arr[i];
                flag = false;
            }
        }
        else
        {
            if (arr[i - 1] < arr[i])
            {
                if (i == n - 1)
                {
                    cout << "sell " << arr[i] << ' ';
                    flag = true;
                    val += arr[i];
                }
                else if (arr[i] > arr[i + 1])
                {
                    cout << "sell " << arr[i] << ' ';
                    flag = true;
                    val += arr[i];
                }
            }
        }
        i++;
    }
    cout << "total profit " << val;
}

// hmmm -> scam bruh
int maxProfit2(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}

int main()
{
    int arr[] = {100, 180, 260, 310, 40, 535, 695};
    int size = sizeof(arr) / sizeof(arr[0]);
    maxProfit(arr, size);
    cout << endl
         << maxProfit2(arr, size);
}
