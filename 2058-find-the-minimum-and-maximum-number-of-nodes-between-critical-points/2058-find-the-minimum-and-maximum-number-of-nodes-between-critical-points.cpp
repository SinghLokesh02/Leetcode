/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>temp;
        while(head){
            temp.push_back(head->val);
            head = head->next;  
        }
        vector<int>p;
        for(int i = 1;i<temp.size()-1;i++){
            if((temp[i-1]<temp[i] && temp[i+1]<temp[i]) || (temp[i-1]>temp[i] && temp[i+1]>temp[i])){
                p.push_back(i);
            }
        }
        int mini = INT_MAX;
        int maxi = INT_MIN;
        if(p.size() < 2)return{-1,-1};
        sort(p.begin(),p.end());
        maxi = p[p.size()-1] - p[0];
        
        for(int i = 0;i<p.size()-1;i++){
            if(p[i+1] - p[i] < mini)
                mini = p[i+1] - p[i];
        }
        
 
       return {mini,maxi};
    }
};