#include<bits/stdc++.h>
using namespace std;

int solve(int L, int R){
    
    int output = R;
    int l = R-1;
    int r = R;
    while(output>=L){
        if((output%r)<(output%(l))){
            r -= 1;
            l -= 1;
            if(l == L-1){
                return output;
                break;
            }
        }
        else{
            output--;
            l=R-1;
            r = R;
        }
    }
    
    return -1;
    
}