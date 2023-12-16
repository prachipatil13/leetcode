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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL ||head->next==NULL){
            return head;
        }
        ListNode * odd=head;
         ListNode *even=head->next;
        ListNode *evenhead=head->next;
        ListNode * newHead=head;
        int count=3;
        head=head->next->next;
        while(head != NULL){
            if(count%2!=0){
                odd->next=head;
                odd=odd->next;
               
                
            }else{
                even->next=head;
                even=odd->next;
               
            }
            
            head=head->next;
            count++;
            
           
        }
        odd->next=evenhead;
            even->next=NULL;
        
        return newHead;
    }
};