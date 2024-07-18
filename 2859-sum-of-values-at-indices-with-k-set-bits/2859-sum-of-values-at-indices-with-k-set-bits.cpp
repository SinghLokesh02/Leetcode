class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(__popcount(i)==k)ans += nums[i];
        }
        return ans;
    }
};