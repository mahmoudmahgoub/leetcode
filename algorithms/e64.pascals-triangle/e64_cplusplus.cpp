class Solution {
public:
    // zero indexed row n and col k value = nck 
    // nCk = (n)(n-1)..(n-k+1)/k! 
    // nC(k+1) = (n)(n-1)..(n-k)/(k-1)!
    // nCk = nC(k-1)(n-k)/(k+1)
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i =0;i<numRows;i++){
            auto nCk = 1; //nck in the start of every row is equal 1;
            for(int j =0;j<i+1;j++){
                res[i].push_back(nCk);
                nCk = nCk *(i-j)/(j+1);
            }
        }

        return res;
        
    }
};