class Solution {
public:
    int jump(vector<int>& nums) {
        // int Max=0,n=nums.size(),count=0;
        // if(n==1)
        //     return 0;
        // for(int i=0;i<n;i++)
        // {
        //     int it=i+nums[i];
        //     if(Max<=it)
        //     {
        //         count++;
        //         Max=it;
        //     }
        //     if(Max>=n-1)
        //         return count;
        // }
        // return 0;

        int count=0,min=-2;
        int dest=nums.size()-1;
        if(nums.size()==1)
            return 0;
        while(min!=0&& min!=-1)
        {
            min=-1;
            count++;
            for(int i=dest-1;i>=0;i--)
            {
                if(i+nums[i]>=dest)
                    min=i;
            }
            dest=min;
        }
        return count;
    }
};