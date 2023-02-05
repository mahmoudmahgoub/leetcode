/*class Solution {
public:
    int mySqrt(int x) {
        if (x==0||x==1)
        return x;
       long i = 2;
        for( ; i <x ;i++){
            if(i*i > x)
            break;
        }
        return i-1;
    }
}; */

//solution based on  sum of the first n odd numbers is n^2
/*class Solution {
public:
   int mySqrt(int x) {
        long long sqr=0,i=1,count=0;
    
        //loop until y is greater than x
        while(x>=sqr){
            sqr+=i;
            i+=2;
            count++;
        }
    return count-1;
    }
}; */

class Solution {
  public:
   int mySqrt(int x) {
        //For x≥2,the square root of x (a) is always smaller than x/2 and larger than 0 : 0<a<x/2.
        //so, we can start by right x/2 but we need to add if (x < 2) return x; in the start of the function
        int left = 0, right = x;
        long sqr = 0,pivot = 0;
        while(left<=right){
            pivot = left + (right - left) / 2;
            sqr = pivot * pivot;   
            if(sqr>x) {
                right = pivot-1; 
            } else if (sqr<x) {
                left = pivot+1;
            } else return pivot;
        }
        //at the end of the search, pivot is the nearst number to the required 'a'
        // we know  a^2≤x<(a+1)^2 so:
        // 1) if pivot^2 is > x so the rounded(a) will be pivot-1
        // 2) if pivot^2<x so the rounded(a) will be pivot
        // from above right will be the solution in the 2 cases:
        //is right or (left-1) 
        return right;
   }
};
