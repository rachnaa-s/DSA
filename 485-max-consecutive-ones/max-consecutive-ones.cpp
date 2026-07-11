class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
         int currcount=0;

        for(int i=0;i<nums.size();i++){
              

            if(nums[i]==1){
                currcount++;
                
            }
            else{
                currcount=0;
            }
            
             maxcount= max(maxcount,currcount);
        }
       return  maxcount;
    }
};