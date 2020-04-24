class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1,right=1;
        vector<int>output(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            output[i]*=left;
            left*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            output[i]*=right;
            right*=nums[i];
        }
        return output;
    }
};