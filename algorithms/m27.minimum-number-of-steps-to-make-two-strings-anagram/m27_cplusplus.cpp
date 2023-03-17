class Solution {
public:
    int minSteps(string s, string t) {
        int characters[26] = {0};
        int count = 0;
        for(auto ch:s){
            characters[ch-'a']++;
        }
        for(auto ch:t){
            if(!characters[ch-'a']){
                count++;
            } else {
                characters[ch-'a']--; //for the case t has letter in s but with more copies
            }
        }
        return count;
    }
};