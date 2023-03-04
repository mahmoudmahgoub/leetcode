class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size());
        int postiveIdx = 0, negativeIdx = 1;
        for(auto num:nums){
            if(num>0){
                res[postiveIdx] = num;
                postiveIdx +=2;
            } else {
                res[negativeIdx] = num;
                negativeIdx +=2;
            }

        }
        return res;
    }
};