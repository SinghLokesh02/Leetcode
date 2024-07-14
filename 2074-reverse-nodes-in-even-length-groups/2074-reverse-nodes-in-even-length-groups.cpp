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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        vector<int>arr;
        while(head){
            arr.push_back(head->val);
            head = head->next;
        }
         int n = arr.size();
         int index = 0;

        // To keep track of the number of elements to print in each line
    
        for (int i = 1; index < n; ++i) {
        vector<int>temp;
        for (int j = 0; j < i && index < n; ++j) {
            temp.push_back(arr[index++]);
        }
        if((i%2 == 0 && index != n)|| (index == n && temp.size()%2 == 0)){
            reverse(temp.begin(),temp.end());
        }
        // cout<<temp.size()<<endl;
        for(int i = 0;i<temp.size();i++){
            tail->next = new ListNode(temp[i]);
            tail = tail->next;
        }
        
    }
       
         return dummy->next;
    }
};