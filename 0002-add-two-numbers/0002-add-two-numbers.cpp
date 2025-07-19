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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode(0);
        ListNode *x=l1, *y=l2;
        ListNode *curr=ans;
        int carry=0;
        while(x!=NULL || y!=NULL){
          int a=(!x)?0:x->val;
          int b=(!y)?0:y->val;
          int sum=carry+a+b;
          carry=sum/10;
          curr->next=new ListNode(sum%10);
          curr=curr->next;
          if(x!=NULL) x=x->next;
          if(y!=NULL) y=y->next;
        }
        if(carry>0) curr->next=new ListNode(carry);
        return ans->next;
    }
};