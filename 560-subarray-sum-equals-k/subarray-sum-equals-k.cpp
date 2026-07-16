class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int sum=0;
        int count=0;
        unordered_map<int ,int>prefix;
        prefix[0]=1;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
           
            int need=sum-k;
            if(prefix.count(need)){
                count=prefix[need]+count;
            }
             prefix[sum]++;
        }
       return count; 
    }
};