#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int main(){
    int arr[] = {20,30,40,40,40,50,100,11000};
    int n = sizeof(arr)/sizeof(int);

    int key = 40;

    bool present = binary_search(arr,arr+n,key); //lonN

    if(present){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    //Two more things
    //Get the index of the element
    //lower_bound(s,e,key) and upper_bound(s,e,key)

    auto lb = lower_bound(arr,arr+n,key);
    cout<<endl<<"Lower Bound of 40 is "<<(lb-arr)<<endl;

    auto ub = upper_bound(arr,arr+n,key);
    cout<<endl<<"Upper bound of 40 is "<<(ub-arr)<<endl;

    cout<<"Occurances of 40 is "<<(ub-lb)<<endl;

    return 0;

    //lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’. 

    //and if the value is not present in the vector then it returns the end iterator.
    //upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’. 
    
}