class Solution {
public:
    bool isPalindrome(string s) {
        string h="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57){
                h+=tolower(s[i]);
            }
        }
        if(h.size()<=1){
            return true;
        }
        int left = 0 , right = h.size()-1;
        while(left<right){
            if(h[left]!=h[right]){return false;}
            left++;right--;
        }
        return true;
    }
};