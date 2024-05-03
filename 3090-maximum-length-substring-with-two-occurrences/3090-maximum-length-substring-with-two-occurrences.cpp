class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi = 0,n=s.size();
        
        for(int i = 0;i<n;i++){
            unordered_map<char,int>m;
            for(int j = i;j<n;j++){
                    m[s[j]]++;
                    if(m[s[j]]>2)break;
                maxi = max(j-i+1,maxi);
            }
        }
        return maxi;
    }
};