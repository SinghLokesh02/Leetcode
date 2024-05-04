class Solution {
public:
    long long countSubstrings(string s, char c) {
        unordered_map<char,int>m;
        for(auto i : s)m[i]++;
        long long n = m[c],ans = 0;
        for(auto i = 1;i<=n;i++){
            ans += i;
        }
        return ans;
    }
};