class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        if(s.size() == 1)return s;
        int count1 = 0,count0 = 0;
        for(auto i : s){
            if(i == '1')count1++;
            else count0++;
        }
        if(s.size() == count1)return s;
        string ans;
        for(int i = 0;i<count1-1;i++){
            ans += "1";
        }
        for(int i = 0;i<count0;i++){
            ans += "0";
        }
        
        ans += '1';
        return ans;
    }
};