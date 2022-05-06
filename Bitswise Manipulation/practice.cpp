#include<iostream>

using namespace std;


int getIthBit(int n, int i){
    int mask = 1<<i;
    return (n & mask)>0 ? 1 : 0;
}

void setIthBit(int& n, int i){
    int mask = 1<<i;
    n = (n | mask);
}

void clearIthBit(int &n,int i){
    int mask = ~(1<<i);
    n = (n & mask);
}

void updateIthBit(int &n,int i, int v){
    clearIthBit(n,i);
    int mask = v<<i;
    n = (n|mask);
}
void clearBitsInRange(int &n, int i, int j){
    int a = (-1 << j+1);
    int b = (1<<i)-1;
    int mask = a | b;
    n = n & mask;
}

void replaceBits(int &n, int i, int j, int m){
    clearBitsInRange(n,i,j);
    int mask = m<<i;
    n = n | mask;

}

void checkPowerOfTwo(int n){
    if((n & (n-1)) == 0){
        cout<<"Power of two";
    }
    else{
        cout<<"Not power of two";
    }
}
int main(){
    freopen("output.txt","w",stdout);

    int n = 1024;

    //get ith bit
    //cout<<getIthBit(n,1);

    //set ith bit
    //setIthBit(n,1);
    //cout<<n;

    //clear ith bit
    //clearIthBit(n,0);
    //cout<<n;

    //update ith bit
    //updateIthBit(n,1,1);
    //cout<<n;

    //clear last i bits
    //clearLastIBits(n,5);
   //cout<<n;

    //clear bits in range
    //clearBitsInRange(n,1,6);
    //replace bits in range
    //replaceBits(n,2,6,21);
    //cout<<n;

    checkPowerOfTwo(9);
}