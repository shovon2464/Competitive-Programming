#include<bits/stdc++.h>
#include<vector>
#include<unordered_set>

using namespace std;


vector<int> pairSum(vector<int> arr, int sum){
    unordered_set<int> s;
    vector<int> result;

    for(int i=0;i<arr.size();i++){
        int x = sum-arr[i];
        if(s.find(x) != s.end()){
            cout<<x<<" , "<<arr[i]<<endl;
        }
        s.insert(arr[i]);
    }

    return {};
}


int main(){
    freopen("output.txt","w",stdout);


    vector<int> arr{10,5,2,3,-6,9,11};

    int s = 4;

    vector<int> pairs = pairSum(arr,s);

    for (int x : pairs){
        cout<<x<<" ";
    }


    return 0;
}