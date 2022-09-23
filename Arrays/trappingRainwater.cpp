#include <iostream>
using namespace std;


//only consider the cases where extreme indexes are the support
int maxWater(int arr[], int n){
    int res= 0, limit;
   
    if((arr[0]-  arr[n-1]) > 0){
        limit = arr[n-1];
    }else{
        limit = arr[0];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < limit){
            res += limit - arr[i];
        }
    }

    return res;
}



int main(){
    int arr[] ={3,0,1,2,4};
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout << maxWater(arr, size);
}