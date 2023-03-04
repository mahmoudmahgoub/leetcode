class Solution {
public:
    string interpret(string command) {
        string res="";
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='G')
                res.push_back('G');
            else if(command[i]==')')
            {
                res.push_back('o');
            }
            else if(command[i]=='a')
            {
                res.append("al");
                i+=2;
            }
               
        }
        return res;
    }
};