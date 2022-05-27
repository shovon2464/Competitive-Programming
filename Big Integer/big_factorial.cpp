#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void multiply_number(vector<int>& a, int num, int &size){
    
    int carry  = 0 ;
    for(int i=0;i<size;i++){
        int digit = (a[i]*num)+carry;
        //cout<<digit<<endl;
        a[i] = digit%10;
        carry = digit / 10;
    }

    while(carry){
        a[size] = carry%10;
        carry = carry/10;
        size++;
    }
}
void bigFactorial(int n){
    vector<int> a(1000,0);

    a[0] = 1;
    int size = 1;

    for(int i=2;i<=n;i++){
        multiply_number(a,i,size);
    }

    for(int i=size-1;i>=0;i--){
        cout<<a[i];
    }
}


int main(){
    freopen("output.txt","w",stdout);

    bigFactorial(100);

    return 0;
}