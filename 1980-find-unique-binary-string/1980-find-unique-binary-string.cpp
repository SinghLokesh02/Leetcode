class Solution {
public:
    void GenerateBinaryString(vector<string> &ans,int n,int i,string str){
        if(i == n){
            ans.push_back(str);
            return;
        }
        GenerateBinaryString(ans,n,i+1,str+"0");
        GenerateBinaryString(ans,n,i+1,str+"1");
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string>ans;
        int n = nums[0].length();
        GenerateBinaryString(ans,n, 0,"");
        
        unordered_map<string,int>m;
        for(auto i : nums)
            m[i]++;
        
        for(auto i : ans)
            if(m.find(i) == m.end())return i;
        
        return "";
    }
};