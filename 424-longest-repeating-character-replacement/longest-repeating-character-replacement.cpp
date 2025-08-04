class Solution {
public:
    int characterReplacement(string s, int k) {
        set<char>st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }
        int maxlen=0;
        for(auto i :st){
            int l=0,r=0,sum=0;
            while(r<s.size()){
               if(s[r]!=i){
                sum++;
               }
               if(sum<=k){
                maxlen=max(maxlen,(r-l)+1);
                r++;
               }
               while(sum>k){
                if(s[l]!=i){
                    sum--;
                    if(sum==k){
                        r++;
                    }
                }
                l++;
               }
            }
        }
        return maxlen;
    }
};