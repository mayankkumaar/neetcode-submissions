class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     vector<int> val(2*nums.size());
     for(int i=0;i<nums.size();i++)
     {
        val[i]=nums[i];
        val[i+nums.size()]=nums[i];
     }
     return val;   
    }
};