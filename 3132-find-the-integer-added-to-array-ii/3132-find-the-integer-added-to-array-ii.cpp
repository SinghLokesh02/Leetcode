class Solution {
public:
    bool Check_Both(vector<int> nums1, vector<int> nums2){
        int count = 0;
        int i = 0,j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                i++;
                j++;
            }
            else{
                i++;
                count++;
            }
        }
        return count<=2;
    }
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
         
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int ans = INT_MAX;
        
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                int diff = nums2[j] - nums1[i];
                m[diff]++;
            }
        }
        
        for(auto i : m){
            vector<int> temp;
            int diff = i.first;
            for(int i = 0;i<nums1.size();i++){
                temp.push_back(nums1[i]+diff);
            }
            sort(temp.begin(),temp.end());
            if(Check_Both(temp,nums2)) ans = min(ans,diff);
        }
        return ans;
    }
};