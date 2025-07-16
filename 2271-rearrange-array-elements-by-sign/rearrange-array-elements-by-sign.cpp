class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        int cnt = 0,cnt1=1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>0){v[cnt]=nums[i];cnt+=2;}
           else{v[cnt1]=nums[i];cnt1+=2;}
        }
        return v;
    }
};