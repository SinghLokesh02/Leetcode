class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(auto i : details){
            int x = stoi(i.substr(11,2));
            cout<<x<<endl;
            if(x>60)count++;
            
        }
        return count;
    }
};