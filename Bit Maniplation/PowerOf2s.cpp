#include <iostream>
using namespace std;


//brian kerringam algo - complexity => theta(1)
//no. in 2's power only have 1 set bit 
bool isPower(int n){
    if(n==0){
        return false;
    }
    return ((n & (n-1)) == 0);

}

int main(){
    int n;
    cin >> n;
    cout << boolalpha << isPower(n);
}