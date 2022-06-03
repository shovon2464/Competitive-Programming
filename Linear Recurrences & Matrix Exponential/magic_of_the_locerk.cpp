#include<bits/stdc++.h>
using namespace std;


long long int mod = 1e9+7;


long long int binary_recurrance(long long int a, int b){
    long long int output = 1;
    while(b){
        if(b & 1){
            output *= a;
            output = output % mod;
        }
        a *= a;
        a = a % mod;
        b /= 2;
    }
    return output;
}

long long int locker(int n){
    
    long long int result = 1;

    int expo;
    if(n<3){
        result = 3;
    }
    else if(n % 3 == 1){
        expo = (n-4)/3;
        result = 4 * binary_recurrance(3,expo);
    }
    else if(n % 3 == 2){
        expo = (n-2)/3;
        result = 2 * binary_recurrance(3,expo);
    }
    else{
        expo = n/3;
        result = binary_recurrance(3,expo);
    }

    result = result % mod;
    return result;
}

int main(){
    freopen("output.txt","w",stdout);
    cout<<locker(795);
}
