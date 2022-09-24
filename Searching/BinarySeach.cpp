#include <iostream>
using namespace std;

//iterative
int binarySearch(int *arr, int n, int val)
{
    int high, low, mid;
    high = n;
    low = 0;

    while (high >= low)
    {
        mid = (high + low) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (val > arr[mid])
        {
            low = mid + 1;
        }
        else if (val < arr[mid])
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {6, 11, 22, 23, 43, 46, 52, 54, 67, 80, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, size, 46);
}