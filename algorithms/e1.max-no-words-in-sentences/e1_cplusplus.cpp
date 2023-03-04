class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int res = 0;
    for (auto &s: sentences) {
        int n = count(s.begin(), s.end(), ' ');
        res = max(res, n + 1);
    }
    return res;
    }
    
	/*  
	int mostWordsFound(vector<string>& sentences) {
        int maxWords =0;
        for(auto sentence: sentences){
           int words=0;
            for(auto ch:sentence){
                if(ch==' ')
                    words++;
            }
            maxWords= max(maxWords,++words);
        }    
        return maxWords;
    }   
*/
};