#include <iostream>
using namespace std;

// naive solution
void oddAppearing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << ' ';
        }
    }
}

// efficient solution - theta(n)
void oddAp2(int arr[], int n)
{
    int XOR = 0, res1 =0, res2 =0;
    for(int i =0; i< n; i++){
        XOR = XOR^arr[i];
    }
    int sb = XOR & ~(XOR-1);
    for(int i =0; i < n; i++){
        if((arr[i] & sb) != 0){
            res1 = res1^arr[i];
        }else{
            res2 = res2^arr[i];
        }
    }

    cout << res1 << ' ' << res2;

}

int main()
{
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    oddAppearing(arr, 10);
    oddAp2(arr, 10);
}