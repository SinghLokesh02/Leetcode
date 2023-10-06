class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         vector<int>ans;
        unordered_map<int,int>m;
        for(auto i : nums)m[i]++;
        for(int i = 0;i<nums.size();i++){
            if(m.find(i+1)==m.end())ans.push_back(i+1);
        }
        return ans;
    }
};