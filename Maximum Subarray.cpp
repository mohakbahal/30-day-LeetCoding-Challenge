class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar=INT_MIN;
        int maxending=0;
        for(int i=0;i<nums.size();i++)
        {
            maxending+=nums[i];
            if(maxsofar<maxending)
                maxsofar=maxending;
            if(maxending<0)
                maxending =0;
        }
        return maxsofar;
    }
};