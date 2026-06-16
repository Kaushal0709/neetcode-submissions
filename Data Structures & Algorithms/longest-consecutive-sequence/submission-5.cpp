class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> numSet(nums.begin(),nums.end());
        int longest = 0;
        for(auto num:nums){
            if(numSet.find(num-1)==numSet.end()){
                int length=1;
                while(numSet.find(num+length)!=numSet.end()) length+=1;
                longest = max(longest,length);

            }

        }
        return longest;


        
    }
};
