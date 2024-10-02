class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        set<int>st(arr.begin(),arr.end());
        unordered_map<int,int>m;
        int index = 1;
        for(auto i : st){
            m[i] = index++;
        }
        
        vector<int>ans;
        for(auto i : arr){
            ans.push_back(m[i]);
        }
        return ans;
    }
};