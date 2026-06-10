class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int value = target-nums[i];
            if(mp.contains(value)){
               return {mp[value],i};
            }
            else{
                mp[nums[i]] = i; 
            }
        }
        return {};
        
    }
};
