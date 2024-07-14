class Solution {
public:
    bool Solve(string pattern,string s){
        if(pattern.length() != s.length())return 0;
        unordered_set<char>st1(s.begin(),s.end());
        unordered_set<char>st2(pattern.begin(),pattern.end());
        if(st1.size() != st2.size())return 0;
        unordered_map<char,int>m;
        unordered_map<char,int>m2;
        for(int i = 0;i<s.size();i++){
            if(m.find(s[i]) == m.end() && m2.find(pattern[i]) == m2.end()){
                m[s[i]] = pattern[i];
                m2[pattern[i]] = s[i];
            }
            else if(m.find(s[i]) != m.end() && m2.find(pattern[i]) != m2.end()){
                if(m[s[i]] != pattern[i] || m2[pattern[i]] != s[i])return 0;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       vector<string>ans;
        
        for(int i = 0;i<words.size();i++){
            if(Solve(pattern,words[i]))ans.push_back(words[i]);
        }
        return ans;
    }
};