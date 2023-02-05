class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool notBar = true;

        for(auto c:s){
            if(c =='|'){
                notBar= !notBar; 
            }
            else if(c == '*'&&notBar)
                count++;
        }


        return count;
        
    }
};