class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            int sum1 = accumulate(nums.begin(),nums.begin()+i,0);
            int sum2 = accumulate(nums.begin()+i,nums.end(),0);
            if(sum1 != 0 && sum2 != 0)
            ((sum1 - sum2)%2 == 0)? count++ : count;
        }
        return count;
    }
};