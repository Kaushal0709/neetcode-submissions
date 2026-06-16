class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp; int len = numbers.size();
        for(int i=0;i<len;i++){
            auto it = mp.find(target-numbers[i]);
            if( it ==mp.end()){
                mp[numbers[i]] = i;
            }
            else{
                return {it->second+1,i+1};
            }
        }
        return {};
        
    }
};
