#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main(){

    freopen("output.txt","w",stdout);

    int arr[] = {10,15,20,13,6,90};
    int n = sizeof(arr)/sizeof(int);

    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;

    for(int x : arr){
        max_heap.push(x);
        min_heap.push(x);
    }

    while(!max_heap.empty()){
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }

    cout<<endl;

    while(!min_heap.empty()){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
}