class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num){
            steps++;
            if(num%2)
                num-=1;
            else
                num/=2;
           
        }
        return steps;
    }
};
