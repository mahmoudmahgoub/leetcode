class Solution {
public:
    //time o(n), space o(n)
  /*
    string restoreString(string s, vector<int>& indices) {
        int len = s.length();
        string res=s;
        for(auto i = 0;i<len;i++){
            res[indices[i]]=s[i];
        }
        return res;
    }
    */
     //time o(n), space o(1)
     // max number of swaps is 2n-1
    string restoreString(string s, vector<int>& indices) {
        int len = s.length();
        for(auto i =0 ;i< len;i++){
           
              while(indices[i]!=i)
              {
                  swap(s[i],s[indices[i]]);
                  swap(indices[i],indices[indices[i]]);
              }
        }
        return s;
    }

     //time o(n), space o(1)
     // cyclic solution also but can be more visualized
     // https://www.youtube.com/watch?v=PxEroQ0PUrM 
   /* string restoreString(string s, vector<int>& indices) {
        int len = s.length();
        int i =0;
        while(i< len){
           
              if(indices[i]!=i)
              {
                  swap(s[i],s[indices[i]]);
                  swap(indices[i],indices[indices[i]]);
              }
            else
                i++;
        }
        return s;
    }*/
};