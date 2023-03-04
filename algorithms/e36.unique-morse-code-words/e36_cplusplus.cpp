class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> morseRepresentations;
        for(auto word:words){
            string transformed = "";
            for(auto ch:word){

                transformed  = transformed + code [ch-'a'];
            }
            morseRepresentations.insert(transformed);
        }
       return morseRepresentations.size(); 
    }
};
