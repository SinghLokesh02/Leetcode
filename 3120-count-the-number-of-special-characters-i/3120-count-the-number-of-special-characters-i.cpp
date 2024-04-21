class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>upper;
        unordered_set<char>lower;
        
        for(auto i : word){
            if(i >= 'a' && i <='z'){
                lower.insert(i);
            }
            else{
                upper.insert(i);
            }
        }
        int count = 0;
        for(auto i : lower){
            char c = i - 32;
            if(upper.find(c) != upper.end())count++;
        }
        return count;
    }
};