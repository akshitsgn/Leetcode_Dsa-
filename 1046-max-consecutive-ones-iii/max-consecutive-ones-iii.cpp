class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxlen=0,sum=0;
        while(r<nums.size()){
            if(nums[r]==0){
                sum++;
            }
            if(sum<=k){
                maxlen = max(maxlen,(r-l)+1);
                r++;
            }
            while(sum>k){
                if(nums[l]==0){
                    sum=sum-1;
                    if(sum==k){
                        r++;
                    }
                }
                l++;
            }
        }
        return maxlen;
    }
};