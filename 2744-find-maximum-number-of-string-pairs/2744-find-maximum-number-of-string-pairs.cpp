class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>m;
        int count = 0;
         for(auto i = 0;i<words.size();i++){
             m[words[i]] = i;
         }
        
        for(auto i = 0;i<words.size();i++){
            string s = words[i];
            reverse(s.begin(),s.end());
            if(m.find(s) != m.end() && m[s] != i){
                count++;
                m.erase(words[i]);
            }
        }
        return count;
    }
};