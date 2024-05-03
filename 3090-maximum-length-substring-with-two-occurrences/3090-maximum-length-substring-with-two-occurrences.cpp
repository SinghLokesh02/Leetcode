class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_set<char>st(s.begin(),s.end());
        if(st.size()==1)return 2;
        unordered_map<char,int>m;
        int i = 0, j = 0,n = s.size()-1,maxi = 0;
        while(i<=n){
            m[s[i]]++;
            while(m[s[i]]>2)
                m[s[j++]]--;
            maxi = max(maxi,i-j+1);
            i++;
        }
        return maxi;
    }
};