#include<bits/stdc++.h>

using namespace std;


//Templates
template<typename T>

int search(T arr[], int n, T x){

    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    freopen("output.txt","w",stdout);


    //int arr[] = {1,2,3,10,0,9};
    float arr[] = {1.1,2.2,3.6,5.0};
    int n = sizeof(arr)/sizeof(float);

    float key = 3.6;

    cout<<search(arr,n,key);


    return 0;
}