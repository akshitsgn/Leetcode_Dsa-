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
        stack<int>st;
        vector<int>v;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            st.push(temp->val);
            if(cnt==k){
              while(!st.empty()){
                v.push_back(st.top());
                st.pop();
              }
              cnt=0;
            }
            temp=temp->next;
        }
        stack<int>st1;
        while(!st.empty()){
                st1.push(st.top());
                st.pop();
        }
        while(!st1.empty()){
            v.push_back(st1.top());
            st1.pop();
        }
        temp=head;
        int cnt1=0;
        while(temp!=nullptr){
        temp->val = v[cnt1];
        temp=temp->next;
         cnt1++;
        }
            return head;
    }
};