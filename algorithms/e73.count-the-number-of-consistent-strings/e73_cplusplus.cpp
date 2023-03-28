class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        auto allowedCount = 0;
        bool allowedSet[26] = {false};
        for(auto ch:allowed){
            allowedSet[ch-'a'] = true;
        }
        for(auto str: words){
            int j = 0;
            for( j =0 ;j<str.size();j++){
                if(!allowedSet[str[j]-'a']){
                    break;
                }
                    
            }
            if(j==str.size()){
                allowedCount++;
            }
        }

        return allowedCount;
        
    }
};