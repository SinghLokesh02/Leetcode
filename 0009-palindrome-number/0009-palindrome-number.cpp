class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        if(x<0)return 0;
        long long x1 = x;
        while(x != 0){
            rev = rev*10 +(x%10);
            x /= 10;
        }
        cout<<rev<<" "<<x1<<endl;
        return rev == x1;
    }
};