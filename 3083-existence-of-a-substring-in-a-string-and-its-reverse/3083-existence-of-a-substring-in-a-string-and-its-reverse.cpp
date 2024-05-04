class Solution {
public:
    bool isSubstringPresent(string s) {
        string s1 = s;
        reverse(s1.begin(),s1.end());
        for(int i = 0;i<s.size()-1;i++){
            string ns = s.substr(i,2);
            cout<<ns<<endl;
            int x = s1.find(ns);
            if(x>=0)return 1;
        }
        return 0;
    }
};