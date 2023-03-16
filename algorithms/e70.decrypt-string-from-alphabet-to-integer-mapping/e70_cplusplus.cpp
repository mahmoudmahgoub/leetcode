class Solution {
public:
    string freqAlphabets(string s) {
        //https://stackoverflow.com/questions/20869418/why-does-auto-declare-strings-as-const-char-instead-of-stdstring
        //auto res = "";
        string res ="";

        for(int i=0;i<s.size();i++){
            if((s.size()-i)>2&&s[i+2]=='#'){
                res += 'a'+((s[i]-'1'+1)*10+s[i+1])-'1';
                i +=2;
            } else {
                res += 'a'+s[i] -'1';
            }
        }
        return res;
    }
};