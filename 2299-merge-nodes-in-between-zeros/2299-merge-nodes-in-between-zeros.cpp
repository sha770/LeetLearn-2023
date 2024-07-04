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
        ListNode* curr=head;
        ListNode* modify=head;
        curr=curr->next;
        while(curr!=NULL){
            int sum=0;
            while(curr!=NULL && curr->val!=0){
                sum+=curr->val;
                curr=curr->next;
            }
            ListNode* newNode=new ListNode(sum);
            modify->next=newNode;
            modify=modify->next;
            curr=curr->next;
        }
        return head->next;
    }
};