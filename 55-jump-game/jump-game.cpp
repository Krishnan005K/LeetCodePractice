class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int count=0,i=0;
        // if(n==1 || i==n-1)
        //     return true;
        
        // while(i<n && nums[i]!=0)
        // {
        //     i+=nums[i];
        //     if( i>=n-1)
        //         return true;    
        //     if(nums[i]==0 && i==n-1 ) 
        //         return false;
        // }
        // return false;

        // while(i<n)
        // {

        //     count+=nums[i];
        //     if()
        //     if(count>=n-1)
        //         return true;
        //     if(nums[i]==0 && count>=n-1)
        //         return false;

        // }
        for(int i=0;i<n;i++)
        {
            if(i>count)
                return false;
            int it=i+nums[i];
            count=max(count,it);
            
        }
        return count>=n-1;
        
    }
};