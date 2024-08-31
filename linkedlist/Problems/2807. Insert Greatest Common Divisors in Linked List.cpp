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
         ListNode * node = head;
        while(node != nullptr &&node->next != nullptr){
            ListNode * nxt = node->next;
            int val = __gcd(node->val,nxt->val);
            ListNode *tmp = new ListNode(val);
            tmp->next = nxt;
            node->next = tmp;
            node = node->next->next;
        }
        return head;
    }
};