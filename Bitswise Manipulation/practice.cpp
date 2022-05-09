#include<iostream>

using namespace std;

//get ith bit
int getIthBit(int n, int i){
    int mask = 1<<i;
    return (n & mask)>0 ? 1 : 0;
}

//set ith bit
void setIthBit(int& n, int i){
    int mask = 1<<i;
    n = (n | mask);
}

//clear ith bit
void clearIthBit(int &n,int i){
    int mask = ~(1<<i);
    n = (n & mask);
}

//update ith bit
void updateIthBit(int &n,int i, int v){
    clearIthBit(n,i);
    int mask = v<<i;
    n = (n|mask);
}

//clear last i bits
void clearBitsInRange(int &n, int i, int j){
    int a = (-1 << j+1);
    int b = (1<<i)-1;
    int mask = a | b;
    n = n & mask;
}

//replace bits in range
void replaceBits(int &n, int i, int j, int m){
    clearBitsInRange(n,i,j);
    int mask = m<<i;
    n = n | mask;

}

//check power of two
void checkPowerOfTwo(int n){
    if((n & (n-1)) == 0){
        cout<<"Power of two";
    }
    else{
        cout<<"Not power of two";
    }
}

//Count set bits

int countSetBits(int n){
    int count = 0;
    while(n>0){
        int lastbit = n & 1;
        count += lastbit;
        n = n>>1;
    }
    return count;
}
//Count set bits hack
int countSetBitsHack(int n){
    //removes the current set bit from the current number
    int count = 0;
    while(n>0){
        n = n & (n-1);
        count++;
    }
    return count;
}

//decimal to binary
int decimalToBinary(int n){
    int output = 0;
    int power = 1;
    while(n>0){
        int last_bit = n & 1;
        output += last_bit*power;
        power *= 10;
        n = n >> 1;
    }
    return output;
}

int main(){
    freopen("output.txt","w",stdout);

    int n = 15;

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

    //check power of two
    //checkPowerOfTwo(9);

    //Count number of set bits
    //cout<<countSetBits(n)<<endl;
    //cout<<countSetBitsHack(n);

    //decimal to binary
    cout<<decimalToBinary(n);
}