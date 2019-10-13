class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        int i,l,r;
        sort(nums.begin(), nums.end());
        
        if(nums.size()<3)
            return result;
        
        for(i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;     
           l=i+1;
           r=nums.size()-1;
            while(l<r)
            {
                if(nums[i]+nums[l]+nums[r]==0)
                {
                    result.push_back(vector<int> {nums[i], nums[l], nums[r]});
                    while(l<r && nums[l]==nums[l+1])
                        l++;
                    while(l<r && nums[r]==nums[r-1])
                        r--;
                    l++,r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0)
                    l++;
                else r--;
            }
        }
          
        return result;    
    }
};
