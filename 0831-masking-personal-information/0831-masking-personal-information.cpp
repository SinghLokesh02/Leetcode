class Solution {
public:
    string solveEmail(string s){
        int index = s.find('@');
        string sub = s.substr(0,index);
        transform(sub.begin(),sub.end(),sub.begin(),::tolower);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string ans = "";
        ans += sub[0];
        ans += "*****";
        ans += sub[sub.length()-1];
        for(int i = index;i<s.size();i++)
            ans += s[i];
        
        return ans;
    }
    
    string solveNumber(string s){
        int n = s.length();
        string lastFour = s.substr(s.length()-4,4);
        string ans = "";
        if(n == 10)
            ans = "***-***-";
        
        else if(n == 11)
            ans = "+*-***-***-";
        
        else if(n == 12)
            ans = "+**-***-***-";
        
        else if(n == 13)
            ans = "+***-***-***-";
        
        ans += lastFour;
        return ans;
    }
    
    string maskPII(string s) {
        bool isNumber = false;
        for(auto data : s){
            if(isdigit(data))isNumber = true;
        }
        string ans;
        if(isNumber){
            string filtered = "";
            for(auto i : s)
                if(isdigit(i))filtered += i;
        
            ans = solveNumber(filtered);
            
        }
        else{
            ans = solveEmail(s);
        }
        return ans;
    }
};