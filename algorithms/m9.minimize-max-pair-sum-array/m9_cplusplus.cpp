class Solution {
public:
    int minPairSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int minMaxPairSum = INT_MIN;
        for(int i = 0; i<nums.size()/2;i++){

            if((nums[i]+nums[nums.size()-i-1]) > minMaxPairSum)
                minMaxPairSum = nums[i]+nums[nums.size()-i-1];

        }
        return minMaxPairSum;
    }
};