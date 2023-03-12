class Solution {
public:
    int minBitFlips(int start, int goal) {
        auto count = 0;
        while(start ||goal){
            if(start%2!=goal%2)
                count++;
            start /=2;
            goal /=2; 
        }

        return count;
        
    }
    /*
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
    }
    */

};