class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int max_height = 0;
        vector<int> res;
        for(int i=heights.size()-1;i>=0;i--){

            if(heights[i]>max_height){
                max_height = heights[i];
                res.push_back(i);
            }

        }
        reverse(res.begin(), res.end());
        return res;
    }
};