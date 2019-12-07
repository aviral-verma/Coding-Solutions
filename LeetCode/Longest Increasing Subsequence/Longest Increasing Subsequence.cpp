/* Author: Aviral Verma */
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        int size = nums.size();
        int i;
        for(i=0; i<size; i++)
            temp.push_back(1);
        int j;
        for(i=1; i<size; i++)
        {
            for(j=0; j<i; j++)
            {
                if(nums[j]<nums[i])
                    temp[i]=max(temp[j]+1, temp[i]);
            }
        }
        int max = -1;
        for(auto ele: temp)
        {
            if(max<ele)
                max = ele; 
        }
        if(max == -1)
            max = 0;
        return max;
        
    }
};
