class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagram;
        map<string,vector<string>> mpp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mpp[s].push_back(strs[i]);
        }
        for(auto it:mpp){
            anagram.push_back(it.second);
        }
        return anagram;
    }
};