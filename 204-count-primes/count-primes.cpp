class Solution {
public:
    int countPrimes(int n) {
     vector<int>v(n,1);
     for(int i=2;i<n;i++){
        if(i*i>n){break;}
        for(int j=i*i;j<n;j+=i){
            v[j]=0;
        }
     }
     int cnt=0;
     for(int i=2;i<n;i++){
        if(v[i]==1){cnt++;}
     }
     return cnt;
    }
};