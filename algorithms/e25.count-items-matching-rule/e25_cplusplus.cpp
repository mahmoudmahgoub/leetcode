class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0, idx = 0;
        if(ruleKey=="type")
            idx = 0;
        else if(ruleKey=="color")
            idx = 1;
        else
            idx = 2;
        for(auto item:items){
            if(item[idx]==ruleValue){
                count++;
            }
        }
        return count;
    }
};