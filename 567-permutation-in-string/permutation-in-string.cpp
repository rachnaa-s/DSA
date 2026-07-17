class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26,0);
        vector<int>freq1(26,0);
        int k=s1.size();
        if(s1.size()>s2.size()){
            return false;
        }
        for(char c:s1){
            freq[c-'a']++;
        }

        for(int i=0;i<k;i++){
            freq1[s2[i]-'a']++;
            if(freq==freq1){
                return true;
            }
        }
        
        for(int right=k;right<s2.size();right++){
            freq1[s2[right-k]-'a']--;
            freq1[s2[right]- 'a']++;
            if(freq==freq1){
                return true;
            }
        }
        return false;
       
    }
};