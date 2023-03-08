class Solution {
public:
/*
    //O(n^2*m) //n for erase and n*m for find 
    string removeOccurrences(string s, string part) {
        auto partLen = part.size();
        while(s.find(part)!=string::npos){
            s.erase(s.find(part),partLen);
        }
        return s;
    }
    */
       //using stack idea but without stack
       // O(n*m)- O(n) outer loop and O(m) substr, space:O(n)
        string removeOccurrences(string s, string part) {
        
        auto m = part.size();
        auto n = part.size();
        string s2(s);
        auto s2Insert = 0;
        for(auto ch:s){
            s2[s2Insert] = ch;
            s2Insert++;
            if(s2Insert>=m){
                if(s2.substr(s2Insert-m,m)==part){
                    s2Insert = s2Insert-m;
                }
            }
        }
        return s2.substr(0,s2Insert);
    }
};