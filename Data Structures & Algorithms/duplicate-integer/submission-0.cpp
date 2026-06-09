class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for( auto it:nums){
            if(s.insert(it).second==false) return true;
        }
        return false;

        
    }
};