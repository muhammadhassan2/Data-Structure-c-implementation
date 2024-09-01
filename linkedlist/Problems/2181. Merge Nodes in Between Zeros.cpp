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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *current = new ListNode(0);
        ListNode *ans = current;
        head = head->next;
        
        while(head != nullptr){

            int sum = 0;
            while(head!=nullptr &&head->val !=0){
                sum+= head->val;
                head = head->next;
            }
            if(sum !=0){
            current->next = new ListNode(sum);
             current = current->next;
            }
            head = head->next;
        }
        return ans->next;
    }
};