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
   ListNode* s1 = l1;
   ListNode* s2 = l2;
   ListNode* temp= new ListNode(-1);
   ListNode* hh = temp;
   int c=0;
   while(s1!=nullptr && s2!=nullptr){
    int a = s1->val + s2->val;
    temp->next = s1;
    if(a+c>=10){
       s1->val = ((a+c)%10);
       c=1;
    }
    else{ 
        s1->val = a+c;
        c=0; 
    }
    temp = s1;
    s1 = s1->next;

    s2=s2->next;
    if(s2==nullptr || s1==nullptr){break;}
    
   }
   if(s1==nullptr){
      while(s2!=nullptr){
        int a = s2->val;
        if(a+c>=10){
         s2->val=(a+c)%10;
         c=1;
        }
        else{s2->val =(a+c);c=0;}
        temp->next = s2;
        temp=s2;
        s2=s2->next;
      }
   }
   else{
      while(s1!=nullptr){
         int a = s1->val;
         if(a+c>=10){
         s1->val=(a+c)%10;
         c=1;
        }
        else{s1->val=a+c;c=0;}
        temp->next = s1;
        temp=s1;
        s1=s1->next;
      }
   }
   if(c==1){
    ListNode* node = new ListNode(1);
    temp->next = node;
   }
  
   return hh->next;
    }
};