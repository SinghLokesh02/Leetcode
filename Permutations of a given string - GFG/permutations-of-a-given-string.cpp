//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int factorial(int n){
	    if(n==0)return 1;
	    return n*factorial(n-1);
	}
		vector<string>find_permutation(string s)
		{
		    vector<string>ans;
		    int n = factorial(s.size());
		    for(int i = 0;i<n;i++){
		        next_permutation(s.begin(),s.end());
		        ans.push_back(s);
		    }
		    
		    sort(ans.begin(),ans.end());
		    ans.erase(unique(ans.begin(),ans.end()),ans.end());
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends