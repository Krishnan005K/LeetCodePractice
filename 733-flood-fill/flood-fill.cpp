class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& w, int x, int y, int c) {
        int n=w.size();
        int m=w[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        q.push({x,y});
       
        int g=w[x][y];
        w[x][y]=c;
        vis[x][y]=1;
        int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && w[nr][nc]==g){
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                    w[nr][nc]=w[x][y];
                }
            }
        }
        return w;
    }
};