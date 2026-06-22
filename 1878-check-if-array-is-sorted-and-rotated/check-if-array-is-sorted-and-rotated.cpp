class Solution {
public:
    bool check(vector<int>& nums) {
        int curr=-1; 
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                 curr = i+1;
                 cout<<curr<<endl;
                 break;
            }
        }
        if(curr==-1){return true;}
        for(int i=curr;i<(curr+nums.size())-1;i++){
             cout<<nums[i%nums.size()]<<" "<<nums[(i+1)%nums.size()]<<endl;
            if(nums[i%nums.size()]>nums[(i+1)%nums.size()]){
                cout<<nums[i%nums.size()]<<" "<<nums[(i+1)%nums.size()]<<endl;
                return false;
            }
        }
        return true;
    }
};