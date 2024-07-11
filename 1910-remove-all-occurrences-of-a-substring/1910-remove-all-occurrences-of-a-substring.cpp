class Solution {
public:
    string removeOccurrences(string s, string part) {
        int x = -1;
        do {
            x = s.find(part);
            if (x >= 0) {
                s.erase(x, part.length());
            }
        } while (x >=0);
    
    return s;
    }
};