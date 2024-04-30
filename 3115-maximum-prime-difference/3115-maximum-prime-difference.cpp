class Solution {
public:
    bool CheckPrime(int n){
        if(n<=1)return 0;
        for(int i = 2;i*i<=n;i++){
            if(n%i==0)return 0;
        }
        return 1;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int first = 0;
        for(int i  = 0;i<nums.size();i++){
            if(CheckPrime(nums[i])){
                first = i;
                break;
            }
        }
        
        for(int i = nums.size()-1;i>=0;i--){
            if(CheckPrime(nums[i])){
                return abs(first-i);
            }
        }
        return -1;
    }
};