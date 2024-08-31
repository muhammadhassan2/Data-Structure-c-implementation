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
        
        ListNode *tmp = head;
        ListNode * tt= tmp;
        while(tmp !=nullptr){
            if(tmp->next!=nullptr && tmp->val == tmp->next->val){
                cout<<"yes\n";
                tmp->next = tmp->next->next;
            }
            else{
                tmp = tmp->next;
            }
        }
        return tt;
    }
};