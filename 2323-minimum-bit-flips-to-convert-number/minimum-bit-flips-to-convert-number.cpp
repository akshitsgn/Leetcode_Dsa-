class Solution {
public:
    int minBitFlips(int start, int goal) {
    int x = (start)^goal;
    int cnt  = 0;
    for(int i=0;i<32;i++){
        if(((x)&(1<<i))!=0){
              cnt++;
        }
    }
    return cnt;
    }
};