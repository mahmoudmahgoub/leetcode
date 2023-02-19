class Solution {
public:
    int magicalString(int n) {
        char No_toRepeat='2';
        int  repeats=2;
        string magic = "1";
        int repeats_Idx=1;
        int count = 1;
        map<char,char> inverter = {{'1','2'},{'2','1'}};
        while(magic.size()<n){
            while(repeats&&magic.size()<n){
                if(No_toRepeat=='1')
                    count++;
                magic.push_back(No_toRepeat);
                repeats--;
            }
        No_toRepeat=inverter[magic.back()];
        repeats_Idx++;
        repeats = int(magic[repeats_Idx] - '0');
        }
        return count;
    }
};
