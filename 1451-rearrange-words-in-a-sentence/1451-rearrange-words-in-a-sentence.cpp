class Solution {
public:
    string arrangeWords(string text) {
        map<int,vector<string>>m;
        string tempstr = "";
        for(int i = 0;i<text.size();i++){
            if(text[i] != ' '){
                tempstr += text[i];
            }
            else{
                if(tempstr != "")
                m[tempstr.size()].push_back(tempstr);
                tempstr = "";
            }
        }
        m[tempstr.size()].push_back(tempstr);
        
        // Checking the data is Correct or Not
        // for(auto x : m){
        //     cout<<x.first<<" ";
        //     for(auto i : x.second){
        //         cout<<i<<" ";
        //     }
        // }
        
        string ans = "";
        
        for(auto data : m){
            for(auto word : data.second){
                ans += word + " ";
            }
        }
        transform(ans.begin(),ans.end(),ans.begin(), :: tolower);
        ans[0] = toupper(ans[0]);
        ans.erase(ans.length()-1);
        return ans;
        
        
    }
};