/*class Solution {
public:
    set<string> TilePossibilities;

    //get all permutations  and remove repeated ones 
    void tilesGenerator(string res, string remaining) {
        if(res!="")
        TilePossibilities.insert(res);
        if(remaining.size()==0){
            return;
        } 
        for(int i = 0; i <remaining.size();i++)
            tilesGenerator(res+remaining[i],remaining.substr(0,i)+remaining.substr(i+1,remaining.size()-i));


    }
    int numTilePossibilities(string tiles) {

        tilesGenerator("",tiles);
        
        return TilePossibilities.size();
    }
};*/
class Solution {

    public: int numTilePossibilities(string tiles) {
        vector<int> count(26);
        for (auto c : tiles) count[c - 'A']++;
        return dfs(count);
    }
    
    int dfs(vector<int>  arr) {
        int sum = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) continue;
            sum++;
            arr[i]--;
            sum += dfs(arr);
            arr[i]++;
        }
        return sum;
    }
};