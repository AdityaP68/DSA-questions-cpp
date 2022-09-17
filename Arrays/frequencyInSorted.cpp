#include <iostream>
using namespace std;


void countFrequency(int arr[], int n){
    int count = 1;
    if(n==0){
        return;
    }
    for(int i =1; i <= n; i++){
        if(arr[i] == arr[i-1]){
            count++;
        }else{
            cout << arr[i-1] << ' ' << count  << ' ';
            count = 1;
        }
    }


}

int main(){
    int arr[] = {10,10,10,20,30,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr, size);
}