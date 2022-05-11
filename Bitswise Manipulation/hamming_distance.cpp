#include<bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
    int distance = 0;
    int limit = max(x,y);
    while(limit>0){
        int last_bit = ((x & 1) ^ (y & 1));

        if (last_bit>0){
            distance++;
        }
        x = x>>1;
        y = y>>1;
        limit = limit>>1;
    }
    return distance;
      
}

int main(){
    freopen("output.txt","w",stdout);

    cout<<hammingDistance(1,4);
}