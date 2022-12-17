class Solution {
public:
    /*
    int lengthOfLastWord(string s) {
        auto len = 0;
        int j = s.length()-1;
        while(j>=0 && s[j]==' '){
            j--;
        }
        for(int i = j;i>=0;i--){
            if(s[i] == ' ' )
                return len;
            else if(s[i] != ' ')
                len++;   
        }
    return len;    
    }
};
*/

    //using one loop
   int lengthOfLastWord(string s) {
        auto len = 0;
        for(int i = s.length()-1;i>=0;i--){
            //if s[i] is space and len >=1, this mean that space is not at the end of the                  string
            if(s[i] == ' ' &&len>=1)  
                return len;
            else if(s[i] != ' ')
                len++;   
        }
    return len;    
    }
};
