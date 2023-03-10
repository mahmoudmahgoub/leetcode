class Solution {
public:
   /*
   we can get the number of bits required to make target = 0 and it will equal to the result.
   as every time we flip bit we flip all bits on right 
   so we need to start with bits on left to make sure they will not flipped in next stages.
   This make sense because we want min numbers for every bit to have the right value. if we start 
   from right even we reach the correct val for a bit, it will be changed later and we will need to set 
   it again. but from left we ensure the correct val for current bit from 1 step
   */
   // order of flip operations is not important, we can reorder all operations to be performed in bulb number order
   // comment from Karma_Shunya here is useful: https://leetcode.com/problems/minimum-suffix-flips/solutions/755843/c-java-o-n/?orderBy=most_votes
    int minFlips(string target) {
        int count = 0;
        auto n = target.size();
        char bitVal_map[2] = {'0','1'};
        //reverse used to count number of flips for current bit from previous bits 
        int reverse =0;
        for(int i=0;i<n;i++){
            auto bitVal = bitVal_map[(reverse+int(target[i]-'0'))%2];
            if(bitVal =='1')
                {
                    count++;
                    reverse++;
                }
        }   
        return count;
    }
};
