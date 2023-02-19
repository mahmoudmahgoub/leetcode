
/*class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool already_removed = false;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                if(already_removed){
                    return false;
                } else {
                    already_removed = true;
                    // 2 cases when we choose which elem to remove:
                    //start of array, middle of array.
                    //case 1
                    if(i==0){
                        // we remove the larger and if smaller doesn't make the array
                        // increasing so it is impossible for the larger to make it 
                        nums[i+1] = nums[i+1] > nums[i] ? nums[i] : nums[i+1];
                        continue;
                    }
                    //case 2
                    if(nums[i+1]>nums[i-1]) {
                        continue; //remove nums[i]
                    } else{ 
                        nums [i+1] = nums[i]; //remove nums [i+1]
                    }
                }
            }
        }
        return true;
    }
};*/

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool already_removed = false;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                if(already_removed){
                    return false;
                } else {
                    already_removed = true;
                    // we will always try to remove the larger to make the remaining 
                    // of the array increasing as case 1 in first soln
                    // but we also need to check ir removing the larger will make the previous
                    // elems increasing or not if not we must remove the smaller and we hope it 
                    // it will make the remaining increasing 
                    //case 1
                    if(i==0 ||nums[i+1]>nums[i-1] ){ //i+1 is the smaller from (i+1,i)
                        nums[i+1] = nums[i+1] > nums[i] ? nums[i] : nums[i+1];
                    } else{ 
                        nums [i+1] = nums[i]; //remove nums [i+1]
                    }
                }
            }
        }
        return true;
    }
};