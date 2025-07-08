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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr){
            return nullptr ;
        }
       ListNode* fast = head;
       ListNode* slow = head;
       ListNode* t = head;
       ListNode* temp;
       int cnt=0;
       while(fast!=nullptr){
           cnt++;
           if(slow->next!=nullptr){
           slow=slow->next;
           }
           fast=fast->next;
       }
       fast = head;
       k=(k%cnt);int c1=0;
       while(fast!=nullptr){
           c1++;
           if(k==0){return head ;}
           if(c1==cnt-k){temp = fast->next ; fast->next = nullptr;break;}
           fast=fast->next;
       }
       slow->next = t;
       return temp;
    }
      
};