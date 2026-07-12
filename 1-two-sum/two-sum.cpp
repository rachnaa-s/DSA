class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int curr=0;
        int comp=0;
        for(int i=0;i<n;i++){
            curr=nums[i];
            comp=target-curr;
            if(mp.count(comp)){
                return {mp[comp],i};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};