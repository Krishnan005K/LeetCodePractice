class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        sort(nums.begin(),nums.end());
        int ans=1,count=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i]) continue;
            if(nums[i+1]==nums[i]+1)
            {
                count++;
                ans=max(ans,count);
            }
            else
                count=1;
        }
        return ans;
    }
};