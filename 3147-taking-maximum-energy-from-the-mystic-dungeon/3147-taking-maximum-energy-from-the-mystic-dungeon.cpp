class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
         int n = energy.size();
        int maxi = INT_MIN;
        for(int j = n-1 ;j > n -k -1; j--){
            int ans = 0;
        for(int i = j; i >= 0; i-=k){
            ans +=  energy[i];
            maxi = max(maxi,ans);
        }
        }
        return maxi;
    }
};