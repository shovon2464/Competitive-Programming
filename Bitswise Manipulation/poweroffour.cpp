#include<bits/stdc++.h>
using namespace std;


bool isPowerOfFour(int n) {
    if( n > 0 && (n & (n-1)) == 0 && (n-1) % 3 ==0){
        return true;
    }
    return false;
}


int main(){
    freopen("output.txt", "w",stdout);
    cout<<isPowerOfFour(8);
    return 0;
}