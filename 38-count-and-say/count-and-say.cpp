class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i=0;i<n-1;i++){
            string h = "";
            int cnt = 0;
            for(int j=0;j<s.size()-1;j++){
                  if(s[j]==s[j+1]){cnt++;}
                  else{
                    string k = to_string(cnt+1);
                    h+=k;
                    h+=s[j];
                    cnt=0;
                  }
            }
            if(cnt==0){h+='1';h+=s[s.size()-1];}
            else{ string k = to_string(cnt+1);
                    h+=k;h+=s[s.size()-1];}
                    cout<<h<<endl;
            s=h;
        }

        return s;
    }
};