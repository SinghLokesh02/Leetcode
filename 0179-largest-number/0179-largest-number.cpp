bool compare(string a,string b){
        return a+b>b+a;
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        for(auto i : nums)ans.push_back(to_string(i));
        sort(ans.begin(),ans.end(),compare);
        
        string result= "";
        for(auto data : ans)
            result += data;
        
        return result[0] == '0'? "0" : result; 
    }
};