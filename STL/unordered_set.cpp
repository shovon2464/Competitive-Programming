#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    unordered_set<int> s{1,2,3,8,11,15,0};

    int num;
    cin>>num;

    if(s.find(num) != s.end()){
        cout<<num<<" is present";
    }
    else{
        cout<<num<<" is not present";
    }


    for (int x : s){
        cout<<x<<" ";
    }


    return 0;
}