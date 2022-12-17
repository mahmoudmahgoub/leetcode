
class Solution {

public:
   
 /*
    int numberOfBeams(vector<string>& bank) {
        int res = 0;
        for(int pairFirst =0, pairSecond = 1 ; pairSecond<bank.size(); pairSecond++){
            bool newLaserGroup =false;
            int devicesFirst = 0, devicesSecond =0;
            for (auto col = 0; col<bank[0].size();col++){
                if(bank[pairFirst][col] =='1')
                {
                    ++devicesFirst;
                }
               
                if(bank[pairSecond][col] =='1') {
                   ++devicesSecond;
                   newLaserGroup = true;
                }
            }
            if(newLaserGroup){
                res+= devicesFirst*devicesSecond;
                pairFirst=pairSecond;
            }
           
        }
        return res;
    }
}; */
    //simplify the soln
    int numberOfBeams(vector<string>& bank) {
        int res = 0;
        for(int prev =0, curr = 1; curr<bank.size(); curr++){
            int devicesPrev = 0, devicesCurr =0;
            for (auto col = 0; col<bank[0].size();col++){
                if(bank[prev][col] =='1')
                {
                    ++devicesPrev;
                }
               
                if(bank[curr][col] =='1') {
                   ++devicesCurr;
                }
            }
            res+= devicesPrev*devicesCurr; //if we are in empty row devices number will equal zero so no change in the result
            prev=devicesCurr?curr:prev; //if devicesCurr> 0 then time to move prev

           
        }
        return res;
    }
}; 
