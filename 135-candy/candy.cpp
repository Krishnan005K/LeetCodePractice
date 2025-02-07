class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>compute(n,1);
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                compute[i] = compute[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                compute[i] = max(compute[i], compute[i + 1] + 1);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=compute[i];
        }
        return ans;
    }
};