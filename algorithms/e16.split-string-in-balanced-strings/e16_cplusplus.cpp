class Solution {
public:
    int balancedStringSplit(string s) {
       int balance = 0, res = 0;
    for(auto ch:s){
        if(ch == 'L')
            balance++;
        else
            balance--;
        if(!balance)
            res++;
       
    }
        return res;
    }
};