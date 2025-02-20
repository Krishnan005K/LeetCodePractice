class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);
            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
    // vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    // int n=nums.size(),Max=0,ind=0,sMax=0,sind;
    // vector<int>ans;
    // if(k==1)
    //     return nums;
    // for(int i=0;i<k;i++)
    // {
    //     if(Max<nums[i])
    //     {   sMax=Max;
    //         sind=ind;
    //         Max=nums[i];
    //         ind=i;
    //     }
    // }
    // ans.push_back(Max);
    // for(int i=1;i<n-k +1;i++)
    // {
    //     if(sind==i-1)
    //         sMax=0;
    //     if(ind==i-1)
    //     {
    //         if(sMax>nums[i+k-1])
    //         {
    //             Max=sMax;
    //             ind=i+k -1;
    //         }
    //         else{
    //             sMax=Max;
    //             sind=ind;
    //             Max=nums[i+k -1];
    //             ind=i+k -1;

    //         }

    //         cout<<nums[i+k -1]<<endl;

    //     }
    //     else if(sMax<nums[i+ k -1] && Max>nums[i + k-1])
    //     {
    //         sMax=nums[i+k -1];
    //     }
    //     else
    //     {
    //         if(Max<=nums[i+k-1])
    //         {
    //             sMax=Max;
    //             Max=nums[i+k-1];
    //             ind=i+k-1;

    //         }

    //     }
    //     ans.push_back(Max);
    // }
    // return ans;
    //     vector<int>ans;
    //     deque<int>dq;
    //     int Max=0;
    //     for(int i=0;i<k;i++)
    //     {
    //         dq.push_back(nums[i]);
    //         Max=max(Max,nums[i]);
    //     }
    //     ans.push_back(Max);
    //     for(int i=k;i<n;i++)
    //     {
    //         dq.pop_front();
    //         dq.push_back(nums[i]);

    //     }
    // }
};