class Solution {
public:
    int longestPalindrome(string s) {
        int letters[56] = {0};
        int res = 0;
        int middle = 0;
        for(auto ch:s){
            letters[ch-'A']++;
        }
        for(auto letter:letters){
            if(!(letter%2))
                res +=letter;
            else{
             middle = 1;
             res += letter - 1;
            }
        }
        return res+middle;
    }
};