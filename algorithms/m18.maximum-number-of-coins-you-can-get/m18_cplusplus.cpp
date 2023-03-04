class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(),piles.end());
        auto res =0;
        for(int i=piles.size()/3;i<piles.size();i+=2){
            res += piles[i];
        }

        return res;
    }
};

        /*for(int i=piles.size()-1;i>=piles.size()/3;i-=2){ //this also works
            res += piles[i-1];
        }*/
        //sort(piles.begin(),piles.end(),greater <>()); //for desc sort
        /*for(int i=0;i<piles.size()/3*2;i+=2){ // if I use desc sort use this
            res += piles[i+1];
        }*/