class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int>nums2(2*n);
        for(int i=0;i<n;i++){
            nums2[2*i]=nums[i];
            nums2[2*i+1]=nums[i+n];
            
            
        }
        return nums2;
    }
};