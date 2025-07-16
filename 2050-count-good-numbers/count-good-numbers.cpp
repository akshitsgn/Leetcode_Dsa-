class Solution {
public:
    long long int powf(long long d,int a){
        if(d==0){
            return 1;
        }
        long long int v = a;
        long long int v1 = 1;
        int c = 1e9+7;
        while(d>1){
           if(d%2==0){
              v=(v*v)%c;
              d=d/2;
           }
           else{
             v1=(v1*v)%c;
              v=(v*v)%c;
              d=d/2;
           }
        }
        long long int z = (v*v1)%c;
        return z;
    }

   
    int countGoodNumbers(long long n) {
        long long int a=(n+1)/2,b=n/2;
        long int y = 1e9 + 7;
        long long int z = powf(a,5);
        cout<<z<<endl;
        long long int x = powf(b,4);
        return (x*z)%y;
    }
};