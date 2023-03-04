class Solution {
public:
    int maximum69Number (int num) {
        int numberToChange = 0, weight=1,numberToChangeWeight=0;
        int n = num;
        while(n){
            int digit = n%10;
            if(digit==6){
                numberToChange=weight*digit;
                numberToChangeWeight = weight;
            }
            weight *=10;
            n /=10;
        }
        
        return num-numberToChange+9*numberToChangeWeight;
    }
};