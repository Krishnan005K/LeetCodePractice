class Solution {
public:
    void Helper(int ind,int target,vector<int>& candidate,vector<vector<int>>&ans,vector<int>&curr)
    {
        if(ind==candidate.size())
        {
            if(target==0)
                ans.push_back(curr);
            return ;
        }
        if(candidate[ind]<=target)
        {
            curr.push_back(candidate[ind]);
            Helper(ind,target-candidate[ind],candidate,ans,curr);
            curr.pop_back();
        }
        Helper(ind+1,target,candidate,ans,curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        Helper(0,target,candidates,ans,curr);
        return ans;
    }
};