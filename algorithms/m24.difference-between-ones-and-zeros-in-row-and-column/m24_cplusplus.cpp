class Solution {
public:
/*
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        auto m = grid.size();
        auto n = grid[0].size();
        vector<vector<int>> rows(m,vector<int>(2,0));
        vector<vector<int>> cols(n,vector<int>(2,0));
        vector<vector<int>> res(m,vector<int>(n,0));
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                auto zero_one = grid[i][j];
                    rows[i][zero_one]++;
                    cols[j][zero_one]++;
            }
        }
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                res[i][j] =rows[i][1]+cols[j][1]-rows[i][0]-cols[j][0];
            }
        }
        return res;
        
    }*/
    //optimization of the above soln
    // number of zeros in row = number of cells in the row(no of cols) - sum of the row(number of ones in it) :
    // rowones- rowzeros= 2 sum of row - number of cols;
    // same for cols
        vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        auto m = grid.size();
        auto n = grid[0].size();
        vector<int> rowsSum(m,0);
        vector<int> colsSum(n,0);
        vector<vector<int>> res(m,vector<int>(n,0));
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                    rowsSum[i] += grid[i][j];
                    colsSum[j] += grid[i][j];
            }
        }
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                res[i][j] =2*rowsSum[i]+2*colsSum[j]-n-m;
            }
        }
        return res;
        
    }
};