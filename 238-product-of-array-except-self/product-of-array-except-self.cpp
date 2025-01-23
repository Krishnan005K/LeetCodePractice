class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>pre(n);
        vector<int>suff(n);
        int preprod=nums[0];
        int suffprod=nums[n-1];
        pre[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            preprod*=nums[i];
            pre[i]=preprod;
        }
        for(int i=n-2;i>=0;i--)
        {
            suffprod*=nums[i];
            suff[i]=suffprod;
        }
        
        ans[0]=suff[1];
        ans[n-1]=pre[n-2];
        for(int i=1;i<n-1;i++)
        {
            ans[i]=pre[i-1]*suff[i+1];
        }
        return ans;
        
    }
};