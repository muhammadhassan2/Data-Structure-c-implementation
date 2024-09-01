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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode();
        dummy->next = head;
        head = dummy;
        ListNode * temp = head;
        ListNode* prev = head;
        while(temp != nullptr){
            if(temp->val == val){
                 prev->next = temp->next;
                 temp =temp->next;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head->next;
    }
};