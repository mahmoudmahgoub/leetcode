class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int res = 0, cup = capacity;
        for(int i =0;i<plants.size();i++){
            if(cup<plants[i]){
                cup = capacity;
                res += (2*i);
            }
            cup-=plants[i];
            res++;
        }
        return res;
    }
};
