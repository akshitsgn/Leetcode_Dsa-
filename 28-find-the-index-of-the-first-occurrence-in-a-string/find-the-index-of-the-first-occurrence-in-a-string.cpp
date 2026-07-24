class Solution {
public:
    int strStr(string ha, string ne) {
        if (ha.find(ne) != string::npos){
             return ha.find(ne);
        }
        
        return -1;
    }
};