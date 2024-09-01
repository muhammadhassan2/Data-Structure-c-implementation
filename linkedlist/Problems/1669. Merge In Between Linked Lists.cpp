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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *start = list1;
        ListNode *end =list1;
        ListNode*sec =list2;
        while(sec!=nullptr &&sec->next!=nullptr){
            sec = sec->next;
        }
        for(int i= 0;i<=b;i++){
            if(i<a-1){
                start = start->next;
            }
            end = end->next;
        }
        sec->next = end;
        start->next = list2;
        //sec = end->next;
        return list1;
    }
};