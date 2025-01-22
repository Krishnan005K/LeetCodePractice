#include<bits/stdc++.h>
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        dfs(0,0,"",n,ans);
            return ans;
    }
    void dfs(int oP, int cP,string s,int n,vector<string>&ans)
    {
        if(oP==cP && oP+cP==n*2){
            ans.push_back(s);
            return ;
        }
        if(oP <n)
            dfs(oP+1,cP,s+"(",n,ans);
        if(cP<oP)
            dfs(oP,cP+1,s+")",n,ans);
    }
};