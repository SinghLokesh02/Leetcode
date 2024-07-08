class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int>m;
        for(auto i : nums)m[i]++;
        
        int maxi = INT_MIN;
        for(auto i : m)
            if(i.second > maxi)maxi = i.second;
        
        for(auto i : m)
            if(i.second == maxi) ans += i.second;
        return ans;     
    }
};