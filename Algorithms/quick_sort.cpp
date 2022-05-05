#include<iostream>
#include<vector>

using namespace std;


void partitionIndex(vector<int>& v, int start,int end){
    int pivot = v[start];
    swap(v[start],v[end]);
    int i=start;
    for(int j=0;j<end;j++){
        if(v[j]<pivot){
            swap(v[i],v[j]);
            i++;
        }
    }
    swap(v[i],v[end]);
}

int main(){
    vector<int> v = {3,2,1,5,6,4};
    int end = v.size()-1;

    partitionIndex(v,0,end);

    for (int x : v){
        cout<<x<<" ";
    }

}