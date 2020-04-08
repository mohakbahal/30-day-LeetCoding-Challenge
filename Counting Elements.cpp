class Solution {
public:
    int countElements(vector<int>& arr) {
        int i,j,count=0;
        for(i=0;i<arr.size();i++)
        {
            for(j=0;j<arr.size();j++)
            {
                if(arr[i]+1==arr[j])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};