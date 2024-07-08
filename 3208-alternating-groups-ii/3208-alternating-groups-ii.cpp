class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
//         BRUTE FORCE
//         for(int i = 0;i<k-1;i++){
//             colors.push_back(colors[i]);
//         }
//         string s = "";
//         for(auto i : colors){
//             s += to_string(i);
//         }
     
//         int count = 0;
//         for(int i = 0;i<s.length()-k+1;i++){
//             string str = s.substr(i,i+k);
//             while(str.size()>k){
//                 str.pop_back();
//             }
//             int found1 = str.find("11");
//             int found2 = str.find("00");
//             if(found1 == -1 && found2 == -1)count++;
            
//         }
//         return count;
        
//         OPTIMIZED
        for(int i = 0;i<k-1;i++){
            colors.push_back(colors[i]);
        }
        int ans = 0,count = 1;
        for(int i = 0;i<colors.size()-1;i++){
            if(colors[i] != colors[i+1])count++;
            else count = 1;
            if(count >= k)ans++;
        }
        return ans;
    }
};