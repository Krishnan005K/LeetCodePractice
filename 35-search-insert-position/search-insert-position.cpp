class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=n-1;
    while(l<=r)
    {
        int  mid=l+(r-l)/2;
        if(nums[mid]>k)
            r=mid-1;
        else if(nums[mid]<k)
            l=mid+1;
        else
            return mid;
    }
    return l;
    }
};