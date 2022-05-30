#include<iostream>

using namespace std;

long long int mod = 1e9+7;



long long int powr(long long int a, int b){
    long long int res = 1;

    while(b){
        if(b & 1){
            res *= a;
            res = res % mod;
        }
        a *= a;
        a = a % mod;
        b /= 2;
    }

    return res;
}


int main(){

    freopen("output.txt","w",stdout);
    
    cout<<powr(3,265);


    return 0;
}