class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0,h=people.size()-1;
        int cnt = 0;
        for(int i=people.size()-1;i>=0;i--){
            if(people[i]==limit){
                cnt++;
                h--;
            }
            else{
                break;
            }
        }
        while(l<h){
           if(people[l]+people[h]<=limit){
               cnt++;l++;h--;
           }
           else if(people[l]+people[h]>limit){
            cnt++;h--;
           }
        }
        if(l==h){
            cnt++;
        }
        return cnt;
    }
};