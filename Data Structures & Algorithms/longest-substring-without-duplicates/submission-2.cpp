class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        int maxLen=0;
        for(int i=0;i<len;i++){
            unordered_set<char> charSet;
            for(int j=i;j<len;j++){
                if(charSet.find(s[j])!=charSet.end()){
                    break;
                }
                charSet.insert(s[j]);
            }
            maxLen = max(maxLen,(int)charSet.size());

            }
    

        return maxLen;
    }
    
};
