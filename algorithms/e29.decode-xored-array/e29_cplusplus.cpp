class Solution {
public:
    /* XOR Truth table
            0 0 => 0
            0 1 => 1
            1 0 => 1
            1 1 => 0
   
    */
    vector<int> decode(vector<int>& encoded, int first) {
        int resSize = encoded.size();
        vector<int> res(resSize+1);
        res[0] = first;
        for(int i =1; i<=resSize;i++){
            res[i] = res[i-1] ^ encoded[i-1];        
        }
        return res;
    }
};