class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;int len = nums.size();set<vector<int>> s;
        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                for(int k=j+1;k<len;k++){
                    vector<int> temp;
                    if(-nums[i] == nums[j]+nums[k]){
                        s.insert({nums[i],nums[j],nums[k]});
                        //res.push_back(vector<int>(s.begin(),s.end()));
                        break;
                        
                    }
                }
                //res.push_back(temp);
            }
            

        }
        res.assign(s.begin(),s.end());
        return res;
        
    }
};
