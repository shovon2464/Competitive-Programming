#include<bits/stdc++.h>

#define int long long int

using namespace std;

int multiplymod(int a, int b, int c){
    int result = 0;

    while(b){
        if(b & 1){
            result += a;
            result %= c;
        }
        a += a;
        b /= 2;
    }
    return result;
}


int32_t main(){

    freopen("output.txt","w",stdout);

    cout<<multiplymod(20,20,1e9 + 7);
}