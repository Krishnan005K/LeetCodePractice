class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int col = matrix[0].size() - 1;
        int row = matrix.size() - 1;

        int l = 0, r = col, b = row, t = 0;

        int size = (row + 1) * (col + 1);

        while (size > 0) {
            for (int i = l; i <= r && size>0 ; i++) {
              
                ans.push_back(matrix[t][i]);
                 size--;
               
            }
            for (int i = t + 1; i <= b && size>0 ; i++) {
                ans.push_back(matrix[i][r]);
                 size--;
            }
            for (int i = r - 1; i >= l && size>0; i--) {
                ans.push_back(matrix[b][i]);
                 size--;
            }
            for (int i = b - 1; i > t && size>0; i--) {
                ans.push_back(matrix[i][l]);
                 size--;
            }
            t++, r--, b--, l++;
        }
        return ans;
    }
};