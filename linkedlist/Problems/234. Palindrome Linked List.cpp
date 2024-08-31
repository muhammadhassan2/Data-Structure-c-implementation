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
    ListNode *reverselist(ListNode *head){
        ListNode *current = head;
        ListNode *prev = nullptr;
        ListNode *next = head;
        while(current != nullptr ){
              next = current->next;
              current->next = prev;
              prev = current;
              current = next ;

        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * fast =head;
        ListNode * slow =head;

        while(fast!=nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
          if(fast !=nullptr)
          slow = slow->next;
        slow = reverselist(slow);
   
        while(slow!=nullptr){
            cout<<slow->val<<" "<<head->val<<endl;
            if(slow->val != head->val){
                return false;
            }
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};