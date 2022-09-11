#include <iostream>
using namespace std;

bool isGivenBitSet(int n, int k){
    if((n & (1 << --k)) != 0){
        return true;
    }
    return false;
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << std::boolalpha <<  isGivenBitSet(n ,k);

}