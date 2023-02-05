class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int currw1 = 0, currch1 = 0, currw2=0, currch2 = 0;
        while (currw1 < word1.size() && currw2 < word2.size()) {

            if(word1[currw1][currch1]!=word2[currw2][currch2])
                return false;
            currch1++; currch2++;
            if(currch1==word1[currw1].size()){
                currch1 = 0;
                currw1++;
            }
            if(currch2==word2[currw2].size()){
            currch2 = 0;
            currw2++;
            }
        }
        return currw1==word1.size() &&currw2==word2.size();

    }
};
