class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg;
        int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        avg=sum/k;
        double Max=avg;
        for(int i=1;i<n-k +1;i++)
        {
            sum-=nums[i-1];
            sum+=nums[i+k -1];
            avg=sum/k;
            Max=max(avg,Max);
        }
        return Max;
    }
};