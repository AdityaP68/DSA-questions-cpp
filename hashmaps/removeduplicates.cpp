#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int *a, int size)
{
    // O(n) -- complexity
    vector<int> result;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(a[i]) > 0)
        {
            continue;
        }
        seen[a[i]] = true;
        result.push_back(a[i]);
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 2, 1, 4, 5, 4, 6, 7, 5, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> result = removeDuplicates(arr, size);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}
