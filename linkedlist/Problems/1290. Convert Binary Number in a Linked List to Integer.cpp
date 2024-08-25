/****
@autor muhammad hassan
@date 26/8/2024

/****


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
    int getDecimalValue(ListNode* head) {
        
        string ans="";
        while(head !=nullptr){
           // cout<<head->val<<endl;
            ans +=(head->val + '0');
            head = head->next;
        }
        int j = 1;
        int res = 0;
        cout<<ans<<endl;
        for(int i = ans.size() -1 ;i>=0;i--){
            res +=(ans[i] -'0')*j;
            j*=2;
        }
        return res;
    }
};