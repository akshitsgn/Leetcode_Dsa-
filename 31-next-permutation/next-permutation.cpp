class Solution {
public:
    void nextPermutation(vector<int>& n) {
       //next_permutation(n.begin(),n.end());
       int br=-1;pair<int,int>mini={1e9,-1};
       for(int i=n.size()-1;i>0;i--){
        if(n[i]>n[i-1]){
            br=i-1;
            break;}
       }
       if(br==-1){reverse(n.begin(),n.end());return;}
       for(int i=br+1;i<n.size();i++){
          if(n[br]<n[i] && mini.first>n[i]){
              mini.first=min(mini.first,n[i]);
              mini.second = i;
          }
       }
       cout<<n[br]<<" "<<n[mini.second]<<endl;
       //int x = n[br];n[br]=n[mini.second];n[mini.second]=x;
       swap(n[br],n[mini.second]);
       sort(n.begin()+(br+1),n.end());
    }
};