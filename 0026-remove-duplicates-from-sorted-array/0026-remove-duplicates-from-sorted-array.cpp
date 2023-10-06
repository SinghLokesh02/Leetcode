class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        if(st.size()==nums.size())return nums.size();
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i =0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
            m[nums[i]]++;
            ans.push_back(nums[i]);
            }
        }
        int k = ans.size();
        for(int i = 0;i<k;i++){
            nums[i] = ans[i];
        }
        return k;
    }
};