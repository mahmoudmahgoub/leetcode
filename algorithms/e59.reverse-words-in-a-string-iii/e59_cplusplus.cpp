class Solution {
public:
 //inplace 
 string reverseWords(string s) {
        stack<char> wordReversed;
        string res ="";
        int resIdx = 0;
        int startWord = 0,endWord = 0;

        for(int i = 0;i<s.size();i++){

            if(s[i] == ' '|| i==s.size()-1){
                endWord = (i==s.size()-1)?i:i-1;
                while(endWord>startWord){
                    swap(s[endWord],s[startWord]);
                    endWord--;
                    startWord++;
                }
                startWord=i+1;
            }
        }

    return s;        
    }
/*
 //O(N), O(1) space 
 string reverseWords(string s) {
        stack<char> wordReversed;
        string res ="";
        int resIdx = 0;
        int startWord = 0,endWord = 0;

        for(int i = 0;i<s.size();i++){

            if(s[i] == ' '|| i==s.size()-1){
                endWord = (i==s.size()-1)?i:i-1;
                while(endWord>=startWord){
                    res += s[endWord];
                    endWord--;
                }
                startWord=i+1;
                if(i!=(s.size()-1))
                  res +=' ';  
            }
        }

    return res;        
    }

*/
  //O(N), O(W) space where W is the lenght of the longest word as I use stack
   /* string reverseWords(string s) {
        stack<char> wordReversed;
        string res(s);
        int i = 0;
        for(auto ch:s){
            if(ch == ' '){
                while(wordReversed.size()){
                    res[i]=(wordReversed.top());
                    wordReversed.pop();
                    i++;
                }
                res[i]=' ';
                i++;
            } else
             wordReversed.push(ch);
        }
        while(wordReversed.size()){
            res[i]=wordReversed.top();
            wordReversed.pop();
            i++;
        }

    return res;
        
    }*/
};