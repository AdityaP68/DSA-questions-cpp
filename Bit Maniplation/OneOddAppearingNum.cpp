#include <iostream>
using namespace std;

int findOdd(int arr[], int n){
    int res = 0;
    for(int i = 0; i <n; i++){
        res = res^arr[i];
    }
    return res;
}

int missingNo(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res^arr[i];
    }
    for(int i = 1; i <= n+1; i++){
        res = res^i;
    }
    return res;
}

int main(){
    int arr[9]= {1,1,2,3,4,3,4,3,2};
    int arr2[10]= {1,2,3,4,6,7,8,9,10,11};
    cout << findOdd(arr, 9) << ' ' << missingNo(arr2, 10);
}