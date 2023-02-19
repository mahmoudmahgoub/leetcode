class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> missingRanges;
        int lowerRange = lower;
        int upperRange = lowerRange;
        for(auto i =0;i<nums.size();i++){
            int upperRange = nums[i]-1;
            if(lowerRange == upperRange)
                missingRanges.push_back(std::to_string(upperRange));
            else if (lowerRange < upperRange)
                missingRanges.push_back(std::to_string(lowerRange)+"->"+std::to_string(upperRange));
            lowerRange=nums[i]+1;
        }
        upperRange = upper;
        if(lowerRange == upperRange)
                missingRanges.push_back(std::to_string(upperRange));
        else if (lowerRange < upperRange)
                missingRanges.push_back(std::to_string(lowerRange)+"->"+std::to_string(upperRange));
        return missingRanges;
    }
};
