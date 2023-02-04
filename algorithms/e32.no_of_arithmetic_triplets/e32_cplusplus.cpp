class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        set<int> myset;
        int res = 0;
        for(int num:nums){
            myset.insert(num);
            if(myset.find(num-diff)!=myset.end()&&myset.find(num-2*diff)!= myset.end()) {
                res++;
            }
        }
        return res;
    }
};