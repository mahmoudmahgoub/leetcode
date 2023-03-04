/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int size = nums.size();
        for(auto num:nums){
            mp[num]++;
            if(mp[num]>size/2){
                return num;
            }
        }
        return -1;
    }
};
*/
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        return (size%2)?nums[size/2]:nums[size/2-1];
    }
};
*/

//Boyer-Moore Voting Algorithm
// IF There is a Majority Element, the Algorithm will produce it 
// if we are not sure we have to do a scan on the entire array using the resulting Element
// you can look at it using armies analogy or by math
//let's say A:(Majority element) and B:(other elements)
// if (A/(A+B)>.5) then A>B - then after doing elemnation from A and B by C we are sure (A-C)>(B-C) 
// so A still Majority in the remaining of the array.  
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0];
        int votes = 0;
        int size = nums.size();
        for(auto num:nums){
            if(!votes){
                majority = num;
            }
            if (num ==majority) 
                votes++;
            else 
            votes--;
        }
        return majority;
    }
};