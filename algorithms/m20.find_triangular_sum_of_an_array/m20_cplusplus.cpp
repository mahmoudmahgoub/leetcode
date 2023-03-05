class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for(int j = nums.size()-1; j>0;j--){
            for(int i =0;i<j;i++){
                nums[i] = (nums[i]+nums[i+1])%10;
            }
        }
        return nums[0];
    }
};


//O(n) solution: it is Pascal's triangle upside down
// nCk =       n * (n-1) * ... * (n-k+1) /(1*2*3*...k)
// so nCk+1 = nCk* * (n-k) / (k+1)
//this solution will overflow as nck increase
// this solution for that:
//https://leetcode.com/problems/find-triangular-sum-of-an-array/solutions/1907380/o-n-time-o-1-space-python-189-ms-c-12-ms-java-4-ms/
/*class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int sum = 0;
        int nck = 1;
        auto n = nums.size()-1;
        for(int i=0;i<=n;i++){
            sum =  (sum+nck * nums[i]) % 10;
            nck *= (n-i);
            nck /= i + 1;
        }
        return sum;
    }
};*/