#include<bits/stdc++.h>

using namespace std;

void uniqueNo2(vector<int> arr){
    int result = 0;
    for(int i = 0;i< arr.size();i++){
        result = result ^ arr[i];
    }

    int p = 0;
    int temp = result;

    while((temp & 1) == 0){
        p++;
        temp = temp>>1;
    }


    //Filter out the numbers from the array which have set bit at position 
    int setA = 0;
    int setB = 0;
    int mask = 1<<p;
    for(int i=0;i<arr.size();i++){
        if((arr[i] & mask) > 0){
            setA = setA ^ arr[i];
        }
        else{
            setB = setB ^ arr[i];
        }
    }
    cout<<setA<<endl;
    cout<<setB<<endl;

}





int main(){
    freopen("output.txt","w",stdout);
    vector<int> arr = {1,3,5,4,3,1,5,8};
    uniqueNo2(arr);
}