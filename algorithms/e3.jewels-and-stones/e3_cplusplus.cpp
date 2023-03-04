class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewels_exist;
        int res =0;
        for(auto jewel:jewels){
           jewels_exist.insert(jewel);
        }
        
        for(auto stone:stones){ 
            if(jewels_exist.find(stone)!=jewels_exist.end()){
                res++;
            }  
        }
        
        return res;
	}		
        
    /*
	int numJewelsInStones(string jewels, string stones) {
        bool jewels_exist[58]= { false };
        int res =0;
        for(auto jewel:jewels){
            jewels_exist[jewel-'A']=true;
        }
        
        for(auto stone:stones){ 
            if(jewels_exist[stone-'A']){
                res++;
            }  
        }
        return res;
    }
	*/
};