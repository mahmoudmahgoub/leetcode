class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows= image.size(), cols = image[0].size();
        vector<vector<int>> res(rows,vector<int>(cols,0));
        for(int i = 0;i<rows;i++) {
            for(int j = 0;j<cols;j++) {
                res[i][j] = !image[i][cols-j-1];
            }

        }
       return res; 
    }
};