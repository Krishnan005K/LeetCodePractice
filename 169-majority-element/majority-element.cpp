class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        if(n==1)
            return nums[0];
        cout<<n/2;
        for(int i=0;i<n-1;i++)
        {
            count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                    count++;
            }
            if(count>(n/2))
                return nums[i];
        }
        return -1;
    }
};