#include<bits/stdc++.h>
#include<string.h>
#define int long long int
using namespace std;

const int mod = 1e+7;
const int size = 2;

struct Mat{
    int m[size][size];
    Mat(){
        memset(m,0,sizeof(m));
    }

    void identity(){
        for(int i=0;i<size;i++){
            m[i][i] = 1;
        }
    }

    Mat operator* (Mat a){
        Mat output;

        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                for(int k=0;k<size;k++){
                    output.m[i][j] += m[i][k]*a.m[k][j];
                    output.m[i][j]%=mod;
                }
            }
        }
        return output;
    }

};

int fib(int n){
    if(n<=2){
        return 1;
    }
    Mat res;
    res.identity();

    Mat t;
    t.m[0][0] = t.m[0][1] = t.m[1][0] = 1;

    n -= 2;

    while(n){
        if(n & 1){
            res = res * t;
        }
        t = t *  t;
        n /= 2;
    }

    return (res.m[0][0] + res.m[0][1]) % mod;
}



int32_t main(){

    freopen("output.txt","w",stdout);
    cout<<fib(8);
    return 0;
}