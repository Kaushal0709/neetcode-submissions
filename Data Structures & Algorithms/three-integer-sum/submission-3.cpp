class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;int len = nums.size();set<vector<int>> s;
        unordered_map<int,int> mp;
        //sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                for(int k=j+1;k<len;k++){
                    vector<int> temp;
                    if(-nums[i] == nums[j]+nums[k]){
                        vector<int> temp{nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
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
