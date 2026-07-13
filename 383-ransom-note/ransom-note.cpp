class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        int n=ransomNote.size();
        int m=magazine.size();
        for(int i=0;i<m;i++){
            mp[magazine[i]]++;
        }
        for(int j=0;j<n;j++){
            if(mp[ransomNote[j]]==0){
                return false;
            }
            else{
                mp[ransomNote[j]]--;
            }
        }
        return true;
    }
};