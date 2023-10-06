class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    /*        
Solution 01

        Using HashMap takes O(n) extra space. Not recommended!
        We took a map & iterate over every element & increase the count value in the map.
        At any point, if the value became 2 that means it’s duplicate, push it to ans.
        Time complexity: O(n).
        
        //Code
        
        vector<int>ans;
        map<int,int>m;
        for(int i :nums)m[i]++;
        for(auto i : m)
            if(i.second == 2)ans.push_back(i.first);
        return ans;
        
Solution 02
    
        This solution doesn’t take any extra space but took extra time (nlogn) for sorting.
        First, we’ll sort the vector & take the first element as x.
        The first case is an edge case, if the first 2 elements are the same, then push it to ans.
        Again if any 2 elements are same and not equal to ***x(to avoid duplicates)***, push it to           ans & update x.
        Time complexity: O(nlogn).
            
Solution 03
            
        This is the most optimal solution.
        As every element will be in the range of (1,n) where n is the size of the input array.
        Scan every element in the array.
        Negate the value at index of ***((absolute value of scanned element) - 1))***.
        Now check if the value of the index is +ve or not. If positive it's a duplicate element
        Sample array :[4,2,4,3,1] 
        
*/  
        vector<int>ans;
        for(auto i : nums){
            i = abs(i);
            if(nums[i-1]>0) nums[i-1] *= -1;
            else ans.push_back(i);
        }
        return ans;
        
        
        

        
        
    }
};