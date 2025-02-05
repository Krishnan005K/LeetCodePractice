class Solution {
public:     
    void dfs(int i, int j, vector<vector<char>>& arr, int n, int m) {
        if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] != 'O') {
            return;
        }
        arr[i][j] = 'Y';  // Mark as visited
        int dr[] = {1, 0, -1, 0};
        int dc[] = {0, 1, 0, -1};
        for (int k = 0; k < 4; k++) {
            dfs(i + dr[k], j + dc[k], arr, n, m);
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0) return;
        int m = board[0].size();

        // Run DFS for boundary 'O' cells
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O') dfs(i, 0, board, n, m);
            if (board[i][m - 1] == 'O') dfs(i, m - 1, board, n, m);
        }
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O') dfs(0, j, board, n, m);
            if (board[n - 1][j] == 'O') dfs(n - 1, j, board, n, m);
        }

        // Convert 'O' to 'X' and 'Y' back to 'O'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O') board[i][j] = 'X';
                if (board[i][j] == 'Y') board[i][j] = 'O';
            }
        }
    }
};