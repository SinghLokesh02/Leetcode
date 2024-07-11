class Solution {
public:
    string sortVowels(string s) {
        string vowel;
        for(auto i : s){
            if(i =='a' || i == 'o' || i == 'e' || i == 'i' || i == 'u' || i =='A' || i == 'O' || i == 'E' || i == 'I' || i == 'U')vowel += i;
        }
        
        sort(vowel.begin(),vowel.end());
        int x = 0;
        for(int i = 0;i<s.size();i++){
             if(s[i] =='a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] =='A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U')
                 s[i] = vowel[x++];
        }
        return s;
    }
};