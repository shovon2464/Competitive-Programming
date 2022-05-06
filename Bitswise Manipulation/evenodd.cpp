#include<iostream>

using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int x =5;
    if(x & 1 ){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
}