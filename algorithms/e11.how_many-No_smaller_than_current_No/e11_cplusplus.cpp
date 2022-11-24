class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        res = nums;
        map<int,int> resMap;
        std::sort(res.begin(),res.end());
       
        for(int i=0;i<res.size();i++){
            if(resMap.find(res[i])==resMap.end())
                resMap[res[i]]=i;
        }
        for(int i=0;i<res.size();i++)
        {
            res[i] = resMap[nums[i]];
        }
       
        return res;
    }
};
