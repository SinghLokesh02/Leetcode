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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int>nums;
        ListNode dummy(0);
        if(!head->next)return head;
        int c = 1;
        ListNode* tail = &dummy;
        while(head->next){
            int a = head->val;
            int b = head->next->val;
            int gcd = __gcd(a,b);
            if(c == 1){
                nums.push_back(a);
                c = 2;
            }
            nums.push_back(gcd);
            nums.push_back(b);
            head = head->next;
        }
        
        for(auto i : nums){
            tail->next = new ListNode(i);
            tail = tail->next;
        }
        return dummy.next;
    }
};