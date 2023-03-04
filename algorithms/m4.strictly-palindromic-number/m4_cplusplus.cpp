class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
        for(auto base = n-2; base>=2;base--){
            auto x = n;
            int reverted = 0;
            if(x!=0 && x%base==0)
                return false;
            while(reverted<x){
                reverted = reverted * base + x % base;
                x /= base ;
            }
            if (x!=reverted&&x!=reverted/10)
                return false;
            
        }
        return true;
    }
/* it is false for all as:
https://leetcode.com/problems/strictly-palindromic-number/discuss/2569931/Why-return-false-or-Simply-explained

If the number is palindromic in all bases from 2 to n-2, it will be strictly palindromic. Conversely, if it is not palindromic in even in one of the bases we have to return false.
 Let us consider n-2 base for all the numbers.Evidently, any number when converted to their n-2 base will return 12 which is non palindromic and hence establishes the number as not strictly palindromic. 
 The exeption is the number 4, which when converted to it's n-2 base, i.e. base 2 does not return 12 instead returns 100 which again is non palindromic and therefore concludes that 
 not a single number eligible for input is strictly palindromic. Thus return false.*/
};