class Solution {
    public:
    void allcombo(vector<string>&v , string out , string mapp[] , string digits, int ind){
        if(ind>=digits.size()){
            v.push_back(out);
            return;
        }
       int num = digits[ind]-'0';
       cout<<num<<endl;
    string value = mapp[num];
       for(int i=0;i<value.size();i++){
            out.push_back(value[i]);
            allcombo(v,out,mapp,digits,ind+1);
            out.pop_back();
       }
    }
    
    vector<string> letterCombinations(string digits) {
         vector<string>v;
        if(digits.size()==0){
            return v;
        }
        string d="";
        string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int num = digits[0]-'0';
        cout<<num<<endl;
        allcombo(v,d,mapp,digits,0);
         return v;
    }
};