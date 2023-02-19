//note: this is std::partition algorithm 
/*class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        auto is_even = [] (int & a) {return a % 2 == 0; };
        std::partition(nums.begin(), nums.end(),is_even);
        return nums;
    }
};
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         auto even_comparator =  [] (int a,int b) { return a%2 <b%2;}; //if a is even and b is odd it return true
                                                                        //if both of them is even or odd it doesn't matter
        sort(nums.begin(),nums.end(),even_comparator);
        return nums;
    }
};


// modified version of the 2 passes solution to make use of the fact that we are not constrained with certain order
/*class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res(nums.size());
        int frontIdx = 0, backIdx = nums.size()-1;
        // modified version of 2 passes to make use of the fact that we are not constrained with certain order
        for(auto num:nums){
            if(!(num%2))
                res[frontIdx++] = num;
            else
                res[backIdx--] = num; 

        }
        return res;
    }
};
*/

/* this solution is inccorrect
   use this test case to verify: [2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34]
   this because The compare function simply models a "less than" operator. If you return true when the arguments are equal, then you are saying that you want a to come before b
   and you want b to come before a, which is a contradiction.In "Effective STL", Item21: Always have comparison functions return false for equal values.
   this link explains more: https://stackoverflow.com/questions/45929474/why-must-stdsort-compare-function-return-false-when-arguments-are-equal 
*/

/*class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         auto x =  [] (int a,int b) {cout<<a<<" "<<b<<endl; return (a%2)<=(b%2);};
        sort(nums.begin(),nums.end(),x);
        return nums;
    }
};
*/