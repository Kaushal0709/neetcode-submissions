class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s_chars(26,0);
        vector<int> t_chars(26,0);
        for(auto it:s){
            s_chars[it-'a']++;
        }
        for(auto i:t){
            t_chars[i-'a']++;
        }
        return s_chars==t_chars;
    }
};
