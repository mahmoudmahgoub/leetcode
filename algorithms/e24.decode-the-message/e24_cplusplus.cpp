class Solution {
public:
    string decodeMessage(string key, string message) {
       
        vector<int> decryptor(26);
        int i =0;
        for(auto ch:key){
            if(ch!=' '&&!decryptor[ch-'a']){
                //this cond !decryptor[ch-'a'] to avoid increase i
                //if we don't have a new key elem that need to be mapped
                decryptor[ch-'a'] ='a'+i;
            i++;
            }
        }
        i =0;
        for(auto ch:message){  
           if(ch != ' ')  
                message[i]= decryptor[ch-'a'];
            i++;
        }
        return message;
    }
};