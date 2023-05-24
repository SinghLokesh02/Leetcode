//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	       // Your Code Here
	    string s;
	    int n= N.size();
	   // int n=sizeof(N);
	   if(N.size()==1){
	       s.push_back(N[0]);
	       return stoi(s)%4==0?1:0;
	   }
	    char p0=N[n-2];
	    char p1=N[n-1];
	    s.push_back(p0);
	    s.push_back(p1);
	    int l = stoi(s);
	    if(l%4==0) return 1;
	    else return 0;
	}
};

//{ Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends