class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> res;
        vector<int> nums_left(len);
        vector<int> nums_right(len);
        
        nums_left[0]=1;nums_right[len-1]=1;

        for(int i =1;i<len;i++){
            nums_left[i] = nums[i-1]*nums_left[i-1];
        }
        for(int i =len-2;i>=0;i--){
            nums_right[i] = nums[i+1]*nums_right[i+1];
        }
        for(int i=0;i<len;i++){
            res.emplace_back(nums_left[i]*nums_right[i]);
        }
        return res;


    }
};
