#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void updateSumArr(vector<int> &sumArr, int x){
    for(int i=0;i<sumArr.size();i++){
        int last_bit = x & (1<<i);
        if (last_bit>0){
            sumArr[i]++;
        }
    }
}

int convertDecimal(vector<int> sumArr){
    int output = 0;
    for(int i=0;i<sumArr.size();i++){
        output += (sumArr[i]*(1<<i));
        /*
        cout<<"I"<<i<<" ";
        cout<<"BIT"<<sumArr[i]<<" ";
        cout<<"power"<<(1<<i)<<" ";
        cout<<"output"<<(sumArr[i] * (i<<i))<<" ";
        */
    }
   
    return output;
}



int uniqueNo3(vector<int> arr){
    vector<int> sumArr(32,0);

    for(int x : arr){
        updateSumArr(sumArr, x);
    }

    

    for(int i=0;i<sumArr.size();i++){
        sumArr[i] = sumArr[i]%3;
    }


    return convertDecimal(sumArr);
}

int main(){
    freopen("output.txt","w",stdout);
    vector<int> arr = {1,3,5,4,3,1,5,5,3,1};
    cout<<uniqueNo3(arr);
    return 0;
}