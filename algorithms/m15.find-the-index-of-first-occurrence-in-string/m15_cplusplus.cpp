//rolling hash as solution here:  Rabin Karp algorithm 
//Mathematically, it turns out that to have a unique hash value for every m-substring, positional weight should be greater than or equal to the number of characters in the set, which is 26 in our case 


class Solution {
public:
    int hash(string str,int len){
        long MOD = 1000000033, weight = 1;
        //pow() function can overflow, so don't use 
        int hash = 0;
        for(int i =len-1;i>=0;i--) { 
            hash += (weight*(int) (str[i]-'a')) % MOD;
            weight = (weight * 26) % MOD;
        }
        return hash%MOD;
    }
    bool checkEqual(string str1,string str2,int len,int windowStart){
        for (int i = 0; i < len; i++) {
            if (str1[i] != str2[i + windowStart]) {
                        return false;
                    }
                }
        return true;
    }
    int strStr(string haystack, string needle) {
        int m = needle.size();
        int n = haystack.size();
        if(n<m)
            return -1;
        int windowStart = 0;
        int needleHash = hash(needle,m);
        long hayHash = hash(haystack,m);
        long MOD = 1000000033; 
        long MAX_WEIGHT = 1;
        for (int i = 0; i < m; i++)
            MAX_WEIGHT = (MAX_WEIGHT * 26) % MOD;
        if(needleHash==hayHash){
            if(checkEqual(needle,haystack,m,windowStart))
                return 0;
        }
        windowStart = 1;
        while((n-windowStart >= m)){
            //(a - b)%MOD = (a%MOD - b%MOD)%MOD 
            // in actual case may be a > b but after MODing, 
            //  a%MOD can be smaller than b%MOD. In that case, we need to add MOD
            hayHash = (hayHash*26 %MOD+ (int) (haystack[windowStart+m-1]-'a')-
                        ((int) (haystack[windowStart-1]-'a')*MAX_WEIGHT)%MOD+MOD)%MOD;
            if(needleHash==hayHash){
                if(checkEqual(needle,haystack,m,windowStart))
                    return windowStart;
            }
            windowStart++;
        } 
        return -1;

    }
};


/*
class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSize = needle.size();
        int index = 0;
        while((haystack.size()-index >= needleSize)){
            if(haystack.substr(index,needleSize)==needle)
                return index;
            index++;
        } 
        return -1;

    }
};

*/