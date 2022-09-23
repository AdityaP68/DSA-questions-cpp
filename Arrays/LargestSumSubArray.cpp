#include <iostream>
using namespace std;

//naive solution
int largestSum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

//efficient solution
int largestSum2(int arr[], int size)
{
    return -1;
}

int main()
{
    int arr[] = {1, -2, 3, -1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << largestSum(arr, size);
}