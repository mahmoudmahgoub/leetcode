class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> res(rowIndex+1);
        long long nCk = 1; 
        for(auto i =0 ;i<rowIndex+1;i++){
            res[i] = nCk;
            nCk = nCk *(rowIndex-i) /(i+1);
        }
       return res; 
    }
};