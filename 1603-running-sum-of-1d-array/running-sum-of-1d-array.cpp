class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int var=0;
        vector<int>num(n);
        for(int i=0;i<n;i++){
            var=var+nums[i];
            num[i]=var;
        }
        return num;
    }
};