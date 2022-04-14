#include<iostream>
#include<vector>

using namespace std;


void merge(vector<int> &arr, int s, int e){
    
}

void mergesort(vector<int> &arr, int s, int e){
    if (s>=e){
        return ;
    }
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}

int main(){
    return 0;
}