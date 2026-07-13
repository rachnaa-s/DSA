class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mp;
        int n= s.size();
        if(s.size()==0) return -1;
        if(s.size()==1) return 0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            
        }
        for(int i=0;i<n;i++){

         if(mp[s[i]]==1){
                return i; // isee continue krna he naki ek nhi mil ato else krdo 
            }
            

        }
        return -1;
    }

};