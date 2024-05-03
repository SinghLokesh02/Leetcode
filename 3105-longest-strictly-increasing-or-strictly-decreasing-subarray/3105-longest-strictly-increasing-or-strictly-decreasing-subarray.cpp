class Solution {
public:
    int longestMonotonicSubarray(vector<int>& num) {
        int inc=0,dec = 0;
        int maxi = -1,n = num.size();
        for(int i = 1;i<n;i++){
            if(num[i-1] < num[i]){
                inc++;
            }
            else {
                maxi = max(maxi,inc);
                 inc = 0;
            }
        }
        
        for(int i = 1;i<n;i++){
            if(num[i-1]>num[i]){
                dec++;
            }
            else{
                maxi = max(maxi,dec);
                dec = 0;
            }
        }
        maxi = max(inc,maxi);
        maxi = max(dec,maxi);
        cout<<maxi<<" "<<inc<<" "<<dec<<endl;
        
        return maxi+1;
    }
};