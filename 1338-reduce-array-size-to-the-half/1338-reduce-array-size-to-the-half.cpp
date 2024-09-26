class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto i : arr)m[i]++;
        int size = arr.size()/2;
        int ans = 0,count = 0;
        vector<int>v;
        for(auto i : m)v.push_back(i.second);
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto data : v){
            ans += data;
            count++;
            if(ans >= size)return count;
        }
            
        return 0;
    }
};