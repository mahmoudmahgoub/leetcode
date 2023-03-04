class Solution {
public:
    //time: O(nlog(n))
    /*
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for(int i =0; i<=n;i++){
            auto ones = 0;
            auto j = i;
            while(j>0){
                
                ones = ones + j%2;
                j /=2;
            }
            res[i]= ones;
        }
        return res;
    }
};*/
    
    //time: O(n)
    //I will depend on the idea of that we have only one '1' every 2,4,8..etc
    //and the upcoming number until the next (2's power) has the same number of
    // '1' from previous mirror
    /*
    
    0000
    0001
    0010 -------> 2: first mirror
    0011
    0100 -------> 4: second mirror
    0101
    0110
    0111
    1000 -------> 8: 3rd mirror 
    
    */
    /*
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        int power = 2;
         res[0] = 0;
        for(int i =1; i<=n;i++){
            if(i/power&&!(i%power))
            {
                res[i] = 1;
                power *=2;
            }
            else{
                res[i] = res[i-power/2]+ 1;
            }
        }
        return res;
    }
};*/
    
    //the same solution but with different implemenation(formal soln) 
    //P(x+b)=P(x)+1,b=(2^m)>x 
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        int b = 1, x =0;
         res[0] = 0;
        // [0, b) is calculated
        while(b<=n){
           // generate [b, 2b) or [b, n) from [0, b)
            while (x < b && x + b <= n) {
                res[x+b] = res[x]+1;
                x++;
            }
            x = 0;
            b<<=1; //b=2b
        }
        return res;
    }
};

// another soln : P(x)=P(x/2)+(xmod2)
// x / 2 is x >> 1 and x % 2 is x & 
/*
If the number is even, the number of 1s is equal to the number which is half of it.
That is because number i is just left shift by 1 bit from number i / 2.
Therefore, they should have the same number of 1 bits.
If the numbers are odd, e.g. 1, 3, 5, 7.
The number of 1 bits is equal to the number (i - 1) + 1.

x  = (1001011101)_2 =(605)_10
x' = (100101110)_2 = (302)_10
We can see that x' is differ than x by one bit, because x'
can be considered as the result of removing the least significant bit of x.
*/
    
  /* final soln:Last set bit is the rightmost set bit. Setting that bit to zero with the bit trick, x &= x - 1, leads to the following
P(x)=P(x&(x−1))+1 */  