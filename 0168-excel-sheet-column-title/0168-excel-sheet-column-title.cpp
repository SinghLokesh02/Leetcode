class Solution {
public:
    string convertToTitle(int columnNumber) {
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans = "";
        while(columnNumber > 0){
            columnNumber -= 1;
            int rem = columnNumber%26;
            ans = alpha[rem] + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};