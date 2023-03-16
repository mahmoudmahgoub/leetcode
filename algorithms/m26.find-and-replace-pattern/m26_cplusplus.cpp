class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       vector<string> res;
       for(auto word:words){
           string word_temp = word;
           int used_letter[26] = {0};
            map<char,char> mapper;
           for(int i=0;i<word.size();i++){
               if(mapper.find(word[i])!=mapper.end()){
                   word_temp[i] = mapper[word[i]];
               } else {
                   if(used_letter[pattern[i]-'a'])
                    break;
                mapper[word[i]] = pattern[i];
                word_temp[i] = mapper[word[i]];
                used_letter[pattern[i]-'a'] = 1;
               }
           }
           if(word_temp==pattern)
            res.push_back(word);
       }

       return res; 
    }
};