#include<bits/stdc++.h>
#include<string.h>
#define int long long int

using namespace std;

const int mod = 1e9+7;
const int size = 3;


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
                    output.m[i][j] += m[i][k] * a.m[k][j];
                    output.m[i][j] %= mod;
                }
            }
        }
        return output;
    }

};

int fibosum(int n){
    Mat res;
    res.identity();

    if(n==-1) return 0;
    if(n==0) return 0;
    if(n==1) return 1;

    Mat T;
    T.m[0][0] = T.m[0][1] = T.m[0][2] = 1;
    T.m[1][1] = T.m[1][2] = 1;
    T.m[2][1] = 1;

    n -= 1;

    while(n){
        if(n & 1){
            res = res * T;
        }
        T = T * T;
        n /= 2;
    }

    return (res.m[0][0]+res.m[0][1])%mod;

}

int32_t main(){
    freopen("output.txt","w",stdout);
    cout<<(fibosum(19) - fibosum(9)+mod) %mod ;

    return 0;

}