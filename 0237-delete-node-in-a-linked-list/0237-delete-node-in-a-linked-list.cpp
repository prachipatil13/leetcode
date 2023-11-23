/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* a= node->next->next;
        ListNode* b= node->next;
        int data=node->next->val;
        node->val=data;
        node->next=a;
        delete b;
        
    }
};