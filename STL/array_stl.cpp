#include<bits/stdc++.h>
#include<array>
#include<algorithm>

using namespace std;

//printing an array, here we don't need the array size as parameter because array is being passed as an object
void printArray(const array<int,6> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//update an index of the array
void updateArray(array<int,6> &arr,int i, int val){
    arr[i] = val;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
#endif

    array<int,6> arr = {1,2,3,4,5,6};
    updateArray(arr,0,90);
    printArray(arr);
    
    //sort
    sort(arr.begin(),arr.end());
    
    printArray(arr);


    array<int,10> fives;
    fives.fill(5);

    for(int x: fives){
        cout<<x<<" ";
    }

    return 0;
}