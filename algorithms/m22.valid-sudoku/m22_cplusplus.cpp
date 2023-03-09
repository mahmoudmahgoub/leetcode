class Solution {
public:
    //bruteforce O(n^3)
    /*
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                if(board[i][j]!='.')
                {
                    for(int k=0;k<n;k++){
                        if((board[i][j]==board[i][k]&&k!=j)||(board[i][j]==board[k][j]&&k!=i)){
                            return false;
                        }
                    }
                    auto rowShift = (i/3)*3;
                    auto colShift = (j/3)*3;
                    auto adjIdxr1 = rowShift +(i+1)%(3);
                    auto adjIdxr2 = rowShift +(i+2)%(3);
                    auto adjIdxc1 = colShift +(j+1)%(3);
                    auto adjIdxc2 = colShift +(j+2)%(3);
                    if(board[i][j]==board[adjIdxr1][adjIdxc1] ||
                       board[i][j]==board[adjIdxr1][adjIdxc2] ||
                       board[i][j]==board[adjIdxr2][adjIdxc1] ||
                       board[i][j]==board[adjIdxr2][adjIdxc2]) {
                           return false;
                       }
                }


            }
        }
        return true;
    }*/

     //O(n^2), space:O(n^2) == 3 n^2
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        unordered_set<char> rows[n];
        unordered_set <char> cols[n];
        //tuple (r/3, c/3) uniquely mark each box
        // unordered_map need to add its hashing function
        //https://stackoverflow.com/questions/20834838/using-tuple-in-unordered-map
        //map<tuple<int,int>,unordered_set <char>> box;

        //idx is: (r/3) * 3 + (c/3) or (r/3) + (c/3)*3
        unordered_set <char> box[n];
        for(int i =0;i<n;i++){
            for(int j =0;j<n ;j++){
                if(board[i][j]!='.')
                {
                    if(rows[i].find(board[i][j])!=rows[i].end())
                        return false;
                    rows[i].insert(board[i][j]);
                    if(cols[j].find(board[i][j])!=cols[j].end())
                        return false;
                    cols[j].insert(board[i][j]);
                    auto boxIdx =(i/3)*3+j/3;
                    if(box[boxIdx].find(board[i][j])!=box[boxIdx].end())
                        return false;
                    box[boxIdx].insert(board[i][j]);
                    //incase of tuple as key:
                    /*
                    auto boxKey =std::make_tuple(i/3,j/3) ;
                    if(box[boxKey].find(board[i][j])!=box[boxKey].end())
                        return false;
                    box[boxKey].insert(board[i][j]);
                    */
                }


            }
        }
        return true;
    }
};