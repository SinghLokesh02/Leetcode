class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(!nums.size())return ans;
        else if(nums.size()==1)return {to_string(nums[0])};
        int x = nums[0];
        string s = to_string(x);
        int prev = x;
        int count = 0;
        for(int i = 1;i<nums.size();i++){   
            if(prev == nums[i]-1){
                count++;
                prev = nums[i];
            }
            else if(count == 0 && prev !=  nums[i]-1){
                ans.push_back(s);
                s = to_string(nums[i]);
                prev = nums[i];
                count = 0;
            }
            else if(count > 0 && prev != nums[i]-1){
                s += "->";
                s += to_string(prev);
                ans.push_back(s);
                s = to_string(nums[i]);
                prev = nums[i];
                count = 0;
            }
            
        }
        if(count == 0){
            ans.push_back(s);
        }
        if(count>=1){
            s += "->";
            s += to_string(prev);
            ans.push_back(s);
        }
        
        return ans;
    }
};