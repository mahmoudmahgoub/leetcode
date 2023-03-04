class Solution {
public:
    /*int romanToInt(string s) {
        int len = s.size();
        int res = 0;
        map<char,int> converter = { {'I',1}, {'V',5}, {'X',10},
                                    {'L',50}, {'C',100},{'D',500},
                                    {'M',1000}};
         
        map<string,int> subConverter = { {"VI",-1},   {"XI",-1},
                                         {"LX",-10},  {"CX",-10},
                                         {"DC",-100}, {"MC",-100}};
        res = converter[s[len-1]];
        string twoRomans = {s[len-1]};
        for(int i=len-2;i>=0;i--){
            res+=converter[s[i]];
            twoRomans+=s[i];
            if(subConverter.find(twoRomans)!=subConverter.end()){
             res+=2*subConverter[twoRomans];
            }
            twoRomans=s[i];
               
        }
        return res;
    }
};*/
   
    int romanToInt(string s) {
        int len = s.size();
        int res = 0;
        map<char,int> converter = { {'I',1}, {'V',5}, {'X',10},
                                    {'L',50}, {'C',100},{'D',500},
                                    {'M',1000}};

        res = converter[s[0]];
        int prev = res;
        for(int i =1;i<len;i++){
            res+=converter[s[i]];
            if(converter[s[i]]>prev)
                res-=2*prev;
            prev = converter[s[i]];
               
        }
        return res;
    }
};
