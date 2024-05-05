class Solution {
public:
 
    string intToRoman(int n) {
         string ans = "";
        while(n)
        {
            if(n>=1000){
            ans += "M";
            n -= 1000;
            }
            else if(n>=900 && n < 1000){
                ans += "CM";
                n -= 900;
            }
            else if(n>=500 && n < 900){
                ans += "D";
                n -= 500;
            }
            else if(n>=400 && n<500){
                ans += "CD";
                n -= 400;
            }
            else if(n>=100 && n<400){
                ans += "C";
                n -= 100;
            }
            else if(n>=90 && n<100){
                ans += "XC";
                n -= 90;
            }
            else if(n>=50 && n<90){
                ans += "L";
                n -= 50;
            }
            else if(n>=40 && n<50){
                ans += "XL";
                n -= 40;
            }
            else if(n>=10 && n<40){
                ans += "X";
                n -= 10;
            }
            else if(n>=9 && n<10){
                ans += "IX";
                n -= 9;
            }
            else if(n>=5 && n<9){
                ans += "V";
                n -= 5;
            }
            else if(n>=4 && n<5){
                ans += "IV";
                n -= 4;
            }
            else if(n>=1 && n<4){
                ans += "I";
                n -= 1;
            }
        }
        
        return ans;
    }
};