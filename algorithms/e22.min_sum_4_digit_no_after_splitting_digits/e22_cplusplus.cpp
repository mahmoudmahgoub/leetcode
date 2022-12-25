class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits (4);
        int i =0;
        while(num){
           
            digits[i] = num%10;
            i++;
            num/=10;
        }
        std::sort(digits.begin(),digits.end());
        int res = (digits[0]*10+digits[2]) + (digits[1]*10+digits[3]);
        return res;
    }
};
