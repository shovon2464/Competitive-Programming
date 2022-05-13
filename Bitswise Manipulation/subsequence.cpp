#include<iostream>
#include<vector>
#include<string>
#include<cmath>


using namespace std;
vector<vector<int>> subsets(vector<int>& nums) {
        int limit = pow(2,nums.size());
        vector<vector<int>> output;
        for(int i=0;i<limit;i++){
            int temp = i;
            vector<int> inner;
            for(int j=0;j<nums.size();j++){               
                if((temp & 1) == 1){
                    inner.push_back(nums[j]);
                }
                temp = temp>>1;
            }
            output.push_back(inner);
            inner.clear();
        }
        
        return output;

}

int main(){
    freopen("output.txt","w",stdout);

    vector<int> v = {1,2,3};

    vector<vector<int>> output = subsets(v);

    for(vector<int> vx : output){
        for(int y : vx){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
