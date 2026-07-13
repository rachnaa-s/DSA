class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int>mp;
        unordered_set<int>seen;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(seen.count(it.second)){
                return false;
            }
            else{
                seen.insert(it.second);
            }
        }
        return true;

    }
};