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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int>v;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<v.size();i++){
            if(i<k*(v.size()/k)){
                reverse(v.begin()+(i),v.begin()+k+i);
                i=i+k;i--;
            }
            else{break;}
        }
        temp=head;int cnt=0;
        while(temp!=nullptr){
            temp->val=v[cnt];
            cnt++;
            temp=temp->next;
        }
        return head;
    }
};