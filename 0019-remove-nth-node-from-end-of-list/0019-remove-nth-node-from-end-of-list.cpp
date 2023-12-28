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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        if(head==NULL ||head->next==NULL ){
            return NULL;
        }
        
        int count=0;
        while(temp !=NULL){
            count++;
            temp=temp->next;
        }
        
        int res=count -n;
        if(res==0){
            ListNode* del=head;
            ListNode * newhead=head->next;
            delete del;
            return newhead;
        }
        
        temp=head;
        int k=1;
        while(k<res){
            temp=temp->next;
            k++;
        }
      ListNode* del=temp->next;
      temp->next=temp->next->next;
        delete del;
        return head;
        
        
    }
};