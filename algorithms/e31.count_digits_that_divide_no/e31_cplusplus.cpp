class Solution {
public:
    int countDigits(int num) {
        int n = num;
        // get number digits
        int  count =0;
        while(n){       
            int digit = n%10;  
            if(digit&&!(num%digit)){
                count++;
            }
            n /= 10;
        }
        return count;
    }
};