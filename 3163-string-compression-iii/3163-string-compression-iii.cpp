class Solution {
public:
    string compressedString(string word) {
        int count = 1;
        string ans = "",sub = "";
        for(int i = 0;i<word.size();i++){
            if(count<9 && word[i] == word[i+1]){
                sub += word[i];
                count++;
            }
            else{
                ans += to_string(count);
                ans += word[i];
                count = 1;
            }
        }
        return ans;
    }
};