class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        int i = 0;
        for(auto data : s){
            if(data == '(')st.push(i);
            else if(data == ')'){
                int index = st.top();
                st.pop();
                reverse(s.begin()+index+1, s.begin()+i);
            }
            i++;
        }
        string ans = "";
        for(auto i : s){
            if(isalpha(i))ans += i;
        }
        return ans;
    }
};