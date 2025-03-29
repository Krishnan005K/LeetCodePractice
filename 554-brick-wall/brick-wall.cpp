#include<bits/stdc++.h>
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
     int n=wall.size();
     int Min=999;
     for(int i=0;i<n;i++)
     {
        long sum=wall[i][0];
        for(int j=1;j<wall[i].size();j++)
        {
            sum+=wall[i][j];
            wall[i][j]=sum;
        }
        int m=wall[i].size();
        Min=min(Min,m);
     }   
     int ans=99999999;
        unordered_map<int,int>arr;
        int Max=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<wall[i].size()-1;j++)
            {
                arr[wall[i][j]]++;
                Max=max(Max,arr[wall[i][j]]);
            }
            ans=min(ans,n-Max);
        }
        return ans;
        return 0;
    }
};