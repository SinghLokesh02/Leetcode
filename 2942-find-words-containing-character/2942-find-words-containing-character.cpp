class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int count = 0;
        for(auto word : words){
            int index = word.find(x);
            if(index >=0)ans.push_back(count);
            count++;
        }
        return ans;
    }
};