class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        int mx = 0;
        int mxindx;

        for(auto x : mp)
        {
            if(x.second > mx)
            {
                mx = x.second;
                mxindx = x.first;
            }
        }

        return mxindx;
    }
};