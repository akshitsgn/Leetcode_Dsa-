class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c5=0,c10=0;
        for(int i=0;i<bills.size();i++){
           if(bills[i]==5){
            c5++;
           }
           else if(bills[i]==10){
              if(c5==0){
                return false;
              }
              c5--;
              c10++;
           }
           else{
            if(c5==0){return false;}
            if(c5!=0){
                c5--;
            }
            if(c10==0){
                if(c5>=2){
                    c5--;c5--;
                }
                else{
                    return false;
                }
            }
            if(c10!=0){
                c10--;
            }
           }
        }
        return true;
    }
};