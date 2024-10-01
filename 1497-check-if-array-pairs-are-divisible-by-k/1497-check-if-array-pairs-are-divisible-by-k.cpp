class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>m;
     
        for(auto data : arr){
            data %= k;
            if(data<0){
                data+=k;
            }
            m[data]++;
        }
        if(m[0]%2 != 0)return false;
        for(int i = 1;i<=k/2;i++){
            if(m[i] != m[k- i])return 0;
        }
        return 1;
    }
};