#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

void printVector(vector<int> v){
    for(int x: v){
        cout<<x<<" ";
    }

    cout<<endl;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    vector<int> v;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
    }

    printVector(v);

    //sorting the vector

    sort(v.begin(),v.end());
    printVector(v);



    //Empty container constructor
    //vector<int> first;

    //Fill constructor (4 integers with value 20)
    //vector<int> second(4,20);

    //Range constructor (Here creating a vector from an array)
    //int numbers[] = {10,20,30,40};
    //vector<int> third(numbers,numbers+4);

    //Copy constructor
    //vector<int> fourth(third);

    //Another way
    //vector<int> arr = {1,2,3,4,10};





    return 0;
}