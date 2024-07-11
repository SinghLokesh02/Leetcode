class Solution {
public:
    string removeOccurrences(string s, string part) {
        int x;
        
    do {
        x = s.find(part);
        if (x != string::npos) {
            s.erase(x, part.length());
        }
    } while (x != string::npos);

    return s;
    }
};