#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);

    //init a reverse sorted arry
    for(int i=0;i<n;i++){
        arr[i] = n-i;
    }
    auto start_time = clock();
    sort(arr.begin(), arr.end());
    auto end_time = clock();

    cout<< end_time - start_time <<endl;


    return 0;
}
