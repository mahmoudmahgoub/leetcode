/*class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalCollectingTime  = garbage[0].size();
        map<char,int> typeGarbageTravelTime={{'M',0},{'G',0},{'p',0}};
        int totalTravelTime = 0;
        for(int i = 1;i<garbage.size();i++){
            totalCollectingTime += garbage[i].size();
            totalTravelTime +=travel[i-1];
            std::unordered_set<char> garbagetypes;
            for(auto garbagetype:garbage[i]) {
                garbagetypes.insert(garbagetype);
            }
            for(auto garbagetype:garbagetypes) {
                typeGarbageTravelTime[garbagetype] = totalTravelTime;
            }

        }
        totalCollectingTime += typeGarbageTravelTime['M'] + typeGarbageTravelTime['G'] + typeGarbageTravelTime['P'];
        return totalCollectingTime;
    }
};*/

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalCollectingTime  = garbage[0].size();
        int mTravelTime = 0, pTravelTime=0, gTravelTime = 0;
        int totalTravelTime = 0;
        for(int i = 1;i<garbage.size();i++){
            totalCollectingTime += garbage[i].size();
            totalTravelTime +=travel[i-1];
            if(garbage[i].find('M') != -1)
                mTravelTime = totalTravelTime;
            if(garbage[i].find('P') != -1)
                pTravelTime = totalTravelTime;
            if(garbage[i].find('G') != -1)
                gTravelTime = totalTravelTime;
        }
        totalCollectingTime += mTravelTime + pTravelTime + gTravelTime;
        return totalCollectingTime;
    }
};