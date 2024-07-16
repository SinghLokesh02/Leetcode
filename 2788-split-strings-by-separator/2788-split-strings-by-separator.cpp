class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        string word = "";
        for(auto s : words){
            for(int i = 0;i<s.size();i++){
                if(s[i] != separator) word += s[i];
                else if(s[i] == separator && word.size()>0){
                    ans.push_back(word);
                    word = "";
                }
            }
            if(!word.empty()){
                    ans.push_back(word);
                    word = "";
            }
        }
        if(!word.empty())ans.push_back(word);
        
        
        return ans;
    }
};