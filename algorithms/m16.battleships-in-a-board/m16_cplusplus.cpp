class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        auto count =0;
        auto leftCell = '.', upperCell = '.';
        for(int i=0;i<board.size();i++){
            for(int j =0;j<board[0].size();j++){
                leftCell  = j>0? board[i][j-1] : '.';
                upperCell = i>0? board[i-1][j]: '.';
                if(board[i][j]=='X'&&leftCell=='.'&&upperCell=='.')
                    count++;
            }
        }
        return count;    
    }
};