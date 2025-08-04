class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int l=0,r=0,maxlen=0;
        while(r<s.size()){
            if(st.find(s[r])!=st.end()){
                   st.erase(s[l]);
                   l++;
            }
            else{
            st.insert(s[r]);
            r++;
            maxlen=max(maxlen,(r-l));
            }
        }
        return maxlen;
    }
};