class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> result;
        for(const auto& s:strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            result[sortedS].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair: result){
            res.push_back(pair.second);
        }
        return res;

        
    }
};
