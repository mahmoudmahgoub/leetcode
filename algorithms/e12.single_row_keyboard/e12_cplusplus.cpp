class Solution {
public:
   
    int calculateTime(string keyboard, string word) {
        int distance[26];
        int i =0;
        for(auto c:keyboard){
           
            distance [c-'a'] = i;
                i++;
        }
         int res =distance[word[0]-'a'];
        for(int i=1;i<word.length();i++){
            res+= abs(distance[word[i]-'a']-distance[word[i-1]-'a']);
        }
 
        return res;
       
    }
   
    //this can be solution if the keyboard in order but with different beginning
    /*
    int calculateTime(string keyboard, string word) {
        char base = keyboard[0];
        int d1_base =0, d2_base=0 ;
         int res = static_cast<int>(word[0]-base)>= 0?  //for first elem
                      static_cast<int>(word[0]-base): ('z'- base + word[0] - 'a'+1);
        for(auto i = 1;i<word.length();i++){
            d1_base = static_cast<int>(word[i-1]-base)>= 0?
                      static_cast<int>(word[i-1]-base): ('z'- base + word[i-1] - 'a'+1);
            d2_base = static_cast<int>(word[i]-base)>= 0?
                      static_cast<int>(word[i]-base): ('z'- base + word[i] - 'a'+1);
            int temp =abs(d1_base-d2_base);
            res = res+ temp;
        }
        return res;
    }
    */
};