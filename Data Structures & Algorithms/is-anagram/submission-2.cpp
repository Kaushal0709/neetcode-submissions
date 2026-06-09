class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> s_chars(26,0);
        vector<int> t_chars(26,0);
        for(auto it:s){
            s_chars[it-'a']++;
        }
        // for(auto i:t){
        //     t_chars[i-'a']++;
        // }
        // return s_chars==t_chars;
        for(auto i:t){
            if(s_chars[i-'a'] == 0) return false;
            else{
                s_chars[i-'a']--;
            }
        }
        return true;
    }
};
