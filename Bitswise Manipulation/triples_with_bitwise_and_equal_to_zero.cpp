class Solution {
public:
    int countTriplets(vector<int>& nums) {
        unordered_map<int,int> tuples;
        
        int count=0;
        
        for(auto a : nums){
            for(auto b : nums){
                ++tuples[a & b];
            }
        }
        
        
        for(int a : nums){
            for(auto t : tuples){
                if((t.first & a)==0){
                    count += t.second;
                }
            }
        }
        
        return count;
        
    }
};