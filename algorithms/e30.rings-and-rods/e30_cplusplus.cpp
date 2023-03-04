class Solution {
public:
    int countPoints(string rings) {

        vector<set<char>> rods(10);
        int count = 0;
        for(auto i =0; i<rings.size()-1; i +=2){
            cout<<int(rings[i+1]-'0');
            rods[int(rings[i+1]-'0')].insert(rings[i]);
        }
        for(auto rod:rods){
            if(rod.size()==3)
                count++;
        }
        return count;
    }
};