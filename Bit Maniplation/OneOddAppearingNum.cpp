#include <iostream>
using namespace std;

int findOdd(int arr[], int n){
    int res = 0;
    for(int i = 0; i <n; i++){
        res = res^arr[i];
    }
    return res;
}

int main(){
    int arr[9]= {1,1,2,3,4,3,4,3,2};
    cout << findOdd(arr, 9);
}