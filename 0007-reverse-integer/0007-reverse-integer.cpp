class Solution {
public:
    int reverse(int x) {
        if(x<=INT_MIN || x >=INT_MAX)return 0;
        int ans = 0;
        while(x != 0){
            if((ans<INT_MIN/10 )|| (ans >INT_MAX/10))return 0;                    
            ans = ans*10 +(x%10);
            x/=10;
        }

        return ans;
    }
};