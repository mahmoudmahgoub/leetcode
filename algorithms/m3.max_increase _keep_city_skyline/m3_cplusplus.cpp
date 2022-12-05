class Solution {
public:
    
    //brute force, time O(n^3)
    /*
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int rows =grid.size();
        int cols = grid[0].size();
        int sum =0;
        vector<vector<int>> max_possible_height (rows,vector<int>(cols,0)) ;
        for(auto i = 0;i<rows;i++){
            for(auto j =0; j<cols;j++){
                
                int max_val_inrow = 0, max_val_incol = 0;
                
                for(auto j2 = 0;j2<cols; j2++)   //const row
                {
                    max_val_inrow = max(max_val_inrow,grid[i][j2]);
                }
                
                for(auto i2 = 0;i2<rows; i2++)   //const col
                {
                    max_val_incol = max(max_val_incol,grid[i2][j]);
                }
                
                max_possible_height[i][j]= min(max_val_inrow,max_val_incol);
            }   
        }
        for(auto i = 0;i<rows;i++){
            for(auto j =0; j<cols;j++){
                sum  =  (max_possible_height[i][j]<=grid[i][j]) ? sum : (sum + max_possible_height[i][j] - grid[i][j]);
                
            }
        }
        
        return sum;
    }
    */
    
    // time O(n^2)
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int rows =grid.size();
        int cols = grid[0].size();
        int sum =0;
        vector<int> max_val_inrow (rows,0), max_val_incol(cols,0);
        
        for(auto i = 0;i<rows;i++){
            for(auto j =0; j<cols;j++){
              max_val_inrow[i] = max(max_val_inrow[i],grid[i][j]);
              max_val_incol[j] = max(max_val_incol[j],grid[i][j]);   
                
            }
        }
                
        for(auto i = 0;i<rows;i++){
            for(auto j =0; j<cols;j++){
                /*/auto max_possible_height = min ( max_val_inrow[i],max_val_incol[j]);
                sum  =  (max_possible_height<=grid[i][j]) ? sum : (sum +max_possible_height - grid[i][j]); //no need
                // to the condition here as if it can't be true if it is true the max in the row or the col will be actually the 
                //val that make the cond true 
                */
                 sum  +=   min ( max_val_inrow[i],max_val_incol[j]) - grid[i][j];
            }
        }
                
        return sum;
        
    }
    
};