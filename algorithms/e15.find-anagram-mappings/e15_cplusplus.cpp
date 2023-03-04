class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size());
        map<int,int> mymap;
        for(int i =0;i<nums2.size();i++){
            mymap[nums2[i]]=i;
        }
        int i =0;
        for(auto e: nums1){
            auto eMap = mymap[e];
            res[i] = eMap;
            i++;
        }
        return res;
    }
};