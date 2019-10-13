class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> indices;
        vector<pair<int,int>> myVector;
        int i=0;
        
        for(auto ele: nums)
        {
            myVector.push_back(make_pair(ele,i++));
        }
        
        sort(myVector.begin(), myVector.end());
        int l=0,r=nums.size()-1;
        
        while(l<r)
        {
            if(myVector[l].first+myVector[r].first==target)
            {
                indices.push_back(myVector[l].second);
                indices.push_back(myVector[r].second);
                break;
            }
            else if(myVector[l].first+myVector[r].first>target)
            {
                r--;
            }
            else l++;
        }
        return indices;
        }
};
