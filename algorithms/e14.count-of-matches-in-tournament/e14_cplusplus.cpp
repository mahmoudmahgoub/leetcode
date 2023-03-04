class Solution {
public:
    //recursion solution 
    /*
    int numberOfMatches(int n) {
        if(n<2)
            return 0;
        else if(n==2)
            return 1;
        else if(n%2)
            return (n-1)/2+ numberOfMatches((n-1)/2+1);
        else 
            return n/2 + numberOfMatches(n/2);
        
    }*/
    //iterative solution 
    int numberOfMatches(int n) {
        if(n == 1)
            return 0;
        int res =0;    
        while(n>=2) {
            res += n/2;
            n=(n%2)? (n/2+1) : (n/2); 
            
        }
      return res;  
    }
	// return n-1 only
	//Only one team wins. And match is needed to eliminate one team. So n-1 matches for eliminating n-1 teams.
};