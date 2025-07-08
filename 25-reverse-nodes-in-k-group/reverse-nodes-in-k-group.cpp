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
   ListNode* findknode(ListNode* temp , int k){
            ListNode* t = temp;
            while(t!=nullptr && k>0){
                t=t->next;
                k--;
            }
            return t;
    }
     void reversef(ListNode* temp){
        ListNode* prev = nullptr;
        ListNode* curr = temp;
        ListNode* front ;
        while(curr!=nullptr){
            front=curr->next;
            curr->next = prev;
            prev=curr;
            curr=front;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k1) {
    ListNode* temp = head;
    ListNode* prev ;
    while(temp!=nullptr){
        ListNode* k = findknode(temp,k1-1);
        if(k==nullptr){
            prev->next = temp;
            break;
        }
        ListNode* next = k->next;
        k->next = nullptr;
        reversef(temp);
        if(temp==head){
            head=k;
        }
        else{
          prev->next=k;
        }
        prev = temp;
        temp=next;
    }
    return head;
    }
};