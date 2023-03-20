class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        auto allowed_emptyBeds = 0;
        auto left = 0;
        for(int i =0;i<flowerbed.size()-1;i++){
            if(!(left||flowerbed[i]||flowerbed[i+1])){
                left = 1;
                allowed_emptyBeds++;
            }
            else
             left = flowerbed[i];

        }
        if(!(left||flowerbed[flowerbed.size()-1]))
            allowed_emptyBeds++;
        return allowed_emptyBeds >= n;
        
    }
};