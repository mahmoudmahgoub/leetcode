class Solution {
public:
    /*
    string longestCommonPrefix(vector<string>& strs) {
        
        auto prefix = strs[0];
        for(auto str:strs){
            if(str.length()<prefix.length())  //the prefix is determine by the shorter str
                prefix =prefix.substr(0,str.length());
            for(int i = 0;i<min(str.length(),prefix.length());i++){
                if(prefix.length()==0) return "";
                if(str[i]!=prefix[i]){
                    prefix = prefix.substr(0,i);
                    break;
                }
            }
            
        }
        return prefix;
    }
};
*/
//2nd soln: you can do veritcal comprasion also 


//3rd soln: divide and conquer
string LCP(vector<string>& strs,int start,int end){
    if(start == end) return strs[start];
    auto middle = (start+end)/2;
    auto commonL = LCP(strs,start,middle); 
    auto commonR = LCP(strs,middle+1,end);
    auto maxcommonLen = min(commonL.length(),commonR.length());
    int i =0;
    while(i<maxcommonLen){
        if(commonL[i]!=commonR[i])
            return commonL.substr(0,i);
        i++;
    }
    
    return commonL.substr(0,maxcommonLen);
}
string longestCommonPrefix(vector<string>& strs) {
        

        return LCP(strs,0,strs.size()-1);
    }
};