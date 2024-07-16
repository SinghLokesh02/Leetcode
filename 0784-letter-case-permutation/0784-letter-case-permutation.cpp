class Solution {
public:
    void Solve(string s,unordered_set<string>&st,string ans,int ind){
        if(ind == s.size()){
            st.insert(ans);
            return;
        }
            ans +=  tolower(s[ind]);
            Solve(s,st,ans,ind+1);
            ans.pop_back();
        
        if(isalpha(s[ind])){
            ans += toupper(s[ind]);
            Solve(s,st,ans,ind+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        unordered_set<string>st;
        Solve(s,st,"",0);
        vector<string>ans(st.begin(),st.end());
        return ans;
    }
};