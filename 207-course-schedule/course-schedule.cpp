class Solution {
public:

    bool dfs(int node,vector<int> adj[],vector<int>&vis){
        if(vis[node]==1){
            return true;
        }
        if(vis[node]==0){
            vis[node]=1;
            for(auto it:adj[node]){
                if(dfs(it,adj,vis))
                return true;
            }
        }
        vis[node]=2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& arr) {
        vector<int>vis(numCourses,0);
        int n=numCourses;
        vector<int> adj[n];
        for(auto it:arr){
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
            if(dfs(i,adj,vis)){
                return false;
            }
        }
        return true;
    }
};

//not done by me , done by ibrahim only