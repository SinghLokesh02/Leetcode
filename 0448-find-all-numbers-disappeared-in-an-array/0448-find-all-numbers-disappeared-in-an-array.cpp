class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        // brute Force Using Map (Time -> 0(n), space -> 0(n))
        /*
        
        vector<int>ans;
        unordered_map<int,int>m;
        for(auto i : nums)m[i]++;
        for(int i = 0;i<nums.size();i++){
            if(m.find(i+1)==m.end())ans.push_back(i+1);
        }
        return ans;
        
        */
        
        // Method -2 By Using Frequency Array
        /*
        
        int n = nums.size();
        vector<int>ans;
        vector<bool>extra(n,0);
        for(int i = 0;i<n;i++){
            extra[nums[i]] = 1;
        }
        
        for(int i = 1;i<=n;i++)
            if(extra[i] == 0)ans.push_back(i);
        return ans;
        
        */
        
        // Method - 3 Negate The Indices that are present
        vector<int>ans;
       for(auto i = 0;i<nums.size();i++)
           if(nums[abs(nums[i])-1]>0)nums[abs(nums[i])-1] *= -1;
       
        
        for(int i = 0;i<nums.size();i++)
            if(nums[i]>0)ans.push_back(i+1);
        
        return ans;
    }
};