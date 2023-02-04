class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int uniqueIdx = 0;
        for(int i =1;i<nums.size();i++){
            if(nums[i]!=nums[uniqueIdx]){
                uniqueIdx++;
            }
            nums[uniqueIdx] = nums[i];

        }
        return uniqueIdx+1;
    }
};