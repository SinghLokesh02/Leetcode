class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
// APPROACH - 1
        int pair = 0, n = nums.size();
        // for(int i = 0;i<n;i++){
        //     for(int j = i+1;j<n;j++){
        //         if(nums[i]+nums[j] < target)pair++;
        //     }
        // }
        
// APPROACH - 2
        sort(nums.begin(),nums.end());
        int i = 0, j = n-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum < target){
                pair += j - i;
                i++;
            }
            
            else j--;
        }
        return pair;
    }
};