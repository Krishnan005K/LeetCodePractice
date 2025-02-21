class Solution {
public:
    void Helper(vector<int>&nums,int index,vector<vector<int>>&ans,vector<int>&subset)
    {
        if(index==nums.size())
        {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        Helper(nums,index+1,ans,subset);
        subset.pop_back();
        while(index<nums.size()-1 && nums[index]==nums[index+1])
            index++;
            
        Helper(nums,index+1,ans,subset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        sort(nums.begin(),nums.end());
        Helper(nums,0,ans,subset);
        return ans;
   }
};