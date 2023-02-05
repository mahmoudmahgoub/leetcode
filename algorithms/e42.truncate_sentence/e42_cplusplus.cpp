class Solution {
public:
    string truncateSentence(string s, int k) {
        int wordsNo =0;
        int i =0;
        for(; i<s.size()&&wordsNo<k;i++)
        {
            if(s[i]==' '){
                wordsNo++;
            }
        }
        if(s[i-1]==' ')
            i--;
        return s.substr(0,i);
        
    }
};