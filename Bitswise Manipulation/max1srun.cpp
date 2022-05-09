#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int max = 0;
    
    int temp = 0;
    while (n>0){
        if( n & 1 == 1){
            cout<<n<<endl;
            temp +=1;
        }
        else{
            if (temp>max){
                max = temp;
            }
            temp = 0;
        }
        n = n>>1;
    }
    if(temp>max){
        max = temp;
    }
    return max;
    
}

int main(){
    freopen("output.txt","w",stdout);
    cout<<solve(30);
}