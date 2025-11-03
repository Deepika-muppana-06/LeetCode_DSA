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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        bool firstTime = true;
        while(head){
            if(firstTime){
                curr -> next = new ListNode(head -> val);
                curr = curr -> next;
                firstTime = false;
                continue;
            }
            if(curr -> val == head -> val){
                head = head -> next;
                continue;
            }
            curr -> next = new ListNode(head -> val);
            curr = curr -> next;
            head = head -> next;
        }
        return dummy -> next;
    }
};