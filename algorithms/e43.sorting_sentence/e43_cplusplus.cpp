class Solution {
public:
    string sortSentence(string s) {
        
        map<int,string> ordered_sentence;
        string res;
        int i,wordStart=0;
        for( i=0;i<s.size();i++){
            if(s[i]==' '){
                ordered_sentence[int(s[i-1]-'0')]=s.substr(wordStart,i-wordStart-1);
                wordStart = i+1;
            }
            
        }
        ordered_sentence[int(s[i-1]-'0')]=s.substr(wordStart,i-wordStart-1);
       for(auto word:ordered_sentence){
           res.append(word.second+" ");
       } 
       res.pop_back(); 
        return res;
    }
};
