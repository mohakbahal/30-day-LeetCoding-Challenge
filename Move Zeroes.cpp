class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> result,result1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                result.push_back(nums[i]);
            else
                result1.push_back(nums[i]);
        }
        nums.clear();
        nums=result;
        nums.insert(nums.end(),result1.begin(),result1.end());
    }
};