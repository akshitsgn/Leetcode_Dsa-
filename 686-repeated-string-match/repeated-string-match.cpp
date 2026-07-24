class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string h = a;
        int cnt=1;
        while (a.size() < b.size()) {
            a += h;
            cnt++;
        }
        if (a.find(b) != string::npos){
             return cnt;
        }
        a+=h;
          if (a.find(b) != string::npos){
             return cnt+1;
        }
        return -1;
    }
};