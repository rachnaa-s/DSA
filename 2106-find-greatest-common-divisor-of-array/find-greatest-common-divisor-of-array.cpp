
#include<algorithm>
#include<cmath>
#include<climits>

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mn=INT_MAX;
        int mx=INT_MIN;
        int ans=0;
        
    
        for(int i=0;i<n;i++){
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);

        }

        for(int right=1;right<=mn;right++){
            if(mn%right==0 && mx%right==0){
              ans=right;
            }
             
        }
       return ans;
    }
};