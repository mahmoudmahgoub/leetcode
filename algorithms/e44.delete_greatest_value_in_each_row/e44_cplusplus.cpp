class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int res = 0;
        auto m = grid.size(), n = grid[0].size();
        for(auto i = 0;i<m;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int c =0;c<n;c++){
            int max_col = 0;
            for(int r =0;r<m;r++) {
                max_col = max(max_col,grid[r][c]);
            }
        res += max_col; 
        }

        return res;
    }
};