#include<bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    priority_queue<int, vector<int>, greater<int>> temp;
    vector<int> v;
    
    for(int i=0;i<arr.size();i++){
        if(i<k){
            temp.push(arr[i]);
        }
        else if(abs(temp.top()-x) > abs(arr[i]-x)){
            temp.pop();
            temp.push(arr[i]);
        }
    }
    
    for(int i=0;i<k;i++){
        v.push_back(temp.top());
        temp.pop();
    }
    return v;
}