class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int total=0;
        for( int i=0;i<nums.size();i++)
        {
            if(total<0)
                total=0;
            total+=nums[i];
            res=max(res,total);
        }
        return res;

    }
};