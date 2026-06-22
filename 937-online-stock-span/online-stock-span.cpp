class StockSpanner {
public:
stack<pair<int,int>>st;
int num;
    StockSpanner() {
        num=0;
    }
    
    int next(int price) {
        int a;num++;
        while(!st.empty() && st.top().first<=price){
            st.pop();
        }
        if(st.empty()){
            a=num-0;
        }
        else{
            a = abs(st.top().second-num);
        }
        st.push({price,num});
        return a;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */