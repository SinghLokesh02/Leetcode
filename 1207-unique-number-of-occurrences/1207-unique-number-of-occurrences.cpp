class Solution {
public:
    bool check(vector<int>ans){
        sort(ans.begin(),ans.end());
        for(int i = 0;i<ans.size()-1;i++){
            if(ans[i] == ans[i+1])return 0;
        }
        return 1;
    }
    
    bool uniqueOccurrences(vector<int>& arr) {
    // Method - 1 Using Map (Brute Force)  
        
        map<int,int>m;
        unordered_set<int>s;
        for(auto i : arr)m[i]++;
        for(auto i : m) s.insert(i.second);
        return s.size() == m.size();
        
        
    //  Method -2 Using array only  
        /*
        1) Sort the array
        2) count occurence of each element and store the occurence in another array.
        3) Now sort the frequency_stored array.
        4) check if any duplicate occurs in frequency array return false;
        5) Otherwise return true.
        */
    }
};