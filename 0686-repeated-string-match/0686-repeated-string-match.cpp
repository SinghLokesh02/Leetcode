class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        if(a == b)return 1;
        string s = a;
        int index = b.find(a);
        
        int ind = a.find(b);
        if(ind >= 0)return 1;
        else{
            int count = 1;
            while(s.length() <= 10000){
                s += a;
                count++;
                ind = s.find(b);
                if(ind >=0 )return count;
            }
        }
        
        return -1;
    }
};