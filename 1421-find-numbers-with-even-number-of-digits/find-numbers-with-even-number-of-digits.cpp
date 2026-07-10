class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n= nums.size();
        int answer=0;
        
        for(int i=0;i<n;i++){
             int count=0;
            int n= nums[i];
            while(n>0){
               
                int r = n%10;
                count++;
                n=n/10;
            }
            if(count%2==0){
                answer++;
            }
        }
        return answer;
    }
};