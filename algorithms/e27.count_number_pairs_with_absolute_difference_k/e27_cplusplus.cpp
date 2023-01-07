class Solution {
public:
   
    int countKDifference(vector<int>& nums, int k) {
        map<int,int> numbersMap;
        int pairs =0;
        for(auto num:nums){
            if(numbersMap.find((k+num))!=numbersMap.end()){
                pairs  = pairs + numbersMap[k+num];
            }
            if (numbersMap.find((-k+num))!=numbersMap.end()){
                pairs  = pairs + numbersMap[-k+num];
            }
            numbersMap[num]++;
        }
       
        return pairs;
    }
};