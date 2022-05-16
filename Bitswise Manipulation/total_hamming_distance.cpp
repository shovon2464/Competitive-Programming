class Solution {
public:
    
    int hammingDistance(int i, int j){
        int total = 0;
        int num = i ^ j;
        
        while(num){
            num = num & (num-1);
            total++;
        }
        
        return total;
    }
    int totalHammingDistance(vector<int>& nums) {
        int total = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(j != i){
                    total += hammingDistance(nums[i],nums[j]);
                }
            }
        }
        
        return total;
    }
};