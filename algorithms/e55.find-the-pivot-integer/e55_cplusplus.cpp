class Solution {
public:
    /* sum of arathmatic series: n/2(a1+an)
    solve this 
    x(1+x)= (n-x+1)(x+n)
    x= sqrt((n^2+n)/2)
    */
    int pivotInteger(int n) {
        int x_2 = (n*n+n)/2;
        int  x= sqrt(x_2);
        if(x*x==x_2)
        return x;
        else
        return -1; 
    }
};