class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>index(26,0);
        vector<int>index1(26,0);
        vector<int>ans;
        int k=p.size();
        if(p.size()>s.size()){
            return {};
        }
        for(char c:p){
            index[c-'a']++;
        }
        for(int i=0;i<k;i++){
            index1[s[i]-'a']++;

        }

            if(index1==index){
                ans.push_back(0);
                
            }

        for(int right=k;right<s.size();right++){
            index1[s[right-k]-'a']--;
            index1[s[right]-'a']++;
            if(index==index1){
                 ans.push_back(right-k+1);
            }
        }
        

        return ans;
    }
};