class Solution {
public:
    double myPow(double x, int n) {
     double ans1 = 1.0;
     double ans2 = x;
     int v = n;
     
     while(n>1){
        if(n%2!=0){
            n=n-1;
            ans1=ans1*ans2;
        }
        else{
            ans2=ans2*ans2;
            n=n/2;
        }
     }
     while(n<-1){
        if(n%2!=0){
            n=n+1;
            ans1=ans1*ans2;
        }
        else{
            ans2=ans2*ans2;
            n=n/2;
        }
     }
    if(v==0){
        return 1;
     }
     else if(v<0){
       return 1/(ans1*ans2);
     }
     return ans1*ans2;
    }
};