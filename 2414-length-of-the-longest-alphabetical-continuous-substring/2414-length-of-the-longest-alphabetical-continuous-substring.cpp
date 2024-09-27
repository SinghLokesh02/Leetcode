class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1,maxi = -1;
        for(int i = 0;i<s.size()-1;i++){
            if(int(s[i]) == int(s[i+1])-1){
                ans++;
            }
            else{
                if(maxi < ans)maxi = ans;
                ans = 1;
            }
        }
        if(maxi < ans)maxi = ans;
        return maxi;
    }
};