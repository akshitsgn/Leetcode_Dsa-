class Solution {
public:
void fibo(int &a,int &b,int n){
  if(n<1){return;}
  int z = b;
  b=a+b;
  a=z;
  fibo(a,b,n-1);

}
    int fib(int n) {
        if(n==0){return 0;}
        int a=0,b=1;
        fibo(a,b,n-2);
        return a+b;
    }
};