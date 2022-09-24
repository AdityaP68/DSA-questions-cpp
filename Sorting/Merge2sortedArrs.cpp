#include <iostream>
#include <algorithm>
using namespace std;

void merge1(int arr1[], int arr2[], int n1, int n2)
{
    int temp[n1 + n2];
    for (int i = 0; i < n1; i++)
        temp[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        temp[n1 + i] = arr2[i];
    sort(temp, temp + n1 + n2);
    for (int i = 0; i < (n1 + n2); i++)
        cout << temp[i] << ' ';
}

void merge2(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while ((i < n1) && (j < n2))
    {
        if (arr1[i] <= arr2[j])
        {
            cout << arr1[i] << ' ';
            i++;
        }
        else
        {
            cout << arr2[j] << ' ';
            j++;
        }
    }

    while (i < n1)
    {
        cout << arr1[i] << ' ';
        i++;
    }

    while (j < n2)
    {
        cout << arr2[j] << ' ';
        j++;
    }
}

int main()
{
    int arr1[] = {10, 15, 20};
    int arr2[] = {5, 6, 6, 15};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    merge2(arr1, arr2, size1, size2);
}