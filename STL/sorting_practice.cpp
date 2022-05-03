#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

/*
bool compare(int a,int b){
    return a>b;
}*/


int main(){

    freopen("output.txt","w",stdout);

    vector<int> v = {1,2,3,4,10,12,13,15};

    vector<int> v2(v.begin(),v.begin()+4);

    vector<string> vs = {"apple","mango","banana","guava"};


    for (int x : v2){
        cout<<x<<" ";
    }

    cout<<endl;

    sort(v.begin(),v.end(),[](int a,int b)->bool{return a<b;});

    sort(vs.begin(),vs.end(), [](string a, string b)->bool{return a.length()>b.length();});

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    for(vector<string>::iterator it=vs.begin();it!=vs.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}