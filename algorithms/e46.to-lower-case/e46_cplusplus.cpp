class Solution {
public:
    string toLowerCase(string s) {
        int conversionFactor = 'a'-'A';
        for(auto &c:s){
            if(c>='A' && c<='Z')
                c += conversionFactor;
        }
        return s;
    }
};