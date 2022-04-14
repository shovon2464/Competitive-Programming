#include<bits/stdc++.h>
using namespace std;

void updateArray(int arr[], int i, int val){
    arr[i] = val;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if (i==n-1){
            cout<<arr[i];
        }
        else{
            cout<<arr[i]<<", ";
        }
    }
}

void arraySize(int arr[]){
    cout<<"Array size in function: "<<sizeof(arr);
    cout<<endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int arr[] = {1,5,4,3,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Array size in main: "<<sizeof(arr)<<endl;

    arraySize(arr);
    updateArray(arr,1,13);

    printArray(arr,n);

}

