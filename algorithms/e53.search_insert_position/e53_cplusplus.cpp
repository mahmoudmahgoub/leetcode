class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r =nums.size()-1, pivotIdx=l+(r-l)/2;
        while(l<=r){
            if(target<nums[pivotIdx]) {
                r = pivotIdx-1;

            } else if (target>nums[pivotIdx]) {

                l = pivotIdx+1;

            } else {
                return pivotIdx;
            }
            
             pivotIdx=l+(r-l)/2;
        }

        return l;
        
    }
};

