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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=head;
        ListNode* nxt=head->next->next;
        ListNode* curr=head->next;
        int n=0;
        while(head!=NULL){
            n++;
            head=head->next;
        }
        if(n==2) return {-1,-1};
        int cnt=2;
        vector<int>mm;
        while(nxt!=NULL){
           if((curr->val>prev->val&&curr->val>nxt->val)||(curr->val<prev->val&&curr->val<nxt->val)){
            mm.push_back(cnt);
           }
           cnt++;
           curr=curr->next;
           prev=prev->next;
           nxt=nxt->next;
        }
        sort(mm.begin(),mm.end());
        int p=mm.size();
        if(p<2) return{-1,-1};
        int mn=INT_MAX;
        for(int i=1;i<p;i++){
           mn=min(mn,mm[i]-mm[i-1]);
        }
        return {mn,mm[p-1]-mm[0]};
    }
};