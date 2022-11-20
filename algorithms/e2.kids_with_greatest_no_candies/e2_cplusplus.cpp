class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxCandies = 0;
         vector<bool> res(candies.size(),false);
        for(auto e:candies){
            if(e>maxCandies)
                maxCandies=e;
        }
        int i =0;
        for(auto e:candies){
            if((e+extraCandies)>=maxCandies)
                res[i]=true;
            i++;
        }
        return res;
    }
};