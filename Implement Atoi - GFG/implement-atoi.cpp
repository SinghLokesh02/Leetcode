//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        bool check=0;
        int ans = 0;
        int countn = 0;
        int countp = 0;
        for(int i = 0;i<str.size();i++){
            if(str[i]=='-' && i ==0){
                check =1;
                countn ++;
                
            }
           else if(str[i]=='-' || str[i]=='+'){
               if(str[i]=='-' && i !=0)return -1;
                countn ++;
                countp++;
                if(countn>1 ||countp>1)return -1;
            }
            if(isalpha(str[i]))return -1;
           else if(isdigit(str[i])) ans = ans*10+str[i]-'0';
        }
        
        if(check)ans *= -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends