class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int zerocount;
        int ans=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[left]==0) {
                    zerocount--;
                }
                left++;
                
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};