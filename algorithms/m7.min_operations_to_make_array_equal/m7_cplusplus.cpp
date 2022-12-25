class Solution {
public:
    // the number we want to reach is in the middle of the array we increase left
    // of this number and decrease the right of it
    // we can note the number is always n
    // it has math proof in the soln on leetcode
    int minOperations(int n) {
        auto res =0;
        for(int i =0;i<n/2;i++)
            res += (n-(2*i+1));
        return res;
    }
};