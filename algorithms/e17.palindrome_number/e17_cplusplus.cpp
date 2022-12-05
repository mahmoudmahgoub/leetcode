class Solution {
public:
   /* bool isPalindrome(int x) {
        if(x<0)
            return false;
       
        auto s = std::to_string(x);
        auto len = s.length();
        int  j = len-1,i = 0;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
       
        return true;
    } */
   
    // revert the full number //this sol will not work if the reverted number is too big
    //for this input
    // I get the following error:
    //Line 27: Char 32: runtime error: signed integer overflow: 998765432 * 10 cannot be represented in type 'int'
    /*
     bool isPalindrome(int x) {
        if(x<0)
            return false;
       int  n =x;
         auto reverted =0;
        while(n){
            reverted = reverted*10+ n%10;
            n = n/10;  
           
        }
        if(x==reverted)
            return true;
         else
            return false;
     }
     */
     // revert the half of number
     bool isPalindrome(int x) {
        //if we have zero on right, it will not included when we revert
        //because it will be on left and this will cause errors
        if(x<0 || (x % 10 == 0 && x != 0) )
            return false;
         auto reverted =0;
        while(reverted < x){
            reverted = reverted*10+ x%10;
            x = x/10;  
           
        }
        if(x==reverted ||x == reverted/10 )
            return true;
         else
            return false;
     }
};