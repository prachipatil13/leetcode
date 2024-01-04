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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
         if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* newhead=NULL;
        ListNode * temp;
        
        while(list1 !=NULL && list2 !=NULL){
            if(list1->val <= list2->val){
                if(newhead==NULL){
                    newhead=list1;
                    temp=newhead;
                    list1=list1->next;
                }else{
                ListNode*append=list1;
                list1=list1->next;
                temp->next=append;
                    temp=temp->next;
                }
            }else{
                if(newhead==NULL){
                    newhead=list2;
                    temp=newhead;
                    list2=list2->next;
                }else{
               ListNode*append=list2;
                list2=list2->next;
                temp->next=append; 
                     temp=temp->next;
                }
            }
        }
        
        if(list1!=NULL){
            temp->next=list1;
        }
        
        if(list2!=NULL){
            temp->next=list2;
        }
        
        return newhead;
    }
};