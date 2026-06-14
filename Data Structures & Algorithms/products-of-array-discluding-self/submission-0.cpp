class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        vector<int> nums_left(nums.size(),0);
        vector<int> nums_right(nums.size(),0);
        int len=nums.size();
        nums_left[0]=1;nums_right[len-1]=1;

        for(int i =1;i<len;i++){
            nums_left[i] = nums[i-1]*nums_left[i-1];
            cout<<"nums_left[i]"<<i<<nums_left[i]<<endl;
        }
        for(int i =len-2;i>=0;i--){
            nums_right[i] = nums[i+1]*nums_right[i+1];
            cout<<"nums_left[i]"<<i<<nums_left[i]<<endl;
        }
        for(int i=0;i<len;i++){
            res[i]=nums_left[i]*nums_right[i];
        }
        return res;


    }
};
