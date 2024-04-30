class Solution {
public:

    int numberOfSpecialChars(string word) {
        int count = 0;
        unordered_map<char,int>m;
        for(int i = 0;i<word.size();i++){
            if(isupper(word[i])){
                if(m.find(word[i])== m.end()){
                    m[word[i]] = i;
                }
            }
            else{
                m[word[i]] = i;
            }
        }

        unordered_set<char>seench;
        for(char ch : word){
            if(islower(ch)){
                if(!seench.count(ch)){
                    seench.insert(ch);
                    
                    char upperch = toupper(ch);
                    
                    if(m.count(upperch) && m[upperch] > m[ch])count++;
                }
            }
        }
        return count;
    }
};